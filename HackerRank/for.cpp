#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string results[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    cin>>a;
    cin>>b;
    for(int i=a; i<=b; i++){
        if(i<=9){
            cout<<results[i-1]<<"\n";
        } else if(i%2==0){
            cout<<results[9]<<"\n";
        } else {
            cout<<results[10]<<"\n";
        }
    }
    return 0;
}