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

//our namespace includes
using std::cout;
using std::cin;
using std::left;
using std::right;
using std::setw;
using std::endl;
using std::string;


void printMenu(void); 
int validateRange(int, int, string, string, char);
float calorieCalculate(int, float);

int main()
{
int userChoice; 
float weight, minutes, calories; 

while(userChoice != 6)
{



    printMenu();
    userChoice = validateRange(1, 6, "Please enter an option on the menu!", "Enter your menu choice: ", 'i');
    
    if(userChoice != 5 && userChoice != 6)
    {
        weight = validateRange(1, 999, "Enter a weight from 0 - 999", "Enter your weight: ", 'f');
        //calories = calorieCalculate(userChoice, weight);

    }


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
        cout << coutMessage << endl; 
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