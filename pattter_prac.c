#include <stdio.h>

int main(){
int n;

printf("Enter the number of iterations:");
scanf("%d",&n);
printf(pat(n));
return 0;
}

int pat(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            printf("%d",&j);
        }
    }
    return 0;   
}
