//Print name n times
// #include <bits/stdc++.h>
// using namespace std;
// void print(int n,string s){
// cout<<s<<endl;
// if(n==1)return;
// print(n-1,s);
// }
// int main(){
// string s;
// cout<<"Name: ";
// cin>>s;
// int n;
// cout<<"How many times: ";
// cin>>n;
// print(n,s);
// }

// Print linearly from 1 to n
// #include <bits/stdc++.h>
// using namespace std;
// void print(int n,int a){
//    cout<<a;
//     if(n==1)return;
//     print(n-1,a+1);
// }
// int main(){
// int n;
// cin>>n;
// print(n,1);
// }

// print n to 1
// #include <bits/stdc++.h>
// using namespace std;
// void rev(int n){
//     cout<<n;
//     if(n==1)return;
//     rev(n-1);
// }
// int main(){
// int n;
// cin>>n;
// rev(n);
// }

// print 1 to n f(i+1,n)is not allowed
// #include <bits/stdc++.h>
// using namespace std;
// void print (int i,int n){
//     if(i<1){       
//         return;
//     }
//     print(i-1,n);
//     cout<<i;
// }
// int main(){
//  int n;
//  cin>>n;
//  print(n,n);
// }

// print n to 1 by backtrack
// #include <bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
// if(i>n)return;
// f(i+1,n);
// cout<<i;
// }
// int main(){
// int n;
// cin>>n;
// f(1,n);
// }