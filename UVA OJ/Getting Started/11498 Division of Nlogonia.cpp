#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,f,xo,yo,x,y;
  cin>>n;
  while(n!=0)
  {

    cin>>xo>>yo;
    while(n!=0)
    {
          cin>>x>>y;
          if(xo==x || yo==y)
            cout<<"divisa"<<"\n";
          else if(x<xo && y>yo)
            cout<<"NO"<<"\n";
          else if(x<xo && y<yo)
            cout<<"SO"<<"\n";
          else if(x>xo && y>yo)
            cout<<"NE"<<"\n";
          else if(x>xo && y<yo)
            cout<<"SE"<<"\n";
        n--;

    }
    cin>>n;
  }
    return 0;
}
