

#include <stdio.h> // biblioteca padrao
#include <math.h> // Biblioteca para utilização das operaçoes de raiz e potencia


int main(void) //GitHub:Br7noG4rcia
{
    int escolha; // declaração da variavel de numeros inteiros 
    float a, b, r ,raiz, potencia; //declaraçao de variavel de numeros com pontos flutuantes
   
    printf("Bruno Machado Garcia / Curso: Análise e Desenvolvimento de Sistemas / Universidade La Salle / 202212475\n\n"); // mensagem pedida pela professor
	printf(" escolha uma opção:\n\n 1: Soma\n 2: Subtração\n 3: Multiplicação\n 4: divisão\n 5: Raiz Quadrada\n 6: potencia\n"); // mensagem mostrando as opçoes de operaçoes
	scanf("%d",&escolha);// funçao para definir a escolha da operação
	
	switch(escolha) //comando que habilita os casos para para a escolha
	
	{
	                 case 1: // caso adiçao
	                 printf("Digite o primeiro valor: ");// tela de escolha da primeira variavel
	                 scanf("%f", &a); //define a primeira varialvel escolida
	                 printf("Digite o segundo valor: "); //tela de escolha da segunda variavel
	                 scanf("%f", &b); //define a segunda varialvel escolida
	                 r = a + b; // logica da operação
	                 printf("resultado é %f" ,r); //tela do resultado da equação
	                 break; // forca a saida do caso
	                 
	           
	                 case 2:
	                 printf("Digite o primeiro valor: ");
	                 scanf("%f", &a); 
	                 printf("Digite o segundo valor: ");
	                 scanf("%f", &b); 
	                 r = a - b;
	                 printf("resultado é %f" ,r);
	                 break;
	    
	    
	                 case 3:
	                 printf("Digite o primeiro valor: ");
	                 scanf("%f", &a); 
	                 printf("Digite o segundo valor: ");
	                 scanf("%f", &b); 
	                 r = a * b;
	                 printf("resultado é %f" ,r);
	                 break;
	    
	    
	                 case 4:
	                 printf("Digite o primeiro valor: ");
	                 scanf("%f", &a); 
	                 printf("Digite o segundo valor: ");
	                 scanf("%f", &b); 
	                 r = a / b;
	                 printf("resultado é %f" ,r);
	                 break;
	                 
	                 
	                 case 5:
	                 printf("Digite o primeiro valor: ");
	                 scanf("%f", &a); 
	                 raiz=sqrt(a); //função da biblioteca <math.h> usado para raiz
	                 printf("resultado é %f" ,raiz);
	                 break;
	                 
	                 
	                 case 6:
	                 printf("Digite o primeiro valor: ");
	                 scanf("%f", &a); 
	                 potencia=pow(a,2); //função da biblioteca <math.h> usado para potencialização
	                 printf("resultado é %f" ,potencia);
	                 break;
	              
	    
	   
	   default:printf(" Opção nao encontrada "); //funçao usada caso nao haja variavel ou resporta correta
	    
	    
	                 
	    

	 
	}
	

    return 0;
}
