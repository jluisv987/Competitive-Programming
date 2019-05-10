#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n1,n2,n3,aux;
  vector<int> tam(3);
  vector<int> copia;
  stack<int>a;
  stack<int>b;
  stack<int>c;
  cin>>n1>>n2>>n3;
  cout<<"debug1\n";
  for (int i = 0; i < n1; i++)
  {
    cin>>aux;
    tam[0]+=aux;
    a.push(aux);
  }
  cout<<"debug2\n";
  for (int i = 0; i < n2; i++)
  {
    cin>>aux;
    tam[1]+=aux;
    b.push(aux);
  }
  cout<<"debug3\n";
  for (int i = 0; i < n3; i++)
  {
    cin>>aux;
    tam[2]+=aux;
    c.push(aux);
  }
  cout<<"debug\n";
  while((tam[0]!=tam[1]&&tam[0]!=tam[2])||a.size()!=0||b.size()!=0||c.size()!=0)
  {

    copia.swap(tam);
    //comparar
    sort(copia.begin(),copia.end());
    cout<<"EL tamaño menor de las pilas es"<<copia[0]<<endl;
    if(copia[0]<tam[0])
    {

      tam[0]-=a.top();
      a.pop();
    }
    if(copia[0]<tam[1])
    {
      tam[1]-=b.top();
      b.pop();
    }
    if(copia[0]<tam[2])
    {
      tam[2]-=c.top();
      c.pop();
    }
    copia.clear();

  }
  cout<<tam[0]<<endl;

}
