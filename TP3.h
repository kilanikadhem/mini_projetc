#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED
void rechseq(int t[50],int n)
{ int i,tr=0,x;
    printf("\n donner X");
    scanf("%d",&x);
    i=0;
    while((tr==0)&&(i<n))
    {   if(t[i]==x) {tr=1;}
        i++;
    }
    if(tr==1)
    printf("La position de %d est %d",x,i);
    else{printf("La valeur %d n'est pas dans le tableau",x);}
}
void rechdich(int t[50],int n)
{ int deb=0,fin=n,mil,tr=0,x;
    printf("\n donner X");
    scanf("%d",&x);
    while((tr==0)&&(deb<=fin))
    {
        mil=((deb+fin)/2);
        if ( t[mil]==x) {tr=1;}
        else if (x> t[mil]) {deb=mil+1;}
        else if (x< t[mil]) {fin=mil-1;}
    }

    if(tr==1) {printf("La position de %d est %d",t[mil],mil+1);}
    else     {printf("La valeur %d n'est pas dans le tableau",x);}
}
void tri_bulles(int t[50],int n)
{ int i=0,x,m;
   m=n;
    while(m!=0)
    {
        for (i=0;i<m;i++)
            {
                if (t[i]>t[i+1])
                {
                x=t[i];
                t[i]=t[i+1];
                t[i+1]=x;
                }
            }
            m--;
    }
    printf("\n Aprés tri à bulles \n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",t[i]);
    }
}
void tri_insertion(int t[50],int n)
{ int i,j,x;

    for (i=1; i < n; i++)
    {
        x=t[i];
        j=i;

       while ((j>0)&&(t[j-1]>x))
         {t[j]=t[j-1];
          j--;
         }
       t[j] =x;
   }
    printf("\n Aprés tri par insertion \n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",t[i]);
    }
}
void tri_selection(int t[50],int n)
{ int i,x,j,min;

    for (i=0;i<n;i++)
    {
        min=i;

        for (j=i+1;j<n;j++)
        {if (t[j]<t[min]){min=j;}}
        if( i!= min )
        {
        x=t[i];
        t[i]=t[min];
        t[min]=x;
        }
    }
    printf("\n Aprés tri par selection \n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",t[i]);
    }
}

void tri_denombrement(int t[50],int n)
{ int i=0,u=0,j,k,nbr,l,s=0,b=0,e[50];
    printf("donner Le max de tableau");
    scanf("%d",&k);
    for (i=1;i<=k;i++)
        {
         nbr=0;
         for (j=0;j<n;j++)
         {if (t[j]==i){nbr=nbr+1;}}
         e[u]=nbr;
         u++;
         }
         for(i=0;i<k;i++)
        {
            if(e[i]!= 0)
                 {s=s+e[i];
                  for(l=b;l<s;l++)
                  {t[l]=i+1;}
                  b=b+e[i];
                 }
        }
    printf("\n Tableau E de nombre d'occurrences associées à chaque indice : \n");
    for(i=0;i<k;i++)
    {printf(" %d ",e[i]);}
    printf("\n Aprés tri par dénombrement \n");
    for(i=0;i<n;i++)
    {printf(" %d ",t[i]);}
}
void tri_remplacer(int t[50],int n)
{ int i,j,max,im,b[50];

    for (j=0;j<=n;j++)
       {
           max=t[0];
           im=0;
           for (i=1;i<n;i++){if(t[i]>max){max=t[i];im=i;}}
           b[j]=max;
           t[im]=-1;
       }

    printf("\n Aprés tri par remplacement \n");
    for(i=0;i<n;i++)
    {printf(" %d ",b[i]);}


}
//exercices:
void ex_rs(int t14[], int n14,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------------");
            gotoxy(30,3);printf("-   Recherche sequentielle   -");
            gotoxy(30,4);printf("------------------------------");
            textcolor(15);
             printf("\n\nChercher la premiere position de la valeur 'val' dans le tableau T14");

            presentation1();
            n14=recuperation(t14,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T14\n");
            affiche(t14,n14);
            printf("\n");
            presentation2();
            rechseq(t14,n14);

}
void ex_rd(int t15[], int n15,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------------");
            gotoxy(30,3);printf("-   Recherche dycothomique   -");
            gotoxy(30,4);printf("------------------------------");
            textcolor(15);
             printf("\n\nChercher la premiere position de la valeur 'val' dans le tableau T14");

            presentation1();
            n15=recuperation(t15,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T15\n");
            affiche(t15,n15);
            printf("\n");
            presentation2();
            rechdich(t15,n15);

}
void ex_ts(int t16[], int n16,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("******************************");
            gotoxy(30,3);printf("*   tri par selection   *");
            gotoxy(30,4);printf("******************************");
            textcolor(15);


            presentation1();
            n16=recuperation(t16,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T16\n");
            affiche(t16,n16);
            printf("\n");
            presentation2();
            tri_selection(t16,n16);

}
void ex_tb(int t17[], int n17,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("------------------------------");
            gotoxy(30,3);printf("-      Tri a bulles          -");
            gotoxy(30,4);printf("------------------------------");
            textcolor(15);

            presentation1();
            n17=recuperation(t17,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T17\n");
            affiche(t17,n17);
            printf("\n");
            presentation2();
            tri_bulles(t17,n17);

}
void ex_ti(int t18[], int n18,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("******************************");
            gotoxy(30,3);printf("*     Tri par insertion      *");
            gotoxy(30,4);printf("******************************");
            textcolor(15);

            presentation1();
            n18=recuperation(t18,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T18\n");
            affiche(t18,n18);
            printf("\n");
            presentation2();
            tri_insertion(t18,n18);

}
void ex_td(int t19[], int n19,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("******************************");
            gotoxy(30,3);printf("*   Tri par denombrement     *");
            gotoxy(30,4);printf("******************************");
            textcolor(15);

            presentation1();
            n19=recuperation(t19,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T19\n");
            affiche(t19,n19);
            printf("\n");
            presentation2();
            tri_denombrement(t19,n19);

}
void ex_tr(int t20[], int n20,FILE* file,char *nomFichier)
{

            file = fopen(nomFichier,"r");
            textcolor(14);
            gotoxy(30,2);printf("---------------------------");
            gotoxy(30,3);printf("-     TRI   REMPLACER     -");
            gotoxy(30,4);printf("---------------------------");
            textcolor(15);

            presentation1();
            n20=recuperation(t20,nomFichier);
            printf ("\nR%ccup%cration du tableau du fichier : %s \n",130,130,nomFichier);
            printf("\nContenu de T20\n");
            affiche(t20,n20);
            printf("\n");
            presentation2();
            tri_remplacer(t20,n20);

}


#endif // TP3_H_INCLUDED
