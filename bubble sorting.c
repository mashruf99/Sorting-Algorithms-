#include<stdio.h>

int main() {
    int n,i,j,p,temp=0;
    printf("Input array size : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(a[j]<a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
        printf("%d\n",a[i]);
    }



    return 0;
}
