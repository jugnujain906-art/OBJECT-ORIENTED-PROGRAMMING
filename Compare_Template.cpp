#include <iostream>
using namespace std;

template <typename T>
void compare(T a, T b)
{
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "b is greater than a" << endl;
    }
}

int main()
{
    compare(4, 7);
    compare(9.6, 4.3);
    compare(55, 34);

    return 0;
}
