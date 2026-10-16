#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<time.h>

//funções 
void menu();
void bubbleSort();
void selectioSort();


//variaveis globais
int cmp=0,trc=0;
int tam=10;
int resp[10] , opc=0 , cont=0,salvaVet;
int vet[100], copVet[100];;
int vet1[] = {42 , 17 , 89 , 3 , 65 , 24 , 91 , 58 , 12 , 76};
int copVet1[] = {42 , 17 , 89 , 3 , 65 , 24 , 91 , 58 , 12 , 76};
int vet2[] = {23 , 12 , 27 , -2 , 20 , 24 , 157 , 50 , 81 ,53};
int copVet2[] = {23 , 12 , 27 , -2 , 20 , 24 , 157 , 50 , 81 ,53};

main()
{
    menu();
}

void menu()
{
    char nome[20];
    printf("Como é seu nome(Somente o primeiro): ");
    scanf("%s",nome);
    printf("Bem vindo ao Meu Programa %s",nome);
    puts("\nFiz esse sistema para ordenação especialmente de numeros");
    puts("Nele você vai encontrar algoritmos de ordenação \ne ate organização como fila e pilha");
    printf("O que Você quer primeiro \n1--Algoritmos de Ordenação\n2--Algoritmos de Organização\nR:");
    scanf("%d",&opc);
    resp[cont] = opc;
    cont++;
    while(1)
    {
    
    
    if(opc == 1)
    {
        system("clear");
        puts("\n=========================\nMenu dos Metodos de Ordenação\n");
        puts("1--Bubble Sort");
        puts("2--Selection Sort");
        puts("3--Insertion Sort");
        puts("4--Merge Sort");
        puts("5--Quick Sort");
        puts("6--Voltar");
        puts("7--Sair");
        printf("Resp:");
        scanf("%d",&opc);
        resp[cont] = opc;
        cont++;

        switch(opc)
        {
            case 1:
                opc=0;
                while(1)
                {
                    system("clear");
                    puts("\n==================");
                    puts("Metodo Bubble Sort\n");
                    puts("1--Você quer testar o metodo somente ou \n2--Você quer continuar?\n3--Voltar");
                    scanf("%d",&opc);
                    resp[cont] = opc;
                    cont++;
                    if(opc == 1)
                    {
                        puts("Para testarmos você tera que escolher entre");
                        puts("======= Vetor 1 =======");
                        for(int i = 0; i < tam; i++)
                        {
                            printf("%d |",vet1[i]);
                        }
                        puts("\n======= Vetor 2 =======");
                        for(int i = 0; i < tam; i++)
                        {
                            printf("%d |",vet2[i]);
                        }
                        printf("\n\nQual Vetor você escolhe(1 ou 2): ");
                        scanf("%d",&opc);
                        resp[cont] = opc;
                        //printf("%d",cont);
                        salvaVet=opc;
                        cont++;
                        
                        bubbleSort();

                        
                    }//fim do if
                    else if(opc == 2)
                    {
                        while(1)
                        {
                            salvaVet=3;//salva vet recebe 3 para ele entrar na terceira condição/if do bubble
                            system("clear");
                            puts("===========================\n");
                            puts("Digite o tamanho do vetor");
                            puts("Vetor \n|1|2|3|4|5|6|7|8|9|10| etc");
                            puts("você precisa de explicação");
                            puts("1--Não\n2--Sim\n3--Voltar");
                            scanf("%d",&opc);
                            resp[cont] = opc;
                            //printf("%d",cont);
                            cont++;
                            
                            if(opc == 1)
                            {
                                printf("Digite o tamanho (O limite é 100): ");
                                scanf("%d",&tam);

                                puts("Você Vai querer adicionar os numeros manualmente ou prefere automatiza-los");
                                puts("1--Manual");
                                puts("2--Aleatórios");
                                printf("Resp: ");
                                scanf("%d",&opc);

                                if(opc == 1)
                                {
                                    puts("Agora adicione os numeros ao seu vetor");
                                    for(int i = 0 ; i < tam; i++)
                                    {
                                        printf("Digite o %d: ",i+1);
                                        scanf("%d",&vet[i]);
                                        copVet[i] = vet[i];
                                    }
                                }
                                else if(opc == 2)
                                {
                                    puts("Vetor Original");
                                    puts("==============");
                                    
                                    //geração randomica atravez do tempo
                                    srand(time(NULL));
                                    for(int t = 0; t < tam ; t++)
                                    {
                                        vet[t] = rand()%100000;
                                        copVet[t] = vet[t];
                                    }
                                }
                                
                                
                                
                                bubbleSort();
                            }
                            else if(opc == 2)
                            {
                                puts("\n ---> Vetor é como se fosse um grupo de numero e você ira informar quantos numeros vão caber nesse grupo/vetor");
                                sleep(7);
                                system("clear");
                                opc = 1;
                            }
                            else if(opc == 3)
                            {
                                break;
                            }
                        }
                    }//fim do else1
                    else if(opc == 3)
                    {
                        break;
                    }//fim do else2
                }//fim do while
            

            break;

            case 2:
                while(1)
                {
                    system("clear");
                    puts("\n==================");
                    puts("Metodo Selection Sort\n");
                    puts("1--Você quer testar o metodo somente ou \n2--Você quer continuar?\n3--Voltar");
                    scanf("%d",&opc);
                    resp[cont] = opc;
                    cont++;
                    if(opc == 1)
                    {
                        puts("Para testarmos você tera que escolher entre");
                        puts("======= Vetor 1 =======");
                        for(int i = 0; i < tam; i++)
                        {
                            printf("%d |",vet1[i]);
                        }
                        puts("\n======= Vetor 2 =======");
                        for(int i = 0; i < tam; i++)
                        {
                            printf("%d |",vet2[i]);
                        }
                        printf("\n\nQual Vetor você escolhe(1 ou 2): ");
                        scanf("%d",&opc);
                        resp[cont] = opc;
                        //printf("%d",cont);
                        salvaVet=opc;
                        cont++;
                        
                        selectioSort();

                        
                    }//fim do if
                    else if(opc == 2)
                    {
                        while(1)
                        {
                            salvaVet=3;//salva vet recebe 3 para ele entrar na terceira condição/if do bubble
                            system("clear");
                            puts("===========================\n");
                            puts("Digite o tamanho do vetor");
                            puts("Vetor \n|1|2|3|4|5|6|7|8|9|10| etc");
                            puts("você precisa de explicação");
                            puts("1--Não\n2--Sim\n3--Voltar");
                            scanf("%d",&opc);
                            resp[cont] = opc;
                            //printf("%d",cont);
                            cont++;
                            
                            if(opc == 1)
                            {
                                printf("Digite o tamanho (O limite é 100): ");
                                scanf("%d",&tam);
                                puts("Você Vai querer adicionar os numeros manualmente ou prefere automatiza-los");
                                puts("1--Manual");
                                puts("2--Aleatórios");
                                printf("Resp: ");
                                scanf("%d",&opc);

                                if(opc == 1)
                                {
                                    puts("Agora adicione os numeros ao seu vetor");
                                    for(int i = 0 ; i < tam; i++)
                                    {
                                        printf("Digite o %d: ",i+1);
                                        scanf("%d",&vet[i]);
                                        copVet[i] = vet[i];
                                    }
                                }
                                else if(opc == 2)
                                {
                                    puts("Vetor Original");
                                    puts("==============");
                                    
                                    //geração randomica atravez do tempo
                                    srand(time(NULL));
                                    for(int t = 0; t < tam ; t++)
                                    {
                                        vet[t] = rand()%100000;
                                        copVet[t] = vet[t];
                                    }
                                }
                                
                                selectioSort();
                            }
                            else if(opc == 2)
                            {
                                puts("\n ---> Vetor é como se fosse um grupo de numero e você ira informar quantos numeros vão caber nesse grupo/vetor");
                                sleep(7);
                                system("clear");
                                opc = 1;
                            }
                            else if(opc == 3)
                            {
                                break;
                            }
                        }
                    }//fim do else1
                    else if(opc == 3)
                    {
                        break;
                    }//fim do else2
                   
                }//fim do while
            break;

            case 3:

            break;

            case 4:

            break;

            case 5:

            break;

            case 6:
                break;

            case 7:

            break;
        }
    }
    
    system("clear");
    printf("1--Algoritmos de Ordenação\n2--Algoritmos de Organização\nR:");
    scanf("%d",&opc);
    resp[cont] = opc;
    cont++;
    

    
}//fim do while

}//fim do menu

void bubbleSort()
{
    int ini=0,fim=0,aux=0;
    fim =tam-1;
    
    

    while(1)
    {
    int ini=0,fim=0,aux=0;
    fim =9;

    puts("\nO metodo Bubble vai ser ordenado de Qual Forma: ");
    puts("1--Crescente");
    puts("2--Decrescente");
    puts("3--reset do vetor");
    puts("4 <-- voltar");
    scanf("%d",&opc);
    resp[cont] = opc;
    cont++;
    
    if(salvaVet == 1)
    {
        //Vetor 1 =============================
        if(opc == 1)
        {
                system("clear");
                //crescente
                puts("Você escolheu (Crescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet1[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet1[i] > vet1[i+1])
                        {
                            aux = vet1[i];
                            vet1[i] = vet1[i+1];
                            vet1[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet1[i]);  
                }
                puts("");

            }//fim do if de dentro
            else if(opc == 2)
            {
                system("clear");
                //decrescente
                puts("Você escolheu (Decrescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet1[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet1[i] < vet1[i+1])
                        {
                            aux = vet1[i];
                            vet1[i] = vet1[i+1];
                            vet1[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet1[i]);  
                }
                puts("");

            }//fim do else 1 de dentro
            else if(opc == 3)
            {
                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                printf(".........");
                puts("Reset Concluido!!!!!");
                for(int i = 0 ; i < tam; i++)
                {
                    vet1[i] = copVet1[i];
                }
            }//fim do else 2 de dentro
            if(opc == 4)
            {
                break;
            }//fim do else 3 de dentro

        }//fim do if 1 de fora
        else if(salvaVet == 2)
        {
            //Vetor 2 ==============================
            if(opc == 1)
            {
                system("clear");
                //crescente
                puts("Você escolheu (Crescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet2[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet2[i] > vet2[i+1])
                        {
                            aux = vet2[i];
                            vet2[i] = vet2[i+1];
                            vet2[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet2[i]);  
                }
                puts("");

            }//fim do if de dentro
            else if(opc == 2)
            {
                system("clear");
                //decrescente
                puts("Você escolheu (Decrescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet2[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet2[i] < vet2[i+1])
                        {
                            aux = vet2[i];
                            vet2[i] = vet2[i+1];
                            vet2[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet2[i]);  
                }
                puts("");

            }//fim do else 1 de dentro
            else if(opc == 3)
            {
                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                printf(".........");
                puts("Reset Concluido!!!!!");
                for(int i = 0 ; i < tam; i++)
                {
                    vet2[i] = copVet2[i];
                }
            }//fim do else 2 de dentro
            if(opc == 4)
            {
                break;
            }//fim do else 3 de dentro
        }//fim do else 1 de fora
        else if(salvaVet == 3)
        {
            //Vetor Criado ===========================
            

            if(opc == 1)
            {
                system("clear");
                //crescente
                puts("Você escolheu (Crescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet[i] > vet[i+1])
                        {
                            aux = vet[i];
                            vet[i] = vet[i+1];
                            vet[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet[i]);  
                }
                puts("");

            }//fim do if de dentro
            else if(opc == 2)
            {
                system("clear");
                //decrescente
                puts("Você escolheu (Decrescente)");
                puts("=========================");
                puts("Seu Vetor 1 Desordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet[i]);  
                }
                puts("");
                while(ini <= fim)
                {
                    for(int i = 0; i < fim;i++)
                    {
                        cmp++;
                        if(vet[i] < vet[i+1])
                        {
                            aux = vet[i];
                            vet[i] = vet[i+1];
                            vet[i+1] = aux;
                            trc++;
                        }
                    }
                    fim--;
                } //fim do While 
                puts("\nSeu Vetor 1 Ordenado");
                for(int i = 0 ; i < tam ; i++)
                {
                    printf("%d |",vet[i]);  
                }
                puts("");

            }//fim do else 1 de dentro
            else if(opc == 3)
            {
                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                puts(".........Reset Concluido!!!!!");
                
                for(int i = 0 ; i < tam; i++)
                {
                    vet[i] = copVet[i];
                }
            }//fim do else 2 de dentro
            if(opc == 4)
            {
                break;
            }//fim do else 3 de dentro
        
     }//fim do else 2 de fora    
        
        
    }//fim do while
   
}//fim do bubble

void selectioSort()
{
    while(1)
    {

    int i=0,j=0;
	int chave=0,menor=0,aux=0;

	puts("\nO metodo Selection vai ser ordenado de Qual Forma: ");
    puts("1--Crescente");
    puts("2--Decrescente");
    puts("3--reset do vetor");
    puts("4 <-- voltar");
    printf("R: ");
    scanf("%d",&opc);
    resp[cont] = opc;
    cont++;

    if(salvaVet == 1)
    {
        if(opc == 1)
        {
            system("clear");
            //crescente
            puts("Você escolheu (Crescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet1[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet1[j] < vet1[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet1[menor] < vet1[chave])
                {
                    aux = vet1[chave];
                    vet1[chave] = vet1[menor];
                    vet1[menor] = aux;
                    trc++;
                }
                    
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet1[i]);  
            }

        }//fim do if de dentro
        else if(opc == 2)
        {
            system("clear");
            //decrescente
            puts("Você escolheu (Decrescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet1[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet1[j] > vet1[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet1[menor] > vet1[chave])
                {
                    aux = vet1[chave];
                    vet1[chave] = vet1[menor];
                    vet1[menor] = aux;
                    trc++;
                }     
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet1[i]);  
            }
        }//fim do else 1 de dentro
        else if(opc == 3)
        {

                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                printf(".........");
                puts("Reset Concluido!!!!!");
                for(int i = 0 ; i < tam; i++)
                {
                    vet1[i] = copVet1[i];
                }
        }//fim do else 2 de dentro
        if(opc == 4)
        {
            break;
        }//fim do else 3 de dentro

    }//fim do if de fora
    else if(salvaVet == 2)
    {
        if(opc == 1)
        {
            system("clear");
            //crescente
            puts("Você escolheu (Crescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet2[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet2[j] < vet2[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet2[menor] < vet2[chave])
                {
                    aux = vet2[chave];
                    vet2[chave] = vet2[menor];
                    vet2[menor] = aux;
                    trc++;
                }
                    
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet2[i]);  
            }
                puts("");

        }//fim do if de dentro
        else if(opc == 2)
        {
            system("clear");
            //decrescente
            puts("Você escolheu (Decrescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet2[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet2[j] > vet2[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet2[menor] > vet2[chave])
                {
                    aux = vet2[chave];
                    vet2[chave] = vet2[menor];
                    vet2[menor] = aux;
                    trc++;
                }     
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet2[i]);  
            }
        }//fim do else 1 de dentro
        else if(opc == 3)
        {

                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                printf(".........");
                puts("Reset Concluido!!!!!");
                for(int i = 0 ; i < tam; i++)
                {
                    vet2[i] = copVet2[i];
                }
        }//fim do else 2 de dentro
        if(opc == 4)
        {
            break;
        }//fim do else 3 de dentro

    }//fim do else 1 de fora
    else if(salvaVet == 3)
    {
        if(opc == 1)
        {
            system("clear");
            //crescente
            puts("Você escolheu (Crescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet[j] < vet[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet[menor] < vet[chave])
                {
                    aux = vet[chave];
                    vet[chave] = vet[menor];
                    vet[menor] = aux;
                    trc++;
                }
                    
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet[i]);  
            }

        }//fim do if de dentro
        else if(opc == 2)
        {
            system("clear");
            //decrescente
            puts("Você escolheu (Decrescente)");
            puts("=========================");
            puts("Seu Vetor 1 Desordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet[i]);  
            }
            puts("");
            for(i=0;i<tam-1;i++)
            {
                //assumme que o menor elemento esta na primeira posicao
                chave=i;
                menor=i+1;
                
                for(j=menor;j<tam;j++)
                {
                    cmp++;
                    if(vet[j] > vet[menor])
                    {
                        menor=j;//guarda o indice do menor elemento do subconjunto 
                        
                    }
                    
                }
                cmp++;
                if(vet[menor] > vet[chave])
                {
                    aux = vet[chave];
                    vet[chave] = vet[menor];
                    vet[menor] = aux;
                    trc++;
                }     
            }
            puts("\nSeu Vetor 1 Ordenado");
            for(int i = 0 ; i < tam ; i++)
            {
                printf("%d |",vet[i]);  
            }
        }//fim do else 1 de dentro
        else if(opc == 3)
        {

                system("clear");
                //resetando vetor
                puts("===================");
                puts("Resetando o vetor");
                sleep(3);
                printf(".........");
                puts("Reset Concluido!!!!!");
                for(int i = 0 ; i < tam; i++)
                {
                    vet[i] = copVet[i];
                }
        }//fim do else 2 de dentro
        if(opc == 4)
        {
            break;
        }//fim do else 3 de dentro

    }//fim do else 2 de fora
        

    }//fim do while
	
}//fim do Selecion
