#include<bits/stdc++.h>
using namespace std;

//Í°ÅÅÐòËã·¨ 

void BucketSort(int n, int num_list[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		num_list[tmp]++;
	}
	for (int j = 0; j <= 100; j++) {
		for (int k = 0; k < num_list[j]; k++) {
			cout << j << " ";
		}
	}
}

int n;
int num_list[101];

int main() {
	BucketSort(n, num_list);
	return 0;
}
