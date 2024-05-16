// 백준 15649번

#include <stdio.h>

int n, m;
int arr[1000];
int check[1000];


void func(int k){
    int i;

    if(k == m){
        for(i = 0; i < m; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else{
        for(i = 1; i <= n; i++){
            if(check[i] == 0){
                arr[k] = i;
                check[i] = 1;
                func(k + 1);
                check[i] = 0;
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);
    func(0);
    return 0;
}
