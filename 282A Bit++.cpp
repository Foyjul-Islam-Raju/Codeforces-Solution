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
    int n;
    cin>>n;

    int X=0;
    for (int i=0; i<n; i++)
    {
        string str;
        cin>>str;

        if(str=="++X" || str=="X++" )
        {
            X=X+1;
        }
        else if(str=="X--" || str=="--X")
        {
            X=X-1;
        }
    }
    cout<<X<<endl;
}