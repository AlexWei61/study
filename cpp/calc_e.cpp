#include <bits/stdc++.h>
#include <string>
using namespace std;



long double calc_e(){
	unsigned long long N = 60;
	
	long double e = 1;
	unsigned long long tmp = 1;
	for(int i = 1;i<=N;i++){
		tmp *= i;
		e += double(1.0)/tmp; 
	}
	return e;
}

int main(){
	cout<<fixed<<setprecision(30)<<calc_e()<<endl;
}


