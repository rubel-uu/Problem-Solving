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
string findsum(string s1,string s2)
{
     /// find the maximum length string
    if(s1.size()>s2.size())
    {
        swap(s1,s2);
    }
    /// to store the sum
    string s = "";
    int n1=s1.size(),n2=s2.size();
    /// reverse two string
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int c=0;
    for(int i=0;i<n1;i++)
    {
        int sum=(s1[i]-'0')+(s2[i]-'0')+c;  /// '0' minus for convert char to int
        s.push_back(sum%10+'0');  /// '0' add for convert int to char
        c=sum/10;
    }
    /// add remain string / larger string remain digit
    for(int i=n1;i<n2;i++)
    {
        int sum=s2[i]-'0'+c;
        s.push_back(sum%10+'0');
        c/=10;
    }
    /// if still carry present
    if(c)
    {
        s.push_back(c+'0');
    }
    /// now reverse the string
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
   ll n,odd,even,sum,t,k=1;
   cin>>t;
   while(t--)
   {
       string a,b;
       cin>>a>>b;
       cout<<"Case #"<<k++<<": ";
       cout<<findsum(a,b)<<endl;
   }





       return 0;
}
