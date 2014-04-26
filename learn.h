#ifndef LEARN_H_INCLUDED
#define LEARN_H_INCLUDED

#include <iostream>
#include <string>
#include "version.h"

using namespace std;

string VersionStyling(){

    int input = AutoVersion::MONTH;
    string Month;

    if (input == 1){
        Month = "January";
    }
    else if (input == 2){
        Month = "February";
    }
    else if (input == 3){
        Month = "March";
    }
    else if (input == 4){
        Month = "April";
    }
    else if (input == 5){
        Month = "May";
    }
    else if (input == 6){
        Month = "June";
    }
    else if (input == 7){
        Month = "July";
    }
    else if (input == 8){
        Month = "August";
    }
    else if (input == 9){
        Month = "September";
    }
    else if (input == 10){
        Month = "October";
    }
    else if (input == 11){
        Month = "November";
    }
    else if (input == 12){
        Month = "December";
    }
    else{
        Month = "ERROR";
    }

    return Month;
}

#endif // LEARN_H_INCLUDED
