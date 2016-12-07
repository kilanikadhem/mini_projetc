#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED
void enregistrement (int t[],int n, char *nomFichier)
{
   int i;
   FILE *fp;
   fp=fopen(nomFichier,"w") ;
   fprintf(fp,"%d\n",n);
   for(i=0;i<n;i++)
    {
      fprintf(fp," %d ",t[i]);
    }
   fclose(fp);
   printf("\nEnregistrement du tableau dans le fichier %d \n",n);
}
int recuperation (int t[], char *nomFichier)
{
    int nbElement=0 ,i;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {
        fscanf(fp,"%d\n",&nbElement);
        if(nbElement)
        {
            for(i=1;i<=nbElement;i++)
            {
                fscanf(fp,"%d",&x);
                t[i-1]=x;
            }
        }
    }
    else
        printf("\n Fichier vide \n");
    return nbElement;
}

void enregistrement_mat_non_carre(int t[][50], int n, int m, char * nomfichier)
{
    int i,j;
    FILE *file;
    file = fopen(nomfichier,"w");
    fprintf(file,"%d\n",n);
    fprintf(file,"%d\n",m);
    for(i =0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            fprintf(file,"%d ",t[i][j]);
        }
        fprintf(file,"\n");
    }
    printf ("\nEnregistrement du tableau dans le fichier %s \n",nomfichier);
    fclose(file);

}
int recuperation_mat_non_carre(int t[][50],int *n,int *m, char *nomfichier)
{
    int i,j,x,y,f,w=0;
    FILE *fp;
    fp= fopen(nomfichier,"r");
    if(fp != NULL)
    {
        fscanf(fp,"%d\n",&y);
        fscanf(fp,"%d\n",&f);
        if(y && f)
        {   w=1;
            for(i=1;i<=y;i++)
                for(j=1;j<=f;j++)
                {
                    fscanf(fp,"%d ",&x);
                    t[i-1][j-1]=x;
                }
                *n=y;
                *m=f;
            }
    }
    else
        printf("\n Fichier vide \n");
   return w;

}

/*fichier matrice carre*/
void enregistrement_mat_carre(int t[][50],int n, char *nomfichier)
{
    int i,j;
    FILE *fp;
    fp = fopen(nomfichier,"w");
    fprintf(fp,"%d\n",n);
    for(i =0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            fprintf(fp,"%d ",t[i][j]);
        }
        fprintf(fp,"\n");
    }
     fclose(fp);
    printf ("\nEnregistrement du tableau dans le fichier %s \n",nomfichier);


}

/*******************************/

int recuperation_mat_carre(int t[][50], char * nomfichier)
{
    int i,j,x,nbelement=0;
    FILE*  file;
    file= fopen(nomfichier,"r");
    if(file != NULL)
    {
        fscanf(file,"%d\n",&nbelement);
        if(nbelement)
            for(i=1;i<=nbelement;i++)
                for(j=1;j<=nbelement;j++)
                {
                    fscanf(file,"%d",&x);
                    t[i-1][j-1]=x;
                }
    }
    else
        printf("\n Fichier vide \n");
    fclose(file);
    return nbelement;
}


#endif // FICHIER_H_INCLUDED
