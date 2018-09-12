#include <iostream>

using namespace std;

int gcd (int n, int m);

int main()
{
    int n, m;
    cout << "Enter the first number:";
    cin >> n;
    cout << "Enter the second number:";
    cin >> m;
    cout <<  gcd (n, m);
    return 0;
}
int gcd (int n, int m)
{
    if (m !=0)
        return gcd ( m, n % m);
    else
        return n;
}
