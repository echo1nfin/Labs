#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    int i, index, max, n, num, count;
    max = -1;
    index = 1;
    i = 1;
    cout << "Введите кол-во элементов -> ";
    cin >> n;
    while (n < 0){
        cout << "Введите кол-во элементов -> ";
        cin >> n;
    }
    cout << "Последовательно введите элементы последовательности" << endl;
    while (i <= n){
        cin >> num;
        if (num > max){
            max = num;
            count = 1;
            index = i;
        }
        else {
            if (num == max){
                count += 1;
            }
        }
        i++;
    }
    cout <<"Максимальный элемент последовательности -> "<< max << endl;
    cout <<"Количество максимальных элементовІ -> "<< count << endl;
    cout << "Номер первого максимального элемента -> " << index << endl;
}
