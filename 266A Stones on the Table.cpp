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
    int t,count=0;
    cin>>t;

    string str;
    cin>>str;

    for( int i=0; i<t; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}