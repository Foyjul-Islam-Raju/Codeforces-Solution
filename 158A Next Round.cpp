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
    int t,n,count=0;
    cin>>t>>n;

    int a[1000];

    for(int i=1; i<=t; i++)
    {
        cin>>a[i];
        
        if(a[i]>=a[n] && a[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}