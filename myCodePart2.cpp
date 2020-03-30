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
#include <fstream>
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
using std::ofstream;

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

//fucntion prototypes 
char convertInt(int); 
float divide400(void);

//*******************************************
// TASK 3 CODE
//*******************************************
void
returns()
{

  //A 
 
  /*
  1. Call a function that accepts an int and returns a char 
  2. Place this function in a loop and return across screen.
  3. Allow the user to repeat this from 1 to 79 times 
  4. Figure out how the user can stop the loop if they do not want to go 79 times 
  
  1. Call from inside main task 
  2. Built in a loop with upper bound 79
  3. each time we run the new function, it returns result and prints them across the screen 
  4. You can limit the user to puttin in chars, or use the entire ascii range of 1-127. HOw to let them stop before hitting 79? 
  */
  
  bool quitting = 0;
  char userChoice; 
  int passes = 48; //number of times we have gone through the loop

  cout << "Welcome to the 79 times character converter!" << endl;
  cout << "Press [ENTER] to print a character!" << endl;
  cout << "Enter \"q\" to quit!" << endl;
  
  while(quitting == 0 && passes < 128)
  {



    cin.get(userChoice);
    
    if(userChoice == 'q')
    {
      quitting = 1;
    }

    else
    {
      cout << convertInt(passes);
    }

    passes++;

  }

  //B 
  /*
  Write a function and call it from your driver that quits early when it encounters an issue or unacceptable value 


  1. This program will divide 400 by any number and return a float value 
  2. If you try to divide by 0 or a non numeric, the function will exit
  */

  divide400();


  cout << "end of returns" << endl;
  cin.get();
}

// convert int takes an int input and returns a char based on that input 
// precondition: pass it an int number 
// postcondition: a character 
char convertInt(int number)
{
  return char(number);
}

// divide400
// this function will divide 400 by any numeric value and show the results. it will exit early if you enter something that is 0 or non numeric
float divide400()
{
  float divideBy;
  cout << "Enter a value to divide 400 by. If it is 0 or non numeric, the function will end early and return 1.1." << endl;
  cin >> divideBy; 

  if(divideBy == 0 || cin.fail())
  {

    cout << "Invalid input." << endl;

    if(cin.fail())
    {

      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 1.1;
  }

  else
  {
    float result = 400 / divideBy;
    cout << "400 divided by " << divideBy << " is " << result << endl;

    return result;
  }

}


char charIncrementValue(char);
void charIncrementReference(char &);
char charIncrementValueShow(char);

//*******************************************
// TASK 4 CODE
//*******************************************
void
passBy()
{
  char pass = 'a';
  cout << pass << endl;
  // A 
  pass = charIncrementValue(pass);
  cout << "After pass by value: " << pass << endl;

  // B
  charIncrementReference(pass);
  cout << "After pass by reference: " << pass << endl;

  // C 
  pass = charIncrementValueShow(pass);
  cout << "Address of value at driver level: " << &pass << endl;

  cout << "end of pass bys" << endl;
  cin.get();
}
// charIncrementValue increments a char by one. Precondition: char value Postcondition. Postcondition: char value incremented.
char charIncrementValue(char increment)
{
  increment++;
  return increment;
}

// charIncrementValue increments a char by one. Precondition: char value Postcondition. Postcondition: char value incremented. It does this by passing address

void charIncrementReference(char & pass)
{
  pass++;
  return;
}

// charIncrementValue increments a char by one. Precondition: char value Postcondition. Postcondition: char value incremented. It shows the address of hte function level value

char charIncrementValueShow(char increment)
{

  increment++;
  cout << "address of value at function level is: " << &increment << endl;
  
  return increment;
}

// function prototypes for part 5 
void menuSubjectCalc(void);
float exersizeLoop(int); 
void gradeShow(float);
void isPrime(int);

void writeToFileName(void);
void writeToFileScore(float, float);

//*******************************************
// TASK 5 CODE
//*******************************************
void
moreFunk()
{
  // A 
  /*
  1. You created a menu function in a prior task 
  2. Copy the prior work and add a function that gets called with each a choice 
  3. use prior logic that akss for each exersize score and possible points (done in assignment 1) :/ make a function out of it and have the user set an upper bound
  4. reuse the letter grade logic too ://
  */
  menuSubjectCalc();

  // B 
  /*
  1. Make a function that figures out if a number is prime or not 
  2. Have your program generate a random integer and pass it to the function 
  3. Do this 10 times and display the results 
  */
  int i = 0;
  while(i < 10)
  {
    isPrime( (rand() % 100 + 1) );
    i++;
  }


  cout << "end of more functions" << endl;
  cin.get();
}

// menuSubject makes a repeating menu structure that validates inputs and can be called from anywhere. Also can calculate the number of exersizes and score
// precondition: nothing 
// postcondition: nothing 

void menuSubjectCalc()
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
    cout << "6. Calculate scores" << endl;   
    cout << "7. Quit" << endl;

    userChoice = validateRange(1, 7, "Please enter an option on the menu!", "Enter your menu choice: ", 'i');

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
        // functions for number of exersizes and scoring 
        int exersizeNum;
        
        exersizeNum = validateRange(0, 9999999, "Please enter something valid!", "Enter number of exersizes: ", 'i');

        float percentScore; 

        // calculates the total percent based on all assignement scores 

        // asks for student's name 
        writeToFileName();

        percentScore = exersizeLoop(exersizeNum);

        // shows letter grade 
        gradeShow(percentScore);

        break;

      case 7: 
        quitting = 1;
        break;
    }

  }while(quitting == 0);

  cout << "\n";

  return;

}

// Exersize loop. Loops over a total numver of exersizes and then returns your total "score"
// precondition: number of exersizes 
// postcondition: a total percent 

float exersizeLoop(int passes)
{
  
  float totalPossible = 0, totalEarned = 0;
  float totalPossibleTemp = 0, totalEarnedTemp = 0; // temp values so we can write stuff to our file 

  for(int i = 1; i <= passes; i++)
  {
    cout << "For exersize " << i << " enter the total possible points \n" << endl;
    totalPossibleTemp = totalPossible;
    totalPossible = totalPossible + validateRange(0, 9999999, "Please enter something valid!", "Enter possible points: ", 'f');

    cout << "For exersize " << i << " enter the earned points \n" << endl;
    totalEarnedTemp = totalEarned;
    totalEarned = totalEarned + validateRange(0, 9999999, "Please enter something valid!", "Enter earned points: ", 'f');

    writeToFileScore(totalEarnedTemp, totalPossibleTemp);

  }

  writeToFileScore(totalEarned, totalPossible);
  float percent = totalEarned / totalPossible * 100;
  cout << "You got: " << percent << "%" <<  endl;

  return percent;

}
// gradeShow- shows the letter grade obtained 
// precon: float representing percent of grade 
// postcon: cout letter grade 
void gradeShow(float grade)
{

  string letterGrade;

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

    cout << "Letter grade is " << letterGrade << "\n" << endl;
}

// primecheck- checks if a number is prime and outputs result
// precon: integer to check 
// postcon: nothing 

void isPrime(int primeCheck)
{
  bool checkFlag; //flag for if entered number is prime or not 
  int remainderCheck;

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
    cout << primeCheck << " is prime." << endl;
  }
  else 
  {
    cout << primeCheck << " is not prime." << endl; 
  }

}

//void writeToFileName(void);
//void writeToFileScore(float, float); //THESE FUNCTION PROTOTYPES ARE WITH THE TASK 5 PROTOTYPES BECAUSE THE PROGRAM WAS THROWING ERRORS DUE TO FORWARD DECLARATIONS BEING BEFORE USE
void printOffFile(string); 
void readFileAdd(string);
//*******************************************
// TASK 6 CODE
//*******************************************
void
files()
{
  // A 
  cout << "When you call menu entry 6, the results should be recorded to a file. Remember this." << endl;
  menuSubjectCalc();

  // B 
  printOffFile("writeTo.txt");

  // C 
  readFileAdd("testNumbers.txt");

  cout << "end of files" << endl;
  cin.get();
}

// write to file writes name information to a file, it is used in the menu we designed. also checks to make sure the file is there (possibly)
// precon: have a file named "writeTo.txt"
// postcon none 
void writeToFileName()
{
  /*
  std::ifstream myFile("writeTo.txt");
  
  if (myFile)
  { 
   myFile.close();
   cout << "No need to create a new file..." << endl;
  }
  else 
  {

  }
  */

  std::ofstream writeFile; 
  writeFile.open("writeTo.txt", std::ios::app);

  string tempName; //for storing the student's name 
  cout << "Enter student's name: ";
  cin >> tempName;

  writeFile << "\n";
  writeFile << tempName;
  writeFile << "\n";

  writeFile.close();
  return;
}

// write to file writes score information to a file, it is used in the menu we designed 
// precon: have a file named "writeTo.txt"
// postcon none 
void writeToFileScore(float totalEarned, float totalPossible)
{

  std::ofstream writeFile; 
  writeFile.open("writeTo.txt", std::ios::app);

  writeFile << totalEarned << "/" << totalPossible << "\n";

  writeFile.close();
  return;
}

// printOffFile() prints off a file
// precon: name of file 
// postcon: printed off file 
void printOffFile(string name)
{
  string line; 
  std::ifstream print; 

  print.open(name);

  while(!print.eof())
  {
    getline(print, line);
    cout << line << "\n";
  }

  return;
}

// readFileAdd- this reads each line of the given brightspace file and adds all the numbers together 
// precon: name of file 
// postcon: cout the sum total of all numbers in the file 
void readFileAdd(string name)
{
  string line; 
  std::ifstream read; 
  int total = 0; 

  read.open(name);
  
  // error handling if file does not exist
  if(!read) 
  {
    cout << "Cannot open input file.\n";
    return;
  }

  while(!read.eof()) 
  {
    getline(read, line);
    
    //if we are not looking at a newline, add the numbers
    if(line != "")
    {
      //cout << std::stoi(line) << "\n";
      //cout << line;
      total = total + std::stoi(line); //converts line to a string 
    }

    
  }
  cout << "Your total is: " << total << endl;
  return;
}



int charToASCII(char);
void punctuationCheck(char);
//*******************************************
// TASK 7 CODE
//*******************************************
void
charIO()
{
  // A 
  /*
  1. ask user for input of a hcar type 
  2. write a function that taks a charas as the arguement and returns the asii value 
  3. call the function using the char variable and taking the input from the user 
  4. display the ascii value  
  */
  char c;
  


  cout << "Enter a char value: ";
  cin >> c; 

  cout << charToASCII(c) << endl; 

  // B

  int conversionResult; // where the converted 

  cout << "For this next exersize, try to get the char values to have ascii values between 97 to 122." << endl;

  for(int i = 0; i < 10; i++)
  {
    cout << "Enter a char value: ";
    cin >> c; 
    
    conversionResult = charToASCII(c);

    if( !(conversionResult <= 122 && conversionResult >= 97) )
    {
      cout << c << " has an ASCII code of " << conversionResult << " which is out of range!" << endl;
    }

  }

  // C check to see if inputted is a punctuation mark 
  cout << "Enter a char and program will check if it is a punctuation mark: "; 
  cin >> c;

  punctuationCheck(c);

  cout << "end of char I/O" << endl;
  cin.get();
}


// charToASCII takes a char value and converts it to ascii 
// precon: char value passed 
// postcon: cout ascii of char value return ascii value 
int charToASCII(char input)
{
  
  return (int)input; 
}

// punctuationCheck checks if character input is a punctuation 
// precon: character input 
// postcon: none 
void punctuationCheck(char check)
{
  if((check == '!' || check == '.' || check == '?'))
  {
    cout << "Character was a punctuation mark." << endl;
  }
  else
  {
    {
      cout << "Character was not a punctuation mark." << endl;
    }
  }
  return;
}














//*******************************************
// TASK 8 CODE
//*******************************************
void
misc()
{
// cycle improvement
/*
1- remove first if statement since we are already checking for specific cases 
2- remove if selection == 1 since we already know it is == 1 
3- remove areacircle since we can just cout the calculation directly 
4- remove if sleection ==2 since we already know that 
5- calculate arearectangle and output in one step
6- remove if selection ==3 since we already know that 
7- calculate areatriangle and output directly 

saved 7 cycles!!
*/

/*



 

  if (selection == 1)
  {
    cout << "Enter radius" << endl;
    cin >> radius;

    if (radius > 0)
    {
      cout << "The area of your circle is " << 3.14159 * pow(radius, 2.0) << endl;
    }

  }

   else if (selection == 2)
   {

       cout << "Enter length and width of your rectangle seperated by a space" << endl;

       cin >> length >> width;

       if (length > 0 && width > 0)

       {


           cout << "The area of your rectangle is " <<  length * width << endl;

        }

   }

   else if (selection == 3)
   { 

      cout << "Enter the base and height of your triangle separated by a space" << endl;

      cin >> base >> height; 

      if (base > 0 && height > 0 )

      {

       

         cout << "The area of your triangle is " << base * height * .5 << endl;

      }

   }

   else if (selection == 4)
   {

      cout << "Program ending" << endl

   }

  

else
  {
   cout << "This was not a valid selection" << endl; (myVar > 0)
  }
*/

















  cout << "end of miscellaneous" << endl;
  cin.get();
}






