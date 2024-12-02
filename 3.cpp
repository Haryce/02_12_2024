#include <iostream>
using namespace std;
int prost(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int g;
    cout << "Введите число для проверки его на простое: \n";
    cin >> g;
    if (prost(g)) {
        cout << "\nЧисло простое";
    }
    else {
        cout << "Число не является простым";
    }
    return 0;
}