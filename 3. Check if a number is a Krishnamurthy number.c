#include <stdio.h>
int main() {
    int num, original, remainder, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (original != 0) {
            remainder = original % 10;
            fact = 1;
            for (int i = 1; i <= remainder; i++) {
                fact *= i;
            }
            sum += fact;
            original /= 10;
        }
        if (sum == num) {
            printf("Krishnamurthy number\n");
        } else {
            printf("Not a Krishnamurthy number\n");
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}