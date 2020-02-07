//
//   COPYRIGHT (C) vrg6@zips.uakron.edu>, 2020  All rights reserved.
//   Vincent Garbonick
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
  using std::cout; //name for cout which lets us output things 
  using std::cin; //name for cin which lets us use input stream
  using std::endl; //name for endl which lets us end cout statements 

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

  int primeCheck; 
  bool checkFlag; //flag for if entered number is prime or not 
  int remainderCheck; //variable for storing remainder of modulus operators 
  cout << "Enter a number to check if it's prime." << endl; 
  cin >> primeCheck;

  //divides all numbers from 2 to the number we are checking. if number % count returns zero for any incremented number, the number is not prime and the loop is exited 
  for(int i = 2; i <= primeCheck; ++i)
  {
    remainderCheck = primeCheck % i; 

    
    if(remainderCheck == 0 && i == primeCheck)
    {
      checkFlag = true; 
    }
    /*
    ends the for loop if remainderCheck is equal to 0 and i is not equal to prime check: meaning the checked number was perfectly divisible by something other 
    than zero or 1 
    */
    else if(remainderCheck == 0 && i != primeCheck)
    {
      checkFlag = false; 
      break; 
      /*
      Although break statements are generally bad practice, it makes sense here in this application since 
      we need to break out of the loop if we find out the number is divisible by something other than the 
      number we are testing 
      */
    }
    else 
    {
      checkFlag = false; 
    }
  }

  if(checkFlag == true)
  {
    cout << "Number is prime." << endl;
  }
  else 
  {
    cout << "Number is not prime." << endl; 
  }

  cout << "end of operations" << endl;
  cin.get();
}
// TASK 5 CODE
void
decisions()
{
  //A this tells us what grade we got
  float totalPossible = 99.99, totalEarned = 70.99; 
  float grade = totalEarned / totalPossible * 100;

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
  else if(grade >= 70 && grade <= 72.99)
  {
    letterGrade = "C-";
  }
  else if(grade >= 67 && grade <= 69.99)
  {
    letterGrade = "D+";
  }
  else if(grade >= 63 && grade <= 66.99)
  {
    letterGrade = "D";
  }
  else if(grade >= 60 && grade <= 62.99)
  {
    letterGrade = "D-";
  }
  else 
  {
    letterGrade = "F";
  };
  
  cout << "Letter grade is " << letterGrade << endl;

//B 

bool strategy = true;

if(strategy == true)
{
  cout << "The strategy calls for the aquisition of 1000 beanbag chairs." << endl;
}
else
{
  cout << "The strategy saves expenditures for the aqusition of the 1000 bean bag charis." << endl;
}

//C

int compareNumber = 10;
int computationNumber = 20;

computationNumber = computationNumber / 2 + 33; 

if(compareNumber < computationNumber)
{
  cout << "Computed number is greater." << endl; 
}
else if(compareNumber == computationNumber)
{
  cout << "Numbers are equal" << endl;
}
else
{
  cout << "Initialized number is greater." << endl;
}


//D 
int testVar = 10; //test variable 

//we are checking to make sure the test

/*
Tests if a testvariable is a number 5-10 and less than 100. This series of checking statements uses short circuiting, because if the number 
is not at least equal to an integer 5-10 which is one of the main condition, it doesn't bother checking if the number is also less than 100 
*/


if(testVar == 5 && testVar < 100)
{
  cout << "testvar is equal to 5 and less than 100" << endl;
}
else if(testVar == 6 && testVar < 100 )
{
  cout << "testvar is equal to 6 and less than 100" << endl;
}
else if(testVar == 7 && testVar < 100 )
{
  cout << "testvar is equal to 7 and less than 100" << endl;
}
else if(testVar == 8 && testVar < 100 )
{
  cout << "testvar is equal to 8 and less than 100" << endl;
}
else if(testVar == 9 && testVar < 100 )
{
  cout << "testvar is equal to 9 and less than 100" << endl;
}
else if(testVar == 10 && testVar < 100 )
{
  cout << "testvar is equal to 10 and less than 100" << endl;
}
else 
{
  cout << "testvar is not equal to a number 5-10 and less than 100." << endl;
}







  cout << "end of decisions" << endl;
  cin.get();
}
// TASK 6 CODE
void
iterations()
{


  float totalPossible, totalEarned; 
  bool validEntries = false;
  std::string letterGrade; 
  //formatted as >= lesser percentage, <= larger percentage
  /*
  for(int i = 0; i < 11; i++)
  {
    
    do
    {           
      cout << "Enter total possible points." << endl;
      cin >> totalPossible; 

      if(!cin.fail() && totalPossible <= 100 && totalPossible >= 1)
      {
      
      validEntries = true; 
      cin.ignore(); //tosses out newline so we don't have to worry about it later 
      
      }

      else
      {
      
      cout << "Please select a number 0-100" << "\n" << endl;
      cin.clear(); //clears cin error state 
      cin.ignore(); //ignores newline 
    
      }

    }while(validEntries == false);


    validEntries = false; //resets validentries

    do
    {           
      cout << "Enter total earned points." << endl;
      cin >> totalEarned; 

      if(!cin.fail() && totalEarned <= 100 && totalEarned >= 1)
      {
      
      validEntries = true; 
      cin.ignore(); //tosses out newline so we don't have to worry about it later 
      
      }

      else
      {
      
      cout << "Please select a number 0-100" << "\n" << endl;
      cin.clear(); //clears cin error state 
      cin.ignore(); //ignores newline
      } 
    
    }while(validEntries == false);
  
    float grade = totalEarned / totalPossible * 100;
    validEntries = false; //resets validentries

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
    else if(grade >= 70 && grade <= 72.99)
    {
      letterGrade = "C-";
    }
    else if(grade >= 67 && grade <= 69.99)
    {
      letterGrade = "D+";
    }
    else if(grade >= 63 && grade <= 66.99)
    {
      letterGrade = "D";
    }
    else if(grade >= 60 && grade <= 62.99)
    {
      letterGrade = "D-";
    }
    else 
    {
      letterGrade = "F";
    };

    cout << "Letter grade is " << letterGrade << endl;
  
  }
  */
  //B 

  bool quitting = false; //quitting variable 
  int userChoice;
  do
  {
    cout << "======================" << endl;
    cout << "1) Dogs" << endl;
    cout << "2) Cats" << endl;
    cout << "3) Frogs" << endl;
    cout << "4) Quit" << endl;
    cout << "======================" << endl;

    cin >> userChoice;
    
    if(userChoice == 4)
    {
      quitting = true; 

    }
    else
    {
      cout << "good choice!" << endl;

    }
  } while (quitting == false);
  
  //C
  for(int loopy; loopy < 100; loopy++)
  {
    cout << loopy << " " << endl;
    
  }

  //D
  
  
  int i; // counting variable  
  for(i = 0; i <= 127; i++)
  {
    
    cout << char(i) << "";  // casts our counting variable as a char to avoid strange loop behavior 
  
    if(i % 16 == 0)
    {
      cout << "\n" << endl; //adds a newline if we have printed out a multiple of 16 characters 
    }
    
  }









  cout << "end of iterations" << endl;
  cin.get();
}
// TASK 7 CODE
void
validations()
{

  /*
  ascii characters correspond from 97-122 for uppercase 
  and 65 - 90 for lowercase.

  this loop checks to make sure that the user inputted a char, and then furthermore 
  verifies that it is within range
  */
  bool validEntries = false;
  char a; 

  do
      {           
        cout << "Enter an upper or lowercase letter." << endl;
        cin >> a; 
        cout << (int)a << endl;
        if(!cin.fail() && (  ((int)a >= 65 && (int)a <= 90) ||    ((int)a >= 97 && (int)a <= 122)  )) //makes sure that cin succeeds and cin either falls into uppercase or lowercase range
        {
        
        validEntries = true; 
        cout << "Valid input." << endl;
        }

        else
        {
        
        cout << "Input a valid character per the requests." << "\n" << endl;
        cin.clear(); //clears cin error state 
        cin.ignore(); //ignores newline 

        }

      }while(validEntries == false);


  cout << "end of validations" << endl;
  cin.get();
}
// TASK 8 CODE
void
misc()
{
  //A 
  int myVar = 0;
  if (myVar = 0)

  {

  std::cout << "My var is zero everyone!";

  }
  //nothing prints out because the if statement would only work if it was (myVar == 0), because the == operator means "is equivalent to", but the = sign is for assingment
  
  //B 
  if(myVar < 0)
  {
    cout << "lesser" << endl;
  }
  else if(myVar > 0)
  {
    cout << "greater" << endl;
  }
  else
  {
    cout << "equal" << endl;
  }

  int favNum = 4;
  cout << ++favNum << " " << favNum++ << endl;
  

  cout << "end of miscellaneous" << endl;
  cin.get();
}


