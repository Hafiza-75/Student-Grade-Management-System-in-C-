#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int marks[5]; // marks for 5 subjects
    int total = 0;
    float percentage;
    char grade;

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter marks for 5 subjects (out of 100):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Please enter between 0 and 100." << endl;
            return 1;
        }

        total += marks[i];
    }

    percentage = total / 5.0;

    // Assigning grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output the result
    cout << "\n----- Result -----" << endl;
    cout << "Name       : " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    return 0;
}

