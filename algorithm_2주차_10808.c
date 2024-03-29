
//백준 10808

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    int arr[26] = {0}; //비교할 알파벳 배열
    char str[MAX];  //입력할 문자열

    scanf("%s", str);  //문자열 입력

    for (int i = 0; i < strlen(str); i++){
        arr [str[i] - 'a']++; // 첫번째 문자열의 아스키 코드와 a 의 아스키 코드를 비교 후 그 자리에 숫자를 추가

    }

    for (int j = 0; j < 26; j++){
        printf("%d ", arr[j]);
        
    }

    return 0;

}