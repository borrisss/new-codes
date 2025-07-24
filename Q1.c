#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positive = 0, negative = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }

    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);

    return 0;
}
