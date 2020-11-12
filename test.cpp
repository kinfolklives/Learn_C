#include <iostream>
using namespace std;

int funcBool();

int main()
{
    int i = funcBool();
    cout << " Value is: " << i << endl;
    return 0;
}

int funcBool()
{
    int first = 100;
    if (first = 10)
    {
        cout << " value is 10" << endl;
    }
    else if (first == 30)
    {
        cout << "Value is 30" << endl;
    }
    else
    {
        cout << "Value is not matching" << endl;
    }
    return first;
}