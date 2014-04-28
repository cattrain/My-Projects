#ifndef LEARN_H_INCLUDED
#define LEARN_H_INCLUDED

#include <iostream>
#include <string>
#include "version.h"

using namespace std;

string VersionStyling(){

    int input;
    input = AutoVersion::MONTH[1] - AutoVersion::MONTH[0];
    string Month;

    switch(4){
        case 1: Month ="January";break;
        case 2: Month ="February";break;
        case 3: Month ="March";break;
        case 4: Month ="April";break;
        case 5: Month ="May";break;
        case 6: Month ="June";break;
        case 7: Month ="July";break;
        case 8: Month ="August";break;
        case 9: Month ="September";break;
        case 10: Month ="October";break;
        case 11: Month ="November";break;
        case 12: Month ="December";break;
        default: Month ="ERROR";break;
    }

    return Month;
}

#endif // LEARN_H_INCLUDED
