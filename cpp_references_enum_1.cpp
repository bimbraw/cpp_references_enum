#include <iostream>

using namespace std;

string name = "blablablabla";

string &blablabla = name;
string &blabla = name;
string &bla = name;

int main()
{
    cout<< "Value: " << name << " and Address:" << &name << endl;
    cout<< "Value: " << blablabla << " and Address:" << &blablabla << endl;
    cout<< "Value: " << blabla << " and Address:" << &blabla << endl;
    cout<< "Value: " << bla << " and Address:" << &bla << endl;
    
    return 0;
}
