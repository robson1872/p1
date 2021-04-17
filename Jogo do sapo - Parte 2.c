#include<stdio.h>
int main(){
    /*int k = ;
    int j = (k+5*100)%5;
    printf("%d",j);*/
    int n,m,o,k;
    scanf("%d%d%d%d",&n,&m,&o,&k);
    int cases[n+5];//valores das casas
    for(int i=0;i<n;i++){
        scanf("%d",&cases[i]);
    }
    int id[m+5];//id do jogador i
    int c[m+5];//a casa inicial do jogador i
    int d[m+5][k+5];// o resultado do jogar de dados do jogador i no lado j
    for(int i=0;i<m;i++){
        scanf("%d",&c[i]);
        scanf("%d",&id[i]);
        for(int j=0;j<k;j++){
            scanf("%d",&d[i][j]);
        }
    }
    int p;// a face que vai cair na rodada i para o jogador j
    for(int i=0;i<o;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&p);
            c[j] = (c[j] + d[j][p] + 100*n) % n;
            c[j] = (c[j] + cases[c[j]] + 100*n) % n;
        }
    }
    int ans[30];
    for(int i=0;i<25;i++){
        ans[i] = -1;
    }
    for(int i=0;i<m;i++){
        ans[id[i]] = c[i];
    }
    for(int i=0;i<25;i++){
        if(ans[i]!=-1){
            printf("position:%d id:%d\n",ans[i],i);
        }
    }
    return 0;
}