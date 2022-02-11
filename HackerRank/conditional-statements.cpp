#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n = 0;
    cin>> n;
    string results[] = { "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<(n>9? results[0]: results[n])<<endl;
}