#include <stdio.h>
#include <stdlib.h>
#include "cook_recipe.h"

char name[] = "Rice Krispies";
char descrip[] = "Sweet and fluffy marshmallows, creamy butter, and crispy rice cereal make these homemade rice krispie treats melt-in-your-mouth delicious!\n";
char totaltime[] = "1hr 15 mins";
char url[] = "https://www.budgetbytes.com/homemade-rice-krispie-treats/";


int len_ingredients = 4;
int len_steps = 7;

char *ingredients[4][40] = {
                            "6 Tbsp butter (salted)", 
                            "6 cups mini marshmallows (10oz. package)", 
                            "1/2 tsp vanilla extract", 
                            "4 cups rice krispie cereal"
                            };

char *steps[7][300] = {
                        "Step 1: Line an 8x8 dish with waxed paper or foil and coat lightly in oil.", 
                        "Step 2: Add the butter to a pot and melt over medium heat.",
                        "Step 3: Once the butter is melted, add the marshmallows and continue to stir and cook until the marshmallows are melted and incorporated into the butter.", 
                        "Step 4: Once the marshmallows are melted and incorporated, remove the pot from the heat. Stir in the vanilla extract.", 
                        "Step 5: Add the rice krispie cereal and stir until everything is coated in the marshmallow mixture.",
                        "Step 6: Press the rice krispie mixture into the prepared dish using a lightly oiled spatula. Avoid over compacting the treats.",
                        "Step 7: Allow the treats to cool at room temperature or in the refrigerator until solid. Slice into 9 pieces and serve."
                    };

int main(void) {

    cook_recipe(name, descrip, totaltime, url, ingredients, steps, len_ingredients, len_steps);
    
    return 0;

}