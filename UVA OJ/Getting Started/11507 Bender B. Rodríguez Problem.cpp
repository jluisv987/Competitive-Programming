#include<bits/stdc++.h>
using namespace std;
int main()
{
  int co,op=3;
  char s,l,est;

  cin>>co;
  int ope=co-1;
//operaciones en el cable
  while(co !=0)
  {

    while(ope !=0)
    {
      cin>>s>>l;
      if(s!='N'&&s!='O')
      {
        if(op==3) //operacion inicial
        {
          est=l;
          if(s=='+')
            op=0;
          else
            op=2;
        }
        else if(est==l || op==1)//siguientes operaciones
        {
          est=l;
          if(s=='+')
            op=(op+1)%4;
          else
          {
            op--;
            if(op==-1)
              op=3;
          }
        }

      }
      ope--;

    }
    if(op==1)
      cout<<"-x"<<endl;
    else if(op==3)
      cout<<"+x"<<endl;
    else if(op==0)
      cout<<"+"<<est<<endl;
    else if(op==2)
      cout<<"-"<<est<<endl;
    op=3;

    cin>>co;
    ope=co-1;
  }
  return 0;

}
