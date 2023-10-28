#include <iostream>
using namespace std;

int main() {
    int arr1[3][3], arr2[3][3], result[3][3];

    cout << "Enter elements of matrix 1" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of matrix 2" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    // Initialize result matrix to all zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    cout << "Result matrix" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
