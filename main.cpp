#include <bits/stdc++.h>
#include <array>
using namespace std;



int main(void) {
	
	
	int list[26]={0};
	string s;
	cin >> s;
	
	for(unsigned int i=0; i<s.size(); i++){
		list[(int)s[i] - 65] +=1;
	}
	
	int counter=0;
	int k=0;
	
	int odd=0;
	int car;
	
	
	char arr[s.size()];
	for(unsigned int i=0; i<s.size(); i++) {
			arr[i] = 0;
	}
	
	for(int i=0; i<26; i++) {
			if(list[i] % 2 == 0) {
					k++;
			}else {
					counter++;
					k++;
			}
	}
	
	if(counter > 1) {cout << "NO SOLUTION" <<endl;return 0;}
	int c=0;
	for(int i=0; i<26; i++) {
			if(list[i] > 0) {
				if(list[i] %2 == 0) {
						int b=list[i]/2;
						for(int j=0; j<b; j++){arr[c++] = i+65;	cout << (char)(i+65);}
				}else {
						
						car = i;
						odd = list[i];
						
				}
		}
	}
	
	for( int i=0; i<odd; i++) {
			cout << (char)(car+65);
	}
	
	
	
		for(int i=strlen(arr)-1; i>=0; i--) {
			cout << (arr[i]);
		}
	
	
	return 0;
	
}
