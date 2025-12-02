#include <stdio.h>
int main() {
	int ore;
	char scelta;
	printf("inserisci il numero di ore:");
	scanf("%d", &ore);
	
	printf("vuoi convertire in minuti (m) o in secondi (s)?")
	scanf("%c", &scelta); 
	if (scelta == 'm' || scelta == 'M') {
	printf("%d ore = %d minuti\n", ore, ore * 60);
	} else if (scelta == 's' || scelta == 'S') {
		printf("%d ore = %d secondi\n", ore, ore * 3600);
	} else {
		printf("scelta non valida. \n");
	}
} return 0;
