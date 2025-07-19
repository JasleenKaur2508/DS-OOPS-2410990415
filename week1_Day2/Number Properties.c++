#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Even or Odd
    if (num % 2 == 0)
        cout << "The number is Even." << endl;
    else
        cout << "The number is Odd." << endl;

    // Positive, Negative, or Zero
    if (num > 0)
        cout << "The number is Positive." << endl;
    else if (num < 0)
        cout << "The number is Negative." << endl;
    else
        cout << "The number is Zero." << endl;

    // Single, Double or More Digits
    int absNum = abs(num); // To handle negative values
    if (absNum < 10)
        cout << "It is a Single-digit number." << endl;
    else if (absNum < 100)
        cout << "It is a Double-digit number." << endl;
    else
        cout << "It is a number with More than two digits." << endl;

    return 0;
}
