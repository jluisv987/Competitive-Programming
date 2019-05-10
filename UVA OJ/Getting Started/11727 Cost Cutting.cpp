#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    vector<int> v(3);

    while(t!=0)
    {

      for (int i = 0; i < 3; i++)
      {
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      cout<<"Case "<<k<<": "<<v[1]<<endl;
      t--;
      k++;
    }
    return 0;
}
