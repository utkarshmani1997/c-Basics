#include <stdio.h>
int main() {
	// Write your code here
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    int even = 0;
    int odd = 0;
    for (int i=0; i<n; i++) {
        if ((i%2==0) && (a[i]%2==0)) {
            even += a[i]; 
        } else if (a[i]%2 != 0) {
            odd += a[i];
        }
    }
    
    printf("%d %d", even, odd);
    return 0;
}
