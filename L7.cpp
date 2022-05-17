                                            // SUM SUBSEQUENCE
// #include <bits/stdc++.h>
// using namespace std;
// void solve(int index, vector<int> v, vector<vector<int>> &ans, vector<int> output,int sum,int target)
// {
    
//     if (index == v.size())
//     {
//         if(sum ==target)
//         {ans.push_back(output);} 
//         return;      
//     }

//     // Include

//     output.push_back(v[index]);
//     sum+=v[index];
//     solve(index + 1, v, ans, output,sum,target);

//     // Include
//     sum-=v[index];
//     output.pop_back();
//     solve(index + 1, v, ans, output,sum,target);
// }
// int main()
// {
//     vector<int> v;
//     int n;
//     cout << "Enter no of elements "<<endl;
//     cin >> n;
//     int sum=0;
//     int target;
//     cout<<"Enter the target: ";
//     cin>>target;
//     vector<int> output ;
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     solve(0, v,  ans, output,sum,target);
  
//     cout<< "subsequence are "<<endl;
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
// }


                                            // ONE SUM SUBSEQUENCE
// #include <bits/stdc++.h>
// using namespace std;
// bool ok= false;
// void solve(int index, vector<int> v, vector<vector<int>> &ans, vector<int> output,int sum,int target)
// {
   
//     if(ok == true){
//         return ;
//     }
    
//     if (index == v.size())
//     {
//         if(sum == target && ok==false )
//         {
//             ok= true;
//             ans.push_back(output);
          
//         } 
//         return;      
//     }
    
//     // Include

//     output.push_back(v[index]);
//     sum+=v[index];
//     solve(index + 1, v, ans, output,sum,target);

//     // Exclude

//     sum-=v[index];
//     output.pop_back();
//     solve(index + 1, v, ans, output,sum,target);
// }
// int main()
// {
//     vector<int> v;
//     int n;
//     cout << "Enter no of elements "<<endl;
//     cin >> n;
//     int sum=0;
//     int target;
//     cout<<"Enter the target: ";
//     cin>>target;


//     vector<int> output ;
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     solve(0, v,  ans, output,sum,target);
  
//     cout<< "subsequence are "<<endl;
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
// }

                                                // NO OF SUMS PRESENT IN SUBSEQUENCE
// #include <bits/stdc++.h>
// using namespace std;
// int k=0;
// void solve(int index, vector<int> v, vector<vector<int>> &ans, vector<int> output,int sum,int target)
// {
   
    
    
//     if (index == v.size())
//     {
//         if(sum == target)
//         {
//            k++;
//             ans.push_back(output);
          
//         } 
//         return;      
//     }
    
//     // Include

//     output.push_back(v[index]);
//     sum+=v[index];
//     solve(index + 1, v, ans, output,sum,target);

//     // Exclude

//     sum-=v[index];
//     output.pop_back();
//     solve(index + 1, v, ans, output,sum,target);
// }
// int main()
// {
//     vector<int> v;
//     int n;
//     cout << "Enter no of elements "<<endl;
//     cin >> n;
//     int sum=0;
//     int target;
//     cout<<"Enter the target: ";
//     cin>>target;


//     vector<int> output ;
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     solve(0, v,  ans, output,sum,target);
  
//     cout<< "subsequence are "<<k<<endl;
       
// }