/*
Author: Collin Hall
The purpose of this code is to create a 12 hour and 24 hour clock that is able to be edited by user input.
*/

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include "addSecond.cpp"
#include "addMinute.cpp"
#include "addHour.cpp"

int main()
{

    int userInput;
    string options;

    // Variables for clock output
    int clock12Hour1 = 1;
    int clock12Hour2 = 2;
    int clock24Hour1 = 0;
    int clock24Hour2 = 0;
    int mins1 = 5;
    int mins2 = 9;
    int seconds1 = 5;
    int seconds2 = 9;
    char colon1 = ':';
    char colon2 = ':';
    string ampm = "A M";

    cout << "**************************\t"
         << "**************************" << endl;
    cout << "*     12-Hour Clock      *\t"
         << "*     24-Hour Clock      *" << endl;
    cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << " " << ampm << "       *\t"
         << "*     " << clock24Hour1 << clock24Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << "           *" << endl;
    cout << "**************************\t"
         << "**************************" << endl;
    cout << endl;

    /* Do/While to keep user able to edit by going back and forth between
       the menu and 1 of the 4 options on the menu.
    */
    do
    {

        cin >> options;
        if ((options == "Options") || (options == "options"))
        {
            // Options Menu. Will take upper or lowercase options
            cout << "\t\t**************************" << endl;
            cout << "\t\t*  1-Add One Hour        *" << endl;
            cout << "\t\t*  2-Add One Minute      *" << endl;
            cout << "\t\t*  3-Add One Second      *" << endl;
            cout << "\t\t*  4-Exit Program        *" << endl;
            cout << "\t\t**************************" << endl;

            // switch statement to execute options menu
            cin >> userInput;
            switch (userInput)
            {
            case 1:
                // call addHour function
                addHour(clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << "*     12-Hour Clock      *\t"
                     << "*     24-Hour Clock      *" << endl;
                cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << " "
                     << ampm << "       *\t"
                     << "*     " << clock24Hour1 << clock24Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << "           *"
                     << endl;
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << endl;
                break;
            case 2:
                // call addMinute function
                addMinute(mins1, mins2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << "*     12-Hour Clock      *\t"
                     << "*     24-Hour Clock      *" << endl;
                cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << " "
                     << ampm << "       *\t"
                     << "*     " << clock24Hour1 << clock24Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << "           *"
                     << endl;
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << endl;
                break;
            case 3:
                // call addSecond function
                addSecond(seconds1, seconds2, mins1, mins2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << "*     12-Hour Clock      *\t"
                     << "*     24-Hour Clock      *" << endl;
                cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << " "
                     << ampm << "       *\t"
                     << "*     " << clock24Hour1 << clock24Hour2 << colon1 << mins1 << mins2 << colon2 << seconds1 << seconds2 << "           *"
                     << endl;
                cout << "**************************\t"
                     << "**************************" << endl;
                cout << endl;
                break;
            case 4:
                // Exit
                return 0;
                break;
            default:
                break;
            }
        }

        else
        {
            return 0;
        }

    } while (options != "4");

    return 0;
}