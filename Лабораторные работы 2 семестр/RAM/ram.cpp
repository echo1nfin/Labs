#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int* pa = &a;
    cout << pa << endl;
    int* pb;
    cout << pb << endl;
    pb = pa;
    cout << pb << endl;
    cout << *pb << endl;
}