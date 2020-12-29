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
    string str;
    cin>>str;

    int count=0;
    for(int i=0; i<str.size(); i++)
    {
        for(int j=i+1; j<str.size(); j++)
        {
            if(str[i]==str[j])
            {
                count++;
                break;
            }
        }
    }
    int s=str.size()-count;
    
        if(s%2==0)
        {
            cout<<"CHAT WITH HER!\n";
        }
        else
        {
            cout<<"IGNORE HIM!\n";
        }
}