#include<stdio.h>
void right(int* a,int* b) {
  *a = *a + 2;
}
void left(int* a,int* b) {
  *a = *a - 2;
}
void up(int* a,int* b) {
  *b = *b + 2;
}
void down(int* a,int* b) {
  *b = *b - 2;
}
int main() {
    int x = 0, y = 0;
    int test;
    char operator;
      printf("Enter the No of Test case : ");
      scanf("%d",&test);
    for(int i = 1; i <= test; i++) {
      printf("Enter opertor to be performed : ");
      scanf(" %c",&operator);
      switch(operator) {
        case '@': printf("Before : (%d,%d)\t",x,y);
                  right(&x,&y);
                  printf("After : (%d,%d)\n",x,y);
        break;
        case '&' : printf("Before : (%d,%d)\t",x,y);
                  left(&x,&y);
                  printf("After : (%d,%d)\n",x,y);
        break;
        case '^' : printf("Before : (%d,%d)\t",x,y);
                  up(&x,&y);
                  printf("After : (%d,%d)\n",x,y);
        break;
        case '!' : printf("Before : (%d,%d)\t",x,y);
        down(&x,&y);
                  printf("After : (%d,%d)\n",x,y);
        break;
        default : printf("Invalid");
      }
    }
    return 0;
    }