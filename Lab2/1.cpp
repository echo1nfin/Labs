#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    int i, index, max, n, num, count;
    max = -1;
    index = 1;
    i = 1;
    cout << "������� ���-�� ��������� -> ";
    cin >> n;
    while (n < 0){
        cout << "������� ���-�� ��������� -> ";
        cin >> n;
    }
    cout << "��������������� ������� �������� ������������������" << endl;
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
    cout <<"������������ ������� ������������������ -> "<< max << endl;
    cout <<"���������� ������������ ��������� -> "<< count << endl;
    cout << "����� ������� ������������� �������� -> " << index << endl;
}
