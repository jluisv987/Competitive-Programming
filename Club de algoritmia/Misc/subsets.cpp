#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

  int s,b,c,d,aux,cd=0,ci=0;
  cin>>s>>b;
  vector<int>bud(1000000,0);
  while(s!=0,b!=0)
  {
      for(int i=0;i<s;i++)
        bud[i]=1;
      while(b--)
      {
          cin>>c>>d;
          if(d<c)
            swap(c,d);
          for(aux=c-1;aux<d;aux++)
          {
              bud[aux]=0;
          }
          for(int i=0;i<s;i++)
          {
              cout<<bud[i];
          }
          cout<<endl;
          //compañero derecho
          if(d==b)
          {
              if(bud[d-1]==1)
                cd=d;
          }
          for(int i=d-1;i<b-1;i++)
          {
              if(bud[i+1]==1)
                cd=i;
          }

          if(c==1)
          {
              if(bud[c-1]==1)
                ci=c;
          }
          for(int i=c-1;i==0;i--)
          {
              if(bud[i-1]==1&&i!=0)
                ci=i;
          }
          if(ci==0)
            cout<<"* ";
          else
            cout<<ci+1;
          if(cd==0)
            cout<<"*"<<endl;
          else
            cout<<cd+1<<endl;
          cd=0;
          ci=0;
      }
      cout<<"-"<<endl;
      cin>>s>>b;

  }

  return 0;
}
