#include "QApplication"
#include "window.h"
#include "button.h"

/* main program */
int main(int argc, char *argv[]) 
{
  QApplication app{argc, argv}; 
  
  /* main object for this program */ 
  Window mainWindow{}; 
  mainWindow.show();

  /* program main loop */
  return app.exec();
}