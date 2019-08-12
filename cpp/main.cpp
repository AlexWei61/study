#include <bits/stdc++.h>
using namespace std;

/*
已知：Sn = 1+1/2+1/3+...+1/n。显然对任意整数K，当n足够大时，Sn大于K。现给出一个整数K（1<=k<=15），要求计算一个最小的n，使得Sn<K。 


int K;
int n; 
int main(){
	float Sn;
	cin>>K;
	
	return 0;
}		


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


char upper_lower_translate(char c)
{
	if('A'<=c && c<='Z'){
		return c+32;
	}
	if('a'<=c && c<='z'){
		return c-32;
	}
	
	return c;
}

char left_shift(char c){
	if(c == 'a'){
		return 'x';
	}
	if(c == 'b'){
		return 'y';
	}
	if(c == 'c'){
		return 'z';
	}
	if(c<='z' && c>='d'){
		return c-3;
	} 
	if(c == 'A'){
		return 'X';
	}
	if(c == 'B'){
		return 'Y';
	}
	if(c == 'C'){
		return 'Z';
	}
	if(c<='Z' && c>='D'){
		return c-3;
	}
	return c;
}

void encode(char* str){
	int len = strlen(str); 
	for (int i=0; i<len/2; i++){
		swap(str[i],str[len-i-1]);
		str[i] = left_shift(str[i]);
		str[len-i-1] = left_shift(str[len-i-1]);
		str[i] = upper_lower_translate(str[i]);
		str[len-i-1] = upper_lower_translate(str[len-i-1]);
	}
}
	
char right_shift(char c){
	if(c == 'x'){
		return 'a';
	}
	if(c == 'y'){
		return 'b';
	}
	if(c == 'z'){
		return 'c';
	}
	if(c<='w' && c>='a'){
		return c+3;
	} 
	if(c == 'X'){
		return 'A';
	}
	if(c == 'Y'){
		return 'B';
	}
	if(c == 'Z'){
		return 'C';
	}
	if(c<='W' && c>='A'){
		return c+3;
	}
	return c;
}

void decode(char* str){
	int len = strlen(str); 
	for (int i=0; i<len/2; i++){
		swap(str[i],str[len-i-1]);
		str[i] = right_shift(str[i]);
		str[len-i-1] = right_shift(str[len-i-1]);
		str[i] = upper_lower_translate(str[i]);
		str[len-i-1] = upper_lower_translate(str[len-i-1]);
	}
}

int main(){
	char encrypt_str[256];
	
	encrypt_str[0] = 'A';
	encrypt_str[1] = 'l';
	encrypt_str[2] = 'e';
	encrypt_str[3] = 'x';
	encrypt_str[4] = 0;
	decode(encrypt_str); 
	cout<<encrypt_str<<endl;
	encode(encrypt_str);
	cout<<encrypt_str<<endl;
	return 0;
}


double celsius_to_fahrenheit(double C){
	double F;
	F = C*9/5+32;
	return F;
}

double fahrenheit_to_celsius(double F){
	double C;
	C = 5*(F-32)/9;
	return C;
}

int main(){
	double F;
	double C;
	cin>>F;
	cout<<fixed<<setprecision(5)<<fahrenheit_to_celsius(F)<<endl;
	cin>>C;
	cout<<fixed<<setprecision(5)<<celsius_to_fahrenheit(C)<<endl;
	return 0;
}


double remainder_of_a_decimal(double a,double b){
	int k = floor(a/b);
	double r = a - k*b;
	return r;
}

int main(){
	double a,b;
	cin>>a>>b;
	cout<<remainder_of_a_decimal(a,b)<<endl;
	return 0;
}


int the_num_of_elephants_drink_in_buckets(int h, int r){
	double PIE = 3.1415926;
	double v = PIE*r*r*h/1000;
	int num = ceil(20/v);
	return num;
}

int main(){
	double h,r;
	cin>>h>>r;
	cout<<the_num_of_elephants_drink_in_buckets(h,r)<<endl;
	return 0;
}


int the_num_of_the_apple_you_still_have(int n,int x,int y){
	int eaten_apple_num = (x+y-1)/x;
	if (eaten_apple_num <= n){
		int still_have_apple_num = n - eaten_apple_num;
		return still_have_apple_num;
	}
	else{
		return -1;
	}
}

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	cout<<the_num_of_the_apple_you_still_have(n,x,y)<<endl;
	return 0;
}


void which_lev(int s){
	if(s<60){
		cout<<"不及格";
	}
	if(s>=60&&s<=69){
		cout<<"C等";
	}
	if(s>=70&&s<=79){
		cout<<"B等";
	}
	if(s>=80){
		cout<<"A等"; 
	}
}

int main(){
	int s;
	cin>>s;
	which_lev(s);
	return 0;
}


bool odevity(int n){
	if(n%2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cin>>n;
	if(odevity(n)){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
}


bool is_double_digit(int num){
	if(num<=10&&num>=99){
		return true;
	}
	else{
		return false;	
	}
}

int main(){
	int n;
	cin>>n;
	if(is_double_digit(n)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}

int main(){
	int num;
	cin>>num;
	if(num%3==0){
		cout<<3<<" ";
	}
	if(num%5==0){
		cout<<5<<" ";
	}	
	if(num%7==0){
		cout<<7<<" "<<endl;
	}
	if(num%3!=0&&num%5!=0&&num%7!=0){
		cout<<"n"<<endl;
	}
}


int main(){
	int s1,s2;
	cin>>s1>>s2;
	if((s1<60 or s2<60)&&(s1>=60 or s2>=60)){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
}

int main(){
	int day_num = 31;
	for(int i = 1;i<=31;i++){
		int dayi;
		cin>>dayi;
		if(dayi>=100){
			cout<<"第"<<i<<"天的汽水销售数大于等于100"<<endl; 
		}
	}
	return 0;
}

int main(){
	long long sum = 0;
	long long n;
	cin>>n;
	for(long long i = 1;i<=n;i++){
		sum += i;
	}
	cout<<sum;
	return 0;
}


int main(){
	int tmp = 0;
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i%7==0){
			tmp++;
		}
	}
	cout<<tmp<<endl;
	return 0;
}
long long n;
int main(){
	long long tmpmax = 0;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long numi;
		cin>>numi;
		tmpmax = max(tmpmax,numi);
	}
	cout<<tmpmax<<endl;
	return 0;
} 

int main(){
	double x;
	int n;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		x += x*0.001;       //x = x+x*0.001
	} 
	cout<<x;
	reture 0;
} 

int main(){
	double income;
	int n;
	cin>>income>>n;
	double plus = 0;
	for(int i=1;i<=n;i++){
		plus = 100+12*income*0.005;
		income += plus;
	}
	cout<<fixed<<setprecision(1)<<income<<endl;
}

long unsigned long int clac_fibonacci_sequence(int n){
	unsigned long int fibonacci_sequence[100001];
	fibonacci_sequence[0] = 1;
	fibonacci_sequence[1] = 1; 
	for (int i = 2; i <= n-1;i++) {
		fibonacci_sequence[i] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2];
		cout << fibonacci_sequence[i] << " ";
	}
	cout<<endl<<endl;
	return fibonacci_sequence[n-1];
}

int main(){
	long long n;
	cin>>n;
	cout<<clac_fibonacci_sequence(n)<<endl;
	return 0;
}

int clac_max(int n,int num_list[101]){
	int maxn = 0;
	for(int i=0;i<n;i++){
		maxn = max(maxn,num_list[i]);
	}
	return maxn;
}

int main(){
	int n;
	cin>>n;
	int s_list[101];
	for(int i=0;i<n;i++){
		cin>>s_list[i];
	}
	cout<<clac_max(n,s_list)<<endl;
}

int fmtn_sum_odd_num(int m,int n){
	int sum = 0;
	for(int i=m;i<=n;i++){
		if(i%2 != 0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int m,n;
	cin>>m>>n;
	cout<<fmtn_sum_odd_num(m,n)<<endl;
	return 0;
}

void check_efficiency(int n,int a[21][3]){
	double v_jiweijiu = (a[0][0] - a[0][1])/a[0][0];
	for(int i = 1;i<n;i++){
		double v_i = (a[i][0]-a[i][1])/a[i][0];
		if(v_jiweijiu-v_i>0.05){
			cout<<"beeter"<<endl;
		}
		else if(v_jiweijiu-v_i<0.05){
			cout<<"worse"<<endl;
		}
		else{
			cout<<"same"<<endl;
		}
	}
} 

int main(){
	int n;
	int a[21][3];
	cin>>n;
	for(int i = 0;i<n;i++){
		for(int k = 0;k<2;k++){
			cin>>a[i][k];
		}
	}
	check_efficiency(n,a[21][3]);
	return 0;
}
*/

int sum1(int n) {
	int num = 0;
	int sum = 1;
	for (int i = 0; i <= n; i++) {
		num += i;
		sum += num;
	}
	return sum;
}

int p, q;

int main() {
	cin>>p>>q;
	int sum;
	for (int i = p; i <= q; i++) {
		sum += sum1(i);
	}
	cout << sum;
	return 0;
}




























