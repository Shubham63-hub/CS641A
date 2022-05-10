#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    int temp = b;
    b = a % b;
    a = temp;
    return gcd(b, a % b);
}

int main()
{
    int a = 5623, b = 1544;
    cout << gcd(max(a, b), min(a, b));
    return 0;
}

// OUTPUT : 1