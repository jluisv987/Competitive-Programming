#include <bits/stdc++.h>
using namespace std;


void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    for (int i = index; i < A.size(); i++) {


        subset.push_back(A[i]);
        res.push_back(subset);
        subsetsUtil(A, res, subset, i + 1);
        subset.pop_back();
    }

    return;
}


vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;

    res.push_back(subset);


    int index = 0;
    subsetsUtil(A, res, subset, index);

    return res;
}


int main()
{

    vector<int> array;

    int sum=0,tam=0,tamm=0,coordenada_i,n,m,auxi,summ=0;


    while(cin>>n>>m)
    {
        while(m--)
        {
            cin>>auxi;
            array.push_back(auxi);
        }
         //sort(array.begin(),array.end());
        vector<vector<int> > res = subsets(array);
            for (int i = 0; i < res.size(); i++) {
                for (int j = 0; j < res[i].size(); j++)
                {
                    sum+=res[i][j];
                    tam++;
                }
                if(sum<=n/*&&tam>=tamm*/&&sum>summ)
                {
                    coordenada_i=i;
                    summ=sum;
                    tamm=tam;

                }
                tam=0;
                sum=0;
            }
            //resultado
            for(int j=0;j<res[coordenada_i].size();j++)
                    cout << res[coordenada_i][j] << " ";
            cout<<"sum:"<<summ<<endl;
            summ=0;
            tamm=0;

            array.clear();
    }
    return 0;
} 
