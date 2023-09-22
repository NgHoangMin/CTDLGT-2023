#include <bits/stdc++.h>

using namespace std;

int smaller(int m , int n){
	int lesser;
	if (m < n){
		lesser = m;
	}
	else{
		lesser = n;
	}
	return lesser;
}

int main(){
	int m , n;
	cin >> m >> n;
	int lesser = smaller(m , n);
	int max = 1;
	for (int i = 2 ; i <= lesser ; i++){
		if(m % i == 0 && m % i == 0){
			if (max < i){
				max = i;
			}
		} 
	}
	cout << max;
}
