/*-------------------------------------------------------------------------------------------
            "Bismillahir Rahmanir Rahim"
            "Read In the name of Allah, the most kind, the most merciful, who created us!!!"
            "Author: Foyjul Islam Raju"
-------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.size(); i++)
    {
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
        if(s1>s2)
        {
            cout<<"1"<<endl;
        }
        else if(s1<s2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }

}
