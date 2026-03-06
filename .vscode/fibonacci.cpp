#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numTerms;
    cout<<"Enter number of terms in the sequence: "<<endl;
    cin>>numTerms;
    int a = 0, b = 1, c;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i = 1;i<=numTerms;i++){
        c = a + b;
        a = b;
        b = c;
        cout<<c<<endl;
    }
    return 0;
}