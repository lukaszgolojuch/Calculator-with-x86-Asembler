

#include <stdio.h>

typedef enum { F, T } boolean; //we create enumeration type acting like bool in C++
                            //F - false, T - True

int adding(int x, int y); //declaration of adding function 
int multiply(int x, int y); //declaration of multiplying function
int descend(int x, int y); //declaration of descending function
int power(int x, int y); //declaration of power of number function 
int divide(int x, int y); //declaration of dividing function 


void GetNumber (int *x, int *y)
{
    //Function that is created to get numbers from user
    printf("------------------------------------------------------ \n");
    printf("First number: \n");
    scanf_s("%d", x);
    printf("Second number: \n");
    scanf_s("%d", y);
    printf("------------------------------------------------------ \n");
}

int main(int argc, const char * argv[]) {
    int x,y;
    int input;
    boolean exit = F; //F - exit program 
                      //T - do not exit program
    
    while (exit == F)
    {
        //beginning of menu
        printf("Menu: \n");
        printf("Artimetical module: \n");
        printf("1. Add \n");
        printf("2. Descend \n");
        printf("3. Multiply \n");
        printf("4. Divide \n");
        printf("5. Power of number \n");

        printf("9. Exit program \n");
        printf("------------------------------- \n");
        //end of menu
        printf("Your choice: "); 
        scanf_s("%d", &input); //get option from user

        switch (input) {
            case 1:
                //case for adding two numbers
                GetNumber (&x, &y);
                printf("%d + %d = %d \n",x, y, adding(x, y));
                break;
            case 2:
                //case for descending two numbers
                GetNumber (&x, &y);
                printf("%d - %d = %d \n",x, y, descend(x, y));
                break;
            case 3:
                //case for multiplying two numbers
                GetNumber (&x, &y);
                printf("%d * %d = %d \n",x, y, multiply(x, y));
                break;
            case 4:
                //case for dividing two numbers
                GetNumber (&x, &y);

                if (y == 0)
                {
                    printf("Wrong input \n");
                }
                else
                {
                    printf("%d / %d = %d \n", x, y, divide(x, y));
                }

                break;
            case 5:
                //case for function number of some number
                GetNumber(&x, &y);
                printf("%d ^ %d = %d \n", x, y, power(x, y));
                break;
            case 9:
                //exit program case
                exit = T;
                break;
                
            default:
                //default - wrong output (we do not have this option)
                printf("Wrong input \n");
                break;
        }
        printf("------------------------------- \n");
    }
    printf("------------------------------- \n");
    printf("Dziekujemy za uzywanie mojej aplikacji! \n");
    printf("Zapraszamy ponownie :) \n");
    printf("------------------------------- \n");
    return 0;
}
