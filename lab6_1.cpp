#include<iostream>
using namespace std;

int main(){
int a;
int ku=0;
int ki=0;
while(a!=0){
cout << "Enter an interger: "; 
cin >> a;
    if(a%2==0){
        ku++;
        if(a==0){
            ku--;
        }
    }
    else{
        ki++;
    }
}
cout << "#Even numbers = "<< ku <<"\n";
cout << "#Odd numbers = "<< ki;

  return 0;

}