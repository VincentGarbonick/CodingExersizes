/*
Vincent Garbonick 
University of Akron

The purpose of this program is to calculate caloric expendature using MET, weight, and other such things. This program utilizes a menu structure 
to perform its operations. 
*/


#include <stdio.h>
#include <iostream>
#include <iostream>
#include <iomanip>

#define TEXTMARGIN 2

using std::cin; 
using std::cout;
using std::setw;
using std::left;
using std::endl;
using std::right;
using std::setprecision;
using std::fixed; 

const float BIKING = 10.0, TREADMILL = 8.0, LIFTING = 3.0, YOGA = 2.5; //declaration and initialization of consts for METs

int main()
{
    bool quitting = false, validChoice = false, validMins = false, validWeight = false; //this is the variable for quitting. if this is set to true, the loop exits 
    int userChoice; //this stores the choice of the user 
    float weight, minutes, calories; //variables used in MET calculation 

    while(quitting != true)
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
        cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Quit " << right << setw(2) << "|" << endl;
        //bottom of menu system
        cout << setw(68) << "|__________________________________________________________________|" << endl;
        cout << endl;

        //input validation for user choice 
        do
        {           

            cout << setw(TEXTMARGIN) <<  "Enter the workout that you wish to track, or end to exit: " ;
            cin >> userChoice; 

            if(!cin.fail() && userChoice <= 5 && userChoice >= 1)
            {
                validChoice = true; 
                cin.ignore(); //tosses out newline so we don't have to worry about it later 

            }
            else
            {
                cout << setw(TEXTMARGIN) << "Please use the menu and select valid options." << endl;
                cin.clear(); //clears cin error state 
                cin.ignore(); //ignores newline 
            }

        }while(validChoice == false);


        do
        {           

            cout << setw(TEXTMARGIN) <<  "Enter your weight: " ;
            cin >> weight; 
            

            if(!cin.fail() && weight <= 999 && weight >= 1)
            {
                validWeight = true; 
                cin.ignore(); //tosses out newline so we don't have to worry about it later 
            }
            else
            {
                cout << setw(TEXTMARGIN) << "Please select a valid weight." << endl;
                cin.clear(); //clears cin error state 
                cin.ignore(); //ignores newline 
            }

        }while(validWeight == false);

        //cases for user choices

        //quantification for how many calories burnt 
        




        validMins = false;
        validChoice = false; 
        validWeight = false; //resets all validation flags 
    } // closing bracket for primary while loop
}