#include <stdio.h>

int main() {
    int  score ;
    char grade;
         printf("enter ypur score (out of 100):");
         scanf("%d",&score);
        switch (score/10) {
        	case 1:
            case 9:
            	
                grade='A';
                break;
                
            case 8:
                grade='B';
                break;
                
            case 7:
               grade='C';
                break;
                
            case 6:
                grade='D';
                break;
                
            case 5:
              grade='E';
                break;
                
            default:
                printf("Unexpected error.\n");
        }
  printf("your gread is :%c\n",grade);
    return 0;
}