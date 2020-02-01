#include <stdio.h>
#include <iostream>
#include <iostream>
#include <iomanip>

using std::cin; 
using std::cout;
using std::setw;
using std::left;
using std::endl;
using std::right;

const float RUNNING = 10.0, BIKING = 8.0, LIFTING = 3.0, YOGA = 2.5; //declaration and initialization of consts for METs






int main(void)
{
    bool quitting = false, validLoop = false, validMins = false, validWeight = false; //this is the variable for quitting. if this is set to true, the loop exits 
    int userChoice; //this stores the choice of the user 
    float weight, minutes; //variables used in MET calculation 

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

    
    //clears output buffer
    //loops runs forever unless quitting is set to false
    while(quitting == false)
    {



        //polls for user input 
        cout << setw(2) <<  "Enter the workout that you wish to track, or end to exit: " << endl;
        cin >> userChoice; 
        //input validation for user input 
        if(isdigit(userChoice) && userChoice <= 5 && userChoice >= 1)
        {

            //under all if statements, all input is validated and held within an infinite while loop. It will lock you into the process until you input valid variables
            if(userChoice == 1)
            { 
                cout << "poopy";   
            };

        }
        
        else
        {
            cout << setw(2) << "That is not valid input, please follow the menu carefully." << "\n" << endl; 
        };






        validLoop = false; //resets valid 
        cin.ignore(); //flush output buffer one last time 
    };
    return 0; 

};
