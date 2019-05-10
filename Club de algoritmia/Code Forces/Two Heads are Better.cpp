#include<bits/stdc++.h>
using namespace std;
int main()
{
  //owo
  int n,p,right,left,op;
  char m,pos,xpos,movimiento;
  string s;
  cin>>n>>left>>right;
  //cout<<"get"<<endl;
  cin.ignore();
  getline(cin,s);
  /*cout<<"op string"<<endl;
        for(int i=0;i<s.size();i++)
        cout<<s[i];
      cout<<endl;*/

  cin>>op;
  //cout<<"operaciones 1mmm: "<<op<<endl;
  cin.ignore();
  right--;
  left--;
  string::iterator r=s.begin()+(right);
  string::iterator l=s.begin()+(left);
  while(op--)
  {
    //cout<<"operaciones: "<<op<<endl;
    cin>>m;


    if(m=='Q')
    {
      cin>>pos;
      if(pos=='L')
        cout<<*l;
      else if(pos=='R')
        cout<<*r;
    }
    else if(m=='R')
    {
      reverse(l,r+1);
      //cout<<endl;
     /* cout<<"reverse"<<endl;
      for(int i=0;i<s.size();i++)
        cout<<s[i];
      cout<<endl;*/
    }
    else if(m=='S')
    {
      //cout<<"sss"<<endl;
      cin>>xpos>>movimiento;

      if(xpos=='L')
      {

        if(movimiento=='R')
        {
           // cout<<"owo"<<endl;
            left+=1;
            l=s.begin()+(left);

        }

        else if(movimiento=='L')
        {
            left-=1;
            l=s.begin()+(left);
        }
        //cout<<"s: "<<*l<<endl;

      }
      else if(xpos=='R')
      {

        if(movimiento=='R')
        {
            //cout<<"uwu"<<endl;
            right=right+1;
            r=s.begin()+(right);
        }
        else if(movimiento=='L')
        {
            right=right-1;
            r=s.begin()+(right);
        }
        //cout<<"s: "<<*r<<endl;

      }
    }

  }
  cout<<endl;
  //cout<<pos;
  return 0;
}
