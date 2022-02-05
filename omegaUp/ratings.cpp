#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n1, n2, n3, n4, n5, n6, n7;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
    float average = float(n1+n2+n3+n4+n5+n6+n7)/float(7);
    cout<<fixed<<setprecision(1)<<average<<endl;
    return 0;
}