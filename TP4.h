#ifndef TP4_H_INCLUDED
#define TP4_H_INCLUDED
#define M 3
#define N M*M
static int mat[N][N];
//Spirale :
void spiraletp4()
{
    int t[50][50],i,j,n,l,k=1;
            textcolor(14);
            gotoxy(30,2);printf("---------------------");
            gotoxy(30,3);printf("-  MATRICE  SPIRALE -");
            gotoxy(30,4);printf("---------------------");
            textcolor(14);
            presentation1();
            n=verif_spirale();
            presentation2();
           for(l=0;l<(n/2);l++)
               {
                for(i=l,j=l;j<n-l;j++)
                {t[i][j]=k;k++;}

                for(i=1+l,j--;i<n-l;i++)
                {t[i][j]=k;k++;}

                for(i--,j=n-l-2;j>=l;j--)
                {t[i][j]=k;k++;}

                for(i=n-l-2,j++;i>l;i--)
                {t[i][j]=k;k++;}
               }
               if (n%2==1){t[(n/2)][(n/2)]=k;}


           affiche_mc(t,n);
}

//morpion :
char mp[3][3];
int i;
int j;

void aff1mp()
    {
            for(i=0;i<=2;i++)
    {
                for(j=0;j<=2;j++)
                {
                        mp[i][j] = ' ' ;
                }
    }
    }
void affichemp()
    {
           printf("\n\n\n");
           printf("\t-------\n");
           printf("\t|%c|%c|%c|\n",mp[0][0],mp[0][1],mp[0][2]);
           printf("\t-------\n");
           printf("\t|%c|%c|%c|\n",mp[1][0],mp[1][1],mp[1][2]);
           printf("\t-------\n");
           printf("\t|%c|%c|%c|\n",mp[2][0],mp[2][1],mp[2][2]);
           printf("\t-------\n");
           printf("\t\n\n\n");
    }
int verifcase(char x)
{
 if ((x=='X')||(x=='O')){return(-1);}
 else return(0);
}
int verifqg(char mp[3][3],char x)
{int i,j,d,vl=0,vc=0,vd=0;
//verif ligne :
i=0;
while((i<3)&&(mp[0][i]==x))
{i++;}
if(i==3){vl=1;}
i=0;
while((i<3)&&(mp[1][i]==x))
{i++;}
if(i==3){vl=1;}
i=0;
while((i<3)&&(mp[2][i]==x))
{i++;}
if(i==3){vl=1;}

//verif colonne :
j=0;
while((j<3)&&(mp[j][0]==x))
{j++;}
if(j==3){vc=1;}
j=0;
while((j<3)&&(mp[j][1]==x))
{j++;}
if(j==3){vc=1;}
j=0;
while((j<3)&&(mp[j][2]==x))
{j++;}
if(j==3){vc=1;}

//verif diagonale
d=0;
while((d<3)&&(mp[d][d]==x))
{d++;}
if(d==3){vd=1;}
d=2;
i=0;
while((d>=0)&&(i<3)&&(mp[i][d]==x))
{d--;i++;}
if((d==0)&&(i==3)){vd=1;}

//verifglo
if((vd==1)||(vl==1)||(vc==1)){return(1);}
else return(0);


}

void modifmp()
{

            int c,l,v=0,vg1=0,vg2=0;

do
{
v=0;
printf("Au joueur X :\n\n");
do{
printf("numero de ligne=");
scanf("%d", &l);}while(l>3 || l<1);
do{
printf("numero de colonne=");
scanf("%d",&c);}while(c>3 || c<1);
v=verifcase(mp[l-1][c-1]);
if(v==-1){printf("\n Deja rempli\n");}
}while((v==-1)||((l>3)||(c>3)));
system("cls");
mp[l-1][c-1]='X';
affichemp();
vg1=verifqg(mp,'X');
if(vg1==1){printf("\n\t******Joueur X******");
           printf("\n\t******jeux terminee******\n");
           system("pause");
           }

do
{
printf("Joueur O :\n\n");
do{
printf("numero de ligne=");
scanf("%d", &l);}while(l>3 || l<1);
do{
printf("Numero de  colonne=");}while(c>3 || c<1);
scanf("%d",&c);
v=verifcase(mp[l-1][c-1]);
if(v==-1){printf("\n Deja rempli\n");}
}while((v==-1)||((l>3)||(c>3)));
system("cls");
mp[l-1][c-1] ='O';
affichemp();

vg2=verifqg(mp,'O');


if(vg2==1){printf("\n\t******Joueur O******");
           printf("\n\t******jeux terminée******\n");
           system("pause");
           }


}

void morpiontp4()
{
               textcolor(14);
               gotoxy(30,2);printf("***************");
               gotoxy(30,3);printf("*   Spirale   *");
               gotoxy(30,4);printf("***************");
               textcolor(14);
               presentation1();
               for (i=0; i<9; i++)
                {
                        system("cls");
                        affichemp();
                        modifmp();
                        affichemp();
               }

}

//pyramide
int saisie_taille_pyr(){
    int n;

    do{
        printf("Donner la taille du tableau ( 1<n<7 ): ");
        scanf("%d",&n);
    } while( n >6 || n < 1);

    return n;
}

void affichepyr(int t[][50], int n){
    int i,j,k=0;

    for(i = 1; i<=n; i++){
            for(j=1;j<=n-k;j++)
                printf("\t");
            for(j=1;j<=i;j++)
                printf("%d\t\t",t[i][j]);
            printf("\n\n");
            k++;
        }

}

void remplissage_pyramide(int t[][50],int n)
{
    int i,j;

    for(i = 1; i<=n; i++)
        {if(i==1){printf("donner la sommet de pyramide :");}
            else {printf("donner la ligne %d de pyramide (Elle contient %d entiers) :\n",i,i);}
        for(j=1;j<=i;j++)
           {
            if(i!=1){printf("donner entier num %d : ",j);}
            scanf("%d",&t[i][j]);
        }
        }
}

int maxsom(int t[][50], int n)
{
    int s,i,j,k,i2,i3,i4,i5,i6,maxs=0;
    for(i2=1;i2<=2;i2++)
    {
        for(i3=i2;i3<=i2+1;i3++)
        {
           for(i4=i3;i4<=i3+1;i4++)
           {
              for(i5=i4;i5<=i4+1;i5++)
           {
               for(i6=i5;i6<=i5+1;i6++)
               {
            s=t[1][1]+t[2][i2]+t[3][i3]+t[4][i4]+t[5][i5]+t[6][i6];
            if(s>maxs)
            {
                maxs =s;
            }}
           }
        }}
    }
    return maxs;
}
void pyramidetp4()
{
     int m[10][10],n;
            textcolor(14);
            gotoxy(30,2);printf("----------------");
            gotoxy(30,3);printf("- TP4:Pyramide -");
            gotoxy(30,4);printf("----------------");
            textcolor(14);
            presentation1();
    n = saisie_taille_pyr();
    remplissage_pyramide(m,n);
    printf("\n");
     presentation2();
    affichepyr(m,n);

    printf("\n\nla somme maximale est : %d ",maxsom(m,n));

}

static int mawjoud(int row, int col, int num)
{
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    int i, j;

    for(i=0; i<9; ++i)
    {
        if (mat[row][i] == num) return 0;
        if (mat[i][col] == num) return 0;
        if (mat[rowStart + (i%3)][colStart + (i/3)] == num) return 0;
    }
    return 1;
}

int sudokutp4() {
    int nLigne, nCol;
    int valeur;
    int ret;

    int count;
    // variable nécessaire pour arreter le jeu.
    reset( &count );
    textcolor(14);
    while( count != N*N )
    {
        lireValeur( &nLigne, &nCol, &valeur );
        ret = update( nLigne, nCol, valeur );
        if( ret == 1 ){
            afficher();
            count++;
        }else{
            printf("\nCombinaison non valide\n");
        }
    }

    return EXIT_SUCCESS;
}


void afficher()
{    textcolor(14);
    int i, j;
    int k;


    printf("\n");

    for( i=0; i<N; i++ )
    {

        for(k=0; k <= 4*N; k++ )
        {
            printf("-");
        }
        printf("\n|");
        for( j=0; j<N; j++ )
        {
            if( mat[i][j] == 0 )
            {
                printf("   |");
            }else
            {
                printf(" %d |", mat[i][j]);
            }

        }
        printf("\n");
    }
    for(k=0; k<=4*N; k++ )
    {
        printf("-");
    }
    printf("\n");

    return;
}

int     update( int nLigne, int nCol, int valeur )
{
    if( mawjoud(nLigne,nCol,valeur)==1 )
    {
        mat[nLigne][nCol] = valeur;
        return 1;
    }
    return 0;
}
void lireValeur( int *nLigne, int *nCol, int *valeur )
{    textcolor(14);
    int i=0;
    do{
        if( i != 0 ){
            printf("La valeur ou les coordonnées sont incorrects\n"
                    "Veuillez recommercer\n");
        }
        printf("Entre le numéro de ligne : ");
        scanf("%d", nLigne);
        printf("Entre le numéro de colonne : ");
        scanf("%d", nCol);
        printf("Entre la valeur : ");
        scanf("%d", valeur);
        i=1;
    }while( !((*nLigne>= 0 && *nLigne<9) && (*nCol>= 0 && *nCol<9)
            && (*valeur> 0 && *valeur<=9)));
}

void reset( int * count )
{
    int i;
    int j;

    *count = 0;

    for( i=0; i<N; i++ )
    {
        for( j=0; j<N; j++ )
        {
            mat[i][j] = 0;
        }
    }
}
int isAvailibe(int puzzle[][9], int row, int col, int num)
{
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    int i, j;

    for(i=0; i<9; ++i)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[rowStart + (i%3)][colStart + (i/3)] == num) return 0;
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col)
{
    int i;
    if(row<9 && col<9)
    {
        if(puzzle[row][col] != 0)
        {
            if((col+1)<9) return fillSudoku(puzzle, row, col+1);
            else if((row+1)<9) return fillSudoku(puzzle, row+1, 0);
            else return 1;
        }
        else
        {
            for(i=0; i<9; ++i)
            {
                if(isAvailibe(puzzle, row, col, i+1))
                {
                    puzzle[row][col] = i+1;
                    if((col+1)<9)
                    {
                        if(fillSudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<9)
                    {
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int sudoku11tp4()
{
    int i, j;
    int puzzle[9][9]={{0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0 , 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0}};

     i=fillSudoku(puzzle,0, 0);

         textcolor(14);
        for(i=1; i<10; ++i)
        {
            for(j=1; j<10; ++j) printf("|%d", puzzle[i-1][j-1]);
            printf("|\n");

        }



    return 0;
}
int verifsudoligne(int sud[][50],int n,int i,int j,int x)
{int k;
for(k=0;k<j;k++)
{
    if((sud[i][k]==x)){return 1;}
}
return 0;
}
int verifsudocolonne(int sud[][50],int n,int i,int j,int x)
{int k=0,vc=0;
for(k=0;k<i;k++)
{
    if(sud[k][j]==x){return 1;}
}
return 0;
}
int verifsudobloc(int sud[][50],int n,int i,int j,int x)
{int l,c;
    l=(int)(i/n)*n;
	c=(int)(j/n)*n;

	for(i=l;i<l+n;i++)
	{
		for(j=c;j<c+n;j++)
		{
			if(sud[i][j]==x)
			{
				return 1;
			}
		}
	}
return 0;
}

void remplsud(int sud[][50],int n)
{int i=0,nb=0,j,k=0,nbsud,vl,vc,vm;
for(i=0;i<n*n;i++)
{
    for(j=0;j<n*n;j++)
    {
        sud[i][j]=0;

    }
}
i=0;
while(i<n*n)
{j=0;
        while(j<n*n)
        {

            do{
            srand(time(NULL));

                nbsud=rand()%(n*n)+1;
                vl=verifsudocolonne(sud,n,i,j,nbsud);
                vc=verifsudoligne(sud,n,i,j,nbsud);
                vm=verifsudobloc(sud,n,i,j,nbsud);
                 //printf("%d|%d|%d\n",vl,vc,vm);


                 if(vl==0&&vc==0&&vm==0){nb=0;}
                 else if(vl==1||vc==1||vm==1){nb++;}




                }while (!((vl==0&&vc==0&&vm==0)));

            sud[i][j]=nbsud;
            affichsud(sud,n);
system("pause");

            j++;
        }
        i++;
    }}


void affichsud(int sud[][50],int n)
{int i,j,k,kl=1;
for(i=0;i<n*n;i++)
    {
        if(i==n*kl){
                    for(j=0;j<=n*n;j++)
                    printf(" -- ");
                    printf("\n");
                    kl++;
                    }
        k=1;
        printf(" |");
        for(j=0;j<n*n;j++)
        {   if(j==n*k){printf("|"); k++;}
            printf(" %d |",sud[i][j]);

        }
        printf("\n");}

    }





int sudo12tp4()
{int sud[50][50],n;
    textcolor(14);
    remplsud(sud,2);
    affichsud(sud,n);
}

#endif // TP4_H_INCLUDED
