#include <iostream>

using namespace std;

long long fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << ' ';
    }

    system("pause");
}
