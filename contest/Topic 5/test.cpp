#include<iostream>
#include<deque>
#include<cstring>
using namespace std;
int main(){
	int indeg[101],n,m,x,y,ansN;
	deque<int> G[101];
	while(cin >> n >> m){
		if ((n==0) && (m==0)) break;
		ansN=0;//�D�X�����׭Ӽ�
		for(int i=1;i<=n;i++) G[i].clear();  //�M�Ź�
		memset(indeg,0,sizeof(indeg));  //�Nindeg�k0
		for(int i=0;i<m;i++){
			cin >> x >> y;
			G[x].push_back(y);  //�إ߹�
			indeg[y]++;   //�Iy�i�Ӫ���h�@��
		}
		for(int i=1;i<=n;i++){
			if (indeg[i]==0){   //�Yindeg[i]����0�A��ܸ��I�i�H��X
				ansN++;   //���׭ӼƼW�[1
				if (ansN<n)	cout << i <<" ";  //��X����
				else cout << i<<endl;
				indeg[i]=-1;   //�Ii����ϥ�
				for(int j=0;j<G[i].size();j++){  //���I��X��A�Ҧ����I�ҳs�X�䪺�t�@���I�Aindeg��1
					indeg[G[i][j]]--;
				}
			}
			if (ansN==n) break; //�w�g��X�Ҧ�����
			else if (i==n){  //�Yi�w�g��n�Ai=0�A�q�Y�A��@��
				i=0;
			}
		}		
	}
}
