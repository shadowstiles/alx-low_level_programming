#include <stdio.h>
/**
<<<<<<< HEAD
 * * main - Entry
 * * Return: 0
 * */
int main(void) {
	    int count = 0;

	        while (count < 11) {
			        if (count == 10) {
					            printf("\n");
						                break;
								        }
				        else
						        {
								            printf("%i", count);
									                count++;
											        }
					    }
		    return (0);
=======
 * main - Entry
 * Return: 0
 */
int main(void) {
    int count = 0;

    while (count < 11) {
        if (count == 10) {
            printf("\n");
            break;
        }
        else
        {
            printf("%i", count);
            count++;
        }
    }
    return (0);
>>>>>>> c6ed6da485a3fe6c055d9f128b98b2d74caff76e
}
