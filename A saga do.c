#include<stdio.h>
int a[105],b[105],n,m,resp[105],r_at = 0,r_f = 0,kf = 1;
void recebea(int x){
    if(x>n){
        return;
    }
    scanf("%d",&a[x]);
    recebea(x+1);
}
void recebeb(int x){
    if(x>m){
        return;
    }
    scanf("%d",&b[x]);
    recebeb(x+1);
}
void func(int i,int j){
    if(j>m){
        return;
    }
    if(a[i] == b[j]){
        r_at++;
    }
    func(i+1,j+1);
}
void exe(int k){
    if(k>n-m + 1){
        return;
    }
    func(k,1);
    if(r_at>r_f){
        r_f = r_at;
        kf = k;
    }
    r_at = 0;
    exe(k+1);
}
void saida(int i){
    if(i==kf+m - 1){
        printf("%d\n",a[i]);
        return;
    }
    printf("%d ",a[i]);
    saida(i+1);
}
int main(){
    scanf("%d",&n);
    recebea(1);
    scanf("%d",&m);
    recebeb(1);
    exe(1);
    saida(kf);
    printf("%d",m-r_f);
    return 0;
}
