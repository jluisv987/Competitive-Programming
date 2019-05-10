#include<bits/stdc++.h>
using namespace std;
int main()
{
  int j=0,cont=0;
  string hello;
  string hello2;
  hello2.push_back('h');
  hello2.push_back('e');
  hello2.push_back('l');
  hello2.push_back('l');
  hello2.push_back('o');
  getline(cin,hello);
  for(int i=0;i<hello.size();i++)
  {
    if(hello[i]==hello2[j])
    {
      j++;
      cont++;
    }
    if(cont==5)break;
  }
  if(cont==5)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
