#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,b,h,w,weeks[14],price;
    unsigned int cprice=2000001;

    while(cin>>p>>b>>h>>w)
    {
      cprice=2000001;
      while(h != 0)
      {

        cin>>price;
        for(int i=0;i<w;i++)
        {
          cin>>weeks[i];
        }
        if(p*price<=b)
        {
          for(int i=0;i<w;i++)
          {
            if(p<=(weeks[i])&&(p*price)<cprice)
            {
              cprice = p*price;

            }
          }
        }
        h--;
      }
      if(cprice==2000001)
        cout<<"stay home\n";
      else
        cout<<cprice<<"\n";
    }


    return 0;
}
