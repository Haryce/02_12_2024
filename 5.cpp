#include <iostream>
using namespace std;
int Max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int g, f;
    cout << "Введите два числа: ";
    cin >> g;
    cin >> f;
    cout << "Максимальное число: " << Max(g, f);
    return 0;
}