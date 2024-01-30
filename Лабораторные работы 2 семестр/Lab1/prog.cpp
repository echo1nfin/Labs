#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    unsigned int n;
    cout << "Введите кол-во элементов в массиве: "; cin >> n;
    const unsigned int SIZE = n;
    int max;
    int count = 0;
    int number = 0;
    
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand()%200 - 100;
        if (i == 0)
        {
            max = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
            count = 1;
            number = i;
        }
        else if (arr[i] == max)
        {
            count++;
        }
        cout << arr[i] << ' ';
    }

    cout << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Колличество максимальных элементов: " << count << endl;
    cout << "Номер первого максимального элемента: " << number + 1 << endl;
    system("pause");
}



