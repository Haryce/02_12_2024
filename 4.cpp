#include <iostream>
using namespace std;
int Cub(int num) {
    return num * num * num;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int g;
    cout << "Введите число для возвращения в куб: \n";
    cin >> g;
    cout << Cub(g);
    return 0;
}
