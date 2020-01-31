#include <stdio.h>
#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std; 
const float RUNNING, BIKING, LIFTING, YOGA; //declaration and initialization of consts for METs






int main(void)
{
    bool quitting = false; //this is the variable for quitting. if this is set to true, the loop exits 
    int userChoice; //this stores the choice of the user 
    
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

        cin >> userChoice; 

        if(userChoice == 1){quitting = true;};








    }
return 0; 
}