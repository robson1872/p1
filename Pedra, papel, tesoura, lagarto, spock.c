#include<stdio.h>
int check(int u, int p){
    if(u == p){
        return 0;
    }else if((u == 1 && p == 3) || (u == 3 && p == 2) || (u == 2 && p == 4) || (u == 4 && p == 5) || (u == 5 && p == 1) || (u == 1 && p == 4) || (u == 4 && p == 3) || (u == 3 && p == 5) || (u == 5 && p == 2) || (u == 2 && p == 1)){
        return 1;
    }else{
        return 2;
    }
}
int main(){
    float a,b;
    int x1,y1,x2,y2;
    scanf("%f%f",&a,&b);
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int i = check(x1,y1);
    int r=0,w=0;
    if(i == 1){
        printf("Rodrigo venceu a partida 1\n");
        r++;
    }else if(i==2){
        printf("Willy venceu a partida 1\n");
        w++;
    }else{
        printf("Empate\n");
    }
    i = check(x2,y2);
    if(i == 1){
        r++;
        printf("Rodrigo venceu a partida 2\n");
    }else if(i==2){
        w++;
        printf("Willy venceu a partida 2\n");
    }else{
        printf("Empate\n");
    }
    if(r>w){
        printf("Rodrigo foi o vencedor da aposta\n");
        float ans = r*(a+b)*0.05 + (a+b);
        printf("Valor ganho: R$%.2f\n", ans);
    }else if(w>r){
        printf("Willy foi o vencedor da aposta\n");
        float ans = w*(a+b)*0.05 + (a+b);
        printf("Valor ganho: R$%.2f\n", ans);
    }else{
        printf("Empate na aposta\n");
    }
    return 0;
}   