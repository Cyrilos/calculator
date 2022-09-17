#ifndef BUTTON
#define BUTTON
#include <QPushButton>
#include <cstring>
#include <string>

/* button class */ 
class Button : public QPushButton 
{
private:
  Q_OBJECT

public slots:
  /* handle button click signal */ 
  void emitCharValueSignal();

signals:
  /* signal for transfering the charValue of a button */ 
  void charValueSignal(std::string str);

public: 
  char charValue[2]; 

public:
  Button(QWidget *parent_widget, const char value[]); 

};

#endif


