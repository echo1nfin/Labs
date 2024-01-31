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
    int p, q;
    cin >> p >> q;
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
    for (int i = p; i <= p + (q-p) / 2; i++)
    {
        int n = a[i];
        a[i] = a[q + p - i];
        a[q + p - i] = n;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    system("pause");
}



