#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
bool wayToSort(int i, int j){ return i>j; }

int main(){
	ios::sync_with_stdio(false);
	int n, k, s, nn[1001], total;
	cin >> n >> k >> s;
	for(int i=0; i<n; i++){
		cin >> nn[i];
	}
	sort(nn,nn+n,wayToSort);
	total = k * s;
	k = 0;
	for(int i = 0; i<n; i++){
		k += nn[i];
		if(k>=total){
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}
