#include <stdio.h> // Necessary for printf()
#include <stdlib.h> // provide rand(), srand()
#include <time.h> // provides time()

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	srand(time(NULL)); 
	
	//random number 0 to 10
	int myrand = rand()%11;

	if (myrand <= 4){ 
		//if myrand between 0 to 4 print the following:
		printf("Eat more beef, kick less cats \n");

	} else if (myrand <= 9){
		//if myrand between 5 to 9 print the following:
		printf("FRODO LIVES \n");
	} else {
		//if myrand 10 print the following:
		printf("Larn is the best roguelike \n");
	}

	printf("The random number was: %d \n", myrand);

}
