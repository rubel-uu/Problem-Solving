/*                  Robiul Islam Rubel
        Depertment of Computer Science & Engineering
                    Uttara University
                   Dhaka,Bangladesh
 */

#include<bits/stdc++.h>
#define ll                long long int
#define ld                long double
#define pb                push_back
#define pf                push_front
#define ppb               pop_back
#define ppf               pop_front
#define sz                size()
#define pi                acos(-1.0)
#define mod               1000000007
#define F                 first
#define S                 second
#define C                 continue
#define min3(a,b,c)       min(a,min(b,c))
#define max3(a,b,c)       max(a,max(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define mem(a,b)          memset(a,b,sizeof(a))
#define all(a)            (a).begin(),(a).end()
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          ((a)*((b)/gcd(a,b)))
#define case(a)           cout<<"Case "<<(a)<<": "
#define point(a)          fixed<<setprecision(a)
#define get(a)            for(auto &x:a) cin>>x
#define print(a)          for(auto x:a) cout<<x<<" "; cout<<endl
#define see(x)            cout<<#x<<" = "<<x<<endl
#define uniq(a)           sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define big(a)            transform((a).begin(),(a).end(),(a).begin(),::toupper)
#define small(a)          transform((a).begin(),(a).end(),(a).begin(),::tolower)
#define ischar(a)         (('a'<=a&&a<='z')('A'<=a&&a<='Z'))
#define isvowel(a)        (a=='a'|a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
#define fast              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define tc        int test; cin>>test; while(test--)
using namespace std;
const long long L = 1e18;
ll findzero(ll n)   /// here n is number p is required zero
{
  ll temp=n,f=5,count=0;
  while(f<=temp)
  {
      count+=temp/f;
      f*=5;
  }
  return count;
}

ll findnum(ll num)
{
    if(num==1)
    {
        return 5;
    }
    ll low=1,high=L,ans=-1;

    while(low<=high)
    {
        ll mid=(low+high)>>1;
        ll zero=findzero(mid);
        if(zero>num)
        {
            high=mid-1;

        }
        else if(zero<num)
        {
            low=mid+1;
        }
        else
        {
            ans=mid;
            high=mid-1;
        }

    }
   return ans;
}
int main()
{
   ll n,a,b,c,odd,even,sum,t,d=1;
   cin>>t;
   while(t--)
   {
       cin>>n;
       cout<<"Case "<<d++<<": ";
       if(findnum(n)!=-1)
       {
            cout<<findnum(n)<<endl;
       }
       else
       {
           cout<<"impossible"<<endl;
       }

   }






       return 0;
}
