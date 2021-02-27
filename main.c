#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
void opcao1eng()/**********************************************************************/
{
	int i;
	char op,ordem[6];
	inicio:
		for(i=0;i<6;i++)
		{
			ordem[i]=' ';
		}
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./ANIMALS.txt", "r");
	int k=0;
	fflush(stdin);
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0,letra=1,rec,verifica;
		fflush(stdin);
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
			/*inicio:*/
			rec=0;
			acerto=0;
			system("cls");
			int cont=0;
			linha = rand() % i;
			rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra,sizeof(palavra),file);
		}
		char mascara[strlen(palavra)-1];
			for(i=0;i<sizeof(mascara);i++)
				mascara[i] = '_';
		do
		{	
			fflush(stdin);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\tHELLO CHOOSE ENTER A LETTER\n");
			printf("\t\t\t\t\t\tSECRET LETTER DOWN\n");
			printf("\t\t\t\t\t\t\t\t\t%s",mascara);
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			ordem[j]=palpite;
			cont++;
			verifica=2;
			for(i=0;palavra[i]!='\0';i++)  
			{
				if(palpite==palavra[i])
				{
					mascara[i]=palpite;
					acerto++;
					verifica=1;
				}
				system("cls");
				/*printf("%c",mascara[i]);*/
			}
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
			printf("\t\t\t\t\t\t\t\t\tMESSAGE FROM THE GAME\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tDIGITAL LETTERS");
			printf("\n");
			printf("\n");	
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-->");
			fflush(stdin);
			puts(ordem);
			printf("\n");
			if(rec==0&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->CRAZY\n");
			}
			else if(rec==0&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SADD\n");
			}
			else if(rec==1&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD\n");
			}
			else if(rec==1&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->OPS\n");
			}
			else if(rec==2&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->YOU ARE ANDROID\n");
			}
			else if(rec==2&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SORRY\n");
			}
			else if(rec==3&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->FISIC\n");
			}
			else if(rec==3&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->AGAIN PLEASE\n");
			}
			else if(rec==4&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->THE BESTTTT\n");
			}
			else if(rec==4&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->ALMOST\n");
			}
			else if(rec==5&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NICEE\n");
			}
			else if(rec==5&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD TRY\n");
			}
			rec++;
			j++;
		}
		while(k!=0&&cont<6);
	}
	else
	{
		printf("Erro 401!");
	}
	if(k!=0)
	{
		printf("\t\t\t\t\t\t\t\t\tCHANCE SOLD OUT, PLAY AGAIN?");
		scanf("%s",&op);
	}
	else
	{
		printf("\t\t\t\t\t\t\t\t\tCongratulations, have you completed the word! Would you like to play AGAIN?\n");
		scanf("%s",&op);
	}
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
}
void opcao2eng()/*********************************************************************/
{
	int i;
	char op,ordem[6];
	inicio:
		for(i=0;i<6;i++)
		{
			ordem[i]=' ';
		}
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./PROFESSION.txt", "r");
	int k=0;
	fflush(stdin);
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0,letra=1,rec,verifica;
		fflush(stdin);
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
			/*inicio:*/
			rec=0;
			acerto=0;
			system("cls");
			int cont=0;
			linha = rand() % i;
			rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra,sizeof(palavra),file);
		}
		char mascara[strlen(palavra)-1];
			for(i=0;i<sizeof(mascara);i++)
				mascara[i] = '_';
		do
		{	
			fflush(stdin);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\tHELLO CHOOSE ENTER A LETTER\n");
			printf("\t\t\t\t\t\tSECRET LETTER DOWN\n");
			printf("\t\t\t\t\t\t\t\t\t%s",mascara);
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			ordem[j]=palpite;
			cont++;
			verifica=2;
			for(i=0;palavra[i]!='\0';i++)  
			{
				if(palpite==palavra[i])
				{
					mascara[i]=palpite;
					acerto++;
					verifica=1;
				}
				system("cls");
				/*printf("%c",mascara[i]);*/
			}
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
			printf("\t\t\t\t\t\t\t\t\tMESSAGE FROM THE GAME\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tDIGITAL LETTERS");
			printf("\n");
			printf("\n");	
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-->");
			fflush(stdin);
			puts(ordem);
			printf("\n");
			if(rec==0&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->CRAZY\n");
			}
			else if(rec==0&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SADD\n");
			}
			else if(rec==1&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD\n");
			}
			else if(rec==1&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->OPS\n");
			}
			else if(rec==2&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->YOU ARE ANDROID\n");
			}
			else if(rec==2&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SORRY\n");
			}
			else if(rec==3&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->FISIC\n");
			}
			else if(rec==3&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->AGAIN PLEASE\n");
			}
			else if(rec==4&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->THE BESTTTT\n");
			}
			else if(rec==4&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->ALMOST\n");
			}
			else if(rec==5&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NICEE\n");
			}
			else if(rec==5&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD TRY\n");
			}
			rec++;
			j++;
		}
		while(k!=0&&cont<6);
	}
	else
	{
		printf("Erro 401!");
	}
	if(k!=0)
	{
		printf("\t\t\t\t\t\t\t\t\tCHANCE SOLD OUT, PLAY AGAIN?");
		scanf("%s",&op);
	}
	else
	{
		printf("\t\t\t\t\t\t\t\t\tCongratulations, have you completed the word! Would you like to play AGAIN?\n");
		scanf("%s",&op);
	}
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
}
void opcao3eng()/*********************************************************************/
{
	int i;
	char op,ordem[6];
	inicio:
		for(i=0;i<6;i++)
		{
			ordem[i]=' ';
		}
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./COLOR.txt", "r");
	int k=0;
	fflush(stdin);
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0,letra=1,rec,verifica;
		fflush(stdin);
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
			/*inicio:*/
			rec=0;
			acerto=0;
			system("cls");
			int cont=0;
			linha = rand() % i;
			rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra,sizeof(palavra),file);
		}
		char mascara[strlen(palavra)-1];
			for(i=0;i<sizeof(mascara);i++)
				mascara[i] = '_';
		do
		{	
			fflush(stdin);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\tHELLO CHOOSE ENTER A LETTER\n");
			printf("\t\t\t\t\t\tSECRET LETTER DOWN\n");
			printf("\t\t\t\t\t\t\t\t\t%s",mascara);
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			ordem[j]=palpite;
			cont++;
			verifica=2;
			for(i=0;palavra[i]!='\0';i++)  
			{
				if(palpite==palavra[i])
				{
					mascara[i]=palpite;
					acerto++;
					verifica=1;
				}
				system("cls");
				/*printf("%c",mascara[i]);*/
			}
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
			printf("\t\t\t\t\t\t\t\t\tMESSAGE FROM THE GAME\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tDIGITAL LETTERS");
			printf("\n");
			printf("\n");	
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-->");
			fflush(stdin);
			puts(ordem);
			printf("\n");
			if(rec==0&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->CRAZY\n");
			}
			else if(rec==0&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SADD\n");
			}
			else if(rec==1&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD\n");
			}
			else if(rec==1&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->OPS\n");
			}
			else if(rec==2&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->YOU ARE ANDROID\n");
			}
			else if(rec==2&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->SORRY\n");
			}
			else if(rec==3&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->FISIC\n");
			}
			else if(rec==3&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->AGAIN PLEASE\n");
			}
			else if(rec==4&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->THE BESTTTT\n");
			}
			else if(rec==4&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->ALMOST\n");
			}
			else if(rec==5&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NICEE\n");
			}
			else if(rec==5&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->GOOD TRY\n");
			}
			rec++;
			j++;
		}
		while(k!=0&&cont<6);
	}
	else
	{
		printf("Erro 401!");
	}
	if(k!=0)
	{
		printf("\t\t\t\t\t\t\t\t\tCHANCE SOLD OUT, PLAY AGAIN?");
		scanf("%s",&op);
	}
	else
	{
		printf("\t\t\t\t\t\t\t\t\tCongratulations, have you completed the word! Would you like to play AGAIN?\n");
		scanf("%s",&op);
	}
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
}
void opcao1por()/*********************************************************************/
{
	int i;
	char op,ordem[6];
	inicio:
		for(i=0;i<6;i++)
		{
			ordem[i]=' ';
		}
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./ANIMAL.txt", "r");
	int k=0;
	fflush(stdin);
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0,letra=1,rec,verifica;
		fflush(stdin);
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
			/*inicio:*/
			rec=0;
			acerto=0;
			system("cls");
			int cont=0;
			linha = rand() % i;
			rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra,sizeof(palavra),file);
		}
		char mascara[strlen(palavra)-1];
			for(i=0;i<sizeof(mascara);i++)
				mascara[i] = '_';
		do
		{	
			fflush(stdin);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\tOla amigo, digite uma letra para tentar descobrir o animal ! boa sorte !\n");
			printf("\t\t\t\t\t\tpalavra secreta abaixo\n");
			printf("\t\t\t\t\t\t\t\t\t%s",mascara);
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			ordem[j]=palpite;
			cont++;
			verifica=2;
			for(i=0;palavra[i]!='\0';i++)  
			{
				if(palpite==palavra[i])
				{
					mascara[i]=palpite;
					acerto++;
					verifica=1;
				}
				system("cls");
				/*printf("%c",mascara[i]);*/
			}
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
			printf("\t\t\t\t\t\t\t\t\tMENSAGEM DO JOGO\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tLETRAS DIGITADAS");
			printf("\n");
			printf("\n");	
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-->");
			fflush(stdin);
			puts(ordem);
			printf("\n");
			if(rec==0&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->PARABENS\n");
			}
			else if(rec==0&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->QUE PENA\n");
			}
			else if(rec==1&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->LEGAL\n");
			}
			else if(rec==1&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NAO FOI DESSA VEZ\n");
			}
			else if(rec==2&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->COISA DE GENIO\n");
			}
			else if(rec==2&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->OPS\n");
			}
			else if(rec==3&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->CALCULISTA\n");
			}
			else if(rec==3&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->TENTE NOVAMENTE\n");
			}
			else if(rec==4&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->O MELHOR\n");
			}
			else if(rec==4&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NA TRAVE\n");
			}
			else if(rec==5&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->UAUUU\n");
			}
			else if(rec==5&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->BOA TENTATIVA\n");
			}
			rec++;
			j++;
		}
		while(k!=0&&cont<6);
	}
	else
	{
		printf("Erro 401!");
	}
	if(k!=0)
	{
		printf("\t\t\t\t\t\t\t\t\tchance esgotada ,jogar novamente ?");
		scanf("%s",&op);
	}
	else
	{
		printf("\t\t\t\t\t\t\t\t\tparabens voce completou a palavra ! gostaria de jogar ?\n");
		scanf("%s",&op);
	}
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
}
void opcao2por()/*********************************************************************/
{
	int i;
	char op,ordem[6];
	inicio:
		for(i=0;i<6;i++)
		{
			ordem[i]=' ';
		}
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./PROFISSAO.txt", "r");
	int k=0;
	fflush(stdin);
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0,letra=1,rec,verifica;
		fflush(stdin);
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
			/*inicio:*/
			rec=0;
			acerto=0;
			system("cls");
			int cont=0;
			linha = rand() % i;
			rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra,sizeof(palavra),file);
		}
		char mascara[strlen(palavra)-1];
			for(i=0;i<sizeof(mascara);i++)
				mascara[i] = '_';
		do
		{	
			fflush(stdin);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\tOla amigo, digite uma letra para tentar descobrir a cor ! boa sorte !\n");
			printf("\t\t\t\t\t\tpalavra secreta abaixo\n");
			printf("\t\t\t\t\t\t\t\t\t%s",mascara);
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			ordem[j]=palpite;
			cont++;
			verifica=2;
			for(i=0;palavra[i]!='\0';i++)  
			{
				if(palpite==palavra[i])
				{
					mascara[i]=palpite;
					acerto++;
					verifica=1;
				}
				system("cls");
				/*printf("%c",mascara[i]);*/
			}
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
			printf("\t\t\t\t\t\t\t\t\tMENSAGEM DO JOGO\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tLETRAS DIGITADAS");
			printf("\n");
			printf("\n");	
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-->");
			fflush(stdin);
			puts(ordem);
			printf("\n");
			if(rec==0&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->PARABENS\n");
			}
			else if(rec==0&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->QUE PENA\n");
			}
			else if(rec==1&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->LEGAL\n");
			}
			else if(rec==1&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NAO FOI DESSA VEZ\n");
			}
			else if(rec==2&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->COISA DE GENIO\n");
			}
			else if(rec==2&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->OPS\n");
			}
			else if(rec==3&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->CALCULISTA\n");
			}
			else if(rec==3&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->TENTE NOVAMENTE\n");
			}
			else if(rec==4&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->O MELHOR\n");
			}
			else if(rec==4&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->NA TRAVE\n");
			}
			else if(rec==5&&verifica==1)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->UAUUU\n");
			}
			else if(rec==5&&verifica==2)
			{
				printf("\n");
				printf("\t\t\t\t\t\t\t\t\t-->BOA TENTATIVA\n");
			}
			rec++;
			j++;
		}
		while(k!=0&&cont<6);
	}
	else
	{
		printf("Erro 401!");
	}
	if(k!=0)
	{
		printf("\t\t\t\t\t\t\t\t\tchance esgotada ,jogar novamente ?");
		scanf("%s",&op);
	}
	else
	{
		printf("\t\t\t\t\t\t\t\t\tparabens voce completou a palavra ! gostaria de jogar ?\n");
		scanf("%s",&op);
	}
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
}
void opcao3por()/*********************************************************************/
{
	char op;
	system("color 3");
	FILE *file=NULL;
	system("CLS");
	file = fopen("./COR.txt", "r");
	int k=0;
	
	if(file!=NULL)
	{
		char palavra[30],palpite;
		int i, linha,j=0,acerto=0;
		for(i=0;fgets(palavra, sizeof(palavra), file);i++);
		inicio:
		acerto=0;
		system("CLS");
			int cont=0;
		linha = rand() % i;
		
		rewind(file);
		for(i=0;i<=linha;i++){
			fgets(palavra, sizeof(palavra), file);
		}
		char mascara[strlen(palavra)-1];
		for(i=0;i<sizeof(mascara);i++)
			mascara[i] = '_';
		printf("ola amigo escolha uma letra para adivinhar a profissao ! boa sorte !\n");
		printf("palavra secreta abaixo\n");
		for(i=0;i<mascara[i]!='\0';i++){
			printf("%c ",mascara[i]);
		}
		do
		{	
			k=0;
			fflush(stdin);
			scanf("%c",&palpite);
			cont++;
			fflush(stdin);
			for(i=0;palavra[i]!='\0';i++)  
			{
			if(palpite==palavra[i])
			{
				mascara[i]=palpite;
				acerto++;
			}
			printf("%c ",mascara[i]);
			}
			printf("\t\tACERTOS-->%i",acerto);
		for(i=0;mascara[i]!='\0';i++)
		{
			if(mascara[i]=='_')
			{
				k++;
			}
		}
		}
		while(k!=0&&cont<6);
	}
	else{
		printf("Erro 401!");
	}
	if(k!=0){printf("\nchance esgotada ,gostaria de jogar novamente ?");}
	else
	{
	printf("parabens voce completou as palavras ! jogar novamente ?\n");
	}
	scanf("%c",&op);
	fflush(stdin);
	if(op=='s'||op=='S')
	{
		goto inicio;
	}
	fflush(stdin);
}
void menuingles()
{
	int tema;
	system("color 5");
	printf("\t\t\t\t\t\t\t\t\t##############################\n");
	printf("\t\t\t\t\t\t\t\t\tWELCOME TO THE FORCING GAME\n");
	printf("\t\t\t\t\t\t\t\t\tENTER AN OPTION\n");
	printf("\t\t\t\t\t\t\t\t\t1: ANIMALS\n");
	printf("\t\t\t\t\t\t\t\t\t2: PROFESSION\n");
	printf("\t\t\t\t\t\t\t\t\t3: COLOR\n");
	printf("\t\t\t\t\t\t\t\t\t##############################\n");
	printf("\t\t\t\t\t\t\t\t\tCHOOSE A THEME\n");
	scanf("\t\t\t\t\t\t\t\t\t%i",&tema);
	if(tema==1)
	{
		opcao1eng();
	}
	else if(tema==2)
	{
		opcao2eng();
	}
	else if(tema==3)
	{
		opcao3eng();
	}
}
void menuportugues()
{
	int tema;
	system("color 5");
	printf("\t\t\t\t\t\t\t\t\t##############################\n");
	printf("\t\t\t\t\t\t\t\t\tBEM VINDO AO JOGO DA FORCA\n");
	printf("\t\t\t\t\t\t\t\t\tDIGITE UMA OPCAO\n");
	printf("\t\t\t\t\t\t\t\t\t1: ANIMAL\n");
	printf("\t\t\t\t\t\t\t\t\t2: PROFISSAO\n");
	printf("\t\t\t\t\t\t\t\t\t3: COR\n");
	printf("\t\t\t\t\t\t\t\t\t##############################\n");
	printf("\t\t\t\t\t\t\t\t\tESCOLHA UM TEMA\n");
	scanf("\t\t\t\t\t\t\t\t\t%i",&tema);
	if(tema==1)
	{
		opcao1por();
	}
	else if(tema==2)
	{
		opcao2por();
	}
	else if(tema==3)
	{
		opcao3por();
	}
}
int main()
{
	system("color 4");
	srand(time(0));
	char opcao;
	printf("\t\t\t\t\t\t\tESCOLHA A LINGUA DO JOGO I PARA INGLES E P PARA PORTUGUES\n");
	printf("\n");
	printf("\t\t\t\t\t\t\tCHOOSE LANGUAGE OF THE GAME I FOR ENGLISH AND P FOR PORTUGUESE\n");
	printf("\n");
	printf("\t\t\t\t\t\t\tCentro Federal de Educacao Tecnologica de Minas Gerais\n");
	scanf("\t\t\t\t\t\t\t\t\t%c",&opcao);
	if(opcao=='P' || opcao=='p')
	{
		menuportugues();
	}
	else if(opcao=='I' || opcao=='i')
	{
		menuingles();
	}
	return 0;
}
