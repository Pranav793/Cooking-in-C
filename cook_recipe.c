#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cook_recipe(char *name, char *descrip, char *totaltime, char *url, char **ingredients, char **steps, int len_ingredients, int len_steps) {

    printf("-------------------------------\n");
    printf("\n%s\n", name);
    printf("%s\n", descrip);
    printf("Total time: %s\n", totaltime);
    printf("%s\n", url);

    printf("\nFirstly, you need to collect your ingredients!\n");
    
    for (int i = 0; i < len_ingredients; i++)
    {
        printf("\n%s\n", ingredients[i]);
        printf("Do you have these ingredients? If so, hit Enter to continue. Hit 'x' then Enter if you don't or wish to quit the recipe.\n");
        int c = getchar();
        if(c == 'x') {

            printf("Sorry, you cannot make %s without %s.", name, ingredients[i]);
            exit(0); // should be return to menu
        }
        if(c) {
            printf("Nice!\n");
        }
    }

    printf("\nTime to actually cook!\n");
    
    for (int i = 0; i < len_steps; i++)
    {
        printf("\n%s\n", steps[i]);
        printf("Did you complete this step? If so hit Enter to continue.\n");
        int c = getchar();
        if(c) {
            printf("Nice!\n");
        }
    }

    printf("\nYou have finished the recipe! Congrats!\n");

    return 0;
}