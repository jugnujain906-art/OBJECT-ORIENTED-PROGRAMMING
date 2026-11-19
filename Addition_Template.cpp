#include <iostream>
using namespace std;

template <typename T>
void add(T a, T b)
{
    cout << "Addition is: " << a + b << endl;
}

int main()
{
    add(10, 20);
    add(2.3, 3.3);

    return 0;
}
