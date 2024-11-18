#include <stdio.h>

int main() {
    int  score ;
    char grade;
         printf("enter ypur score (out of 100):");
         scanf("%d",&score);
        switch (score/10) {
        	case 10:
            case 9:
            	
                grade='A';
                printf("Excellent work!\n");
                break;
                
            case 8:
                grade='B';
                 printf("Well done!\n");
                break;
                
            case 7:
               grade='C';
                 printf("Good job!\n");
                break;
                
            case 6:
                grade='D';
                printf("You passed, but you could do better.\n");
                break;
                
            case 5:
              grade='E';
               printf("Sorry, you failed.\n");
                break;
                
            default:
                printf("Unexpected error.\n");
        }
  printf("your gread is :%c\n",grade);
    return 0;
}