//*****************For Loop****************
//Loops are used when you have to iterate the condtion multilple times
//There are 3 types of loops they are 1.for loop
//2. while loop 3. Do while loop  now lets look with for loop

//*****************For Loop is used when you know how much iteration you have to repeat'
//A basic program to check the sum of enter number.
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1; counter<=n; counter++){
        sum=sum+counter;
    }
    cout<<sum;
}
