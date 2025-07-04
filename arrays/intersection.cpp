//element in both array

#include <iostream>
#include <vector>
#include <set>
using namespace std;


// 2 pointer approach

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0;
	int j = 0;
	vector<int> ans;
	while(i<n && j < m){
		if(arr1[i] < arr2[j]){
			i++;
		} 
		else if(arr2[j] < arr1[i]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
	
}

int main(){
      vector<int> arr1 = {1, 2, 3, 3, 4, 5};
    vector<int> arr2 = {2,2,3,3,5};
    vector<int> result = findArrayIntersection(arr1, 6, arr2,6);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}
