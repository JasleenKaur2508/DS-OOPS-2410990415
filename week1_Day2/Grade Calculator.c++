#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5, total, average;
    char grade;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}
