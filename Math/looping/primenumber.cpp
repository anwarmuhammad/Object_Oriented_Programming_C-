#include <iostream>
using namespace std;
int main(void){
    int n,i,counter=0;
    cout << "\n\n Check whether a number is prime or not:\n";
    cin>>n;
    for(i=1;i<=n;i++){
        
        if(n%i==0){
            
            counter++;
        }
    }
     cout<< n << " is divisible  "<<counter <<" times\n"; 
        if(counter==2){
            cout << n << " is  prime number\n";
            
        } else {
            cout<< n << " is not  a prime number\n";
        }
}
