#include <stdio.h>
int dp[1001]={0,1,2};
int main(){
    int n;
    scanf("%d", &n);

    for(int i=3; i<=n; i++){
        dp[i]=(dp[i-2] + dp[i-1])%10007;
    }
    printf("%d", dp[n]);
    return 0;
}


//백준 - 2×n 타일링 - 11726 문제 풀이
// 2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
