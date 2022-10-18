#include <stdio.h>
/**
<<<<<<< HEAD
 * main -Entry
 * Return: 0
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;
	int limit = 0;
=======
 * * main -Entry
 * * Return: 0
 * */
void print_alphabet_x10(void) {
	    char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	        int count = 0;
		    int limit = 0;
>>>>>>> 839da332daabee69964fb6187ac67865ffef3abc

		        while (limit < 10) {
				        while (count < 28) {
						            if (alphabet_lower[count] == '\0') {
								                    putchar('\n');
										                    break;
												                }
							                putchar(alphabet_lower[count]);
									            count++;
										            }
					        limit++;
						        count = 0;
							    }
}

int main(void) {
	    print_alphabet_x10();
	        return (0);
}
