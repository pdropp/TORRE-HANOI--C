#include <stdio.h>

void torre(int n,char inicio,char percorre,char aux){
	/*Se sobrar apenas o disco 1, mova fazer o movimento e retornar*/
	if(n==1){ 
		printf("\nMova o disco 1 da posição %c para a posição %c",inicio ,percorre);
		return;
	}
	torre(n-1,inicio,aux,percorre);
	printf("\nMova o disco %d da posição %c para a posição %c",n,inicio,percorre);
	torre(n-1,aux,percorre,inicio);
}

main(){
	int n;
	printf("Digite o numero de discos : ");
	scanf("%d",&n);
	printf("Para resolver a torre de Hanois faça :\n\n");
	torre(n,'A','C','B');
	printf("\n");
	return 0;
}
