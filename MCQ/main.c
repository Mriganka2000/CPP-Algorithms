#include <stdio.h>

int f(int a, int b) {
    if(b==0){
        return 0;
    }
    else {
        return a + f(a, b - 1);
    }
}

// int fun(int n) {
//     if(n==4) {
//         return n;
//     }
//     else {
//         return 2 *  fun(n + 1);
//     }
    
// }

int fun(int n) {
    static int count = 0;
    count++;
    int x = 1, k;
    if(n==1) 
        return x;
    for(k = 1; k<n;k++) {
        x = x + fun(k) * fun(n-k);
    }
    return x;
}

int main(void){
    // Your code here!
    // int arr[] = {[2] = 0, [0] = 1};
    // printf("%d", arr[0]);
    
    // int i = 10;
    // static int x = i;
    // if(x==i) {
    //     printf("e");
    // }
    // else {
    //     printf("n");
    // }
    
    // static int i = 4;
    // printf("%d", i--);
    // if(i) {
    //     main();
    // }
    
    printf("%d", fun(5));
    
    // char str[] = "Hello World";
    // char ch = (str + 2*sizeof(int))[-2];
    // printf("%c", ch);
    
    // int a[] = { 5, 1, 15, 20, 25};
    // int i, j, k;
    // i = ++a[1];
    // j= a[1]++;
    // k = a[i++];
    // printf("%d %d %d", i, j, k);
    
    // char *str = "GNIT";
    // printf("%c", *&*str);
}
