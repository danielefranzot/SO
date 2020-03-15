#include <stdio.h>;

int main(int argc, char **argv) {
	int a,b,res;
	char operazione;
	printf("inserisci un operatore e due operandi");
	res = scanf("%c %d %d",&operazione,&a,&b);

	//controllo che l'input sia corretto
	if(res != 3){
		printf("input non valido...%d",res);
		return 1;
	}

	switch(operazione){
	case '+':
		printf("%d", a+b);
		break;
	case '-':
		printf("%d", a-b);
		break;
	case '*':
		printf("%d", a*b);
		break;
	case '/':
		printf("%d", a/b);
		break;
	default:
		printf("operazione non riconosciuta");
		return 1;
 	}
	return 0;
}




