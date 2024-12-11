#include<stdio.h>
int main() {
    int Arr[] = {43,45,98,23,21,5,1,8,2,6,77,18,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,s;

    printf("Before Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    for(i = 0;i < n;i++) {
        s = i;
        for(j = i+1;j < n;j++) {
            if(Arr[s] > Arr[j]) {
                s = j;
            }
        }
        if(i != s) {
            j = Arr[i];
            Arr[i] = Arr[s];
            Arr[s] = j;
        }
    }

    printf("After Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}