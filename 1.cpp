#include <iostream>
using namespace std;
void Pryamougl (int h, int w){
for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
        cout << "*"; 
    }
    cout << endl; 
}
}

int main() {
    setlocale(LC_ALL, "Russian");
    int N, K;
    cout << "Введите высоту прямоугольника (N): ";
    cin >> N;
    cout << "Введите ширину прямоугольника (K): ";
    cin >> K;
    Pryamougl(N, K);
    return 0;
}
