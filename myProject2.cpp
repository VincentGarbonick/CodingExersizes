/*
Vincent Garbonick 
University of Akron

Programmed for Will Chrissey 
Computer Science I 

The purpose of this program is to calculate caloric expendature using MET, weight, and other such things. This program utilizes a menu structure 
to perform its operations. Furthermore, this program intends to utilize functional programming. This program also will create text files to log information. 
This log will be accessible via a password protected system. 
*/


#include <stdio.h>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <limits>
#include <ctime>
#include <fstream>

// macros for easy mass editing 
#define FILENAME "writeLogVinnie.txt"
#define SPACING "   "
#define PASSWORD "Top-Secret"


//our namespace includes
using std::cout;
using std::cin;
using std::left;
using std::right;
using std::setw;
using std::endl;
using std::string;
using std::to_string;
using std::ofstream;
using std::ifstream;

const float BIKING = 10.0, TREADMILL = 8.0, LIFTING = 3.0, YOGA = 2.5; //declaration and initialization of consts for METs

void printMenu(void); 
int validateRange(int, int, string, string, char);
float calorieCalculate(int, float, string);
string getIntensity(float);
string genID(void);
char* grabTime(void);
void fileInit(string);

// writes ID, activity, and minutes to file
// parameters (fileName, ID, Activity, Minutes)
void fileWriteMinAct(string, string, string, float);

// writes calories, intensity, and timestap to file and adds newline to end. grabTime() is called from inside function
// parameters (filename, calories, intensity)
void fileWriteIntStamp(string, float, string);

void printFile(string);


int main()
{

int userChoice, hitNum = 0; 
float weight, minutes, calories; 
string intensity, ID, enteredPassword;  //how intesnse our exersize was 

// initialize file
fileInit(FILENAME);

while(userChoice != 6)
{

    ID = genID();

    printMenu();
    cout << right << "Your user ID is: " << ID << endl; 
    cout << right << "Number of hits today is: " << std::setfill('0') << std::setw(5) << hitNum << "\n" << endl; 
    cout << std::setfill(' ');

    userChoice = validateRange(1, 6, "Please enter an option on the menu!", "Enter your menu choice: ", 'i');
    
    if(userChoice != 5 && userChoice != 6)
    {
        weight = validateRange(1, 999, "Enter a weight from 0 - 999", "Enter your weight: ", 'f');
        calories = calorieCalculate(userChoice, weight, ID);
        intensity = getIntensity(calories);

        fileWriteIntStamp(FILENAME, calories, intensity);

        cout << calories << endl; 
        cout << intensity << endl;

    
    }
    else if(userChoice == 5)
    {
        cout << "Enter password: ";
        cin >> enteredPassword;
        
        if(enteredPassword == PASSWORD)
        {
            printFile(FILENAME);
        }
        else
        {
            cout << "SECURITY BREACH!" << endl;

            // if the password is incorrect, the program forces userChoice to be 6, which is the quitting variable :)
            userChoice = 6;
        }
        

    }
    
    hitNum++;


}
return 0;
}

/*
printMenu 

Use: Prints out a menu structure 
Precondition: Nothing 
Postcondition: Nothing 
*/
void printMenu()
{
    //clears output buffer 
    cout << endl;
    //heading of menu system
    cout << setw(68) << "__________________________________________________________________ " << endl;
    cout << setw(68) << "|                  Welcome to Vinnie's Fitness Center              |" << endl;
    cout << setw(68) << "|                          Activity System                         |" << endl;
    cout << setw(68) << "|__________________________________________________________________|" << endl;
    //options of menu system
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "   MAIN MENU" << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Stationary Bike " << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Treadmilll " << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Weight Lifting " << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Hatha Yoga " << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Print Transaction Log " << right << setw(2) << "|" << endl;
    cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Quit " << right << setw(2) << "|" << endl;
    //bottom of menu system
    cout << setw(68) << "|__________________________________________________________________|" << endl;
    cout << endl;

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

/*
calorieCalculate 

Use: calculates caloric expendature based on passed parameters

Precondition: 
                - pass userInput 1-4
                - pass weight 


Postcondition: 
                - calories expended  
*/
float calorieCalculate(int userChoice, float weight, string ID)
{

    float calories, minutes;

    ID = genID();

    switch(userChoice)
    {
        case 1: 

            minutes = validateRange(30, 60, "Enter minutes between 30 and 60. \n", "Enter minutes worked while biking: ", 'i'); //gets our minutes, casts our float minutes to int in function
            calories = minutes / 60 * BIKING * weight / 2.2; //calculates calories burnt 
            
            fileWriteMinAct(FILENAME, ID, "Biking", minutes);
            break;

        case 2:
            
            minutes = validateRange(30, 60, "Enter minutes between 30 and 60. \n", "Enter minutes worked on treadmill: ", 'i'); //gets our minutes, casts our float minutes to int in function
            calories = minutes / 60 * TREADMILL * weight / 2.2; //calculates calories burnt 

            fileWriteMinAct(FILENAME, ID, "Treadmill", minutes);
            break;

        case 3:
            
            minutes = validateRange(15, 30, "Enter minutes between 15 and 30. \n", "Enter minutes worked lifting: ", 'i'); //gets our minutes, casts our float minutes to int in function
            calories = minutes / 60 * LIFTING * weight / 2.2; //calculates calories burnt 

            fileWriteMinAct(FILENAME, ID, "Lifting", minutes);
            break;

        case 4: 

            minutes = validateRange(60, 90, "Enter minutes between 60 and 90. \n", "Enter minutes worked doing yoga: ", 'i'); //gets our minutes, casts our float minutes to int in function
            calories = minutes / 60 * YOGA * weight / 2.2; //calculates calories burnt 

            fileWriteMinAct(FILENAME, ID, "Yoga", minutes);
            break;

    }

    return calories;

}

/*
getIntensity

Use: gets the intensity of exersize and returns a string 

Precondition: 
                - pass calories expended


Postcondition: 
                - intensity of exersize as a string   
*/
string getIntensity(float calories)
{
    string intensity; 

    if(calories >= 0 && calories <= 200)
    {
        intensity = "light";
    }
    else if(calories >= 201 && calories <= 500)
    {
        intensity = "moderate";
    }
    else 
    {
        intensity = "heavy";
    };

    return intensity; 

}

// genID makes a randomized user ID and will always make sure the ID has 5 characters 
// Precondition: None 
// Postcondition: 5 digit ID number 

string genID()
{
    string ID;

    int random = rand() % 99999 + 1;

    // add number of zeroes based on how many digits are in random so we have a 5 digit ID number 
    if(random <= 9)
    {
        // 1 digit 
        ID = "0000" + to_string(random);
    }
    else if(random > 9 && random <= 99)
    {
        // 2 digits 
        ID = "000" + to_string(random);
    }
    else if(random > 99 && random <= 999)
    {
        // 3 digits 
        ID = "00" + to_string(random);
    }
    else if(random > 999 && random <= 9999)
    {
        // 4 digits 
        ID = "0" + to_string(random);
    }
    else
    {
        // 5 digits 
        ID = to_string(random);
    }

    return ID;
}

// grabTime takes the system time and returns it 
// Precondition: None 
// Postcondition: system time as a string 

char* grabTime(void)
{
    // current date/time based on current system  
    time_t now = time(0);
    
    // convert now to c-string form
    char* timeOf = ctime(&now);
    
    // we want a way to limit the size to be just 20 in length
    timeOf[20] = '\0'; // this effectively truncates the c-string

    return timeOf;

}

// fileInit creates an empty file with a passed name if the file doesn't already exist
// Precondition: name of file as string 
// Postcondition: file 
void fileInit(string name)
{
    ofstream file;
    file.open(name, std::ios::app);
    file.close();

    return;
}

// fileWriteMinAct writes ID, activity, and minutes to file
// Precondition: (fileName, ID, Activity, Minutes)
// Postcondition: written file 
void fileWriteMinAct(string name, string ID, string Activity, float minutes)
{
    ofstream writeFile;
    writeFile.open(name, std::ios::app);

    writeFile << ID << SPACING << Activity << SPACING << minutes << SPACING;

    writeFile.close();

    return;
}

// writes calories, intensity, and timestap to file and adds newline to end. grabTime() is called from inside function
// precon: (filename, calories, intensity)
// postcon: written file 
void fileWriteIntStamp(string name, float calories, string inten)
{
    ofstream writeFile;
    writeFile.open(name, std::ios::app);

    writeFile << calories << SPACING << inten << SPACING << grabTime() << "\n";
    
    writeFile.close();

    return;
}

// printfile prints the file out 
// precon: file name 
// postcon: printed file 

void printFile(string name)
{
    ifstream readFile;
    string printString;

    readFile.open(name);
    
    cout << "ID" << SPACING << "Minutes" << SPACING << "Weight" << SPACING << "Calories" << SPACING << "Intensity" << SPACING << "Time In" << endl;

    while(!readFile.eof())
    {
        getline(readFile, printString);
        //cout << right << setw(6) << std::setfill('0') << printString << endl;
        cout << printString << endl;
    }
    
    readFile.close();
}