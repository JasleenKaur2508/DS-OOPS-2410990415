#include<iostream>
using namespace std;
int main() {
    int i, j;
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
        }
        cout << endl;
    }
    return 0;
}
