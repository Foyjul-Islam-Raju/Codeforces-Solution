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
    int n,count=0;
    cin>>n;

    int a[n],b[n],c[n];

    for(int i=0; i<n; i ++)
    {
        cin>>a[i]>>b[i]>>c[i];

        if(a[i]+b[i]>1 || a[i]+c[i]>1 || b[i]+c[i]>1 || a[i]+b[i]+c[i]>1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
