#include<iostream>
using namespace std;
int minOfTwo(int a, int b){
    if(a < b){
        return b;
    }
    else{
        return a;
    }
} 

int main(){
    cout <<"the minimum of tow number is :"<< minOfTwo(3,4);

    return 0;
}