#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED

//exercice 1

void ex1Tp1()
{int nb,a,i,j,s=0,k;
           textcolor(14);
            gotoxy(35,2);printf("------------------------");
            gotoxy(35,3);printf("|   TP1:EXERCICE 1     |");
            gotoxy(35,4);printf("------------------------");

            presentation1();
            textcolor(14);
    printf("\n\tEntrer un entier : ");
    scanf("%d",&nb);
presentation2();

printf("\n ");
   i=1;
   a=1;
 while(i<nb)
    {   j=i;
        s=i;
        while(s<nb)
        {j++;
         s=s+j;
        }

        if (s==nb) { if (a==1){printf("Les sommes consecutives sont :\n");a++;}
                     printf("\t%d=%d",nb,i);
                     k=i+1;
                    while(k<=j)
                    {
                        printf("+%d",k);
                        k++;
                    }printf("\n");
                  }

                  i++;
    }

}



//exercice 2
void ex2Tp1()
{int n,mx,j=0,k=0,i,t1[1000],t2[1000];
            textcolor(14);
            gotoxy(35,2);printf("------------------------");
            gotoxy(35,3);printf("-   TP1:EXERCICE 2     -");
            gotoxy(35,4);printf("------------------------");

            presentation1();
 n=saisieN_ex2tp1();
 mx=saisiemx_ex2tp1();
            presentation2();
for(i=1;i<=mx;i++)
{
    if(i % n==0){printf(" * ");t1[j]=i;j++;}

    else if (verifN_ex2tp1(i,n) == 0){printf(" * ");t2[k]=i;k++;}
    else{printf("%d ",i);}
}
printf("\nLes multiples de %d sont:\n",n);
       for(i=0;i<j;i++)
       {printf(" %d ",t1[i]);}

       if ((verifN_ex2tp1(t2[0],n) == 0))
        {
    printf("\nLes nombres  qui contiennent le chiffre %d sont: \n",n);
       for(i=0;i<k;i++)
       {printf(" %d ",t2[i]);}
        }
       // else     printf("\nLes nombres ont %ct%c remplac%cs par * parce qu'ils contiennent le chiffre %d sont :\n {%c}\n",130,130,130,n,232);



}



//exercice 3

void ex3Tp1()
 {long int nb,n,k;
  int nbr,v;
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("|   TP1:EXERCICE 3     |");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            presentation1();
  nb=saisie_ex3tp1();
  nbr=1;
  n=nb;
  v=1;
          presentation2();
  while ((n != 0 ))
  {
       k=n%10;
       if ((nbr%2==1)&&(k%2==0)) {v=0;break;}
       nbr++;
       n=n/10;
  }

  if (v==0){printf("%ld n'est pas totalement impair\n",nb);}
  else {printf("%ld est  totalement impair\n",nb);}
}



//exercice 4
void ex4Tp1()
{ int n1,n2,n11,n22,nr11,nr22,v,v1;

  textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("|   TP1:EXERCICE 4     |");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            presentation1();
  printf("N1<N2\n");
  n1=saisien1_ex4tp1();
  n2=saisien2_ex4tp1();
  n11=n1;
  n22=n2;
 v1=1;
         presentation2();
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
     n22=n2;
  }
   if (v==0){printf("%d est inclus dans %d",n1,n2);}
  else {printf("%d n'est pas inclus dans %d",n1,n2);}

}




//exercice 5
void ex5Tp1()
{ int n,i,j;
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("|   TP1:EXERCICE 5     |");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            presentation1();
    do
    {
     printf("\ndonner un entier : ");
     scanf("%d",&n);
    }while(n<3);
    presentation2();
    printf("\nTriangle avec des %c :\n",42);
   i=1;

   while(i<=n)
   {   j=1;
       while(j<=i)
       {
           printf("  *  ");
           j++;
       }
       printf("\n");
       i++;
   }
   printf("\n Triangle avec des %c de cot%c n ou l'int%crieur de triangle est rempli par des o :\n",42,130,130);
   i=1;
   while(i<=n)
   {   j=1;
       while(j<=i)
       {   if (i==n)
           printf("  *  ");
           else if ((j>1)&&(j<i))
           printf("  0  ");
           else
           printf("  *  ");
           j++;
       }
       printf("\n");
       i++;
   }

}



//exercice 6
void ex6Tp1()
{int n,i,nbr,j;
            textcolor(14);
            gotoxy(30,2);printf("------------------------");
            gotoxy(30,3);printf("|   EXERCICE 6 TP1     |");
            gotoxy(30,4);printf("------------------------");
            textcolor(14);
            presentation1();
 do
  {printf("\ndonner un nombre sup%crieur a 10 : ",130);
    scanf("%d",&n);
  }while(n<10);
  j=2;
  presentation2();
printf("1");
while(j<n)
{
  nbr=0;
  i=1;
  while(i<=j)
  {if((j%i)==0){nbr++;}
   i++;
  }
   if(nbr==2){printf(" %d ",j);}
 j++;
}
}


//exercice 71
void ex7p1Tp1()
{long int i,n,t,s;
   textcolor(14);
            gotoxy(30,2);printf("************************");
            gotoxy(30,3);printf("*   EXERCICE 7-1 TP1   *");
            gotoxy(30,4);printf("************************");
            textcolor(14);
            presentation1();
    n=saisie_ex7tp1();
    presentation2();
    i=1;
     t=n*n;
     s=1;
     printf(" %d*%d = %d = %d",n,n,t,i);
     while(s<t)
     {
       i++;
       if ((i%2)!=0)  {printf("+%d",i);
       s=s+i;}
     }

}
//**************************************************//
//exercice 72
void ex7p2Tp1()
{long int j,n,s1;
textcolor(14);
            gotoxy(30,2);printf("************************");
            gotoxy(30,3);printf("*   EXERCICE 7-P2 TP1  *");
            gotoxy(30,4);printf("************************");
            textcolor(14);
            presentation1();
    n=saisie_ex7tp1();
    presentation2();
         j=1;
         s1=1;
         printf(" %d = %d",n,j);

     while(j<n)
     {
       j++;
       if ((n%j)==0)  {printf("+%d",j);
                      s1=s1+j;
                      }

     }
     printf("\n");
     if((s1%n)==0){printf("%d est multiparfait car la somme de ses diviseurs = %d",n,s1);}
     else {printf("%d n'est pas multiparfait ",n);}

}
//**************************************************//
//exercice 73
void ex7p3Tp1()
{long int n,n1,nq,nr,v3,s3;
textcolor(14);
            gotoxy(30,2);printf("************************");
            gotoxy(30,3);printf("*   EXERCICE 7-P3 TP1  *");
            gotoxy(30,4);printf("************************");
            textcolor(14);
            presentation1();
               n=saisie_ex7tp1();
                  n1=n;
                  s3=0;
                  v3=1;
                while ((n1!=13)&&(v3==1)&&(s3!=n))
                {
                  nq=n1/10;
                  nr=n1%10;
                  s3=nq+4*nr;
                  printf("%d + 4 * %d = %d \n",nq,nr,s3);
                  n1=s3;
                  if ((s3/10)==0){v3=0;}
                 }
                 if ((n1==13)||(s3==n))   {printf("%d est divisible par 13",n);}
                 else {printf("%d n'est pas divisible par 13",n);}

}

#endif // TP1_H_INCLUDED
