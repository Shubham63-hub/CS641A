#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
    while (cin >> s)
  {
       for (char c : s)
       {
           if (c >= 'A' && c <= 'Z')
               cout << c;
       }
   }
  return 0;
}



/* 
 INPUT:
 DF ULYP XO CQD LFWC RUBHEDY, CQDYG LN XDYL EGIYIG LMP CQDYF.
 LYFNH HXPZ CQF YNILXKPB "NDCB_AN_BBHCN" PQ FQ CQPKZBK. OLC PMC
 UNUG YMB IPYDIDCQ OXY CMB LDZP AULHDFY. CX OALG RMB FWGI PMX
 BNTIP ZLSWS LFWFE PQ ZCYGY KIBAT XMNKI PMBYD.
 
 OUTPUT:
 
 DFULYPXOCQDLFWCRUBHEDYCQDYGLNXDYLEGIYIGLMPCQDYFLYFNHHXPZCQFYNILXKPBNDCBANBBHCNPQFQCQPKZBKOLCPMCUNUGYMBIPYDIDCQOXYCMBLDZPAULHDFYCXOALGRMBFWGIPMXBNTIPZLSWSLFWFEPQZCYGYKIBATXMNKIPMBYD
 
 */
