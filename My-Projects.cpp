//#include <name> for libraries included in the compiler
//#include "name" for other files in the same directory
#include <iostream>
#include <sstream>
#include "version.h"


//the std namespace includes the standard object files, like iostream and stdio
using namespace std;

int main()
{
    //You don't have to declare variables at the top. It is usually a good idea to declare as locally as possible.
    string BUILD_VERSION;
    std::stringstream BUILD_DATE;

    BUILD_DATE = AutoVersion::MONTH << '-' << AutoVersion::DATE << '-' << AutoVersion::YEAR;
    BUILD_VERSION = AutoVersion::FULLVERSION_STRING;
    cout << "Build number: " << BUILD_VERSION << endl << "Built on " << BUILD_DATE << endl;

    float one;
    float two;
    float three;
    int four;

    //in to the right, out to the left
    cin >> one;
    cin >> two;
    three = one + two;
    cout << three;

    //if checks the variable in the parentheses for true or false, and runs inside the curly brackets if true.
    if (three<10)
    {
        four = 1;
    }
    //else if must be after if and runs if the if before is false
    else if (three<20)
    {
        four = 2;
    }

    else if (three<30)
    {
        four = 3;
    }

    else if (three<40)
    {
        four = 4;
    }

    else if (three<50)
    {
        four = 5;
    }
    //else is at the end and will always run if all else fails
    else
    {
        four = 6;
    }

    //a switch statement will start at the first point that returns true, and end when it sees a "break;".
    //"default:" can be used as a catch all.
    switch (four)
    {
        case 1: cout << "one";
        case 2: cout << "two";
        case 3: cout << "three";
        case 4: cout << "four";
        case 5: cout << "five";
    }
    //return 0 is not required, but should probably be included in main. return 0 returns an exit status of true
    return 0;
}
