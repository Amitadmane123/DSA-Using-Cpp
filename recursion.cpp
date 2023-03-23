#include<iostream>
using namespace std;
int factorial(int n){
   // base case
   if(n==1);
   return 1;
   int chotiproblemAns= factorial (n-1);
   int badiproblemAns= n* chotiproblemAns;
   return badiproblemAns;
}
int main(){
    int n;
    cout<<"Enter the name"<<endl;
    cin>>n;
    int ans=factorial (n);
    cout<<"ans is"<<ans<<endl;
    return 0;
}
