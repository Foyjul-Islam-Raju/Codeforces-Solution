/*-------------------------------------------------------------------------------------------
            "Bismillahir Rahmanir Rahim"
            "Read In the name of Allah, the most kind, the most merciful, who created us!!!"
            "Author: Foyjul Islam Raju"
            "Dept. of CSE, City University, Bangladesh"
-------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    for (int i=0;i<s.size();i++)
    {
        s[i]=toupper(s[i]);
        break;
    }
    cout<<s<<endl;
}