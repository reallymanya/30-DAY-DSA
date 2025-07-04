#include <iostream>
using namespace std;

int fibonacci(int n){
    if ( n <= 1){
        return n;
    }
    int last = fibonacci(n-1);
    int secondLast = fibonacci(n-2);
    return last + secondLast;
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n)<< endl;
}

/*Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which 
makes worst-case time complexity to be exponential in nature }.

Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack 
since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) 
Fibonacci numbers before it }.

*/