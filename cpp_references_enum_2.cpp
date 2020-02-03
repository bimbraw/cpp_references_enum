#include <iostream>

using namespace std;

int p = 0;

int SetValue(int p)
{
    cout << "Input the value: ";
    cin >> p;
}

int main()
{
    SetValue(&p);
    return 0;
}
