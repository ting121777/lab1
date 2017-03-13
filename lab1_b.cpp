#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "please enter a number = ";
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n - (n / 2)*2 == 0)
            n = n / 2;
        else if (n - (n / 2)*2 == 1) 
            n = 3*n + 1;

        cout << n << " ";
    }
    return 0;
}

