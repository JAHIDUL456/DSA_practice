#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    
    int row = 0, col = 3;
    
    while (row < 4 && col >= 0) {
        if (arr[row][col] == 33) {
            cout << "Found 33 at (" << row << ", " << col << ")" << endl;
            return 0; // Exit after finding the element
        }
        else if (arr[row][col] < 33) {
            row++; // Move down
        }
        else {
            col--; // Move left
        }
    }
    
    cout << "33 not found in the array." << endl;
    return 0;
}
