#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    double a,b;
        int selectMenu;

        cout << "Input first number: ";
        cin >> a;

        cout << "Input second number: ";
        cin >> b;

        cout << "Select action: \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n You select: ";
        cin >> selectMenu;

        switch (selectMenu) {

        case 1:
             cout << "Function Addition a = " << a << " and b = " << b << " Result: " << Addition(a,b) << endl;
            break;
        case 2:
            cout << "Function Subtraction a = " << a << " and b = " << b << " Result: " << Subtraction(a,b) << endl;
            break;
        case 3:
            cout << "Function in develop" << endl;
            break;
        case 4:
            cout << "Function in develop" << endl;
            break;
        default:
            cout << "You selected a non-existent menu!" << endl;
            break;
        }

        system("pause");
    return 0;
}
