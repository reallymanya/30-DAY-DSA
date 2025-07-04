#include <iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i<N-1;i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N-1);
    for(int i = 0; i < N-1; i++) {
        cin >> a[i];
    }
    cout << missingNumber(a, N) << endl;
    return 0;
}