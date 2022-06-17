#include <stdio.h>

int main(){
    int choice, n1, n2;
    float result;
    
    while(choice != 0){
        system("cls");
        printf("Pick your operation:\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n0 - Exit\n");
        scanf("%d", &choice);
        
        if(choice == 0){
            break;
        }

        switch(choice){        
            case 1:
                printf("Addition:\n");
                printf("Enter two numbers: ");
                scanf("%d %d", &n1, &n2);
                result = n1 + n2;
                printf("%d + %d = %.1f\n", n1, n2, result);
                break;
            case 2:
                printf("Subtraction:\n");
                printf("Enter two numbers: ");
                scanf("%d %d", &n1, &n2);
                result = n1 - n2;
                printf("%d - %d = %.1f\n", n1, n2, result);
                break;
            case 3:
                printf("Multiplication:\n");
                printf("Enter two numbers: ");
                scanf("%d %d", &n1, &n2);
                result = n1 * n2;
                printf("%d * %d = %.1f\n", n1, n2, result);
                break;
            case 4:
                printf("Division:\n");
                printf("Enter two numbers: ");
                scanf("%d %d", &n1, &n2);
                result = n1 / n2;
                printf("%d / %d = %.1f\n", n1, n2, result);
                break;
            default:
                printf("Invalid choice\n");
                printf("Press any key to continue...\n");
        }
        getch();
    }
    printf("thx for using the calculator\n");
    printf("press any key to exit\n");
    getch();
    return 0;
}