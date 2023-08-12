//
// Created by armon on 8/12/2023.

#include <iostream> //libary
using namespace std; // directive

int main ()
{
   char op;
   float num1, num2;

   cout << "Enter operator: +, -, *, /:";
   cin >> op;

   cout << "Enter two numbers:";
   cin >> num1 >> num2;

    switch (op) {
        case  '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;

    }



return 0;

}