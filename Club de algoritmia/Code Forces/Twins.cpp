#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n,aux,sum=0,total=0,cont=0;
  cin>>n;
  while(n--)
  {
    cin>>aux;
    v.push_back(aux);
    total+=aux;
  }
  sort(v.begin(),v.end(),greater<int>());
  for(int i=0;i<v.size();i++)
  {
    sum+=v[i];
    cont++;
    if(sum>(total-sum))
      break;

  }
  cout<<cont<<endl;
}
