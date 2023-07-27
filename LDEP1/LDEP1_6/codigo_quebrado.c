#include <stdio.h>

int main(){
	
	int l, c, i, j;
	int soma = 0, total= 0, atual;

	scanf("%d %d", &l, &c);

	for (i = 0; i<l; i++){
		soma = 0;
		for(j = 0; j<c; j++){
			scanf("%d", &atual);
			soma += atual;
		}
		total+=soma;
		printf("%d\n", soma);
	}
	printf("%d\n", total);

	return 0;
}
