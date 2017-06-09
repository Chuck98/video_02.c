#include<stdio.h>
#include<locale.h>

/* 
NOME: Angelo Alfredo Nunes Pereira RA: 2216112268
Nome: Bruno Henrique Pavão Inacio  RA: 2216203495
Nome: Lucio Flavio Nunes Pereira   RA: 2216112269
*/


int main(){
	int i,p=0,n,t;
	setlocale(LC_ALL,"portuguese");
	printf("****TÉCNICA POMODORO****\n");
	printf("A cada 25 minutos realize uma tarefa do seu dia\n");
	printf("Para esta técnica voçê pode utilizar ferramentas como papel , celular ou computador para anota suas tarefas e ficar bem organizado\n");
	printf("E evite o máximo as interrupções\n");
	
	while(1)
	{
		printf("Aperte: 1 para iniciar ou aperte: 2 para sair\n");
		scanf("%d",&n);
		if(n==2)
		{
			break;
		}
		if(n==1)
		{
			for(i=1;i<=4;i++)
			{
				printf("Agora faça a sua tarefa por 25 minutos, quando acaba o tempo digite: 1\n");
				scanf("%d",&t);
				p++;
				if(t==1 && p<4)
				{
					printf("Pronto agora que terminou seu %d pomodoro, descanse por 5 minutos\n\n",p);
				}
				if(t==1 && p==4)
				{
					printf("Parabéns, agora que terminou os seus %d pomodoro , descanse entre 15 a 30 minutos e se quiser pode começa novos pomodoro\n\n\n\n",p);
				}
				if(t!=1)
				{
					printf("Numero errado, repetindo a mensagem abaixo\n");
					i--;
					p--;
				}
			}
		}
		if(n>2 || n<1)
		{
			printf("Numero inválido , digite outro por favor\n\n");
		}
		p=p*0;
	}
	return 0;
	
}
