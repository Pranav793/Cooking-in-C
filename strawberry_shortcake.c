#include <stdio.h>
#include <stdlib.h>
#include "cook_recipe.h"

char name[] = "Strawberry Shortcake";
char descrip[] = "An old-fashioned, tender shortcake with two layers of strawberries topped with whipped cream.\n";
char totaltime[] = "50 mins";
char url[] = "https://www.allrecipes.com/recipe/8201/strawberry-shortcake/";

int len_ingredients = 10;
int len_steps = 5;

char *ingredients[10][1024] = {
                            "3 pints fresh strawberries", 
                            "1/2 cup white sugar", 
                            "2 and 1/4 cups all-purpose flour", 
                            "4 teaspoons baking powder", 
                            "2 tablespoons white sugar", 
                            "1/4 teaspoon salt", 
                            "1/3 cup shortening", 
                            "1 egg", 
                            "2/3 cup milk",
                            "2 cups whipped heavy cream"
                            };


char *steps[5][300] = {
                        "Step 1: Slice the strawberries and toss them with 1/2 cup of white sugar. Set aside.", 
                        "Step 2: Preheat oven to 425 degrees F (220 degrees C). Grease and flour one 8 inch round cake pan.",
                        "Step 3: In a medium bowl combine the flour, baking powder, 2 tablespoons white sugar and the salt. With a pastry blender cut in the shortening until the mixture resembles coarse crumbs. Make a well in the center and add the beaten egg and milk. Stir until just combined.", 
                        "Step 4: Spread the batter into the prepared pan. Bake at 425 degrees F (220 degrees C) for 15 to 20 minutes or until golden brown. Let cool partially in pan on wire rack.", 
                        "Step 5: Slice partially cooled cake in half, making two layers. Place half of the strawberries on one layer and top with the other layer. Top with remaining strawberries and cover with the whipped cream."
                    };

int main(void) {
    
    cook_recipe(name, descrip, totaltime, url, ingredients, steps, len_ingredients, len_steps);
    
    return 0;

}