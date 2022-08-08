#include <iostream>
using namespace std;
int maximum(int,int);
int main(){
  int x,y;
  cout<<"Enter the two numbers :"<<endl;
  cin>>x>>y;
  cout<<"The greatest of two numbers are "<<maximum(x,y)<<endl;
  return 0;
}
int maximum(int a,int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}
