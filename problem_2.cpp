#include<iostream>
#include<vector>
using namespace std;
//dry run
// 1 0 3 
// 0 2 0
// 1 0 3 

//flag = 1
//i=3
//j =  -1
// v[2][0]
// i = 2
// j= 2
//v[2][2] 
void is_perfect(vector<vector<int>> &v)
{
    int flag = 1;
    for(int i=0;i<v.size();i++)
    {
        int j=v[i].size()-1;
        
            if(v[i][j]==0)
            {
               flag = 0;
        
            }
            j--;
        
    }

    for(int i=0;i<v.size();i++)
    {
          if(v[i][i]==0)
          {
            flag = 0;
          }
    }

        if(flag==0)
        {
            cout<<endl<<"true";
        }       
        else{
            cout<<endl<<"false";
        }

   
}

int main()
{
    int n;
    cout<<endl<<"enter the value of n : ";
    cin>>n;

    vector<vector<int>> a(n,vector<int> (n));

    cout<<endl<<"enter the element of square matrix : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cin>>a[i][j];
        }
    }

    is_perfect(a);
}