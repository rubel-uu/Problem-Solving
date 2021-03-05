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
#define mx 1005
using namespace std;
bool ar[mx]={false};
vector<ll>v;
void prime()
{
    ar[0]=ar[1]=true; /// 1 means not prime
    for(ll i=4;i<=mx;i+=2)
    {
        ar[i]=true;
    }

    for(ll i=3;i*i<=mx;i+=2)
    {
       if(!ar[i])
       {
            for(ll j=i*i;j<=mx;j+=i)
        {
            ar[j]=true;
        }
       }
    }
    /*for(ll i=3;i<=mx;i+=2)
    {
        if(!ar[i])
        {
            v.pb(i);
        }
    }
    ///cout<<v.size()<<endl;
    */
}

int main()
{
    prime();
   ll n,b,c,odd,even,t,cnt,x,y;
   /*  ll sum[mx];
   sum[0]=v[0];
   for(ll i=1;i<=60000;i++)
   {
       sum[i]=sum[i-1]+v[i];
   }
*/
  cin>>n;
  ll a[n];
  x=y=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      if(!ar[a[i]])
      {
          x++;
      }
      else
          y++;

  }
  ///cout<<"Number of prime is : "<<cnt<<endl;
  cnt=min(x,y);
 x-=cnt;
 cnt+=(x/2);
 cout<<cnt<<endl;





       return 0;
}
