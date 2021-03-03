/*                  Robiul Islam Rubel
        Depertment of Computer Science & Engineering
                    Uttara University
                   Dhaka,Bangladesh
 */

#include<bits/stdc++.h>
#define ll                long long int

using namespace std;
string l="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void keep(int n,int d)
{
    string str="";
    int m=0;
    for(int i=0;i<n;i++)
    {
        str+=l[i];
    }
    ///cout<<"The string is : "<<str<<endl;

    sort(str.begin(),str.end());
    do
    {
        cout<<str<<endl;
        m++;
        if(m==d)
        {
            break;
        }



    }while(next_permutation(str.begin(),str.end()));


}

int main()
{
   int a,b,t,x=1;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       cout<<"Case "<<x++<<":"<<endl;
        keep(a,b);
   }

   ///print(s);





       return 0;
}
