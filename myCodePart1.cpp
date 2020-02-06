//
//   COPYRIGHT (C) Student@zips.uakron.edu>, 2020  All rights reserved.
//   Student Name
//   Purpose: This is myCode and is based upon what we study for Comp Sci
//
#include <cassert>
#include <iosfwd>
#include <iostream>
#include <iomanip>
#include <limits>  // numeric_limits<std::streamsize> for validations
#include <stdio.h>

// these are declarations - prefer this or std:: prefix
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;

static int uChoose = 0;

int
mainMenu();

void
variables();

void
consoleInput();

void
consoleOutput();

void
operations();

void
decisions();

void
iterations();

void
validations();

void
misc();

struct Test_myCode
{
  void
  default_beg()
  {
    uChoose = mainMenu();
    assert(!(std::cin.fail()));
    std::cout << " Main menu passed " << std::endl;
  }
  void
  whatAction()
  {
    switch (uChoose)
    {
      case (1):
        variables();
        break;
      case (2):
        consoleInput();
        break;
      case (3):
        consoleOutput();
        break;
      case (4):
        operations();
        break;
      case (5):
        decisions();
        break;
      case (6):
        iterations();
        break;
      case (7):
        validations();
        break;
      case (8):
        misc();
        break;
      default:
        cout << "no case";
    }
  }

  // The test runner for this test class.
  void
  run()
  {
    default_beg();
    whatAction();
  }

};


int
main()
{
  Test_myCode test;
  while (true)
  {
    test.run();
  }

}using std::cout;
using std::cin;
using std::endl;


int
mainMenu()
{
  // heading, input section
  cout << endl;
  cout << setw(68) << "__________________________________________________________________ " << endl;
  cout << setw(68) << "|------------------------------------------------------------------|" << endl;
  cout << setw(68) << "|                Your Name - The Programming Wizard                |" << endl;
  cout << setw(68) << "|                   Coded Potions and Spells                       |" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "   MAIN MENU"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Variables"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Console Input "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Console Output"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Operations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Decisions "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Iterations    "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Variables"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "8) Miscellaneous"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "Ctrl-c to Quit"
       << right << setw(2) << "|" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << endl;
  int userChoice = 0;
  // take and validate the user entry

  cout << "Enter the code that you wish to generate, or quit to exit: "; // output stream a message
  cin >> userChoice;
  return userChoice;
}
// PLACE CODE HERE FOR EACH TASK
// TASK 1 CODE
void
variables()
{
  // A
  int myVar1 = 7;
  float myVar2 = 9.7654;
  char myVar3 = 'Z';
  printf("Integer value is %d \n", myVar1);
  printf("Float value is %f \n", myVar2);
  printf("Char value is %c \n", myVar3);
  // B
  int myVar4 = 7;
  float myVar5 = 9.99999;
  char myVar6 = 'F';
  printf("Integer value is %d \n", myVar4);
  printf("Float value is %f \n", myVar5);
  printf("Char value is %c \n", myVar6);
  //cin.get();
  //cin.get();
  // C
  printf("Original char value is %c \n", myVar6);
  myVar6 = 'C';
  printf("Changed char value is %c \n", myVar6);
  // D
  //defines a macro called with as 80
  #define WIDTH 80
  //defines a macro called height as 10
  #define HIGHT 10
  //defines a macro called volume as 800
  #define VOLUME 800
  //defines a macro called number as 1
  #define NUMBER 1
  //defines a macro called letter as a
  #define LETTER a
  // E
  using std::cout;
  using std::cin;
  using std::endl;

    cout << "end of console input" << endl;
    cin.get();

}
// TASK 2 CODE
void
consoleInput()
{
    //A
    int intVar1;
    float floatVar2;
    char charVar3;
    //use cin.ignore to get rid of newline
    cout << "input int" << endl;
    cin >> intVar1;
    cin.ignore();

    cout << "input float" << endl;
    cin >> floatVar2;
    cin.ignore();

    cout << "input char" << endl;
    cin >> charVar3;
    cin.ignore();

    //B
    char charVarB;
    std::string stringB;
    float floatVar2B;

    
    cout << "enter char" << endl;
    charVarB = cin.get();
    cin.ignore(); //do we need cin.ignore() here?
    
    cout << "enter string" << endl;
    getline(cin, stringB);

    cout << "enter a float" << endl;
    cin >> floatVar2B;
    cin.ignore();

    //C
    std::string longString;
    cout << "enter a long string" << endl;
    getline(cin, longString);

    //D
    int intB1, intB2;
    cout << "enter 2 ints" << endl;
    cin >> intB1 >> intB2;
    cin.ignore();



}
// TASK 3 CODE
void
consoleOutput()
{
    //A
    //variable declaration
    int intVar3 = 1;
    float floatVar3 = 1.1;
    char charVar3 = 'I';

    cout << intVar3 << endl;
    cout << floatVar3 << endl;
    cout << charVar3 << endl;

    //B
    float mult1 = 1.1, mult2 = 2.22222, mult3 = 3.333333;
    float temp1 = mult1 * mult2 * mult3;
    cout << temp1 << endl;
    cout << mult1 * mult2 * mult3 << endl;

    //C, formatting output statements
    cout << std::setprecision(2) << std::fixed << mult1 << endl;
    cout << std::setprecision(2) << std::fixed << mult2 << endl;
    cout << std::setprecision(2) << std::fixed << mult3 << endl;

    //D, E, setting up headings and widths
    cout << std::setw(15) << "Variable 1" << endl;
    cout << std::setw(15) << "========" << endl;
    cout << std::setw(15) << right << mult1 << endl;
    cout << std::setw(15) << "Variable 2" << endl;
    cout << std::setw(15) << "========" << endl;
    cout << std::setw(15) << right  << mult2 << endl;
    cout << std::setw(15) << "Variable 3" << endl;
    cout << std::setw(15) << "========" << endl;
    cout << std::setw(15) << right << mult3 << endl;

    //F using setfill to put leading zeroes in
    //  TODO:: FIX THIS BUSTED SHIT 
    /*
    cout << std::setfill('0') << mult1 << endl;
    cout << std::setfill('0') << mult2 << endl;
    cout << std::setfill('0') << mult3 << endl;
    */





  cout << "end of console output" << endl;
  cin.get();
}
// TASK 4 CODE
void
operations()
{
  //A this is section for performing operations 
  float totalPossible = 10.11, totalEarned = 20.32; 
  float percentage = totalEarned / totalPossible;
  cout << percentage << endl;

  //B this is a section for adding two integers, dividing them, then displaying them as a float. 
  float div1 = 20, div2 = 13; 
  float divTotal = (div2 + div2) / div1;
  cout << divTotal << endl;

  //C this is for calculating the net income, revenue over total expenses 
  float revenues = 200000, computerExpenses = 10000, salaries = 50000, utilities = 5000, taxes = 2500; 
  float revenueEquationResult = revenues / (computerExpenses + salaries + utilities + taxes);

  //D TODO: figure out what chrissy actually wants for this part 

  cout << "end of operations" << endl;
  cin.get();
}
// TASK 5 CODE
void
decisions()
{
  //A this tells us what grade we got
  float totalPossible = 99.99, totalEarned = 80.32; 
  float grade = totalEarned / totalPossible;

  std::string letterGrade; 
  //formatted as >= lesser percentage, <= larger percentage
  if(grade >= 93 && grade <= 100 )
  {
    letterGrade = "A";
  }
  else if(grade >= 90 && grade <= 92.99) 
  {
    letterGrade = "A-";
  }
  else if(grade >= 87 && grade <= 89.99)
  {
    letterGrade = "B+";
  }
  else if(grade >= 83 && grade <= 86.99)
  {
    letterGrade = "B";
  }
  else if(grade >= 80 && grade <= 82.99)
  {
    letterGrade = "B";
  }
  else if(grade >= 77 && grade <= 79.99)
  {
    letterGrade = "C+";
  }
  else if(grade >= 73 && grade <= 76.99)
  {
    letterGrade = "C";
  }
  //else if(grade )
  cout << "Letter grade is " << letterGrade << endl;


























  cout << "end of decisions" << endl;
  cin.get();
}
// TASK 6 CODE
void
iterations()
{
  cout << "end of iterations" << endl;
  cin.get();
}
// TASK 7 CODE
void
validations()
{
  cout << "end of validations" << endl;
  cin.get();
}
// TASK 8 CODE
void
misc()
{
  cout << "end of miscellaneous" << endl;
  cin.get();
}


