#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//function to add a second to the clocks
void addSecond(int &seconds1, int &seconds2, int &mins1, int &mins2, int &clock12Hour1, int &clock12Hour2, int &clock24Hour1, int &clock24Hour2,
               string &ampm)
{

    if (seconds2 < 10)
    {
        seconds2 = seconds2 + 1;
    }

    if (seconds1 == 5 && seconds2 == 10)
    {
        seconds1 = 0;
        seconds2 = 0;

        if (mins2 < 10)
        {
            mins2 = mins2 + 1;
        }

        if (mins1 == 5 && mins2 == 10)
        {
            mins1 = 0;
            mins2 = 0;

            if (clock12Hour2 < 10)
            {
                clock12Hour2 = clock12Hour2 + 1;
            }

            if (clock12Hour2 == 10)
            {
                clock12Hour1 = 1;
                clock12Hour2 = 0;
            }

            if (clock12Hour1 == 1 && clock12Hour2 == 3)
            {
                clock12Hour1 = 0;
                clock12Hour2 = 1;
            }

            if (clock24Hour2 < 10)
            {
                clock24Hour2 = clock24Hour2 + 1;
            }

            if (clock24Hour1 == 1 && clock24Hour2 == 10)
            {
                clock24Hour1 = 2;
                clock24Hour2 = 0;
            }

            if (clock24Hour2 == 10)
            {
                clock24Hour2 = 0;
                clock24Hour1 = 1;
            }

            if (clock24Hour1 == 2 && clock24Hour2 == 4)
            {
                clock24Hour1 = 0;
                clock24Hour2 = 0;
            }
        }

        if (mins1 == 4 && mins2 == 10)
        {
            mins1 = 5;
            mins2 = 0;
        }

        if (mins1 == 3 && mins2 == 10)
        {
            mins1 = 4;
            mins2 = 0;
        }

        if (mins1 == 2 && mins2 == 10)
        {
            mins1 = 3;
            mins2 = 0;
        }

        if (mins1 == 1 && mins2 == 10)
        {
            mins1 = 2;
            mins2 = 0;
        }

        if (mins2 == 10)
        {
            mins1 = 1;
            mins2 = 0;
        }
    }

    if (seconds1 == 4 && seconds2 == 10)
    {
        seconds1 = 5;
        seconds2 = 0;
    }

    if (seconds1 == 3 && seconds2 == 10)
    {
        seconds1 = 4;
        seconds2 = 0;
    }

    if (seconds1 == 2 && seconds2 == 10)
    {
        seconds1 = 3;
        seconds2 = 0;
    }

    if (seconds1 == 1 && seconds2 == 10)
    {
        seconds1 = 2;
        seconds2 = 0;
    }

    if (seconds2 == 10)
    {
        seconds1 = 1;
        seconds2 = 0;
    }
}