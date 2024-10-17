import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] n = new int[9];
        int index = 0;
        int max = n[0];
        
        for(int i = 0; i < n.length; i++){
            n[i] = scan.nextInt();
        }
        for(int i = 0; i<n.length; i++){
            if(n[i]>max){
                max=n[i];
                index = i;
            }
        }
          System.out.println(max);
          System.out.println(index + 1);
    }
}

// 백준 2562 문제 풀이
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성
