#include<iostream>
#include<deque>
#include<cstring>
using namespace std;
int main(){
	int indeg[101],n,m,x,y,ansN;
	deque<int> G[101];
	while(cin >> n >> m){
		if ((n==0) && (m==0)) break;
		ansN=0;//求出的答案個數
		for(int i=1;i<=n;i++) G[i].clear();  //清空圖
		memset(indeg,0,sizeof(indeg));  //將indeg歸0
		for(int i=0;i<m;i++){
			cin >> x >> y;
			G[x].push_back(y);  //建立圖
			indeg[y]++;   //點y進來的邊多一個
		}
		for(int i=1;i<=n;i++){
			if (indeg[i]==0){   //若indeg[i]等於0，表示該點可以輸出
				ansN++;   //答案個數增加1
				if (ansN<n)	cout << i <<" ";  //輸出答案
				else cout << i<<endl;
				indeg[i]=-1;   //點i不能使用
				for(int j=0;j<G[i].size();j++){  //該點輸出後，所有該點所連出邊的另一端點，indeg減1
					indeg[G[i][j]]--;
				}
			}
			if (ansN==n) break; //已經輸出所有答案
			else if (i==n){  //若i已經到n，i=0，從頭再找一次
				i=0;
			}
		}		
	}
}
