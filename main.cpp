#include <bits/stdc++.h>

using namespace std;


int main(void) {
	
	//
	//freopen("./input", "r", stdin);

	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	long long int counter = 0;
	for(int i=0; i<n; i++) {
		if(i != (n-1)) {
				if(arr[i] > arr[i+1]) {
						int def = (arr[i] - arr[i+1]);
						arr[i+1] += def;
						counter +=def;
						//cout << def   <<endl;
				}
		}else {
				//cout << "Last :" << i <<endl; 
		}
	}
	
	/*for(int i=0; i<n; i++) {
			cout << arr[i] << " ";
	}*/
	cout << counter <<endl;
	
	return 0;
	
}
