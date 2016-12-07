//Mini projet c
//Al kilani Med Kadhem
//3Gi 2016-2017
#include <tchar.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myconio.h"
#include "TP1.h"
#include "TP2.h"
#include "TP3.h"
#include "TP4.h"
#include "Definev.h"
//#include "func.h"
#include "function.h"
#include "fichier.h"
static int mat[N][N];
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void AddMenus(HWND);
/*  Make the class name into a global variable  */
char szClassName[ ] = "WindowsApp";

int WINAPI WinMain (HINSTANCE hThisInstance,HINSTANCE hPrevInstance,LPSTR lpszArgumet,int nFunsterStil)

{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */


    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default color as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;


    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           "Al Kilani Med Kadhem MINI PROJET C",       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           775,                 /* The programs width */
           400,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nFunsterStil);


    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{    int t1[50],n1,t2[50],n2,t3[50],n3,t4[50],n4,t5[50],n5,t6[50],n6,t8[50],n8,t14[50],n14;
     int t7[50],n7,t9[50],n9,t10[50],n10,t11[50],n11,t12[50],n12,t13[50],n13;
     int t15[50],n15,t16[50],n16,t17[50],n17,t18[50],n18,t19[50],n19,t20[50],n20,t21[50],n21,t22[50],n22;
     int A1[50][50],NA1,B[50][50],L,C,D[50][50],ND,E[50][50],c1[50][50],NC;
     char * nom1="tab1.txt",* nom2="tab2.txt",*nom3="tab3.txt",*nom4="tab4.txt";
     char * nom5="tab5.txt",* nom6="tab6.txt",* nom8="tab8.txt", * nom14="tab14.txt";
     char * nom7="tab7.txt",* nom9="tab9.txt",* nom10="tab10.txt", * nom11="tab11.txt";
     char * nom12="tab12.txt",* nom13="tab13.txt", *nom15="tab15.txt",* nom16="tab16.txt";
     char * nom17="tab17.txt",* nom18="tab18.txt",* nom19="tab19.txt",* nom20="tab20.txt";
     char * nom21="tab21.txt",* nom22="tab22.txt",*nom23="matA.txt",*nom24="matB.txt";
     char *nom25="matC.txt",*nom26="mat4.txt";
    FILE* file,*file5,*file6,*file9,*file10;

     static HBITMAP hBmp;
     static HWND hEdit;
    switch (message)                  /* handle the messages */
    {
         case WM_CREATE:

            AddMenus(hwnd);
             hBmp=LoadImage(NULL,"image.bmp",IMAGE_BITMAP,0,0,LR_LOADFROMFILE);
             return 0;
break;
            break;
    case WM_PAINT :
          {

            HDC hdc;
            PAINTSTRUCT ps;

            hdc = BeginPaint(hwnd, &ps);

            DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

            EndPaint(hwnd, &ps);

            return 0;
          }
        case WM_COMMAND:
              switch(LOWORD(wParam))
                 {

               case ex1t1:       clrscr();

                                ex1Tp1();
                                break;
              case ex2t1:        clrscr();


                                ex2Tp1();
                                break;
              case ex3t1:        clrscr();

                                ex3Tp1();
                                break;
              case ex4t1:        clrscr();

                                ex4Tp1();
                                break;
              case ex5t1:       clrscr();

                                ex5Tp1();
                                break;
              case ex6t1:       clrscr();

                                ex6Tp1();
                                break;
              case ex71t1:      clrscr();

                                ex7p1Tp1();
                                break;
              case ex72t1:
                                clrscr();
                                ex7p2Tp1();
                                break;
              case ex73t1:      clrscr();
                                ex7p3Tp1();
                                break;
              case rt1:         clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T1 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t1, n1,file,nom1);
                                break;
               case rt2:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T2 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t2, n2,file,nom2);
                                break;
               case rt3:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T3 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t3, n3,file,nom3);
                                break;
               case rt4:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T4 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t4, n4,file,nom4);
                                break;
               case rt5:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T5 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t5, n5,file,nom5);
                                break;
               case rt6:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T6 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t6, n6,file,nom6);
                                break;
               case rt7:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T8 par des entiers entiers strictement positifs \n\n");
                                textcolor(15);
                                remplissage_p(t7, n7,file,nom7);
                                break;
               case rt8:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T8 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t8, n8,file,nom8);
                                break;
               case rt910:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T9/10 par des entiers strictement positifs,distincts et tries par ordre croissant. \n\n");
                                printf("N10 = N9 \n\n");
                                textcolor(15);
                                remplissage_19(t19,t10,n9,file,file5,nom9,nom10);

                                break;

               case rt11:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T11 par des entiers de trois chiffres \n\n");
                                textcolor(15);
                                remplissage_tc(t11, n11,file,nom11);
                                break;
               case rt12:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T12 par des entiers de trois chiffres \n\n");
                                textcolor(15);
                                remplissage_tc(t12, n12,file,nom12);
                                break;
               case rt13:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T13 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t13, n13,file,nom13);
                                break;
               case tf:         clrscr();
                                file = fopen(nom1,"r");
                                if(file==NULL || recuperation(t1,nom1)==0)
                                      {printf("Le tableau T1 est vide ");}
                                      else
                                       {
                                            exercice2_q1_TP2(t1,n1,file,nom1);
                                            textcolor(15);
                                       }
                                break;
               case sy:         clrscr();
                                file = fopen(nom1,"r");
                                if(file==NULL || recuperation(t1,nom1)==0)
                                      {printf("Le tableau T1 est vide ");}
                                      else
                                       {
                                            exercice2_q2_TP2(t1,n1,file,nom1);
                                            textcolor(15);
                                       }
                                break;
               case ins:        clrscr();
                                file = fopen(nom2,"r");
                                if(file==NULL || recuperation(t2,nom2)==0)
                                      {printf("Le tableau T2 est vide ");}
                                      else
                                       {
                                            exercice2_q3_TP2(t2,n2,file,nom2);
                                            textcolor(15);
                                       }
                                break;
               case inv:        clrscr();
                                file = fopen(nom3,"r");
                                if(file==NULL || recuperation(t3,nom3)==0)
                                      {printf("Le tableau T3 est vide ");}
                                      else
                                       {
                                            exercice2_q4_TP2(t3,n3,file,nom3);
                                            textcolor(15);
                                       }
                                break;
               case rot:        clrscr();
                                file = fopen(nom4,"r");
                                if(file==NULL || recuperation(t4,nom4)==0)
                                      {printf("Le tableau T4 est vide ");}
                                      else
                                       {
                                            exercice2_q5_TP2(t4,n4,file,nom4);
                                            textcolor(15);
                                       }
                                break;
               case rb:        clrscr();
                                file = fopen(nom7,"r");
                                if(file==NULL || recuperation(t7,nom7)==0)
                                      {printf("Le tableau T7 est vide ");}
                                      else
                                       {
                                            exercice4_q1_TP2(t7,n7,file,nom7);
                                            textcolor(15);
                                       }
                                break;
               case rf:        clrscr();
                                file = fopen(nom8,"r");
                                if(file==NULL || recuperation(t8,nom8)==0)
                                      {printf("Le tableau T8 est vide ");}
                                      else
                                       {
                                            exercice4_q2_TP2(t8,n8,file,nom8);
                                            textcolor(15);
                                       }
                                break;
               case medi:        clrscr();
                                file = fopen(nom9,"r");
                                file5 = fopen(nom10,"r");
                                if(file==NULL || recuperation(t9,nom9)==0)
                                      {printf("Le tableau T9 est vide ");}
                                 else if(file5==NULL || recuperation(t10,nom10)==0)
                                      {printf("Le tableau T10 est vide ");}
                                      else
                                       {
                                            exercice4_q3_TP2(t9,t10,n9,file,nom9,file5,nom10);
                                            textcolor(15);
                                       }
                                break;
               case rp:        clrscr();
                                file = fopen(nom11,"r");
                                if(file==NULL || recuperation(t11,nom11)==0)
                                      {printf("Le tableau T11 est vide ");}
                                      else
                                       {
                                            exercice4_q4_TP2(t11,n11,file,nom11);
                                            textcolor(15);
                                       }
                                break;
               case rns:        clrscr();
                                file = fopen(nom12,"r");
                                if(file==NULL || recuperation(t12,nom12)==0)
                                      {printf("Le tableau T12 est vide ");}
                                      else
                                       {
                                            exercice4_q5_TP2(t12,n12,file,nom12);
                                            textcolor(15);
                                       }
                                break;
               case rplp:        clrscr();
                                file = fopen(nom13,"r");
                                if(file==NULL || recuperation(t13,nom13)==0)
                                      {printf("Le tableau T13 est vide ");}
                                      else
                                       {
                                            exercice4_q6_TP2(t13,n13,file,nom13);
                                            textcolor(15);
                                       }
                                       break;
              case ex5t2:        clrscr();
                                file = fopen(nom23,"r");
                                if(file==NULL || recuperation_mat_carre(A1,nom23)==0)
                                      {printf("Matrice A est vide ");}
                                      else
                                       {
                                            exercice_dominate(A1,NA1,file,nom23);
                                            textcolor(15);
                                       }
                                       break;
              case ex6t2:        clrscr();
                                file = fopen(nom24,"r");
                                if(file==NULL || recuperation_mat_non_carre(B,&L,&C,nom24)==0)
                                      {printf("Matrice B est vide ");}
                                      else
                                       {
                                            exercice_col(B,L,C,file,nom24);
                                            textcolor(15);
                                       }
                                       break;
              case ex7t2:        clrscr();
                                file = fopen(nom25,"r");
                                if(file==NULL || recuperation_mat_carre(c1,nom25)==0)
                                      {printf("Matrice C est vide ");}
                                      else
                                       {
                                            exercice_sym_matrice(c1,NC,file,nom25);
                                            textcolor(15);
                                       }
                                       break;
               case pres:       clrscr();
                                file = fopen(nom5,"r");
                                file5 = fopen(nom6,"r");
                                if(file==NULL || recuperation_mat_carre(t5,nom5)==0)
                                      {printf("Le tableau T5 est vide ");}
                                else if(file5==NULL || recuperation_mat_carre(t6,nom6)==0)
                                      {printf("Le tableau T6 est vide ");}

                                      else {
                                            exercice2_present_TP2(t5,n5,t6,n6,file,nom5,file5,nom6);
                                            textcolor(15);
                                       }
                                       break;
               case abse:       clrscr();
                                file = fopen(nom5,"r");
                                file5 = fopen(nom6,"r");
                                if(file==NULL || recuperation_mat_carre(t5,nom5)==0)
                                      {printf("Le tableau T5 est vide ");}
                                else if(file5==NULL || recuperation_mat_carre(t6,nom6)==0)
                                      {printf("Le tableau T6 est vide ");}

                                      else {
                                            exercice2_absent_TP2(t5,n5,t6,n6,file,nom5,file5,nom6);
                                            textcolor(15);
                                       }
                                       break;

               case rta:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de Matrice A \n\n");
                                textcolor(15);
                                remplissage_ma(A1, NA1,file,nom23);
                                break;
               case rtb:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de Matrice B  \n\n");
                                textcolor(15);
                                remplissage_mnc(B,L,C,file,nom24);
                                break;
               case rtc:        clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de Matrice C \n\n");
                                textcolor(15);
                                remplissage_mc(c1, NC,file,nom25);
                                break;

               case rt14:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T14 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t14, n14,file,nom14);
                                break;
               case rt15:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T15 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_pc(t15, n15,file,nom15);
                                break;
               case rt16:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T16 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t16, n16,file,nom16);
                                break;
               case rt17:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T17 par des entiers quelconque \n\n");
                                textcolor(15);
                                remplissage_q(t17, n17,file,nom17);
                                break;
               case rt18:       clrscr();
                                textcolor(0);
                                gotoxy(30,2);
                                printf("Remplissage de Matrice A \n\n");
                                textcolor(15);
                                remplissage_q(t18, n18,file,nom18);
                                break;
               case rt19:       clrscr();
                                textcolor(7);
                                gotoxy(35,2);
                                printf("\tRemplissage de T19 par des entiers (avec (1 <= T19[i] <= k) et k > 0) \n\n");
                                textcolor(0);
                                remplissage_tk(t19, n19,file,nom19);
                                break;
               case rt20:       clrscr();
                                textcolor(14);
                                gotoxy(30,2);
                                printf("Remplissage de T20 par des entiers entiers strictement positifs \n\n");
                                textcolor(15);
                                remplissage_pd(t20, n20,file,nom20);
                                break;

                case rs:             clrscr();
                                     file = fopen(nom14,"r");
                                     if(file==NULL || recuperation(t14,nom14)==0)
                                      {printf("Le tableau T14 est vide ");}
                                      else
                                       {
                                            ex_rs(t14,n14,file,nom14);
                                            textcolor(15);
                                       }
                                       break;
               case rd:              clrscr();
                                     file = fopen(nom15,"r");
                                     if(file==NULL || recuperation(t15,nom15)==0)
                                      {printf("Le tableau T15 est vide ");}
                                      else
                                       {
                                            ex_rd(t15,n15,file,nom15);
                                            textcolor(15);
                                       }
                                       break;
               case ts:              clrscr();
                                     file = fopen(nom16,"r");
                                     if(file==NULL || recuperation(t16,nom16)==0)
                                      {printf("Le tableau T16 est vide ");}
                                      else
                                       {    ex_ts(t16,n16,file,nom16);
                                            textcolor(15);
                                       }
                                       break;
               case tb:              clrscr();
                                     file = fopen(nom17,"r");
                                     if(file==NULL || recuperation(t17,nom17)==0)
                                      {printf("Le tableau T17 est vide ");}
                                      else
                                       {    ex_tb(t17,n17,file,nom17);
                                            textcolor(15);
                                       }
                                       break;
               case ti:              clrscr();
                                     file = fopen(nom18,"r");
                                     if(file==NULL || recuperation(t18,nom18)==0)
                                      {printf("Le tableau T18 est vide ");}
                                      else
                                       {    ex_ti(t18,n18,file,nom18);
                                            textcolor(15);
                                       }
                                       break;
               case td:              clrscr();
                                     file = fopen(nom19,"r");
                                     if(file==NULL || recuperation(t19,nom19)==0)
                                      {printf("Le tableau T19 est vide ");}
                                      else
                                       {
                                           ex_td(t19,n19,file,nom19);
                                            textcolor(15);
                                       }
                                       break;
               case tr:              clrscr();
                                     file = fopen(nom20,"r");
                                     if(file==NULL || recuperation(t20,nom20)==0)
                                      {printf("Le tableau T20 est vide ");}
                                      else
                                       {ex_tr(t20,n20,file,nom20);
                                            textcolor(15);
                                       }
                                       break;
               case spi:        clrscr();
                                spiraletp4();
                                break;
               case pyr:        clrscr();
                                pyramidetp4();
                                break;
               case morp:       clrscr();
                                morpiontp4();
                                break;
               case sudo1:      clrscr();
                                sudokutp4();
                                break;
               case sudo2:      clrscr();
                                sudo12tp4();
                                break;
               case sudo3:      clrscr();
                                sudoku11tp4();
                                break;
               case cott1:ShellExecute(NULL,"open","tab1.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott2:ShellExecute(NULL,"open","tab2.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott3:ShellExecute(NULL,"open","tab3.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott4:ShellExecute(NULL,"open","tab4.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott5:ShellExecute(NULL,"open","tab5.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott6:ShellExecute(NULL,"open","tab6.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott7:ShellExecute(NULL,"open","tab7.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott8:ShellExecute(NULL,"open","tab8.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott9:ShellExecute(NULL,"open","tab9.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott10:ShellExecute(NULL,"open","tab10.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott11:ShellExecute(NULL,"open","tab11.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott12:ShellExecute(NULL,"open","tab12.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott13:ShellExecute(NULL,"open","tab13.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott14:ShellExecute(NULL,"open","tab14.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott15:ShellExecute(NULL,"open","tab15.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott16:ShellExecute(NULL,"open","tab16.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott17:ShellExecute(NULL,"open","tab17.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott18:ShellExecute(NULL,"open","tab18.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott19:ShellExecute(NULL,"open","tab19.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cott20:ShellExecute(NULL,"open","tab20.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cottma:ShellExecute(NULL,"open","matA.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cottmb:ShellExecute(NULL,"open","matB.txt",NULL,NULL,SW_SHOWNORMAL);break;
               case cottmc:ShellExecute(NULL,"open","matC.txt",NULL,NULL,SW_SHOWNORMAL);break;

               case ETP1: ShellExecute(NULL,"open","TP1.pdf",NULL,NULL,SW_SHOWNORMAL);
                           break;
               case ETP2: ShellExecute(NULL,"open","TP2.pdf",NULL,NULL,SW_SHOWNORMAL);
                          break;
               case ETP3: ShellExecute(NULL,"open","TP3.pdf",NULL,NULL,SW_SHOWNORMAL);
                          break;
               case ETP4: ShellExecute(NULL,"open","TP4.pdf",NULL,NULL,SW_SHOWNORMAL);
                          break;

               case QUIT: PostMessage(hwnd, WM_CLOSE,0,0);
                          break;
                 }


           break;

      case WM_DESTROY:

          PostQuitMessage(0);
          break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }


    return 0;
}
    void AddMenus(HWND hwnd) {
                        HDC hdc ;

                        HMENU hMenubar = CreateMenu ();
                        HMENU htp1 = CreateMenu ();
                        HMENU htp2 = CreateMenu ();
                        HMENU htp3 = CreateMenu ();
                        HMENU htp4 = CreateMenu ();
                        HMENU reptp2 = CreateMenu ();
                        HMENU ex22 = CreateMenu ();
                        HMENU ex23 = CreateMenu ();
                        HMENU ex24 = CreateMenu ();
                        HMENU reptp3 = CreateMenu ();
                        HMENU ex32 = CreateMenu ();
                        HMENU ex33 = CreateMenu ();
                        HMENU ex71 = CreateMenu ();
                        HMENU remp = CreateMenu ();
                        HMENU CT = CreateMenu ();
                        HMENU sudoku = CreateMenu ();



                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)htp1,"TP numero°1");
                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)htp2,"TP numero°2");
                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)htp3,"TP numero°3");
                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)htp4,"TP numero°4");
                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)remp,"Remplisage");
                        AppendMenu(hMenubar,MF_POPUP, (UINT_PTR)CT,"Tableaux");
                        AppendMenu(hMenubar,MF_POPUP, NULL,"Rapport");
                        AppendMenu(hMenubar,MF_STRING, QUIT,"Quitter");

                        AppendMenu(htp1,MF_STRING,ETP1,"Enoncé TP1");
                        AppendMenu(htp1,MF_STRING,ex1t1,"Exercice 1");
                        AppendMenu(htp1,MF_STRING,ex2t1,"Exercice 2");
                        AppendMenu(htp1,MF_STRING,ex3t1,"Exercice 3");
                        AppendMenu(htp1,MF_STRING,ex4t1,"Exercice 4");
                        AppendMenu(htp1,MF_STRING,ex5t1,"Exercice 5");
                        AppendMenu(htp1,MF_STRING,ex6t1,"Exercice 6");
                        AppendMenu(htp1,MF_POPUP,(UINT_PTR)ex71,"Exercice 7");

                        AppendMenu(ex71,MF_STRING, ex71t1,"Problème 1");
                        AppendMenu(ex71,MF_STRING, ex72t1,"Problème 2");
                        AppendMenu(ex71,MF_STRING, ex73t1,"Problème 3");

                        AppendMenu(htp2,MF_STRING,ETP2,"Enoncé TP2");
                        AppendMenu(htp2,MF_POPUP,(UINT_PTR)reptp2,"Remplissage");
                        AppendMenu(htp2,MF_POPUP,(UINT_PTR)ex22,"Exercice 2");
                        AppendMenu(htp2,MF_POPUP,(UINT_PTR)ex23,"Exercice 3");
                        AppendMenu(htp2,MF_POPUP,(UINT_PTR)ex24,"Exercice 4");
                        AppendMenu(htp2,MF_STRING,ex5t2,"Exercice 5");
                        AppendMenu(htp2,MF_STRING,ex6t2,"Exercice 6");
                        AppendMenu(htp2,MF_STRING,ex7t2,"Exercice 7");

                        AppendMenu(remp,MF_STRING,rt1,"Remplissage T1");
                        AppendMenu(remp,MF_STRING,rt2,"Remplissage T2");
                        AppendMenu(remp,MF_STRING,rt3,"Remplissage T3");
                        AppendMenu(remp,MF_STRING,rt4,"Remplissage T4");
                        AppendMenu(remp,MF_STRING,rt5,"Remplissage T5");
                        AppendMenu(remp,MF_STRING,rt6,"Remplissage T6");
                        AppendMenu(remp,MF_STRING,rt7,"Remplissage T7");
                        AppendMenu(remp,MF_STRING,rt8,"Remplissage T8");
                        AppendMenu(remp,MF_STRING,rt910,"Remplissage T9/T10");
                        AppendMenu(remp,MF_STRING,rt11,"Remplissage T11");
                        AppendMenu(remp,MF_STRING,rt12,"Remplissage T12");
                        AppendMenu(remp,MF_STRING,rt13,"Remplissage T13");
                        AppendMenu(remp,MF_STRING,rta,"Remplissage A");
                        AppendMenu(remp,MF_STRING,rtb,"Remplissage B");
                        AppendMenu(remp,MF_STRING,rtc,"Remplissage C");

                        AppendMenu(ex22,MF_STRING,tf,"Transfert");
                        AppendMenu(ex22,MF_STRING,sy,"Symétrique");
                        AppendMenu(ex22,MF_STRING,ins,"Insertion");
                        AppendMenu(ex22,MF_STRING,inv,"Inversion");
                        AppendMenu(ex22,MF_STRING,rot,"Rotation");


                        AppendMenu(ex23,MF_STRING,pres,"Presents");
                        AppendMenu(ex23,MF_STRING,abse,"Absents");


                        AppendMenu(ex24,MF_STRING,rb,"Recherche blocs");
                        AppendMenu(ex24,MF_STRING,rf,"Recherche élément fréquent");
                        AppendMenu(ex24,MF_STRING,medi,"Recherche médian");
                        AppendMenu(ex24,MF_STRING,rp,"Recherche Permutation");
                        AppendMenu(ex24,MF_STRING,rns,"Recherche nb séquences");
                        AppendMenu(ex24,MF_STRING,rplp,"Recherche plus long plateau");

                        AppendMenu(htp3,MF_STRING,ETP3,"Enoncé TP3");
                        //AppendMenu(htp3,MF_POPUP,(UINT_PTR)reptp3,"Remplissage");
                        AppendMenu(htp3,MF_POPUP,(UINT_PTR)ex32,"exercice 2");
                        AppendMenu(htp3,MF_POPUP,(UINT_PTR)ex33,"exercice 3");


                        AppendMenu(remp,MF_STRING,rt14,"Remplissage T14");
                        AppendMenu(remp,MF_STRING,rt15,"Remplissage T15");
                        AppendMenu(remp,MF_STRING,rt16,"Remplissage T16");
                        AppendMenu(remp,MF_STRING,rt17,"Remplissage T17");
                        AppendMenu(remp,MF_STRING,rt18,"Remplissage T18");
                        AppendMenu(remp,MF_STRING,rt19,"Remplissage T19");
                        AppendMenu(remp,MF_STRING,rt20,"Remplissage T20");


                        AppendMenu(ex32,MF_STRING,rs,"Recherche séquentielle");
                        AppendMenu(ex32,MF_STRING,rd,"Recherche dichotomique");

                        AppendMenu(ex33,MF_STRING,ts,"Tri sélection");
                        AppendMenu(ex33,MF_STRING,tb,"Tri à bulles");
                        AppendMenu(ex33,MF_STRING,ti,"Tri par insertion");
                        AppendMenu(ex33,MF_STRING,td,"Tri par dénombrement");
                        AppendMenu(ex33,MF_STRING,tr,"Tri par remplacement");

                        AppendMenu(htp4,MF_STRING,ETP4,"Enoncé TP4");
                        AppendMenu(htp4,MF_STRING,spi,"Spirale");
                        AppendMenu(htp4,MF_STRING,pyr,"Pyramide");
                        AppendMenu(htp4,MF_STRING,morp,"Morpion");

                        AppendMenu(htp4,MF_POPUP,(UINT_PTR)sudoku,"Sudoku");

                        AppendMenu(sudoku,MF_STRING,sudo1,"sudoku manuel");
                        AppendMenu(sudoku,MF_STRING,sudo2,"sudoku random 2 ");
                        AppendMenu(sudoku,MF_STRING,sudo3,"sudoku random 3 ");


                        AppendMenu(CT,MF_STRING,cott1,"Tableau T1");
                        AppendMenu(CT,MF_STRING,cott2,"Tableau T2");
                        AppendMenu(CT,MF_STRING,cott3,"Tableau T3");
                        AppendMenu(CT,MF_STRING,cott4,"Tableau T4");
                        AppendMenu(CT,MF_STRING,cott5,"Tableau T5");
                        AppendMenu(CT,MF_STRING,cott6,"Tableau T6");
                        AppendMenu(CT,MF_STRING,cott7,"Tableau T7");
                        AppendMenu(CT,MF_STRING,cott8,"Tableau T8");
                        AppendMenu(CT,MF_STRING,cott9,"Tableau T9");
                        AppendMenu(CT,MF_STRING,cott10,"Tableau T10");
                        AppendMenu(CT,MF_STRING,cott11,"Tableau T11");
                        AppendMenu(CT,MF_STRING,cott12,"Tableau T12");
                        AppendMenu(CT,MF_STRING,cott13,"Tableau T13");
                        AppendMenu(CT,MF_STRING,cott14,"Tableau T14");
                        AppendMenu(CT,MF_STRING,cott15,"Tableau T15");
                        AppendMenu(CT,MF_STRING,cott16,"Tableau T16");
                        AppendMenu(CT,MF_STRING,cott17,"Tableau T17");
                        AppendMenu(CT,MF_STRING,cott18,"Tableau T18");
                        AppendMenu(CT,MF_STRING,cott19,"Tableau T19");
                        AppendMenu(CT,MF_STRING,cott20,"Tableau T20");

                        AppendMenu(CT,MF_STRING,cottma,"Matrice A");
                        AppendMenu(CT,MF_STRING,cottmb,"Matrice B");
                        AppendMenu(CT,MF_STRING,cottmc,"Matrice C");

                        SetMenu(hwnd, hMenubar);

}

