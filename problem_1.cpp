#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> upper_half_of_matrix(vector<vector<int>> &v)
{
    int size = v.size();

    vector<vector<int>> ans;
  
    for(int i=0;i<v.size();i++)
    {
        vector<int> a;
        for(int j=i;j<v[i].size();j++)
        {
            a.push_back(v[i][j]);

        }
        ans.push_back(a);
    }

    return ans;
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    vector<vector<int>> a(n,vector<int> (n));

    cout<<endl<<"enter the element of matrix : "<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cin>>a[i][j];
        }
    }

    vector<vector<int>> ans = upper_half_of_matrix(a);

    cout<<endl<<"the half of matrix is : "<<endl;

    for(int i=0;i<ans.size();i++)
    {
        for(int k=0;k<=i;k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}