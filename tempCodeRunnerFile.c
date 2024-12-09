#include <stdio.h>

int mysum(int arr[], int index, int n) {
    if (index >= n) return 0;
    return arr[index] + mysum(arr, index + 1, n);
    }

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }

    int sum = mysum(arr, 0, N);
    printf("%d\n", sum);
}