#include <bits/stdc++.h>

using namespace std;

int main ()
{
  map < char, int >mp;
  string s;
  int count = 0;
  vector<pair<int,char>> freq;
  while (cin >> s)
 {
    for (char c : s)
	{
	  if (c >= 'a' && c <= 'z')
	  {
	    mp[c]++;
	    count++;
	  }
	    
	  if (c >= 'A' && c <= 'Z')
	  {
	      char b = tolower (c);
	      mp[b]++;count++;
	  }
	}
	cout<<s;
 }
	for(char c = 'a';c <= 'z';c++)
	    freq.push_back({mp[c],c});
	
	sort(freq.begin(),freq.end());
    cout << endl;
    for(int i = 25;i >= 0;i--){
	    cout << freq[i].second << " " << freq[i].first << " " <<(freq[i].first/(float)count)*100 << endl;
	}
	
  return 0;
}


/* Progaram input:- 
omkf pi hdn cmgef icphsck .H krg vphqkc c,
fic mco kqgf ioqag eo qfcmckf oq ficpihdn
cm .Kg dcgeficu hfcm pi hdn cmklo uuncdgmc
oqfc mc kfoq afihqfiokgq c!Fi cpgy cvkc yeg 
mfio kdck kha cokh kodjuck vn k fofvfo
gqpojicmoqli opiyoa of kihsc nccqki oefc
ynr2 juhpck. Fi c jhkklgm yok oMxr9V1x ya
flofigvffic xvgfck. Fio kokfice

*/

/*
program output:-

omkfpihdncmgeficphsck.Hkrgvphqkcc,ficmcokqgfioqageoqfcmckfoqficpihdncm.Kgdcgeficuhfcmpihdncmklouuncdgmcoqfcmckfoqafihqfiokgqc!Ficpgycvkcyegmfiokdckkhacokhkodjuckvnkfofvfogqpojicmoqliopiyoaofkihscnccqkioefcynr2juhpck.FicjhkklgmyokoMxr9V1xyaflofigvfficxvgfck.Fiokokfice
c 36 13.9535
f 28 10.8527
k 27 10.4651
o 25 9.68992
i 22 8.52713
g 14 5.42636
m 13 5.03876
h 13 5.03876
q 12 4.65116
p 9 3.48837
v 7 2.71318
n 7 2.71318
d 7 2.71318
y 6 2.32558
e 6 2.32558
u 5 1.93798
a 5 1.93798
l 4 1.55039
j 4 1.55039
x 3 1.16279
r 3 1.16279
s 2 0.775194
z 0 0
w 0 0
t 0 0
b 0 0


*/ 
