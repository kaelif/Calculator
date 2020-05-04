#include <iostream>
#include "Computer.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Computer c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (x == 0 && oper == '/' && y == 0) {
            cout << "This is indeterminant, maybe try L'Hopital's rule?" << endl;
            continue;
        }
        else if (oper == '/' && y == 0) {
            cout << "Unlike imaginary numbers, this one isn't defined" << endl;
            continue;
        }
        else
        {
            result = c.Compute(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }

    return 0;
}