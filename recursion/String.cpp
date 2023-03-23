#include <iostream>
#include<vector>
using namespace std;
// void checkKey(string& str,int i,int& n,char& key,vector<int>&ans){
//     // base case 
//     if(i>=n){
//         //key not found
//         return;
//     }
//     if(str[i] == key)
//            ans.push_back(i);

//     return checkKey(str, i+1,n,key,ans);


// }
// int main(){
//     string str = "loveAmit";
//     int n=str.length();

//     char key ='0';

//     int i=0;
//     vector <int> ans;
//     checkKey(str,i, n, key,ans);
//     cout<< "printing ans"<<endl;
//     for(auto val: ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;


// }
// void printDigits(int n){
//     //base case
//     if(n==0){
//         return;
//     }
//     int newValueOfN = n/10;
//     printDigits(newValueOfN);
//     //1 case main solve karunga
//     int digit=n%10;
//     cout<<digit<<" ";
    

// }
// int main(){
//     int n = 647;
//     printDigits(n);
//     return 0;
// }
// bool checkSorted(vector<int>&arr,int& n, int i  ){
//     //base case
//     if(i==n-1){
//        return true; 
//     }
//     // 1 case solve karna hai
//     if(arr[i+1]<arr[i])
//        return false;
//     //baaki recursion sambhal lega
//     return checkSorted(arr, n, i+1);

// }
// int main(){
//     vector<int> v{10,20,30,90,60};
//     int n=v.size();
//     int i = 0;
//     bool isSorted = checkSorted(v, n ,i);
//     if(isSorted){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
//     return 0;

// } 
// int binarySearch(vector<int>arr,int s,int e,int key){
//     //base case
//     //case 1->key not found
//     if(s > e)
//       return -1;
    
//     int mid=(s+e)/2;
//     //case 2-> key found
//     if(arr[mid] == key)
//        return mid;

//    // return (arr[mid]<key)? binarySearch(arr,mid+1,e,key): binarySearch(arr,s,mid-1,key);

//     //arr[mid]<key->right me search
//     if(arr[mid]<key){
//         return binarySearch(arr,mid+1,e,key);
//     }
//     else{//arr[mid]>key -> left me search
//         return binarySearch(arr,s,mid-1,key);

//     }

//     }
// int main(){
//     vector<int> v{10,20,40,60,70,90,99};
//     int target = 10;

//     int n= v.size();
//     int s=0;
//     int e =n-1;
//     int ans = binarySearch(v,s,e,target);
//     cout<<"Answer is:"<<ans<<endl;
//     return 0;

// } 
// Subsequences of a string
void printSubsequences(string str,string output,int i,vector<string>&v){
    //base case
    if(i>=str.length()){
        //cout<<output<<endl;
        //store
        v.push_back(output);
        return;
    }
    //exclude
    printSubsequences(str, output,i+1,v);
    //include
    //below line is responsible for concatanation of output string ans ith character of str string
    output=output+str[i];
    printSubsequences(str, output,i+1,v);
}
int main(){
    string str="abc";
    string output ="";
    vector<string>v;
    int i=0;
    printSubsequences(str, output, i, v);

    cout<<"Printing all subsequences"<<endl;
    for(auto val:v){
        cout<<val<<"";
    }
    cout<<endl<<"Size of vector is:"<<v.size()<<endl;

    return 0;
}