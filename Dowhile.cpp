//*************DO WHILE********
//Here in do while loop the conditon is checked after the execution it means atleast one time it will execute
//Opposite to while loop in while loop the condition is check at entry level.

#include<iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
}
