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






int main(void)
{
    bool quitting = false, validLoop = false, validMins = false, validWeight = false; //this is the variable for quitting. if this is set to true, the loop exits 
    int userChoice; //this stores the choice of the user 
    float weight, minutes, calories; //variables used in MET calculation 

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
        //cin.clear(); //clears error signal if cin failed before program looped again
        cout << setw(TEXTMARGIN) <<  "Enter the workout that you wish to track, or end to exit: " ;
        cin >> userChoice; 
        cin.ignore();
        cout << endl;
        
        
        /*
        A breif documentation of how the loops work- basically the program constantly polls for user input during prompts. There are 3 loops. The first is an overall 
        menu loop that does not exit until the user selects 5 is the first one. Once a user inputs an inital value, it gets validated using !cin.fail()
        and a range system, there is a decision tree that prompts additionally based on user input. You may select values 1-4 for corresponding exeriszes, 
        and 5 if you want to quit. 

        There are 2 other sub while loops for validating weight and minute input. The minutes are of type float, but are cast into an integer per the requests
        of the documentation. METS are calculated using  calories = minutes / 60 * EXERSIZE_CONST * weight / 2.2. The calories are then quantified as an 
        activity level using a decision tree.

        There are constructs for choices 1-4. Choice 5 simply validates input, and then breaks the primary while loop by setting quitting = true. 
        */



        //input validation for user input, if cin.fail did not fail (it succeeded) and it is in range 
        if(!cin.fail() && userChoice <= 5 && userChoice >= 1)
        {
            
            //under all if statements, all input is validated and held within an infinite while loop. It will lock you into the process until you input valid variables
            if(userChoice == 1)
            { 
                while(validWeight == false)
                {
                    cout << setw(TEXTMARGIN) << "Enter your weight: ";
                    cin >> weight;
                    cout << endl;
                    cin.ignore(); 
                    
                    if(!cin.fail() && weight <= 999 && weight >= 1)
                    {
                        //secondary input validation block
                        validWeight = true; //breaks weight validation while loop
                        
                        while(validMins == false)
                        {
                            cout << setw(TEXTMARGIN) << "Enter minutes worked: "; 
                            cin >> minutes;
                            //cout <<endl;
                            //cin.ignore();
                            
                            if(!cin.fail() && minutes <= 60 && minutes >= 30)
                            {
                                validMins = true; //breaks minute validation while loop
                                minutes = (int)minutes; //casts our minutes to an integer instead of a float for efficiency

                            }
                            else 
                            {
                                //error handling for minute while loop
                                cout << setw(2) << "The minutes must be between 30 and 60" << endl; 
                                cin.clear(); //clears error state of cin
                                cin.ignore();

                            }
                        }

                    }
                    else
                    {
                        //error handling for weight while loop
                        cout << setw(2) << "That is not valid input, pick weight between 1 and 999" << "\n" << endl; 
                        cin.clear(); //clears error state of cin
                        cin.ignore(); //flushes input buffer
                        cout << endl; //flushes output buffer
                    }
                };




                


                calories = minutes / 60 * TREADMILL * weight / 2.2; //calculates calories burnt 
                cout << setw(2) << setprecision(1) << fixed << "Your total calories burnt for biking was: " << calories << endl;

                if(calories >= 0 && calories <= 200)
                {
                    cout << "light-intensity aerobic activity" << endl;
                }
                else if(calories >= 201 && calories <= 500)
                {
                    cout << "moderate-intensity activity" << endl;
                }
                else 
                {
                    cout << "vigerous-intesnity aerobic activity" << endl;
                };

                cout << "\n" << endl; //adds a nice little newline 
                
            }
            else if(userChoice == 2)
            { 
                while(validWeight == false)
                {
                    cout << setw(TEXTMARGIN) << "Enter your weight: ";
                    cin >> weight;
                    cout << endl;
                    cin.ignore(); 
                    
                    if(!cin.fail() && weight <= 999 && weight >= 1)
                    {
                        //secondary input validation block
                        validWeight = true; //breaks weight validation while loop
                        
                        while(validMins == false)
                        {
                            cout << setw(TEXTMARGIN) << "Enter minutes worked: "; 
                            cin >> minutes;
                            //cout <<endl;
                            //cin.ignore();
                            
                            if(!cin.fail() && minutes <= 60 && minutes >= 30)
                            {
                                validMins = true; //breaks minute validation while loop
                                minutes = (int)minutes; //casts our minutes to an integer instead of a float for efficiency

                            }
                            else 
                            {
                                //error handling for minute while loop
                                cout << setw(2) << "The minutes must be between 30 and 60" << "\n" << endl; 
                                cin.clear(); //clears error state of cin
                                cin.ignore();
                            }
                        }

                    }
                    else
                    {
                        //error handling for weight while loop
                        cout << setw(2) << "That is not valid input, pick weight between 1 and 999" << "\n" << endl; 
                        cin.clear(); //clears error state of cin
                        cin.ignore(); //flushes input buffer
                        cout << endl; //flushes output buffer
                    }
                };




                


                calories = minutes / 60 * TREADMILL * weight / 2.2; //calculates calories burnt 
                cout << setw(2) << setprecision(1) << fixed << "Your total calories burnt for treadmill was: " << calories << endl;

                if(calories >= 0 && calories <= 200)
                {
                    cout << "light-intensity aerobic activity" << endl;
                }
                else if(calories >= 201 && calories <= 500)
                {
                    cout << "moderate-intensity activity" << endl;
                }
                else 
                {
                    cout << "vigerous-intesnity aerobic activity" << endl;
                };

                cout << "\n" << endl; //adds a nice little newline 
                
            }
            else if(userChoice == 3)
            { 
                while(validWeight == false)
                {
                    cout << setw(TEXTMARGIN) << "Enter your weight: ";
                    cin >> weight;
                    cout << endl;
                    cin.ignore(); 
                    
                    if(!cin.fail() && weight <= 999 && weight >= 1)
                    {
                        //secondary input validation block
                        validWeight = true; //breaks weight validation while loop
                        
                        while(validMins == false)
                        {
                            cout << setw(TEXTMARGIN) << "Enter minutes worked: "; 
                            cin >> minutes;
                            //cout <<endl;
                            //cin.ignore();
                            
                            if(!cin.fail() && minutes <= 30 && minutes >= 15)
                            {
                                validMins = true; //breaks minute validation while loop
                                minutes = (int)minutes; //casts our minutes to an integer instead of a float for efficiency

                            }
                            else 
                            {
                                //error handling for minute while loop
                                cout << setw(2) << "The minutes must be between 15 and 30" << "\n" << endl; 
                                cin.clear(); //clears error state of cin
                                cin.ignore();
                            }
                        }

                    }
                    else
                    {
                        //error handling for weight while loop
                        cout << setw(2) << "That is not valid input, pick weight between 1 and 999" << "\n" << endl; 
                        cin.clear(); //clears error state of cin
                        cin.ignore(); //flushes input buffer
                        cout << endl; //flushes output buffer
                    }
                };




                


                calories = minutes / 60 * LIFTING * weight / 2.2; //calculates calories burnt 
                cout << setw(2) << setprecision(1) << fixed << "Your total calories burnt for lifting was: " << calories << endl;

                if(calories >= 0 && calories <= 200)
                {
                    cout << "light-intensity aerobic activity" << endl;
                }
                else if(calories >= 201 && calories <= 500)
                {
                    cout << "moderate-intensity activity" << endl;
                }
                else 
                {
                    cout << "vigerous-intesnity aerobic activity" << endl;
                };

                cout << "\n" << endl; //adds a nice little newline 
                
            }
            else if(userChoice == 4)
            { 
                while(validWeight == false)
                {
                    cout << setw(TEXTMARGIN) << "Enter your weight: ";
                    cin >> weight;
                    cout << endl;
                    cin.ignore(); 
                    
                    if(!cin.fail() && weight <= 999 && weight >= 1)
                    {
                        //secondary input validation block
                        validWeight = true; //breaks weight validation while loop
                        
                        while(validMins == false)
                        {
                            cout << setw(TEXTMARGIN) << "Enter minutes worked: "; 
                            cin >> minutes;
                            //cout <<endl;
                            //cin.ignore();
                            
                            if(!cin.fail() && minutes <= 90 && minutes >= 60)
                            {
                                validMins = true; //breaks minute validation while loop
                                minutes = (int)minutes; //casts our minutes to an integer instead of a float for efficiency

                            }
                            else 
                            {
                                //error handling for minute while loop
                                cout << setw(2) << "The minutes must be between 60 and 90" << "\n" << endl; 
                                cin.clear(); //clears error state of cin
                                cin.ignore();
                            }
                        }

                    }
                    else
                    {
                        //error handling for weight while loop
                        cout << setw(2) << "That is not valid input, pick weight between 1 and 999" << "\n" << endl; 
                        cin.clear(); //clears error state of cin
                        cin.ignore(); //flushes input buffer
                        cout << endl; //flushes output buffer
                    }
                };




                


                calories = minutes / 60 * YOGA * weight / 2.2; //calculates calories burnt 
                cout << setw(2) << setprecision(1) << fixed << "Your total calories burnt for yoga was: " << calories << endl;

                if(calories >= 0 && calories <= 200)
                {
                    cout << "light-intensity aerobic activity" << endl;
                }
                else if(calories >= 201 && calories <= 500)
                {
                    cout << "moderate-intensity activity" << endl;
                }
                else 
                {
                    cout << "vigerous-intesnity aerobic activity" << endl;
                };

                cout << "\n" << endl; //adds a nice little newline 
                
            }
            else
            {
                quitting = true;
            };


















        } // ending bracket for original user input if statement
        
        else
        {
            //error handling for primary while loop
            cout << setw(2) << "That is not valid input, please follow the menu carefully." << "\n" << endl; 
            cin.clear(); //clears error state of cin
            cin.ignore(); //flushes input buffer
            cout << endl; //flushes output buffer
        };






        validLoop = false; //resets valid 
        validMins = false;
        validWeight = false; //resets minute and weight validation loops
        userChoice = 0; //resets userChoice 
   
    };// main loop closing brace
    return 0; 
    
};
