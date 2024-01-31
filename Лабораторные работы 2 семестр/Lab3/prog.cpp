#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int c;
    cin >> c;
    const unsigned SIZE = c;
    int k;
    cin >> k;
    int last;
    int a[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        a[i] = rand()%100 - 50;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        last = a[0];
        for (int j = 0; j < SIZE - 1; j++)
        {
            a[j] = a[j+1];
        }
        a[SIZE-1] = last;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    system("pause");
}



