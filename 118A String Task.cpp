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

      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' ||s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y')
          {
              s[i]=s[i+1];
              continue;
          }
          cout<<".";
          putchar(tolower(s[i]));
      }
    return 0;
}