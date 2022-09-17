# calculator
Simple calculator program using Qt library.
![calculator screenshot](/screenshot/calculator.png)

## compilation
### prerequisites
- Qt library 
- C++ compiler
- make

### compilation step
#### step 1: Creating project
First of all, create a new Qt project using qmake
```
qmake -project
```

#### step 2: Adding Qt widgets to the project
Add QT += widgets to the project because this project needs Qt widgets
```
echo QT += widgets >> calculator.pro
```

##### step 3 : Generating a makefile 
Just generate a makefile then build the project using make
```
qmake calculator.pro
make
```
