# calculator
Simple calculator program using Qt library.
![calculator screenshot](/screenshot/calculator.png)

## compilation
### Prerequisites
- Qt library 
- C++ compiler
- make

### Compilation steps
#### Step 1: Creating project
First of all, create a new Qt project using qmake.
```
qmake -project
```

#### Step 2: Adding Qt widgets to the project
Add QT += widgets to the project because this project needs Qt widgets.
```
echo QT += widgets >> calculator.pro
```

#### Step 3: Generating a makefile 
Just generate a makefile and then build the project using make.
```
qmake calculator.pro
make
```
