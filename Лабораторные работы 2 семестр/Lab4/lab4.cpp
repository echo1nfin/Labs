#include <iostream>
#include <time.h>

using namespace std;

// Функция для печати элементов массива от k до k+1
void printArray(int arr[], int size, int k)
{
    for (int i = k; i <= k + 1; ++i)
    {
        cout << arr[i % size] << " ";
    }
    cout << endl;
}

// Функция для упорядочивания элементов по убыванию
void sortDescending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j+1] > arr[j])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Функция для удаления нечетных элементов из кольца
void removeOdd(int arr[], int& size)
{
    int newSize = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i]%2 == 0)
        {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int size, k;

    // Ввод размера массива
    cout << "Введите размер массива: ";
    cin >> size;
    int arr[size];

    cout << "Массив: ";
    // Ввод элементов массива
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand()%100 - 50;
        cout << arr[i] << ' ';
    }
    cout << endl;

    // Ввод значения k
    cout << "Введите значение k: ";
    cin >> k;

    // 1) Реализация однонаправленного кольца
    // 2) Распечатка массива от k до k+1
    cout << "Полученный массив от k до k+1: ";
    printArray(arr, size, k);

    // 3) Упорядочивание элементов по убыванию
    sortDescending(arr, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // 4) Удаление нечетных элементов
    removeOdd(arr, size);

    cout << "Массив после удаления нечётных чисел: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // 5) Распечатка массива от k до k+1
    cout << "Полученный массив от k до k+1 после удаления нечетных элементов: ";
    printArray(arr, size, k);
    system("pause");
    return 0;
}
