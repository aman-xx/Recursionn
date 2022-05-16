// SUM SUBSEQUENCE
#include <bits/stdc++.h>
using namespace std;
void solve(int index, vector<int> v, vector<vector<int>> &ans, vector<int> output)
{
    
    if (index == v.size())
    {
        ans.push_back(output); 
        return;      
    }

    // Include
    output.push_back(v[index]);
    solve(index + 1, v, ans, output);

    // Include
    output.pop_back();
    solve(index + 1, v, ans, output);
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter no of elements "<<endl;
    cin >> n;
    
    vector<int> output ;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    solve(0, v,  ans, output);
  
    cout<< "subsequence are "<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   
}