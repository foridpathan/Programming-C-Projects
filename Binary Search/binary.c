#include <stdio.h>

int main ()  {
    int loc=-1, n=100, start=0, End=n-1, arr[n], mid = (start+End)/2, key;

    for (int i=0; i<n; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    printf("\nEnder your search value: ");
    scanf("%d", &key);
    while (start<End) {
        if (arr[mid] < key) {
            start = mid+1;
        }
        else if (key == arr[mid]) {
            loc = mid;
            printf("Your search value is: %d and location: %d", key, loc);
            break;
        }
        else {
            End = mid-1;
        }

        mid = (start + End-1)/2;
    }

    if (loc == -1) {
        printf("Value not found");
    }

    return 0;
}
