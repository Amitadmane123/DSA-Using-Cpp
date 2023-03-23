#include<iostream>
#include<string.h>
using namespace std;
// void replaceSpaces(char sentence[]){
//     int i=0;
//     int n=strlen(sentence);
//     for(int i=0;i<n;i++){
//          if(sentence[i] == ' ' ){
//              sentence[i]=='@';
//          }
//     }
//     }
//     int main(){
//         char sentence[100];
//         cin.getline(sentence,100);
//         replaceSpaces(sentence);
//         cout<<"printing sentence"<<endl<<sentence<<endl;
//         return 0; 
// //     }
// void replaceSpaces(char sentence[]){
//     int i= 0;
//     int n=strlen(sentence);
//     for(int i=0;i<n;i++){
//         if(sentence[i]==' '){
//              sentence[i]==' @ ';
//         }
//     }
// }
// int main(){
//     char sentence[100];
//     cin.getline(sentence,100);
//     replaceSpaces(sentence);
//     cout<<"printing sentence"<<endl<<sentence<<endl;
//     return 0;
// }

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