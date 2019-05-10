#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int>uwu;
  stack<int>owo;
  int n,aux,max_uwu=0,aux_top;
  while(cin>>n)
  {
    if(n==1)
    {
      cin>>aux;
      uwu.push(aux);
      if(aux>max_uwu)
        max_uwu=aux;
    }
    else if(n==2&&uwu.size()>0)
    {
      aux_top=uwu.top();
      uwu.pop();
      if(aux_top==max_uwu)
      {
        max_uwu=0;
        //nuevo max_uwu owo
        while(uwu.size()!=0)
        {
          aux_top=uwu.top();
          if(aux_top>max_uwu)
          {
            max_uwu=aux_top;
          }
          owo.push(aux_top);
          uwu.pop();
        }
        while(owo.size()!=0)
        {
          aux_top=owo.top();
          uwu.push(aux_top);
          owo.pop();
        }
      }



    }

    else if(n==3)
    {
      if(uwu.size()>0)
        cout<<max_uwu<<endl;
    }
  }

}
