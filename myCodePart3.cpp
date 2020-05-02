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
#include <vector>
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


void addressString(void); 
void spamCheck(string);
// TASK 5 CODE
void
theStrings()
{
  // Task A 
  string myString = "a lazy boy is a recliner; a beanbag is not.";

  int foundIs = myString.find("is");
  
  // finding is 
  cout << "Found first \"is\" at position: " <<  foundIs << endl; 
  cout << "Found second \"is\" at position: " << myString.find("is", foundIs + 1 ) << endl;
  
  // finding a 
  cout << "Found first \"a\" at position: " << myString.find("a") << endl;
  
  // swapping positions of 2 words 
  myString = "a beanbag is a recliner; a lazy boy is not.";
  cout << myString << endl;

  bool findAll = false;
  int firstFind;
  firstFind = myString.find('a');
  cout << "Position: " << firstFind << endl;
  // find all a  
  do 
  {

    
    
    if(myString.find('a', firstFind + 1))
    {
      firstFind = myString.find('a', firstFind + 1);
      cout << "Position: " << firstFind << endl; 
    }
    else
    {
      cout << "Found all instances." << endl;
      findAll = true;
    }



  }while(findAll = false);

  //juxtapose positions 
  // do stuff 

  //find z 
  // turns the string into a c string and then hunts for z that way. it's ugly but it works 
  char findZ[myString.size() + 1];
  myString.copy(findZ, myString.size() +1);

  findZ[(myString.size()+1)] = '\0'; //append a null terminator 
  
  for(int i=0;i<myString.size() +1;i++)
  {
    if(findZ[i]=='z')
    {
      cout << "Z positioned at: " << i - 1 << endl;
    }

    }
  
  //task B- string address stuff 
  addressString();

  //task C- spam 
  spamCheck("100% Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer odio massa, accumsan eu lorem at, rutrum scelerisque eros. Pellentesque ut tincidunt risus. Nam suscipit interdum orci id venenatis. Maecenas in mollis nunc. Maecenas consequat cursus porta. Sed convallis libero quis erat tristique, accumsan rutrum leo ornare. Donec auctor scelerisque diam eget sodales. Praesent rhoncus faucibus pharetra. Quisque porta mauris eu enim pulvinar, eu rhoncus purus pulvinar. Sed dignissim nisi eu euismod molestie. Fusce neque leo, faucibus nec metus tincidunt, ullamcorper vehicula est. In hac habitasse platea dictumst. Duis tempor posuere metus, eget facilisis nunc. Integer lacinia elementum molestie. Sed lacinia luctus ex fermentum porta. Etiam ullamcorper dui dolor, id hendrerit eros mollis non. ");
  cout << "end of strings" << endl;
  cin.get();
}

// does address related things as per the task 
// no pre and post con 
void addressString()
{
  string compadre = "hello";

  cout << "Address of string is: " << &compadre << endl;

  compadre = "goodbye";

  cout << "Address of adjusted string is: " << &compadre << endl;
}






// finds common spam words in an inputted file 
// precon string of words in email  
// postcon none 
void spamCheck(string file)
{
  int spamCount = 0;
  string spamList[40] = {
  "100%"
  ,"100% free"
  ,"100% satisfied"
  ,"50% off"
  ,"Ad"
  ,"All New"
  ,"Bargain"
  ,"Best Price"
  ,"Cost"
  ,"Costs"
  ,"Credit"
  ,"Discount"
  ,"Don’t delete"
  ,"Email harvest"
  ,"Email marketing"
  ,"Fast cash"
  ,"For free"
  ,"For instant access"
  ,"Free"
  ,"Free and free"
  ,"Free connsultation"
  ,"Free dvd"
  ,"Free gift"
  ,"Free sample"
  ,"Free trial"
  ,"Free website"
  ,"Gift certificate"
  ,"Give it away"
  ,"Giving away"
  ,"Giving it away"
  ,"Great"
  ,"Free and free"
  ,"Free consultation"
  ,"Free dvd"
  ,"Free gift"
  ,"Free sample"
  ,"Free trial"
  ,"Free website"
  ,"Gift certificate"
  ,"Give it away"
  "Great"
  }; // list of spam phrases 

  
  for(int i = 0; i< 40; i++)
  {
    if(file.find(spamList[i]) != std::string::npos)
    {
      spamCount++;
    }
  }

  cout << "You have " << spamCount << " spam phrases in your text." << endl;

  if(spamCount > 3)
  {
    cout << "This email is likely spam." << endl;
  }
  else 
  {
    cout << "This email is probably not spam." << endl;
  }

  return;
}





















std::vector<std::string> process(std::vector<std::string>);
void vecStat(std::vector<std::string>);
// TASK 6 CODE
void
vectors()
{
  std::vector<string> v; 
  v = process(v);

  cout << "end of vectors" << endl;
  cin.get();
}
//does vector operations asked in task 6 
// precon: vector of strings 
// postcon: edited vector 
std::vector<std::string> process(std::vector<std::string> v)
{
  v.push_back("tomato soup");
  vecStat(v);

  v.push_back("anonymous");
  vecStat(v);

  v.insert(v.begin(), "super freak");
  vecStat(v);

  v.push_back("1234567890abcdefghijklmnopqrstuvwxyz1234567890");
  vecStat(v);

  v.resize(v.size() + 10);
  vecStat(v);

  return v;
}
// shows size, len, and capacity of vecotr 
// precon: vector of strings  
// postcon: none 
void vecStat(std::vector<std::string> v)
{
  // size 
  cout << v.size() << endl;
  // length
  cout << v.max_size() << endl;
  // capacity
  cout << v.capacity() << endl;

  return;
}


void pointerPrint(char*);
void pointerPopulate (int);

double* exchange(float *, float*); 
// TASK 7 CODE
void
pointers()
{
    // A 
  // generates array for task A 
  char alpha[26];
  int count = 0;
  
  for(int i = 65; i<=90; i++)
  {
    alpha[count] = (char)i;
    count++;
  }

  pointerPrint(alpha);
 
  /*
  // B 
  int * pArr = new int[3];
  pointerPopulate(*pArr);

  for(int i = 0; i<sizeof(pArr); i++)
  {
    cout << pArr[i];
  }
  */

 //C 

 //D 




  cout << "end of pointers" << endl;
  cin.get();
}

//prints off array given a pointer 
// precon array
// postcon none
void pointerPrint(char* pArr)
{
  for(int x = 0; x < 26; x++)
  {
    cout << pArr[x];
  }
  cout << "\n";
  return;
}

//populates dyanmically heap allocated array 
// precon heap array
// postcon heap array populated 
void pointerPopulate(int arr[])
{
  for(int i = 0; i < 3; i++)
  {
    arr[i] = 2;
  }
  return;
} 

// multiplies 2 numbers 
// precon number pointers 
// postcon multiplied numbers 
/*
double* exchange(float *n1, float*n2)
{
  double mult = *n1 * (*n2);
  double * pMult = mult;
}
*/



// TASK 8 CODE
void
misc()
{



  cout << "end of miscellaneous" << endl;
  cin.get();
}


/* Place the functions here and up above place the prototypes */




