#include <iostream>
using namespace std;
int Factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= i;
    }
    return res;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int g;
    cout << "введите число для вычисления факториала: \n";
    cin >> g;
    cout << Factorial(g);
    return 0;
}
