#include<iostream>
#include<string>
using namespace std;
bool compareString(string a,string b){
     if(a.length()!=b.length())
                return false;
     else{
      int j=0;
      for(int i=0;i<a.length();i++){
         if(a[i]!=b[i]){
                 return false;
         }
      }
     }
     return true;

        
     }
     int main(){
      string a="Love";
      string b="Lover";
      if(a.compare(b)==0){
         cout<<" a and b are exactly same string"<<endl;
      }
      else{
         cout<<"a and b are not same"<<endl;
      }
      return 0;
      }