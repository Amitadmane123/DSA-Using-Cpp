#include <iostream>
#include <string.h>
using namespace std;
//     char name[100];
//     cout<<"Enter your name"<<endl;
//     cin>>name;
//     cout<<"apka naam:"<<name<<"hai"<<endl;
//second type of printing name 
// }
// char ch[100];
// ch[0]='a';
// ch[1]='b';
// ch[2]='c';
// ch[3]='d';
// cin>>ch[4];
// cout<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<ch[4]<<endl;
// return 0;
// }
// char name[100];
// cin>> name;
// for(int i=0;i<7;i++){
//     cout<<" index: "<< i <<" value: "<<name[i]<<endl;
// }
// return 0;
// }
//char array create
// char arr[100];
// cin.getline(arr,50);
// cout<<arr;
// return 0;
// length of string
// int getLength(char name[]){
//     int length =0;
//     int i=0;
//     while(name[i]!='\0'){
//         length++;
//         i++;
//     }
//     return length;
// }
// int main(){
//     char name[100];
//     cin >> name;
//     cout<<"length is:"<<getLength(name)<<endl;
//     return 0;
// }
// int getLength(char name[]){
//    int length=0;
//    int i=0;
//    while(name[i]!='\0'){
//     length++;
//     i++;
//    }
//    return length;
// }

// // reverse a String 

// int reverseCharArray(char name[]){
//     int i=0;
//     int n=getLength(name);
//     int j=n-1;
//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }

// }
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<"length is:"<<getLength(name)<<endl;
//     cout<<"Length is->"<<strlen(name)<<endl;

//     cout<<"Initially:"<<name<<endl;
//     reverseCharArray(name);
//     cout<<"After reversal process:"<<name<<endl;
//     return 0;
// }
//
bool checkPalindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while(i<=j){
        if(word[i]!=word[j]){
                return false;  
        }
        else{
            i++;
            j--;
        }
        return true;
    }

}
int main(){
    char arr[100]="Babbab";
    cout<<"palindrome check:"<<checkPalindrome(arr);

return 0;

}
 



