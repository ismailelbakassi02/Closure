#include <stdio.h>
#include <stdlib.h>
#define T 20
typedef struct
{
    char pleft[T];
    char pright[T];
    int leftcntr,rightcntr;
} DF;



int checker (DF G,char *Table,int n){
int i,j,counter=0;
for(i=0;i<n;i++){
    for(j=0;j<G.leftcntr;j++)
    {
        if(G.pleft[j]==Table[i])
            counter++;
    }
}
if(counter==n)
    return 1;
return 0;
}


void getLeftDf(DF *G)
{
    printf("la partie gauche de la DF: \n");
    char test ;
    int i=0;
    while (1)
    {
        printf("Donnez l'attribut %d \n--> ",i+1);
        scanf(" %c",&test);
        if(test=='0')
            break;
        G->pleft[i]=test;
        i++;
    }
    G->leftcntr=i;
}


void getRightDf(DF *G)
{
    printf("la partie droite de la DF: \n");
    char test ;
    int i=0;
    while (1)
    {
        printf("Donnez l'attribut %d \n-->",i+1);
        scanf(" %c",&test);
        if(test=='0')
            break;
        G->pright[i]=test;
        i++;
    }
    G->rightcntr=i;
}


void showDf(DF G)
{
    int i;
    for(i=0; i<G.leftcntr-1; i++)
    {
        printf("%c ,",G.pleft[i]);
    }
    printf("%c ->",G.pleft[G.leftcntr-1]);
    for(i=0; i<G.rightcntr-1; i++)
    {
        printf("%c ,",G.pright[i]);
    }
    printf("%c ",G.pright[G.rightcntr-1]);

}

int main()
{
    int counterRelation=0;
    char shema[T];
    char NomShema[T];
    char test;
    printf("\t\t\t\aENTER THE NAME OF YOUR RELATION \n--> ");
    scanf(" %s",NomShema);
    system("cls");
  printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait \n\n\n",NomShema);
    for(int b=0;b<500000000;b++)
        b=b;
        system("cls");
    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait.",NomShema);
     for(int b=0;b<500000000;b++)
        b=b;
                system("cls");

    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait..",NomShema);
 for(int b=0;b<500000000;b++)
        b=b;
                system("cls");

    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait...",NomShema);
 for(int b=0;b<500000000;b++)
        b=b;
        system("cls");   printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait \n\n\n",NomShema);
    for(int b=0;b<500000000;b++)
        b=b;
        system("cls");
    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait.",NomShema);
     for(int b=0;b<500000000;b++)
        b=b;
                system("cls");

    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait..",NomShema);
 for(int b=0;b<500000000;b++)
        b=b;
                system("cls");

    printf("\n\n\n\t\t\t\OKEY, NOW LETS BEGIN WITH FILLING IN THE ATTRIBUTS OF OUR RELATION [%s] please wait...",NomShema);
 for(int b=0;b<500000000;b++)
        b=b;
        system("cls");
    m: while (1)
    {
        printf("\n\tGive the attribut %d (TYPE 0 TO FINISH)\n\t\t-->",counterRelation+1);
        scanf(" %c",&test);
        if(test=='0')
            break;
        shema[counterRelation]=test;
        counterRelation++;
        system("cls");
    }
            system("cls");
    int i;
    printf("\n\tYour schema is: ");
    printf("%s",NomShema);
    printf("(");
    for (i=0; i<counterRelation-1; i++)
        printf(" %c,",shema[i]);
            printf(" %c)",shema[counterRelation-1]);
    printf("voulez vous la modifier? \n\n\t0:non\t\t1:oui");
    int choix;
    scanf("%d",&choix);
    if(choix==1)
        goto m;
    system("pause");
    system("cls");
    printf("Donnez le Nombre des DF: \n-->");
    int NbrDF;
    scanf("%d",&NbrDF);
    DF **G;
    G=(DF**)malloc(NbrDF*sizeof(DF*));
    for(i=0; i<NbrDF; i++)
    {
        G[i]=(DF*)malloc(sizeof(DF));
        printf("DOnnez la DF num %d\n",i+1);
        getLeftDf(G[i]);
        system("pause>1");
        system("cls");
        getRightDf(G[i]);
        system("pause>1");
        system("cls");
    }
    for(i=0; i<NbrDF; i++)
    {
        showDf(*G[i]);
        printf("\n");
    }
    system("pause>1");
    system("cls");
    printf("DOnnez lEnsemble de la fermeture :\n\n");
    char fermeture[T];
    int k=0;
    while (1)
    {
        printf("Donnez l'attribut numero %d ",k+1);
        scanf(" %c",&test);
        if(test=='0')
            break;
        fermeture[k]=test;
        k++;
    }

char closureChecker [counterRelation];
for(i=0;i<k;i++)
    closureChecker[i]=fermeture[i];
    int cntr=k;
do{
for(i=0;i<NbrDF;i++){
    printf("");
    if(checker(*G[i],closureChecker,cntr))
        printf("");

        for(int j=0;j<G[i]->rightcntr;j++){
            closureChecker[cntr++]=G[i]->pright[j];
        }
}}while(cntr!=counterRelation);
printf("\nLa fermeture est :");
for(i=0;i<cntr;i++){
    printf("%c ",closureChecker[i]);
}
    return 0;
}