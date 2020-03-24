//
//   COPYRIGHT (C) Student@zips.uakron.edu>, 2020  All rights reserved.
//   Student Name
//   Purpose: This is myCode and is based upon what we study for Comp Sci
//
/*
Vincent Garbonick
CS 1 
Dr.Chrissy
This code was made to demo certain things we are learning in CS1 
*/
#include <cassert>
#include <iosfwd>
#include <iostream>
#include <iomanip>
#include <limits>  // numeric_limits<std::streamsize> for validations
#include <math.h> //is used for math function like square root 

// these are declarations - prefer this or std:: prefix
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;
using std::string;

static int uChoose = 0;

int
mainMenu();

void
preDefined();

void
scopeType();

void
returns();

void
passBy();

void
moreFunk();

void
files();

void
charIO();

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
        preDefined();
        break;
      case (2):
        scopeType();
        break;
      case (3):
        returns();
        break;
      case (4):
        passBy();
        break;
      case (5):
        moreFunk();
        break;
      case (6):
        files();
        break;
      case (7):
        charIO();
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

}



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
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Pre-defined C++ functions"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Scope and Type Conversion"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Return      "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Pass by value and by address"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Writing more functions "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Files and File Operations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Character I/O"
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

// put the function prototypes for TASK 1 HERE
bool evenOrOdd(int);
int validateRange(int, int, string, string, char);
void menuSubject(void);

//*******************************************
// TASK 1 CODE
//*******************************************
void
preDefined()
{
  // A use 3 predefined functions that use square root, cosine, and floor
  cout << "The square root of 9 is: " << sqrt(9) << endl; 
  cout << "The cosine of 1 is: " << cos(1) << endl;
  cout << "The floor of 1.1111 is: " << floor(1.1111) << endl;

  // B use the random fucntion and write a loop that will generate 365 random values 1-7 and assign each as follows (print them out on seperate lines)
  /*
  1- Sunny 
  2- Partly Sunny 
  3- Partly Cloudy 
  4- Cloudy 
  5- Rain 
  6- Snow 
  7- Fog 
  */

  int random; // our variable to store the randomized number 

  for(int i = 0; i < 365; i++)
  {
    random = rand() % 7 + 1; // generates a random number 1-7

    switch(random)
    {

      case 1:
        cout << "Sunny" << endl; 
        break; 

      case 2: 
        cout << "Partly Sunny" << endl;
        break;

      case 3: 
        cout << "Partly Cloudy" << endl;
        break;

      case 4: 
        cout << "Cloudy" << endl;
        break;

      case 5: 
        cout << "Rain" << endl;
        break; 

      case 6: 
        cout << "Snow" << endl;
        break;

      case 7: 
        cout << "Fog" << endl;
        break; 

    }
    //cout << random << endl;
  }
  cout << "\n"; //adds a newline so we can see task C 

  // C - ask a question and return a boolean using a function. 
  //here we will be using "even or odd". Enter an INT, if the INT is even, the program returns a 1 or "yes". If not it returns a 0 or "no"
  int check;
  
  cout << "Enter an INT and function will check if it is even or odd" << endl;
  cin >> check;

  bool result = evenOrOdd(check);
  
  cout << "\n";

  // D make a menu that continually repeats until you choose to exit. Validate input!

  menuSubject();


  cout << "end of pre defined" << endl;
  cin.get();
}
// PUT THE ACTUAL FUNCTIONS (CODE) FOR PART1 HERE (do this for all of them)
/* Place the functions here and before preDefined() above place the prototypes */


/*
evenOrOdd 

Use: tells you if integer input is even or odd

Precondition: 
                - pass int 

Postcondition: 
                - a bool value- 1 for even and 0 for odd 
*/
bool evenOrOdd(int check)
{
  if(check % 2 == 0)
  {
    cout << "Number is even!" << endl;
    return 1; 
  }
  else
  {
    cout << "Number is odd!" << endl;
    return 0;
  }
}
/*
validateRange 

Use: Validates user input given an int range as string 

Precondition: 
                - pass lower bound int range 
                - pass upper bound int range 
                - pass failure message
                - pass console output message 
                - pass if you want to validate and return a float or an int. 'f' means float, 'i' means int

Postcondition: 
                - a valid int within range of input ints 
*/
int validateRange(int lower, int upper, string failMessage, string coutMessage, char type)
{
    float userInput;

    if(type = 'i')
    {
        int(userInput);
    } // if we are trying to return an int, cast the float input as an int. this is for the minutes calculations that will wanted


    bool loopFlag = false; 
    do
    {    
        cout << coutMessage; 
        cin >> userInput; 

        if(!cin.fail() && userInput <= upper && userInput >= lower)
        {
            loopFlag = true;
        }
        else 
        {
            cout << failMessage << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }while(loopFlag == false);


    return userInput; 
}

// menuSubject makes a repeating menu structure that validates inputs and can be called from anywhere
// precondition: nothing 
// postcondition: nothing 

void menuSubject()
{
  bool quitting = 0;
  int userChoice;
  do 
  {
    cout << "Please choose a subject from the menu" << endl;
    cout << "1. Biology" << endl;
    cout << "2. Sociology" << endl;
    cout << "3. Geography" << endl;
    cout << "4. Calculus" << endl;
    cout << "5. Physics" << endl;
    cout << "6. Quit" << endl;   

    userChoice = validateRange(1, 6, "Please enter an option on the menu!", "Enter your menu choice: ", 'i');

    switch(userChoice)
    {
      case 1: 
        cout << "Biology was the choice" << endl;
        break; 
      
      case 2: 
        cout << "Sociology was the choice" << endl;
        break;

      case 3: 
        cout << "Geography was the choice" << endl;
        break;
      
      case 4: 
        cout << "Calculus was the choice" << endl;
        break;
      
      case 5: 
        cout << "Physics was the choice" << endl;
        break;
      
      case 6: 
        quitting = 1; 
        break;
    }

  }while(quitting == 0);

  cout << "\n";

  return;

}
//*******************************************
// TASK 2 CODE
//*******************************************
void functionScope(void);
int increment(int); 

void scopeType()
{
  // Task A- there is a function variable named "cats" and a local variable named "cats". We will call the variable out and 
  functionScope();
  int cats = 100;
  cout << "Cats is equl to: " << cats << " in local scope" << endl;


  // Task B- use addTo to add 1 to each delcared variable- type conversion will occour- explain it!
  int myInt = 1; 
  cout << increment(myInt) << endl;
  // outputs 2 because we are adding 1 to an integer 

  char myChar = 'c';
  cout << increment(myChar) << endl;
  // prints out 100 because 'c' is 99 in the ascii charset, so casting 'c' as an int and adding 1 produces 100 as a result

  float myFloat = 3.14159;
  cout << increment(myFloat) << endl;
  // prints out 4 because myFloat is rounded off to 3 and then when we add 1, the result is 4 
  
  cout << "end of Scope and Type Conversion" << endl;
  cin.get();
}

//Demonstrates function scope of variable 
// precondition: none 
// postcondition: none 

void functionScope()
{
  int cats = 6; 
  cout << "Cats is equal to: " << cats << " in function scope" << endl;

  return; 
}
// increment: takes an int input and adds 1 
// precondition: int input 
// postcondition: int output + 1
int increment(int addTo)
{
  addTo = addTo + 1;
  return addTo;
} 

//*******************************************
// TASK 3 CODE
//*******************************************
void
returns()
{
  cout << "end of returns" << endl;
  cin.get();
}


//*******************************************
// TASK 4 CODE
//*******************************************
void
passBy()
{
  cout << "end of pass bys" << endl;
  cin.get();
}

//*******************************************
// TASK 5 CODE
//*******************************************
void
moreFunk()
{
  cout << "end of more functions" << endl;
  cin.get();
}

//*******************************************
// TASK 6 CODE
//*******************************************
void
files()
{
  cout << "end of files" << endl;
  cin.get();
}

//*******************************************
// TASK 7 CODE
//*******************************************
void
charIO()
{
  cout << "end of char I/O" << endl;
  cin.get();
}

//*******************************************
// TASK 8 CODE
//*******************************************
void
misc()
{
  cout << "end of miscellaneous" << endl;
  cin.get();
}






