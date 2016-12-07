#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED
//chargement1
void chargement1(int t[], int n)
{int j;
for(j=0;j<n;j++)
        {
        printf("\n T[%d]:",j+1);
        scanf("%d",&t[j]);
        }
}
//chargement2 positif
void chargement2(int t[], int n)
{int j;
printf("Remplir le Tableau par des entiers strictement positifs\n");
for(j=0;j<n;j++)
        {do
           {
            printf("T[%d]:",j+1);
            scanf("%d",&t[j]);
           }while (t[j]<0);
        }
}
//chargement3 ave k max
void chargement3(int t[],int n)
{ int i,k;
    do
    {
    printf("donner Le max de tableau");
    scanf("%d",&k);
    }while(k<0);

    for(i=0;i<n;i++)
    {   do
        {
        printf("donner T[%d]:",i+1);
        scanf("%d",&t[i]);
        }while((t[i]<1)||(t[i]>k));
    }
}
//chargement 4 ordre croissant
void chargement4(int t[], int n)
{int j;
printf("Remplir le Tableau dans un ordre croissant:\n");
            printf("donner T[1]:");
            scanf("%d",&t[0]);
for(j=1;j<n;j++)
        {do
           {
            printf("donner T[%d]:",j+1);
            scanf("%d",&t[j]);
           }while ((t[j]<t[j-1])||(t[j]<0));
        }
}
//chargement 5 trois chiffres
void chargement5(int t[], int n)
{int j;
printf("Remplir le Tableau par des entiers de trois chiffres\n");
for(j=0;j<n;j++)
        {do
           {
            printf("\nT[%d]:",j+1);
            scanf("%d",&t[j]);
           }while ((t[j]<=99)||(t[j]>=1000));
        }
}
//chargement6 positif et distinct
int distinct(int t[],int j,int x)
{int i;
for(i=0;i<j;i++){if (t[i]==x) return 1;}
return 0;
}
void chargement6(int t[], int n)
{int j;
printf("Remplir le Tableau par des entiers strictement positifs et distincts\n");
for(j=0;j<n;j++)
        {do
           {
            printf("\nT[%d]:",j+1);
            scanf("%d",&t[j]);
           }while ((t[j]<0)|| distinct(t,j,t[j])==1);
        }
}
//chargement 7 ordre croissant, postif et distinct
void chargement7(int t[], int n)
{int j;
printf("Remplir le Tableau par des entiers strictement positifs,distincts et tries par ordre croissant:\n");
            printf("donner T[1]:");
            scanf("%d",&t[0]);
for(j=1;j<n;j++)
        {do
           {
            printf("donner T[%d]:",j+1);
            scanf("%d",&t[j]);
           }while ((t[j]<t[j-1])||(t[j]<0)|| distinct(t,j,t[j])==1);
        }
}
//affichage de t[i]
void affiche(int t[],int n)
{ int i;

    for(i=0;i<n;i++)
    {printf("   %d   ",t[i]);}
}
//remplissage de matrice carée
void chargement_ma(int t[][50], int n)
{int i,j;
printf("Remplir le Tableau par des entiers de trois chiffres");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
        {
            printf("\nA[%d][%d]:",i+1,j+1);
            scanf("%d",&t[i][j]);

        }
}
}
void chargement_mc(int t[][50], int n)
{int i,j;
printf("Remplir le Tableau par des entiers de trois chiffres");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
        {
            printf("\nC[%d][%d]:",i+1,j+1);
            scanf("%d",&t[i][j]);

        }
}
}
void chargement_mb(int t[][50], int l,int c)
{int i,j;
printf("Remplir le Tableau par des entiers de trois chiffres");
for(i=0;i<l;i++)
{
for(j=0;j<c;j++)
        {
            printf("\nB[%d][%d]:",i+1,j+1);
            scanf("%d",&t[i][j]);

        }
}
}
//affichage de matrice carée
void affiche_mc(int t[][50],int n)
{ int i,j;

    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
       {printf("%d \t",t[i][j]);}
       printf("\n");
    }
}
//affichage de matrice non carée
void affiche_mnc(int t[][50],int l, int c)
{ int i,j;

    for(i=0;i<l;i++)
    {for(j=0;j<c;j++)
       {printf("%d \t",t[i][j]);}
       printf("\n");
    }
}



//Remplir un fichier par entiers strictement positifs

void remplissage_p(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement2(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }}
                else
                {
                presentation1();
                n = saisie_taille();
                chargement2(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
                 }
     }
//Remplir un fichier par entiers strictement positifs et distinct t20

void remplissage_pd(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement6(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }}
                else
                {
                presentation1();
                n = saisie_taille();
                chargement6(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
                 }
     }
//Remplir un fichier par entiers quelconques

void remplissage_q(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): \n");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement1(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taille();
                chargement1(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}
//Remplir un fichier par des entiers strictement positifs,distincts et tries par ordre croissant.
void remplissage_pc(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement4(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taille();
                chargement4(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}
//Remplir un fichier par des entiers de trois chiffres
void remplissage_tc(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement5(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taille();
                chargement5(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}

//Remplir un fichier par des entiers >k
void remplissage_tk(int t[], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation(t,nomFichier))
    {
        do{

                printf("Tableau deja rempli, voulez vous remplir le tableau de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                chargement3(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation(t,nomFichier);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taille();
                chargement3(t,n);
                presentation2();
                printf("\nContenu du tableau\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}


//Mabtrices
/*******************************/
                                    /*Fichier matrice non carre*/

//Remplir Matrice A
void remplissage_ma(int t[][50], int n,FILE* file,char *nomFichier)
{
    char rep;
    file = fopen(nomFichier,"r");
    int w=recuperation_mat_carre(t,nomFichier);
    if(file!=NULL && recuperation_mat_carre(t,nomFichier))
    {
        do{

                printf("Matrice deja rempli, voulez vous remplir Matrice de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taillem();
                chargement_ma(t,n);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mc(t,n);
                printf("\n");
                enregistrement_mat_carre(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation_mat_carre(t,nomFichier);
                    printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche_mc(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taillem();
                chargement_ma(t,n);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mc(t,n);
                printf("\n");
               enregistrement_mat_carre(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}
//Remplir Matrice c
void remplissage_mc(int t[][50], int n,FILE* file,char *nomFichier)
{
    char rep;

    file = fopen(nomFichier,"r");
    if(file!=NULL && recuperation_mat_carre(t,nomFichier))
    {
        do{

                printf("Matrice deja rempli, voulez vous remplir le Matrice de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taillem();
                chargement_mc(t,n);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mc(t,n);
                printf("\n");
                enregistrement_mat_carre(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {
                    n=recuperation_mat_carre(t,nomFichier);
                    printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche_mc(t,n);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taillem();
                chargement_mc(t,n);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mc(t,n);
                printf("\n");
               enregistrement_mat_carre(t,n ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}
//Remplir Matrice b
void remplissage_mnc(int t[][50], int n,int m ,FILE* file,char *nomFichier)
{
    char rep;
      int w;
    file = fopen(nomFichier,"r");
    w=recuperation_mat_non_carre(t,&n,&m,nomFichier);
    if(file!=NULL )
    {
        do{

                printf("Matrice deja rempli, voulez vous remplir Matrice de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taillel();
                m = saisie_taillec();
                chargement_mb(t,n,m);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mnc(t,n,m);
                printf("\n");
                enregistrement_mat_non_carre(t,n,m ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
            }
            else
                {

                    printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche_mnc(t,n,m);
                    printf("\n");
                    //printf("\n chargement terminer");
                }
     }
     else
     {
                presentation1();
                n = saisie_taillel();
                m = saisie_taillec();
                chargement_mb(t,n,m);
                presentation2();
                printf("\nContenu du Matrice\n");
                affiche_mnc(t,n,m);
                printf("\n");
                enregistrement_mat_non_carre(t,n,m ,nomFichier);
                printf("\n Saisie et enregistrement terminer");
     }
}

void remplissage_19(int t[],int t1[], int n,FILE* file1,FILE* file2,char *nomFichier1,char *nomFichier2)
{
    int m;
    char rep;
    file1 = fopen(nomFichier1,"r");
    file2 = fopen(nomFichier2,"r");
    if((file1!=NULL && recuperation(t,nomFichier1))&&(file2!=NULL && recuperation(t,nomFichier2)))
    {
        do{

                printf("Tableau T9/T10 deja rempli, voulez vous remplir les tableaux de nouveau ? (o[oui] et n[non]): ");
                fflush(stdin);
                scanf(" %c",&rep);
            }while(rep != 'o' && rep !='n');
            if(rep == 'o')
            {
                presentation1();
                n = saisie_taille();
                printf(" Remplissage de tableau T9\n");
                chargement7(t,n);
                presentation2();
                printf("\nContenu du tableau T9\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier1);
                printf("\n Saisie et enregistrement terminer pour T9");
                printf("\n\n");
                printf(" Remplissage de tableau T10\n");
                chargement7(t1,n);
                printf("\nContenu du tableau T10\n");
                affiche(t1,n);
                printf("\n");
                enregistrement(t1,n ,nomFichier2);
                printf("\n Saisie et enregistrement terminer pour T10");
            }
            else
                {
                    n=recuperation(t,nomFichier1);
                    m=recuperation(t,nomFichier2);
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier1);
                    printf("\n");
                    presentation2();
                    printf("\n");
                    affiche(t,n);
                    printf("\n");
                    printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier2);
                    printf("\n");
                    affiche(t1,n);
                    //printf("\n chargement terminer");
                }
     }


     else
     {
                presentation1();
                n = saisie_taille();
                printf(" Remplissage de tableau T9\n");
                chargement4(t,n);
                presentation2();
                printf("\nContenu du tableau T9\n");
                affiche(t,n);
                printf("\n");
                enregistrement(t,n ,nomFichier1);
                printf("\n Saisie et enregistrement terminer pour T9");

                printf("\n\n");
                printf(" Remplissage de tableau T10\n");
                chargement4(t1,n);
                printf("\nContenu du tableau T10\n");
                affiche(t1,n);
                printf("\n");
                enregistrement(t1,n ,nomFichier2);
                printf("\n Saisie et enregistrement terminer pour T10");

     }
}

// exercice 2 TRANSFERE
void transfere(int t[],int A[],int n)
{
    int i,j,k;
    for(i=0,j=0,k=n-1;i<n;i++)
        if(i%2==1)
        {
            A[k]=t[i];
            k--;
        }
        else
        {
            A[j]=t[i];
            j++;
        }
}
void exercice2_q1_TP2(int t1[], int n1,FILE* file,char *nomFichier)
{           int A[50];
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("-------------------------");
            gotoxy(30,3);printf("-    TP2:TRANSFERE      -");
            gotoxy(30,4);printf("-------------------------");
            textcolor(14);
            printf("\nTransf%crer les %cl%cments de T1 dans A de telle sorte :\n",130,130,130);
            printf("- Les %cl%cments du rang impair de T1 sont rang%cs dans A en ordre inverse en commen%cant par la fin de A\n",130,130,130,135);
            printf("- Les %cl%cments du rang pair de T1 sont rang%cs dans A dans le m%cme\n",130,130,130,136);
            presentation1();
            n1=recuperation(t1,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T1\n");
            affiche(t1,n1);
            printf("\n");
            presentation2();
            transfere(t1,A,n1);
            printf("\nContenu de A \n");
            affiche(A,n1);
}
// exercice 2 SYMETRIQUE
int symetrique(int t[],int n)
{ int i=0,k=n-1;
    while ((i<k)&&(t[i]==t[k]))
    {
        i++;
        k--;
    }
    if (i<k){return(0);}
    else return(1);
}
void exercice2_q2_TP2(int t1[], int n1,FILE* file,char *nomFichier)
{           int s;
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-    TP2:SYMETRIQUE    -");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            printf("\nTransf%crer les %cl%cments de T1 dans A de telle sorte :\n",130,130,130);
            printf("- Les %cl%cments du rang impair de T1 sont rang%cs dans A en ordre inverse en commen%cant par la fin de A\n",130,130,130,135);
            printf("- Les %cl%cments du rang pair de T1 sont rang%cs dans A dans le m%cme\n",130,130,130,136);
            presentation1();
            n1=recuperation(t1,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T1\n");
            affiche(t1,n1);
            printf("\n");
            presentation2();
            s=symetrique(t1,n1);
if(s==0){printf("\nT n'est symetrique\n");}
else {printf("\nT est symetrique\n");}
}
// exercice 2 INSERTION
void insertion(int t[],int n)
{int x,i,p;
printf("\ndonner Val qui peut inserer : ");
scanf("%d",&x);
printf("\ndonner leur position : ");
scanf("%d",&p);

for(i=n+1;i>p-1;i--)
{
    t[i]=t[i-1];
}
t[p-1]=x;
}
void exercice2_q3_TP2(int t2[], int n2,FILE* file,char *nomFichier)
{           int i;
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-    TP2:INSERTION     -");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            printf("\n Inserer une valeur val dans T2 a une position pos\n");

            presentation1();
            n2=recuperation(t2,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T2\n");
            affiche(t2,n2);
            printf("\n");
            presentation2();
            insertion(t2,n2);
            printf("Aprés l'insertion :\n");
            for(i=0;i<=n2;i++)
                {
                    printf("%d \t",t2[i]);
                }

}
// exercice 2 INVERSE
void inverse( int t[],int n)
{int i,j,aux;
 i=0;
 j=n-1;

 do
 {
   aux=t[i];
   t[i]=t[j];
   t[j]=aux;

   i++;
   j--;


 }while(i<j);

 }
void exercice2_q4_TP2(int t3[], int n3,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-      TP2:INVERSE     -");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            printf("\nranger les elements du tableau T3 dans l'ordre inverse sans utiliser un tableau supplementaire. :\n");
            presentation1();
            n3=recuperation(t3,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T3\n");
            affiche(t3,n3);
            printf("\n");
            presentation2();
            inverse(t3,n3);
            printf("\n Apres l'invertion : \n");
            printf("\nContenu de T3 \n");
            affiche(t3,n3);
}
// exercice 2 ROTATION
void rotation( int t[],int n)
{int f,i;

    f=t[n-1];
    for(i=n-1;i>0;i--)
    {
        t[i]=t[i-1];

    }
    t[0]=f;
}
void exercice2_q5_TP2(int t4[], int n4,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("************************");
            gotoxy(30,3);printf("*    ROTATION  TP2     *");
            gotoxy(30,4);printf("************************");
            textcolor(14);
            printf("\neffectuer la rotation entre les elements de T4 de telle sorte :\n");
            printf("-l'element T4[i+1] prend la valeur deT4[i], T4[i+2] prend la valeur de T4[i+1],..\net le premier element prend la valeur dudernier.\n");

            presentation1();
            n4=recuperation(t4,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T4\n");
            affiche(t4,n4);
            printf("\n");
            presentation2();
            rotation(t4,n4);
            printf("\n Apres la rotation : \n");
            printf("\nContenu de T4 \n");
            affiche(t4,n4);
}

//exercice 3:
int Test(int T[],int n,int x)
{int i;
    for( i=0;i<n;i++){
        if (T[i]==x) return 1;
    }
    return 0;
}
void present(int t5[],int n5,int t6[],int n6)
{int i,nv=0,v[50];
for(i=0;i<n5;i++)
{
    if(((Test(t6,n6,t5[i]))==1)&&((Test(v,nv,t5[i]))==0))
        {
            v[nv]=t5[i];
            nv++;
        }

}
printf("\n affichage du Tableau V1 =\n");

affiche(v,nv);
}
void absent(int t5[],int n5,int t6[],int n6)
{int i,nv=0,v[50];
for(i=0;i<n5;i++)
{
    if(((Test(t6,n6,t5[i]))==0)&&((Test(v,nv,t5[i]))==0))
        {
            v[nv]=t5[i];
            nv++;
        }
}
printf("\n affichage du Tableau V2 =\n");

affiche(v,nv);
}
void exercice2_present_TP2(int t5[], int n5,int t6[], int n6,FILE* file,char *nomFichier,FILE* file1,char *nomFichier1)
{
            file = fopen(nomFichier,"r");
            file1 = fopen(nomFichier1,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-   PRESENTS   TP2     -");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);
            printf("\nfonction PRESENTS permettant de construire un tableau V1 \ncomportant les entiers presents dans T5 et dans T6 (Sans repetition):\n");

            presentation1();
            n5=recuperation(t5,nomFichier);
            n6=recuperation(t6,nomFichier1);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T5\n");
            affiche(t5,n5);
            printf("\n");
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier1);
            printf("\nContenu de T6\n");
            affiche(t6,n6);
            printf("\n");
            presentation2();
            present(t5,n5,t6,n6);
}
void exercice2_absent_TP2(int t5[], int n5,int t6[], int n6,FILE* file,char *nomFichier,FILE* file1,char *nomFichier1)
{
            file = fopen(nomFichier,"r");
            file1 = fopen(nomFichier1,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-      TP2:ABSENTS     -");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);
            printf("\nfonction PRESENTS permettant de construire un tableau V1 \ncomportant les entiers presents dans T5 et dans T6 (Sans repetition):\n");

            presentation1();
            n5=recuperation(t5,nomFichier);
            n6=recuperation(t6,nomFichier1);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T5\n");
            affiche(t5,n5);
            printf("\n");
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier1);
            printf("\nContenu de T6\n");
            affiche(t6,n6);
            printf("\n");
            presentation2();
            absent(t5,n5,t6,n6);
}


//exercice 4 RECHERCHE BLOCS
int position(int t[],int n , int val,int ind)
             { int k;
                k=ind;
                while((k<n)&&(t[k]!=val))
                      {k++;}
                if(k<n){return(k);}
                else return(-1);
             }
void recherche_blocs(int t[],int n)
{int a,b,i,val,j,pa,pb;

printf("\ndonner A ");
scanf("%d",&a);
printf("\ndonner B ");
scanf("%d",&b);
i=0;
do
{
    pa=position(t,n,a,i);
    pb=position(t,n,b,i);
    if(((pa!=-1)&&(pb!=-1))&&(pa<pb))
    {
        for(j=pa+1;j<pb;j++)
        {
            printf("%d \t",t[j]);
        }
        printf("\n");
        i=pa+1;
    }
   i++;

}while(i<n);
}
void exercice4_q1_TP2(int t7[], int n7,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-   TP2:RECHERCHE BLOCS-");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);

            printf("\n-saisir deux entiers A et B\n");
            printf("- chercher et afficher tous les blocs d'elements de T7 places entre A et B dans l'ordre.");
            presentation1();
            n7=recuperation(t7,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T7\n");
            affiche(t7,n7);
            printf("\n");
            presentation2();
            recherche_blocs(t7,n7);

}
//exercice 4 RECHERCHE EL FREQUENT
int nb_occ(int t[],int n,int x)
{int i,nb=0;
    for (i=0;i<n;i++)
    {
        if (t[i]==x){nb++;}
    }
    return(nb);

}
void recherche_frequant(int t[],int n)
{int occ,i,maxocc,maxnb;
maxocc=0;
maxnb=t[0];
    for (i=0;i<n;i++)
    {
        occ=nb_occ(t,n,t[i]);
        if (occ>maxocc){maxocc=occ;maxnb=t[i];}
    }
    printf("\nL'element qui apparait le plus dans T8 = %d, ainsi que son nombre d'occurrences = %d",maxnb,maxocc);
}
void exercice4_q2_TP2(int t8[], int n8,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("-------------------------");
            gotoxy(30,3);printf("- RECHERCHE EL FREQUENT -");
            gotoxy(30,4);printf("-------------------------");
            textcolor(15);

            printf("\nchercher et d'afficher l'element qui apparait le plus dans le tableau T8, ainsique son nombre d'occurrences.\n");

            presentation1();
            n8=recuperation(t8,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T8\n");
            affiche(t8,n8);
            printf("\n");
            presentation2();
            recherche_frequant(t8,n8);

}
// exercice 3



//exercice 4 RECERCHE PERMUTATION
int inclu(int l, int c)
{int n11,n22,nr11,nr22,v1,v;
    n11=l;
    n22=c;
    v1=1;
  while((n11 != 0)&&(v1==1))
  {
     nr11=n11%10;
     v=1;
     while((n22 != 0)&&v==1)
     {
         nr22=n22%10;
         if(nr11 == nr22){v=0;}
         n22=n22/10;

     }

     if(v==1){v1=0;}
     n11=n11/10;
     n22=c;

  }
   if (v==0){return(1);}
  else {return(0);}

}
void recherche_permutation(int t[],int n)
{int i,maxt,p;
    maxt=t[0];
    p=0;
    for (i=1;i<n;i++)
    {if(t[i]>maxt){maxt=t[i];p=i;}}
    printf("\nLe maximum de T11 = %d\n",maxt);
    for(i=0;i<n;i++)
    {if((i!=p)&&(inclu(maxt,t[i])==1)){printf("%d ",t[i]);}}
}
void exercice4_q4_TP2(int t11[], int n11,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("- RECERCHE PERMUTATION -");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);

            printf("\n-determiner et d'afficher le plus grand element du tableau T11.\n");
            printf("-afficher tous les elements du tableau T11 dont \nla permutation des chiffires donne la valeur maximale determinee precedemment.\n");
            presentation1();
            n11=recuperation(t11,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T11\n");
            affiche(t11,n11);
            printf("\n");
            presentation2();
            recherche_permutation(t11,n11);

}
//exercice 4 RECHERCHE NB SEQUENCES
void  recherche_sequences(int t[],int n)
{int i=0,nb=0;

    for(i=0;i<n;i++)
    {  if(t[i]>t[i+1]){printf("%d \n",t[i]);nb++;}
       else {printf("%d \t",t[i]);}
    }
    printf("\nLe nombre de sequences est = %d",nb);
}
void exercice4_q5_TP2(int t12[], int n12,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("--------------------------");
            gotoxy(30,3);printf("- RECHERCHE NB SEQUENCES -");
            gotoxy(30,4);printf("--------------------------");
            textcolor(15);

            printf("\nchercher et d'afficher toutes les sequences strictement croissantes de T12 ainsi que leur nombre.\n");

            presentation1();
            n12=recuperation(t12,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T12\n");
            affiche(t12,n12);
            printf("\n");
            presentation2();
            recherche_sequences(t12,n12);

}
//exercice 4 recherche_lplateau
void recherche_lplateau(int t[],int n)
{
    int maxl=0,nb,i=0,dmax,fmax;
    do
    {
        nb=0;
    while(t[i]==t[i+1])
        {
         nb++;
         i++;
        }
        if(nb>maxl){maxl=nb;dmax=i-nb;fmax=i;}
        i++;
     }while(i<n);
     printf("\nLe plus long plateau commence par %d se termine par %d et de longueur %d",dmax,fmax,fmax-dmax+1);
}
void exercice4_q6_TP2(int t13[], int n13,FILE* file,char *nomFichier)
{
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("- Le plus long plateau -");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);

            printf("\n-chercher la longueur, l'indice debut et fin du plus long plateau de T13.\n");
            n13=recuperation(t13,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T13\n");
            affiche(t13,n13);
            printf("\n");
            presentation2();
            recherche_lplateau(t13,n13);

}
//exercice 4 élément median
int indice(int t[],int n, int x)
{
    int i;

    for(i = 0; i<n; i++)
        if(t[i] == x)
            return i;
    return -1;
}

void median(int t1[], int t2[],int n)
{
    int i,ind,elem;

    for(i=0; i<n; i++){
        ind = indice(t2,n,t1[i]);
        if(ind != -1 && ind == n-i-1)
            elem = t1[i];
    }
    printf("L'element mediane = %d ",elem);
}
void exercice4_q3_TP2(int t9[],int t10[], int n9,FILE* file,char *nomFichier,FILE* file1,char *nomFichier1)
{
            file = fopen(nomFichier,"r");
            file1 = fopen(nomFichier1,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("-      TP1:median      -");
            gotoxy(30,4);printf("------------------------");
            textcolor(15);

            printf("\n-chercher la longueur, l'indice debut et fin du plus long plateau de T13.\n");
            n9=recuperation(t9,nomFichier);
      int   n10=recuperation(t10,nomFichier1);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T9\n");
            affiche(t9,n9);
            printf("\n");
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier1);
            printf("\nContenu de T10\n");
            affiche(t10,n9);
            printf("\n");
            presentation2();
            median(t9,t10,n9);

}

// exercice 5:
void dominate (int M[50][50],int n)
{int i,j,k,k1,f=0,maxl,c,b,maxrep,t[50];

  for (i=0;i<n;i++)
  {
     maxl=M[i][0];
     k1=0;
     for(j=1;j<n;j++)
     {
         if( maxl < M[i][j] ){ maxl=M[i][j];k1=j;}
         t[i]=k1;

     }
  }

  maxrep=rep (t,0,n);
  c=t[0];
  for(b=1;b<n;b++)
  {
  if( maxrep < rep (t,b,n)){maxrep=rep (t,b,n); c=t[b];}
  }
  printf("la colonne %d est la colonne dominante ", c+1);


 }

void exercice_dominate(int A[][50], int n,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("-------------------------");
            gotoxy(30,3);printf("-   TP2:EXERCICE 5      -");
            gotoxy(30,4);printf("-------------------------");
            textcolor(14);
             printf("\n\nLa colonne dominante la colonne qui contient le plus des maximums des N lignes.");

            presentation1();
            n=recuperation_mat_carre(A,nomFichier);
            printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de A\n");
            affiche_mc(A,n);
            printf("\n");
            presentation2();
            dominate (A,n);

}
// exercice 6:
int minligne(int M[50][50],int c, int a,int b)
{int j,t,min;

    min=M[a][b];
    t=1;
    j=0;
    do{
        if ( min > M[a][j] ){t=0;}
        j++;

      }while((t==1)&&(j<c));
    return t ;
}
int gcolone(int M[50][50],int l, int a,int b)
{int j,t,max;

    max=M[a][b];
    t=1;
    j=0;
    do{
        if ( max < M[j][b] ){t=0;}
        j++;

      }while((t==1)&&(j<l));
    return t ;
}
void col(int M[50][50],int l,int c)
{int i,j,mi,ma;
    for(i=0;i<l;i++)
    {for(j=0;j<c;j++)
       {
        mi=minligne(M,c,i,j);
        ma=gcolone(M,l,i,j);
        if((mi==1)&&(ma==1)){printf("\nB(%d,%d)=%d est point COL\n",i,j,M[i][j]);}
       }
    }
}
void exercice_col(int B[][50], int L,int C,FILE* file,char *nomFichier)
{
int w;
            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("-------------------------");
            gotoxy(30,3);printf("-   TP2:EXERCICE 6      -");
            gotoxy(30,4);printf("-------------------------");
            textcolor(15);
            printf("\n\nOn appelle COL de la matrice l'element qui est le plus petit de sa ligne et le plus grand de sa colonne.");

            presentation1();
            w=recuperation_mat_non_carre(B,&L,&C,nomFichier);
            printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de C\n");
            affiche_mnc(B,L,C);
            printf("\n");
            presentation2();
            col(B,L,C);

}

// exercice 7:
void sym_matrice(int M[50][50],int n)
{  int i,j,m,c,k;
    i=0;
    j=0;
    m=n-1;
    c=n-1;
  while((j<n)&&(M[i][j]== M[m][c]))
    {
       j++;
       m--;
    }
    i=0;
    k=1;
    m=1;
    c=0;
    while((k<n)&&(M[i][k]== M[k][c]))
    {
       k++;

    }
   if ((j==n)&&(k==n)){printf("\n M est symetrique par rapport à la première et la deuxième diagonale .");}
   else if(j==n){printf("\n M est symetrique par rapport à la deuxième diagonale .");}
   else if(k==n){printf("\n M est symetrique par rapport à la première diagonale .");}
   else{printf("\La matrice M n'est pas symétrique");}
}

void exercice_sym_matrice(int c1[][50], int NC,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("-------------------------");
            gotoxy(30,3);printf("-   EXERCICE 7 TP2      -");
            gotoxy(30,4);printf("-------------------------");
            textcolor(14);
             printf("\n\nverifier et afficher si la matrice C est symetrique par rapport a la premiere ou la seconde diagonale.");

            presentation1();
            NC=recuperation_mat_carre(c1,nomFichier);
            printf ("\nR%ccup%cration du Matrice du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de C\n");
            affiche_mc(c1,NC);
            printf("\n");
            presentation2();
            sym_matrice(c1,NC);

}



























#endif // TP2_H_INCLUDED
