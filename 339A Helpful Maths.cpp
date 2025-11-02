/*-------------------------------------------------------------------------------------------
            "Bismillahir Rahmanir Rahim"
            "Read In the name of Allah, the most kind, the most merciful, who created us!!!"
            "Author: Foyjul Islam Raju"
-------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    sort(str.begin(),str.end());

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+')
        {
            continue;
        }
        cout<<str[i];
        if(i<str.size()-1)
        {
             cout<<"+";
        }        
    }
    return 0;

}
