#include <iostream>
using namespace std;
int cub(int num) {
    return num * num * num;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int g;
    cout << "Введите число для возвращения в куб: \n";
    cin >> g;
    cout << cub(g);
    return 0;
}