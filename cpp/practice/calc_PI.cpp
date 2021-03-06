#include<bits/stdc++.h>
using namespace std;
 
long double calc_PI(){
	long double PI = 0;
	unsigned long int n = 1000000000000;
	for(int i = 1 ; i < n ; i += 4){
		PI += (1.0 / i);
	}
	for(int j = 3 ; j < n ; j += 4){
		PI -= (1.0 / j);
	}
	PI *= 4;
	return PI;
}

int main(){
	cout<< "PI = " <<calc_PI()<<endl;
	return 0;
}
