#include <iostream>
#include <string>

using namespace std;

int linear_search(string cameras){
    int flag = 0;
    for(int i=0; i<cameras.length(); i++){
        if(cameras[i] == 'c'){
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    string cameras_view;
    cin >> cameras_view;
    int result = linear_search(cameras_view);
    if(result==1){
        cout<<"Puede haber conejos"<<endl;
    }else{
        cout<<"No se observaron conejos"<<endl;
    }
}