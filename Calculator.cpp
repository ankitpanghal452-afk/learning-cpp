#include <iostream>
#include <cmath>

using namespace std;

// Function declarations
void showMenu();

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double remainder(int a, int b);
double power(double a, double b);
double squareRoot(double a);
double percentage(double value, double percent);


int main() {

    int choice;
    double num1, num2;
    char again;

    cout << "========================================\n";
    cout << "           C++ CALCULATOR\n";
    cout << "========================================\n";


    do {

        showMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;


        switch (choice) {

            // Addition
            case 1:

                cout << "\nEnter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << "Result = "
                     << add(num1, num2)
                     << endl;

                break;


            // Subtraction
            case 2:

                cout << "\nEnter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << "Result = "
                     << subtract(num1, num2)
                     << endl;

                break;


            // Multiplication
            case 3:

                cout << "\nEnter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << "Result = "
                     << multiply(num1, num2)
                     << endl;

                break;


            // Division
            case 4:

                cout << "\nEnter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0) {

                    cout << "Error: Cannot divide by zero!"
                         << endl;

                }
                else {

                    cout << "Result = "
                         << divide(num1, num2)
                         << endl;
                }

                break;


            // Remainder
            case 5: {

                int a, b;

                cout << "\nEnter first integer: ";
                cin >> a;

                cout << "Enter second integer: ";
                cin >> b;

                if (b == 0) {

                    cout << "Error: Cannot find remainder by zero!"
                         << endl;

                }
                else {

                    cout << "Result = "
                         << remainder(a, b)
                         << endl;
                }

                break;
            }


            // Power
            case 6:

                cout << "\nEnter base: ";
                cin >> num1;

                cout << "Enter exponent: ";
                cin >> num2;

                cout << "Result = "
                     << power(num1, num2)
                     << endl;

                break;


            // Square Root
            case 7:

                cout << "\nEnter number: ";
                cin >> num1;

                if (num1 < 0) {

                    cout << "Error: Square root of a negative "
                         << "number is not possible."
                         << endl;

                }
                else {

                    cout << "Result = "
                         << squareRoot(num1)
                         << endl;
                }

                break;


            // Percentage
            case 8:

                cout << "\nEnter value: ";
                cin >> num1;

                cout << "Enter percentage: ";
                cin >> num2;

                cout << num2
                     << "% of "
                     << num1
                     << " = "
                     << percentage(num1, num2)
                     << endl;

                break;


            // Exit
            case 9:

                cout << "\nThank you for using the calculator!"
                     << endl;

                return 0;


            // Invalid choice
            default:

                cout << "\nInvalid choice!"
                     << endl;

                cout << "Please select a number between 1 and 9."
                     << endl;
        }


        cout << "\n----------------------------------------\n";

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again;

        cout << endl;


    } while (again == 'y' || again == 'Y');


    cout << "========================================\n";
    cout << "          Calculator Closed\n";
    cout << "========================================\n";


    return 0;
}


// ========================================
// Display Menu
// ========================================

void showMenu() {

    cout << "\n========================================\n";
    cout << "              MAIN MENU\n";
    cout << "========================================\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Remainder\n";
    cout << "6. Power\n";
    cout << "7. Square Root\n";
    cout << "8. Percentage\n";
    cout << "9. Exit\n";

    cout << "========================================\n";
}


// ========================================
// Addition
// ========================================

double add(double a, double b) {

    return a + b;
}


// ========================================
// Subtraction
// ========================================

double subtract(double a, double b) {

    return a - b;
}


// ========================================
// Multiplication
// ========================================

double multiply(double a, double b) {

    return a * b;
}


// ========================================
// Division
// ========================================

double divide(double a, double b) {

    return a / b;
}


// ========================================
// Remainder
// ========================================

double remainder(int a, int b) {

    return a % b;
}


// ========================================
// Power
// ========================================

double power(double a, double b) {

    return pow(a, b);
}


// ========================================
// Square Root
// ========================================

double squareRoot(double a) {

    return sqrt(a);
}


// ========================================
// Percentage
// ========================================

double percentage(double value, double percent) {

    return (value * percent) / 100;
}