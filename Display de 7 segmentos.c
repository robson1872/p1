#include<stdio.h>
int check(int arr[]){
    if(arr[0] && arr[5] && arr[4] && arr[3] && arr[2] && arr[1] && !arr[6] ){
        return 0;
    }else if(!arr[0] && !arr[5] && !arr[4] && !arr[3] && arr[2] && arr[1] && !arr[6] ){
        return 1;
    }else if(arr[0] && !arr[5] && arr[4] && arr[3] && !arr[2] && arr[1] && arr[6] ){
        return 2;
    }else if(arr[0] && !arr[5] && !arr[4] && arr[3] && arr[2] && arr[1] && arr[6] ){
        return 3;
    }else if(!arr[0] && arr[5] && !arr[4] && !arr[3] && arr[2] && arr[1] && arr[6] ){
        return 4;  
    }else if(arr[0] && arr[5] && !arr[4] && arr[3] && arr[2] && !arr[1] && arr[6] ){
        return 5;
    }else if(arr[0] && arr[5] && arr[4] && arr[3] && arr[2] && !arr[1] && arr[6] ){
        return 6;
    }else if(arr[0] && !arr[5] && !arr[4] && !arr[3] && arr[2] && arr[1] && !arr[6] ){
        return 7;
    }else if(arr[0] && arr[5] && arr[4] && arr[3] && arr[2] && arr[1] && arr[6] ){
        return 8;
    }else if(arr[0] && arr[5] && !arr[4] && arr[3] && arr[2] && arr[1] && arr[6] ){
        return 9;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            scanf("%d",&arr[i]);
        }
        int k = check(arr);
        printf("%d",k);
    }
    return 0;
}
/*arr[0] [5] [4] [3] [2] [1] = 0
arr[1] arr[2] = 1
[0] [1] [2] [4] [3] = 2
[0] [1] [2] [3] [6]  = 3
[5] [6] [1] [2] = 4
[0] [5] [6] [2] [3] = 5
[0] [5] [6] [2] [3] [4]= 6
 [0 ]arr[1] arr[2] = 7
arr[0]  [6] [5] [4] [3] [2] [1] = 8
 [0 ]arr[1] arr[2] [5] [6] = 9*/