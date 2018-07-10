#include <iostream>
using namespace std;
int main(void){
    int n,i,sum=0;
     cout << " Enter a number of terms" ;
     cin >> n;
     cout<< "Sum of natural number upto " << n <<"th terms is:\n";
     for(i=1;i<=n;i++){
         cout <<i <<" ";
         
         sum=sum+i;
         
     }
     cout<<"\n Sum: " <<sum;
}