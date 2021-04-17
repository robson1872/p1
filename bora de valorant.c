#include<stdio.h>

int main(){
    char a,b;
    int c,d;
    scanf("%c %c\n",&a,&b);
    //fflush(stdin);
    scanf("%d %d",&c,&d);
    int n = 0;
    int f = 0;
    //F = 0,1,2, B = 3,4,5, P = 6,7,8 , O = 9,10,11
    if(a == 'F'){
        n = 0;
    }else if(a == 'B'){
        n = 3;
    }else if(a == 'P'){
        n = 6;
    }else{  
        n = 9;
    }
    if(b == 'F'){
        f = 0;
    }else if(b == 'B'){
        f = 3;
    }else if(b == 'P'){
        f = 6;
    }else{  
        f = 9;
    }
    n += (3 - c);
    f += (3 - d);
    int ans = f - n;
    if(ans<0){
        ans = 0 - ans;
    }
    if(ans>3){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}