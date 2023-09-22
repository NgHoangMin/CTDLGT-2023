#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[5];
	for (int i = 0 ; i < 5 ; i++){
		cin >> arr[i];
	}
	int tmp;
	for (int i = 0 ; i < 5 ; i++){
		for (int j = i + 1 ; j < 5 ; j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			} 
		}
	}
	cout << arr[0] + arr[4];
}
