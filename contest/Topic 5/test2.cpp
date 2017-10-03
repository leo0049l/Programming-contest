#include <iostream>  
#include <cstdlib>  
#include <cstring>  
#include <cstdio>  
  
using namespace std;  
  
int maps[110][110];  
int used[110];  
  
void dfs(int s, int n)  
{  
    for (int i = 1 ; i <= n ; ++ i)  
        if (!used[i] && maps[s][i]) {  
            used[i] = 1;  
            dfs(i, n);  
        }  
}  
  
int main()  
{  
    int n,m,a,b,s;  
    while (~scanf("%d",&n) && n) {  
        memset(maps, 0, sizeof(maps));  
        while (~scanf("%d",&a) && a)   
            while (~scanf("%d",&b) && b)  
                maps[a][b] = 1;  
        scanf("%d",&m);  
        for (int i = 0 ; i < m ; ++ i) {  
            memset(used, 0, sizeof(used));  
            scanf("%d",&s);  
            dfs(s, n);  
            int count = n;  
            for (int j = 1 ; j <= n ; ++ j)  
                count -= used[j];  
            printf("%d",count);  
            for (int j = 1 ; j <= n ; ++ j)  
                if (!used[j])  
                    printf(" %d",j);  
            printf("\n");  
        }  
    }  
      
    return 0;  
}  
