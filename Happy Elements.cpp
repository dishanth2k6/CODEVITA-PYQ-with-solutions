#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	long long k;
	if (!(cin >> n >> k)) return 0;
	std::vector<long long > a(n) ;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	if(n<=1){
	    std::cout << 0 << "\n";
	    return 0;
	}
	std::sort(a.begin(), a.end());
	int happy=0;
	for(int i=0;i<n;i++){
	    if ((i > 0 && a[i - 1] >= a[i] - k) || (i < n - 1 && a[i + 1] <= a[i] + k)){
	        happy++;
	    }
	}
	std::cout << happy << "\n";
	return 0;
}
