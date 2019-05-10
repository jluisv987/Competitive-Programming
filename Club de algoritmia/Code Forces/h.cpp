#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,k,aux,sd=0,amigos=0,l,maux;
    vector<int>ss(1001) ;
    cin>>n>>m>>k;
    for(int i=0;i<m+1;i++)
    {
        cin>>ss[i];
    }
    for(int i=0;i<m+1;i++)
    {
       // cout<<s[1]<<" ";
    }
    //cout<<endl;
    l=0;
    maux=m;
    while(m--)
    {

        aux=ss[l]^ss[maux];
        //cout<<ss[l]<<" ^ "<<ss[maux]<<"="<<aux<<endl;
        while (aux != 0)
        {
          aux = aux & (aux - 1);
          sd++;
        }
        //cout<<sd<<endl;
        if(sd<=k)
        {
           amigos++;
        }

        sd=0;
        l++;
    }

    cout<<amigos;

    return 0;
}
