//2-5
#include <iostream>
using namespace std;

int main() {
    // 정사각형 (5x5)
    cout << "[정사각형]" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // 직사각형 (3x7)
    cout << "\n[직사각형]" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // 삼각형
    cout << "\n[삼각형]" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}