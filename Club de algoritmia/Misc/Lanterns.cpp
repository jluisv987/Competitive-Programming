#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,max,aux,naux,mina=0,maxa=0;
  cin>>n>>max;
  vector<int>lan;
  vector<int>esp;
  naux=n;
  while (n--) {
    cin>>aux;
    lan.push_back(aux);
    cout<<"cinnn"<<endl;
  }
  cout<<"hola";
  sort(lan.begin(),lan.end());
  if(lan[0]!=0)
  {
    lan.insert(lan.begin(),0);
    mina++;
  }

  cout<<"hola";
  if(lan[max-1]!=max)
  {
    lan.push_back(max);
    maxa++;
  }

  for(int i=0;i<naux-1+mina+maxa;i++)
    esp.push_back(abs(esp[i]-esp[i+1]));
  int maxe= *max_element(esp.begin(),esp.end());
  cout<<maxe<<endl;
}
