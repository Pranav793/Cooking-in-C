all: rice_krispies strawberry_shortcake

rice_krispies: cook_recipe.o rice_krispies.o
	clang cook_recipe.o rice_krispies.o -o rice_krispies

rice_krispies.o: rice_krispies.c cook_recipe.h
	clang -c rice_krispies.c

strawberry_shortcake: cook_recipe.o strawberry_shortcake.o
	clang cook_recipe.o strawberry_shortcake.o -o strawberry_shortcake

strawberry_shortcake.o: strawberry_shortcake.c cook_recipe.h
	clang -c strawberry_shortcake.c

cook_recipe.o: cook_recipe.c cook_recipe.h
	clang -c cook_recipe.c

# clean:
# 	rm -f strawberry_shortcake.o rice_krispies.o cook_recipe.o rice_krispies strawberry_shortcake