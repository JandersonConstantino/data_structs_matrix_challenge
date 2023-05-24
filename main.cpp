#include <iostream>

using namespace std;

const int vector_size = 3;

int main() {
    int vector_user_input[vector_size][vector_size];

    for (int i = 0; i < vector_size; i++) {
        for (int j = 0; j < vector_size; j++) {
            cout << "Please, choose a number to insert to position [";
            cout << i;
            cout << "][";
            cout << j;
            cout << "]";
            cout << ": " << endl;
            cin >> vector_user_input[i][j];
        }
    }

    for (int i = 0; i < vector_size; i++) {
        for (int j = 0; j < vector_size; j++) {
            cout << (i == j ? vector_user_input[i][j] : 0);

            if (j + 1 < vector_size) {
                cout << "|";
            }
        }

        cout << endl;

        if (i + 1 < vector_size) {
            cout << "______" << endl;
        }
    }

    return 0;
}
