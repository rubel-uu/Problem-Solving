#include<bits/stdc++.h>
using namespace std;
double area(double r,double angle)
{
    return 0.5*r*r*angle;
}
double angle(double oop_A,double oop_B,double oop_C)
{
    return acos((((oop_B*oop_B)+(oop_C*oop_C)-(oop_A*oop_A)))/(2*oop_B*oop_C));
}
void solve()
{
    double a,b,c;
    cin>>a>>b>>c;
    double s=(a+a+b+b+c+c)/2.0;
    ///cout<<"Value of s is "<<s<<endl;
    double total_area= sqrt(s*(s-a-b)*(s-b-c)*(s-c-a));
    ///cout<<"Total area is : "<<total_area<<endl;
    total_area-=area(a,angle(b+c,c+a,a+b));
    ///cout<<"Total area is : "<<total_area<<endl;
    total_area-=area(b,angle(c+a,a+b,b+c));
    ///cout<<"Total area is : "<<total_area<<endl;
    total_area-=area(c,angle(a+b,b+c,c+a));
    ///cout<<"Total area is : "<<total_area<<endl;
    cout<<fixed<<setprecision(10)<<total_area<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
