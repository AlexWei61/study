#include<bits/stdc++.h>
using namespace std;

int now_lo_x = 0                     //现在的位置x轴 
int now_lo_y = 0                     //现在的位置y轴 
int chessboard[21][21];            	 // 创建棋盘
const int cx[2] = {-1,0};            //卒下一步可以走到的点增加的横坐标 
const int cy[2] = { 0,1};            //卒下一步可以走到的点增加的纵坐标
int n,m;                             //B点的横坐标和纵坐标 
int hn,hm;                           //马的横坐标和纵坐标
int can_ha_x[8] = {-2,-2,-1,-1, 1,1, 2,2};                     //创建数组存储马可以一步跳到的点的增加的横坐标
int can_ha_y[8] = {-1, 1,-2, 2,-2,2,-1,1};                     //创建数组存储马可以一步跳到的点的增加的纵坐标

bool is_s_and_h_can_go(int x,int y){
	if(x >= 1 && x <= n && y >= 1 && y <= m && chessboard[x][y] != -1){
		return true;
	}
	else {
		return false;
	}
} 

void clac_can_ha(int hn,int hm){
	for(int i = 0;i<8;i++){
		if(is_s_and_h_can_go(hn+can_ha_x[i],hm+can_ha_y[i]){
			chessboard[hn+can_ha_x[i]][hm+can_ha_y[i]] = -1;
		}
	}
	chessboard[hn][hm] = -1;
}

int ans(int n,int m,int hn,int hm){
	for(int i = 0;i<n;i++){
		for(int k = 0;k<m;k++){
			chessboard[i][k] = 0;
		}
	}
	clac_can_ha(hn,hm);
	int tmp = 0;                             //计数器 
	while(true){
		for(int i = 0;i<2;i++){
			if(now_lo_x = n&&now_lo_y = m){
				
			}
			while(true){
				now_lo_x += cx[i];
				now_lo_y += cy[i];
				if
				if(chessboard[now_lo_x][now_lo_y]==-1){
					break;
				}
				if(now_lo_x = n&&now_lo_y = m){
					tmp++;
					break;
				}
			} 
		}
	}
} 

int main(){
	cin>>n>>m>>hn>>hm;
	return 0;
} 
