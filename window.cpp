#include "window.h"
#define CONNECT_SIGNAL(X) connect(X, SIGNAL(clicked()), X, SLOT(emitCharValueSignal())); connect(X, SIGNAL(charValueSignal(std::string)), this, SLOT(handleCharValueSignal(std::string)));

/* window class constructor */ 
Window::Window() : QWidget() 
{
  setupUi(this);
  setFixedSize(300, 400);
  setWindowTitle("Calculator");
  setWindowIcon(QIcon("icon.ico"));

  /* set input and output screen to read only */ 
  inputScreen->setReadOnly(true);
  outputScreen->setReadOnly(true);

  /* input and output screen text alignment */
  inputScreen->setAlignment(Qt::AlignRight);
  outputScreen->setAlignment(Qt::AlignRight);

  /* connect signal to slot */ 
  CONNECT_SIGNAL(btnZero);
  CONNECT_SIGNAL(btnOne);
  CONNECT_SIGNAL(btnTwo);
  CONNECT_SIGNAL(btnThree);
  CONNECT_SIGNAL(btnFour);
  CONNECT_SIGNAL(btnFive);
  CONNECT_SIGNAL(btnSix);
  CONNECT_SIGNAL(btnSeven);
  CONNECT_SIGNAL(btnEight);
  CONNECT_SIGNAL(btnNine);
  CONNECT_SIGNAL(btnDot);
  CONNECT_SIGNAL(btnPlus);
  CONNECT_SIGNAL(btnMinus);
  CONNECT_SIGNAL(btnMultiplication);
  CONNECT_SIGNAL(btnDivision);

  /* button equal click signal */ 
  connect(btnEqual, SIGNAL(clicked()), this, SLOT(handleEqualBtnClickSignal()));

  /* button clear click signal */ 
  connect(btnClear, SIGNAL(clicked()), this, SLOT(handleClearBtnClickSignal()));

}

/* update input screen */ 
void Window::updateInputScreen() 
{
  inputScreen->setText(toString(operation).c_str());
}

/* update output screen */ 
void Window::updateOutputScreen() 
{
  outputScreen->setText(numberToString(calcul(operation)).c_str());
}

/* handle button charValueSignal signal */ 
void Window::handleCharValueSignal(std::string str) 
{
  /* manage simple button click */ 
  if(isIntegerString(str) || (str == ".")) {
    switch(operation.size()) {
      case 0:
        operation.push_back(str); 
        break; 
      case 1:
        operation[0] += str; 
        break; 
      case 2:
        operation.push_back(str); 
        break; 
      case 3:
        operation[2] += str; 
    }
  }
  /* manage action button input */ 
  else if (isOperatorString(str)) {
    switch(operation.size()) {
      case 0: {
        if((str == "+") || (str == "-")) 
          operation.push_back(str);
        break;
      }
      case 1: 
        operation.push_back(str);
        break; 
      case 2:
        if((str == "+") || (str == "-")) 
          operation.push_back(str);
        break;
      case 3: {
        updateOutputScreen();
        operation[0] = numberToString(calcul(operation));
        operation[1] = str; 
        operation.pop_back();
        updateInputScreen();
        break;
      }
    }
  }
  updateInputScreen();
}


/* handle button equal click signal */ 
void Window::handleEqualBtnClickSignal() 
{
  switch(operation.size()) {
    case 0:
      outputScreen->setText("0");
      break;
    case 1:
    case 2:
      outputScreen->setText(operation[0].c_str());
      break;
    case 3: 
      updateOutputScreen();
      break; 
  }
}

/* handle button clear click signal */
void Window::handleClearBtnClickSignal() 
{
  switch(operation.size()) {
    case 1: {
      if(operation[0].size() != 0) {
        operation[0].pop_back(); 
        if(operation[0].size() == 0)
          operation.pop_back();
      }
      else 
        operation.pop_back();
      break; 
    }
    case 2: {
      if(operation[1].size() != 0){
        operation[1].pop_back();
        if(operation[1].size() == 0)
          operation.pop_back();
      }
      else {
        operation.pop_back(); 
        operation[0].pop_back();
      }
      break; 
    }
    case 3: {
      if(operation[2].size() != 0) {
        operation[2].pop_back();
        if(operation[2].size() == 0)
          operation.pop_back();
      }
      else {
        operation.pop_back();
        operation[1].pop_back();
      }
    }
  }
  updateInputScreen();
}