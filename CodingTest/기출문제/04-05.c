#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int calorie[], int calorie_len) {
    int min_cal = calorie[0];
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) {
        // 현재값에-최소값만큼 누적
        if (calorie[i] > min_cal)
            answer += calorie[i] - min_cal;
        // 최소값이 갱신
        else
            min_cal = calorie[i];
    }
    return answer;
}

int main() {
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}