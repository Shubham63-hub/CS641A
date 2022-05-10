#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, p, k;
    vector<string> mat(5);
    string key = "CRYPTANALYSIS";
    map<char, pair<int, int>> mp;
    n = key.length();
    k = 0;
    mat[0] = "CRYPT";
    mat[1] = "ANLSI";
    mat[2] = "BDEFG";
    mat[3] = "HKMOQ";
    mat[4] = "UVWXZ";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            mp[mat[i][j]] = {i, j};
    }
    char a, b;
    while (cin >> a >> b)
    {
        int row1, col1, row2, col2;
        row1 = mp[a].first;
        col1 = mp[a].second;
        row2 = mp[b].first;
        col2 = mp[b].second;
        if (row1 == row2)
            cout << mat[row1][(col1 - 1 + 5) % 5] << mat[row1][(col2 - 1 + 5) % 5];
        else if (col1 == col2)
            cout << mat[(row1 - 1 + 5) % 5][col1] << mat[(row2 - 1 + 5) % 5][col2];
        else
            cout << mat[row1][col2] << mat[row2][col1];
    }
    return 0;
}



/* 
 INPUT:
 DFULYPXOCQDLFWCRUBHEDYCQDYGLNXDYLEGIYIGLMPCQDYFLYFNHHXPZCQFYNILXKPBNDCBANBBHCNPQFQCQPKZBKOLCPMCUNUGYMBIPYDIDCQOXYCMBLDZPAULHDFYCXOALGRMBFWGIPMXBNTIPZLSWSLFWFEPQZCYGYKIBATXMNKIPMBYD
 
 
 OUTPUT:
 
 
 BEWARYOFTHENEXTCHAMBERTHEREISVERYLITTLEIOYTHERESPEAKOUTXTHEPASSWORDABRACADABRATOGOTHROUGHMAYYOUHAVETHESTRENGTHFORTHENEXTCHAMBERTOFINDTHEEXITYOUFIRSTWILXLNEXEDTOUTTERMAGICWORDSTHERE
 
 
 */

