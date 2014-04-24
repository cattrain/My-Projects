#include <iostream>

using namespace std;

int main()
{
    float one;
    float two;
    float three;
    int four;

    cin >> one;
    cin >> two;
    three = one + two;
    cout << three;

    if (three<10)
    {
        four = 1;
    }

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
    else
    {
        four = 6;
    }

    switch (four)
    {
        case 1: cout << "one";
        case 2: cout << "two";
        case 3: cout << "three";
        case 4: cout << "four";
        case 5: cout << "five";
    }

    return 0;
}
