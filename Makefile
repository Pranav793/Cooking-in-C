all: rice_krispies strawberry_shortcake brownie

cook_recipe.o: cook_recipe.c cook_recipe.h
	clang -c cook_recipe.c

rice_krispies: cook_recipe.o rice_krispies.o
	clang cook_recipe.o rice_krispies.o -o rice_krispies

rice_krispies.o: rice_krispies.c cook_recipe.h
	clang -c rice_krispies.c

strawberry_shortcake: cook_recipe.o strawberry_shortcake.o
	clang cook_recipe.o strawberry_shortcake.o -o strawberry_shortcake

strawberry_shortcake.o: strawberry_shortcake.c cook_recipe.h
	clang -c strawberry_shortcake.c

brownie: cook_recipe.o brownie.o
	clang cook_recipe.o brownie.o -o brownie

brownie.o: brownie.c cook_recipe.h
	clang -c brownie.c

clean:
	rm -f cook_recipe.o strawberry_shortcake.o strawberry_shortcake rice_krispies.o rice_krispies brownie.o brownie