#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[100], n=100, k=0, loc=-1, key, i;

    for (i=0; i<n; i++) {
        arr[i] = rand()%100;
        printf("%d ", arr[i]);
    }
    printf("\nEnter your search key: ");
    scanf("%d", &key);
    while (k<n) {
        if (key == arr[k]) {
            loc = k;
            printf("Our value is %d and location at %d", key, loc);
            break;
        }
        k++;
    }

    return 0;
}
