#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// votes : 투표함에 있는 표
// N : 후보자 수, K표수만큼 받은 후보자의 수를 찾는다
int solution(int votes[], int votes_len, int N, int K) {
    
    // 각각의 후보가 받은 표수
    // 1번 후보가 받은 표 : counter[1]
    int counter[11] = { 0 };
    
    for (int i = 0; i < votes_len; ++i)
        counter[votes[i]] += 1;

    // int answer = -1; // 카운팅은 0부터 시작한다
    int answer = 0;

    for (int i = 0; i <= N; ++i)
        if (counter[i] == K)
            answer += 1;
    return answer;
}

int main() {
    int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
    int votes_len = 10;
    int N = 5;
    int K = 2;
    int ret = solution(votes, votes_len, N, K);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}