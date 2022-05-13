// Reverse array
// #include <bits/stdc++.h>
// using namespace std;
// void rev(int l,int r, vector<int>&v){
// if(l>=r)return;
// swap(v[l],v[r]);
// rev(l+1,r-1,v);
// }
// int main(){
// vector<int>v={1,2,3,4,5,6,7};
// int l=0,r=v.size()-1;
// rev(l,r,v);
// for(int i=0;i<=r;i++){
//     cout<<v[i]<<" ";
// }
// }

// String palindrome
#include <bits/stdc++.h>
using namespace std;
bool chk(string s,int l,int r){
if(l>=r)return true;
if(s[l]!=s[r])return false;
chk(s,l+1,r-1);
return true;
}
int main(){
string s;
cin>>s;
int l=0,r=s.size()-1;
cout<<chk(s,l,r);
}