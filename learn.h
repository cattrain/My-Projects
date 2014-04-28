#ifndef LEARN_H_INCLUDED
#define LEARN_H_INCLUDED

#include <iostream>
#include <string>
#include "version.h"

using namespace std;

string VersionStyling(){

    int input;
    input = *AutoVersion::MONTH;
    string Month;

    cout << *AutoVersion::MONTH << " " << &AutoVersion::MONTH << " " << AutoVersion::MONTH << " " << input << " test" << endl;

    switch(input){
        case 01: Month ="January";
        case 02: Month ="February";
        case 03: Month ="March";
        case 04: Month ="April";
        case 05: Month ="May";
        case 06: Month ="June";
        case 07: Month ="July";
        case 8: Month ="August";
        case 9: Month ="September";
        case 10: Month ="October";
        case 11: Month ="November";
        case 12: Month ="December";
    }

    return Month;
}

#endif // LEARN_H_INCLUDED
