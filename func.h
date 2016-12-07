#ifndef ENTRER_SORTIE_H_INCLUDED
#define ENTRER_SORTIE_H_INCLUDED
//TP1-ex1
long int saisie_ex1tp1()
{long int nb;
do
  {printf("\ndonner un nombre >10 : ");
    scanf("%ld",&nb);
  }while(nb<=10) ;
return nb;
}
//TP1-ex2
int saisieN_ex2tp1()
{int n;
 do
  {printf("\ndonner un nombre : ");
    scanf("%d",&n);
  }while((n>9)||(n<2)) ;
  return n;
}
int saisiemx_ex2tp1()
{int mx,n;
 do
  {printf("\ndonner un autre nombre max : ");
    scanf("%d",&mx);
  }while(mx<n);
  return mx;
}
int verifN_ex2tp1(int x , int n)
{int v=1,nb=x,res=0;
 while ((v==1)&&(nb>(n-1)))
 { res=nb%10;
   if(res==n){v=0;}
   nb=nb/10;

 }
 return v;
}
//TP1-ex3
int saisie_ex3tp1()
{long int nb;
do
  {printf("\ndonner un nombre >10 : ");
    scanf("%ld",&nb);
  }while(nb<=10) ;
return nb;
}
//TP1-ex4
int saisien1_ex4tp1()
{int n1;
 do
  {printf("\n donner un nombre positif : ",133);
    scanf("%d",&n1);
  }while(n1<=0) ;
  return n1;
}
int saisien2_ex4tp1()
{int n2,n1;

    do
  {printf("\ndonner un autre nombre positif : \n",133);
    scanf("%d",&n2);
  }while((n2<=0)||(n2<n1)) ;
  return n2 ;
  }
  //TP1-ex7
int saisie_ex7tp1()
{long int n;
  do
            {
              printf("\ndonner un entier : ");
              scanf("%d",&n);
            } while(n<0);
            return n;
}
//tp2 et tp3
int saisie_taille()
{int n;

    do
  {printf("\nDonner la taille de tableau : ",133);
    scanf("%d",&n);
  }while((n<=5)||(50<n)) ;
  return n ;
  }
  int saisie_taillem()
{int n;

    do
  {printf("\nDonner la taille de Matrice : ",133);
    scanf("%d",&n);
  }while((n<=1)||(50<n)) ;
  return n ;
  }
  int saisie_taillel()
{int n;

    do
  {printf("\nDonner la nbr de ligne de Matrice : ",133);
    scanf("%d",&n);
  }while((n<=1)||(50<n)) ;
  return n ;
  }
  int saisie_taillec()
{int n;

    do
  {printf("\nDonner la nbr de colonne de Matrice : ",133);
    scanf("%d",&n);
  }while((n<=1)||(50<n)) ;
  return n ;
  }
//décoration
void presentation1()
{
     textcolor(14);
     gotoxy(35,10);printf(" -------------ENTR%cES--------------",144);
     printf("\n\n");
     textcolor(14);
}
void presentation2()
{
    textcolor(14);
      printf("\n                                   -------------RESULTAT-------------\n");
    textcolor(14);
}
//t2
int rep (int t[],int i, int n)
{  int x,j,nb=0 ;
    x=t[i];
    for (j=0;j<n;j++)
    {
        if (x==t[i]){nb++;}
    }

}
//saisie tp4 spirale
int verif_spirale()
{int n;
 do
  {printf("\ndonner la taille de Matrice : ");
    scanf("%d",&n);
  }while((n>25)||(n<5)) ;
  return n;
}
#endif // ENTRER_SORTIE_H_INCLUDED
