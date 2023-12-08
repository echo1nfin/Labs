#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    int i, n;
    double sum, u, x;
    u = 1;
    sum = 0;
    i = 0;
    cout << "Введите количество элементов -> ";
    cin >> n;
    cout << "Введите значение x -> ";
    cin >> x;
    while (i < n){
        i++;
        sum += u;
        u = (u * x) / i;
    }
    cout << "Сумма -> "<< sum << endl;
}
