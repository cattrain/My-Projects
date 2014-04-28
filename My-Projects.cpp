//#include <name> for libraries included in the compiler
//#include "name" for other files in the same directory
#include <iostream>
#include "version.h"
#include "learn.h"


//the std namespace includes the standard object files, like iostream and stdio
using namespace std;

//sum needs to be a float to return a float
float sum (float a,float b){
    return a + b;
}

int main(){
    //You don't have to declare variables at the top. It is usually a good idea to declare as locally as possible.

    cout << "Build number: " << AutoVersion::FULLVERSION_STRING << endl << "Built on: " << VersionStyling() << " "
        << AutoVersion::DATE << " " << AutoVersion::YEAR << endl << "=-----------------------------------------------=" << endl;

    float one;
    float two;
    float three;
    int four;

    //in to the right, out to the left
    cin >> one;
    cin >> two;
    // calling another function the value will equal whatever the is returned
    three = sum(one, two);
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
