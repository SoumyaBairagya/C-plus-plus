#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    while (1)
    {
        char input;
        float first, second;
        float add, subtract, multiply, divide, power, sq;
        cout << "--------------------------\nEnter the input character\n--------------------------" << endl;
        cout << " + Addition\n - Subtraction\n * Multiplication\n / Division\n s Square Root\n p Power\n q quit" << endl;
        cout << "--------------------------" << endl;
        cin >> input; 
        cout << "--------------------------" << endl;
        cout << "You have entered " << input << endl;
        cout << "--------------------------" << endl;

        switch (input)
        {
        case 'q':
            cout << "Quitting the program.....\n" << endl;
            goto end;
            break;
        
        case '+':
            cout << "Enter first value" << endl;
            cin >> first;
            cout << "Enter second value" << endl;
            cin >> second;
            add = first + second;
            cout << "Addition is " << add << endl;
            break;

        case '-':
            cout << "Enter first value" << endl;
            cin >> first;
            cout << "Enter second value" << endl;
            cin >> second;
            subtract = first - second;
            cout << "Subtraction is " << subtract << endl;
            break;

        case '*':
            cout << "Enter first value" << endl;
            cin >> first;
            cout << "Enter second value" << endl;
            cin >> second;
            multiply = first * second;
            cout << "Multiplication is " << multiply << endl;
            break;

        case '/':
            cout << "Enter first value" << endl;
            cin >> first;
            cout << "Enter second value" << endl;
            cin >> second;
            if (second == 0)
            {
                cout << "Denominator can't be negative" << endl;
            }
            else
            {
                divide = first / second;
                cout << "Division is " << divide << endl;
            }
            break;

        case 's':
            cout << "Enter value" << endl;
            cin >> first;
            sq = sqrt(first);
            cout << "Square root is " << sq << endl;
            break;

        case 'p':
            cout << "Enter first value" << endl;
            cin >> first;
            cout << "Enter power value" << endl;
            cin >> second;
            power = pow(first,second);
            cout << "Power is " << power << endl;
            break;
        
        default:
            break;
        }
    }
    end:

    return 0;
}