#include <iostream>
using namespace std;

int main() 
{
    int subject1, subject2, subject3;
    int total;
    float average;
    char grade;

    
    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;

    
    total = subject1 + subject2 + subject3;
    average = total / 3.0;


    if (average >= 80) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else if (average >= 40) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}
