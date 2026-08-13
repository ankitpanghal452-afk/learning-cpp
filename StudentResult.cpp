#include <iostream>
using namespace std;

// Function to calculate total marks
int calculateTotal(int marks[], int subjects)
{
    int total = 0;

    for (int i = 0; i < subjects; i++)
    {
        total += marks[i];
    }

    return total;
}

// Function to calculate percentage
double calculatePercentage(int total, int subjects)
{
    return (double)total / subjects;
}

// Function to determine grade
char calculateGrade(double percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

// Function to display result
void displayResult(string name, int marks[], int subjects)
{
    int total = calculateTotal(marks, subjects);
    double percentage = calculatePercentage(total, subjects);
    char grade = calculateGrade(percentage);

    cout << "\n----- Student Result -----\n";
    cout << "Name       : " << name << endl;
    cout << "Total Marks: " << total << "/" << subjects * 100 << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    if (grade == 'F')
        cout << "Result     : Fail" << endl;
    else
        cout << "Result     : Pass" << endl;
}

int main()
{
    string name;
    int subjects = 5;
    int marks[5];

    cout << "===== Student Result System =====\n";

    cout << "Enter student name: ";
    cin >> name;

    cout << "\nEnter marks for 5 subjects:\n";

    for (int i = 0; i < subjects; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks! Enter marks between 0 and 100.\n";
            i--;
        }
    }

    displayResult(name, marks, subjects);

    return 0;
}