#include <iostream>
using namespace std;

int main() {
    float temp, result;
    int choice;

    cout << "Temperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Celsius to Kelvin\n";
    cout << "3. Fahrenheit to Celsius\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "5. Kelvin to Celsius\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = (temp * 9/5) + 32;
            cout << "Fahrenheit: " << result << endl;
            break;

        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = temp + 273.15;
            cout << "Kelvin: " << result << endl;
            break;

        case 3:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5/9;
            cout << "Celsius: " << result << endl;
            break;

        case 4:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = ((temp - 32) * 5/9) + 273.15;
            cout << "Kelvin: " << result << endl;
            break;

        case 5:
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = temp - 273.15;
            cout << "Celsius: " << result << endl;
            break;

        case 6:
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = ((temp - 273.15) * 9/5) + 32;
            cout << "Fahrenheit: " << result << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
