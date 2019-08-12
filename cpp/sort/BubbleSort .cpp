#include<iostream>
using namespace std;

void BoubleSort(int n,int num_list[]) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (num_list[j] < num_list[i]) {
				swap(num_list[j], num_list[i]);
			}
		}
	}
}

int n;
int num_list[1000001];

int main() {
	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> num_list[k];
	}

	BoubleSort(n, num_list);

	for (int a = 0; a < n; a++) {
		cout << num_list[a] << " ";
	}
	cout << endl;
	return 0;
}
