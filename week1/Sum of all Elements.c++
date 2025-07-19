#include<iostream>
using namespace std;
int main() {
    int i, j, sum=0;
    cout << "Enter rows and columns: ";
    cin >> i >> j;
    int arr[i][j];
    for(int a = 0; a < i; a++) {
        for(int b = 0; b < j; b++) {
            cin >> arr[a][b];
        }
    }
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            cout << arr[a][b] << " ";
            sum += arr[a][b];
        }
        cout << endl;
    }
    cout << "the sum of all elements: " << sum << endl;
    return 0;
}
