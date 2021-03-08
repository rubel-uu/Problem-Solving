#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  stack<char>a;
  if(s.size()==0)
  {
      cout<<"No"<<endl;
      return 0;
  }
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
                a.push(s[i]);
        }
      else
      {
          if(a.empty())
          {
              cout<<"No"<<endl;
              return 0;
          }
          if(s[i]==')')
          {
              if(a.top()=='(')
              {
                  a.pop();
              }
          }
          if(s[i]=='}')
          {
              if(a.top()=='{')
                {
                    a.pop();
                }
          }
          if(s[i]==']')
          {
              if(a.top()=='[')
              {
                  a.pop();
              }
          }
      }
  }
  if(a.empty())
  {
      cout<<"Yes"<<endl;
  }
  else
  {
      cout<<"No"<<endl;
  }
    return 0;
}
