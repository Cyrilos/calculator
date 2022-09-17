#include "button.h"

/* class Button constructor */
Button::Button(QWidget *parent_widget, const char value[]) : QPushButton(parent_widget) 
{
  strcpy(charValue, value);
}

/* handle button click signal */ 
void Button::emitCharValueSignal() 
{
  emit charValueSignal(std::string(charValue));
}