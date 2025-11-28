#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }
    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);
    return 0;
}
