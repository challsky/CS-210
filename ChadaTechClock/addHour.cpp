#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Function to add an hour to the clocks
void addHour(int &clock12Hour1, int &clock12Hour2, int &clock24Hour1, int &clock24Hour2, string &ampm)
{
    

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