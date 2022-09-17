#ifndef WINDOW
#define WINDOW

#include <sstream>
#include "ui_calculator.h"
#include "utils.h"
#include "calculation.h"

/* window class */ 
class Window : public QWidget, private Ui::Form 
{
public:
  /* store the operation to do with the calculator */ 
  std::vector<std::string> operation; 

private:
  Q_OBJECT

public slots:
    /* handle button charValueSignal signal */ 
    void handleCharValueSignal(std::string str);

    /* handle button equal click signal */ 
    void handleEqualBtnClickSignal();

    /* handle button clear click signal */
    void handleClearBtnClickSignal();

public: 
  Window();

  /* update input screen */ 
  void updateInputScreen(); 

  /* update output screen */ 
  void updateOutputScreen();
};

#endif 