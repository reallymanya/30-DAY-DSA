#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0){
        if ( a> b){
            a = a % b;
        }else{
            b = b % a;
        }
    }

    if(a == 0){
        cout << b;
    } else {
        cout << a;
    }
}

//tc = O(log phi (min(a,b)))
//sc = O(1)