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
#include <stdlib.h>
#include <cstring>

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
arrays();

void
searching();

void
sorting();

void
cStrings();

void
theStrings();

void
vectors();

void
pointers();

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
        arrays();
        break;
      case (2):
        searching();
        break;
      case (3):
        sorting();
        break;
      case (4):
        cStrings();
        break;
      case (5):
        theStrings();
        break;
      case (6):
        vectors();
        break;
      case (7):
        pointers();
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
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Arrays"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Searching"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Sorting      "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) C-strings"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Strings "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Vectors"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Pointers"
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
arrays()
{
  // A- create an array that holds 27 chars and fill it with letters of the alphabet 
  char alpha[26];
  int count = 0;
  
  for(int i = 65; i<=90; i++)
  {
    alpha[count] = (char)i;
    count++;
  }

  for(int y = 0; y < 26; y++)
  {
    cout << alpha[y];
  }

  cout << "\n";

  // B- create a 2 dimentional array of integers and populate it with random numbers and then print it off
  int randomArr[3][5];

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j<5; j++)
    {
      randomArr[i][j] = rand() %10 + 1;
      cout << randomArr[i][j];
    }
    cout << "\n";
  }

  // C


  cout << "end of arrays" << endl;
  cin.get();
}

void linearSearch(char);

// TASK 2 CODE
void
searching()
{
  //write a linear search function tthat will sort char array from 1A, and display a message of found or not. supply a value from user and pass to function
    char userInput;

    bool loopFlag = false; 
    do
    {    
        cout << "Enter a character from the alphabet: "; 
        cin >> userInput; 

        //cin has to be a value that's either an upper or lowercase ascii character in the alphabet 
        if(!cin.fail() && isalpha(userInput) && ( ((int)userInput >= 65 && int(userInput) <= 90) || ((int)userInput >= 97 && (int)userInput <= 122) ) )
        {
            loopFlag = true;
        }
        else 
        {
            cout << "Enter valid data" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }while(loopFlag == false);

  linearSearch(userInput);

  cout << "end of searching" << endl;
  cin.get();
}


// searches a character array for a certain character 
// precon: user supplied character 
// postcon: a statement if char was found or not
void linearSearch(char hunt)
{
  //Generates the array so I have something to search and test with 

  char alpha[26];
  int count = 0;
  
  for(int i = 65; i<=90; i++)
  {
    alpha[count] = (char)i;
    count++;
  }

  for(int y = 0; y< 26; y++)
  {
    if(alpha[y] == hunt)
    {
      cout << "Found the value!" << endl;
      return;
    }
  }

  cout << "Did not find the value..." << endl;
  return;  

}

// TASK 3 CODE
void
sorting()
{
  cout << "end of sorting" << endl;
  cin.get();
}

void encrypt(void);

// TASK 4 CODE
void
cStrings()
{
  // first call of our encryption function
  encrypt();
  // second call of our encryption function 
  encrypt();

  cout << "end of C-strings" << endl;
  cin.get();
}

// encrypts a user entered password and stores it in a static variable 
// precon: none 
// postcon: none 
void encrypt(void)
{
  // number of times this function has been called. if you call this function a second time, it compares the first password to the second password 
  static int callnumber = 1;
  static char password[4];

  bool loopFlag = false; 
  int key = 10;


  if(callnumber == 1)
  {
  //declares our static variables that we are starting off with


    do
    {    
        cout << "Enter a password to be encrypted. It has to be 3 letters: "; 
        cin >> password; 

        //cin has to be a value that's either an upper or lowercase ascii character in the alphabet 
        if(!cin.fail() && std::strlen(password) == 3)
        {
            loopFlag = true;
        }
        else 
        {
            cout << "Enter valid data." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }while(loopFlag == false);
  
    //encrypts our c string 
    for(int i = 0; i <3; i++)
    {
      if(password[i] + key > 126) 
      { 
        password[i] = 32 + ((password[i] + key) - 127);

      }
      else
      {
        password[i] = (password[i] + key);

      }
    }
  
  callnumber++;

  return;



  }

  else if(callnumber == 2)

  {
  char checkPassword[4];
  // compare them
    do
    {    
        cout << "Enter a password to be encrypted. It has to be 3 letters: "; 
        cin >> checkPassword; 

        //cin has to be a value that's either an upper or lowercase ascii character in the alphabet 
        if(!cin.fail() && std::strlen(checkPassword) == 3)
        {
            loopFlag = true;
        }
        else 
        {
            cout << "Enter valid data." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }while(loopFlag == false);
  
    //encrypts our c string 
    for(int i = 0; i <3; i++)
    {
      if(checkPassword[i] + key > 126) 
      { 
        checkPassword[i] = 32 + ((checkPassword[i] + key) - 127);

      }
      else
      {
        checkPassword[i] = (checkPassword[i] + key);

      }
    }  

    //compares the c strings 

    if(strcmp(password, checkPassword) == 0)
    {
      cout << "Encrypted passwords match!" << endl;
    }

    else
    {
      cout << "Encrypted passwords do not match!" << endl;
    }

    callnumber++;
    
    return;

  }

  else
  {
    cout << "You have called this function more than 2 times. It will not continue to work. Restart the program." << endl;

    return;
  }

}


// TASK 5 CODE
void
theStrings()
{

  string myString = "a lazy boy is a recliner; a beanbag is not.";

  cout << "Found first \"is\" at position: " << myString.find("is") << endl; 

  cout << "end of strings" << endl;
  cin.get();
}


// TASK 6 CODE
void
vectors()
{
  cout << "end of vectors" << endl;
  cin.get();
}
// TASK 7 CODE
void
pointers()
{
  cout << "end of pointers" << endl;
  cin.get();
}
// TASK 8 CODE
void
misc()
{
  cout << "end of miscellaneous" << endl;
  cin.get();
}


/* Place the functions here and up above place the prototypes */




