#include <stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))

int dp[1000001]={0,0,1,1};
int main(){
    int n,i,j;
    scanf("%d", &n);

    for(i=4; i<=n; i++){
        dp[i]=dp[i-1]+1; // -1
        if(i%3==0)dp[i]=MIN(dp[i], dp[i/3]+1); //나누기 3
        if(i%2==0)dp[i]=MIN(dp[i], dp[i/2]+1); //나누기 2
    }
    printf("%d\n", dp[n]);
    return 0;
}

// 백준 문제 1463-1로 만들기


// 정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

// X가 3으로 나누어 떨어지면, 3으로 나눈다.
// X가 2로 나누어 떨어지면, 2로 나눈다.
// 1을 뺀다.
//정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력
