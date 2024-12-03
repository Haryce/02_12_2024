#include <iostream>
using namespace std;
int TR(int a) {
    return a >= 0;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int f;
    cout << "Введите число: \n"; 
    cin >> f;
    if (TR(f)) {
        cout << "Значение положительное" << endl;
    }
    else {
        cout << "Значение отрицательное" << endl;
    }
    return 0;
}