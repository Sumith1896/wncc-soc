#include <bits/stdc++.h>

using namespace std;

int binsearch(std::vector<int> &v, int temp) {
	int low = 0;
	int high = v.size() - 1;
	int middle = (low + high)/2;
	while(low != high) {
		middle = (low + high)/2;
		if(v[middle] == temp)
			return middle;
		if(v[middle] > temp)
			high = middle - 1;
		else
			low = middle + 1;
	} 
	if(v[low] == temp)
		return low;
	return -1;
}


int main() {
	int n, t;
	scanf("%d %d", &n, &t);
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &(v[i]));
	}
	for(int i = 0; i < t; i++) {
		int temp;
		scanf("%d", &temp);
		printf("%d\n", binsearch(v, temp));
	}
	return 0;
}
