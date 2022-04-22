#include <stdio.h>
#include <stdlib.h>
#include "cook_recipe.h"

char name[] = "Brownies";
char descrip[] = "The Best Brownie Recipe Ever has the perfect crackly top with bites of fudgy, chewy chocolate goodness. \n";
char totaltime[] = "35 mins";
char url[] = "https://thestayathomechef.com/brownie-recipe/";

int len_ingredients = 9;
int len_steps = 7;

char *ingredients[9][1024] = {
                            "10 tablespoons salted butter melted", 
                            "1 cup granulated sugar", 
                            "2 large eggs", 
                            "2 teaspoons vanilla extract", 
                            "1/2 cup melted milk chocolate chips", 
                            "3/4 cup all-purpose flour", 
                            "1/4 cup unsweetened cocoa powder", 
                            "1/2 teaspoon salt", 
                            "1 cup milk chocolate chips"
                            };


char *steps[7][300] = {
                        "Step 1: Preheat oven to 350 degrees F. Line a metal 9x9 pan with parchment paper.", 
                        "Step 2: Pour melted butter into a large mixing bowl. Whisk in sugar by hand until smooth, 30 seconds.",
                        "Step 3: Add in eggs and vanilla extract. Whisk 1 minute.", 
                        "Step 4: Whisk in melted chocolate until combined and smooth.", 
                        "Step 5: Use a rubber spatula to stir in flour, cocoa powder, and salt until just combined. Stir in whole chocolate chips.", 
                        "Step 6: Pour into prepared pan and smooth out.", 
                        "Step 7: Bake in the preheated oven for 30 minutes. Let cool in pan 30 minutes before slicing."
                    };

int main(void) {
    
    cook_recipe(name, descrip, totaltime, url, ingredients, steps, len_ingredients, len_steps);
    
    return 0;

}