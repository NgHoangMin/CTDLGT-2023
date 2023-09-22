#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , x;
	cin >> n;
	vector<int> arr;
	for (int i = 0 ; i < n ; i++){
		cin >> x;
		arr.push_back(x);
	}
	int count = 0;
	for (int i = 0 ; i < n ; i++){
		for (int j = i + 1 ; j < n ; j++){
			if (arr[i] == arr[j]){
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
