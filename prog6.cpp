#include <iostream>

using namespace std;

int add(const int a, const int b)
{
    return (a + b);
}

int subtract(const int a, const int b)
{
    return (a - b);
}

int main()
{
    int a = 1;
    int b = 1;
    add(a, b);
    cout << a + b << endl;
    subtract(a, b);
    cout << a - b << endl;
}