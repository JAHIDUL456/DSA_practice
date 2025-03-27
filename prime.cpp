#include<iostream>
using namespace std;

int main() {
    int r;

    cout << "Enter the range: ";
    cin >> r;

    for(int i = 2; i <= r; i++) {
        bool isPrime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}