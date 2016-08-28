#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int T;
	char ch;
	long long num, res;
	scanf("%d", &T); // used cin here. got WA -_-
	while(T--){
		scanf("%lld", &num);
		res = num;
		while( scanf(" %c", &ch) ){ //dare to skip the space before %c :/
			if(ch == '=' ) break;
			else{
				scanf(" %lld", &num); //same here -_-
				if(ch=='+') res += num;
				else if(ch=='-') res -= num;
				else if(ch=='*') res *= num;
				else res /= num;
			}
		}
		cout << res << endl;
	}
	return 0;
}
