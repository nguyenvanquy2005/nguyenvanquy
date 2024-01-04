#include<stdio.h>
 int main(){
    int n, i, j, dem;
    printf("Enter n (n >= 2): ");
    scanf("%d", &n);
    while (n < 2) {
        printf("n must be >= 2, Enter n: ");
        scanf("%d", &n);
        printf("n must be >= 2,", n);
        break;
    }printf("Prime numbers up to %d: ", n);
	 
    for (i = 2; i <= n; i++) {
       dem = 0;  
        for (j = 2; j <= i-1; j++) {
            if (i % j == 0) {
                dem ++;  
                break;
            }
        }

        
        if (dem==0) {printf("%d ", i);
            
        }
    }

    
    return 0;
}
	 
