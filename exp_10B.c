/*name - soni sunil chauhan
uin - 251P061
div - C*/
#include<stdio.h>
int main(){
    int arr[10], i, n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    ptr = &arr[n - 1];

    printf("\nArray elements in reverse order:\n");
    for(i = 0; i < n; i++){
        printf("%d ", *ptr);
        ptr--;
    }
    return 0;
}
