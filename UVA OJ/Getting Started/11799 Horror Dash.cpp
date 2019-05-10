#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int t;
  int a,m=-1,sc,tc=1;
  vector<int> v;
  cin>>t;
  while(t!=0)
  {
    cin>>sc;
    while(sc!=0)
    {
      cin>>a;
      if(a>m)
        m=a;
      sc--;
    }
    cout<<"Case "<<tc<<": "<<m<<endl;
    t--;
    m=-1;
    tc++;
  }
  return 0;
}
