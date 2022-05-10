#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (long int i = -5623; i <= 0; i++)
    {
        for (long int j = 0; j <= 5623; j++)
        {
            // cout<< 1544*i + 5623*j << " ";
            if (1544 * i + 5623 * j == 1)
            {
                cout << i << " " << j;
                break;
            }
        }
    }
    return 0;
}

/*
OUPTPUT:
-2298 631
*/