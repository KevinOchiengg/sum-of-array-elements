#include <stdio.h>

int main(){
 int array[10], i;
 int sum = 0;

 printf("Enter numbers:");

for ( i = 0; i < 10; i++){
 scanf("%d%t", &array[i]);
}

printf("even numbers are:\t");
for ( i = 0; i < 10; i++){
 if (array[i] % 2 == 0){
  printf("%d\t", array[i]);
  sum = sum + array[i];
  
 }

}

 printf("sum of even numbers is : %d\n", sum);

 return 0;
}