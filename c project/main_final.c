#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// before starting four files are needed to be created i.e  marks.txt, name.txt, admin_password.txt & student_password.txt
int pw_count_student=0,pw_count_admin=0;
void user();
void student();
void admin();
void verify_admin();
void verify_student();
void test();
void help_admin();
void help_student();
void result_admin();
void result_student();
void sys_reset();
void reset_pw_admin();
void reset_pw_student();
void result_marks(int marks);
void result_name(char name[]);
void reset_admin();
void reset_student();
void main()
        {
           user();
        
    getch();
        }
     void user()
        {
            char s;
            printf("\t\t\t### Welcome To The Test Taking System ###\n\n");
            getch();
            printf("\n\t\t\tDo You Want To Login As Admin Or User?<<'A'for Admin & 'U' for User>>\n\t\t\t");
            scanf("%c",&s);
            if(s=='A'||s=='a')
            {
              system("cls");                
             verify_admin();
            }
            else if(s=='u'||s=='U')
            {
              system("cls");
              verify_student();
            
            }
            else
            {
            printf("Please Select Valid Option.!!!");
            getch(); 
            system("cls");
            user();
            }
         }
     void admin() 
        { 
            char s;
            
            printf("\n\t\t > Press V to view the Results  ");
            printf("\n\t\t > Press R to reset The System");
            printf("\n\t\t > Press A to reset The Admin Password");
            printf("\n\t\t > Press U to reset The User Password");
            printf("\n\t\t > Press H For Help");
            printf("\n\t\t > Press Q to quit the system ");
            s=getch();
            if (s=='v'||s=='V')
            {
              result_admin();
              
            }
            else if(s=='R'||s=='r')
            {
              sys_reset();
               
            }
            else if(s=='H'||s=='h')
            {
              
             help_admin();
            }
            else if(s=='A'||s=='a')
            {
              
            reset_pw_admin();
            }
            else if(s=='U'||s=='u')
            {
              
             reset_pw_student();
            }
           
            else if(s=='Q'||s=='q')
            {
              
             exit(0);
            }
            
            else 
            {
              printf("\n\n\n\n\n\n\t\t\t\t\t\t\tPlease Enter Valid Input!!!.");
              getch();
              system("cls");
              admin();
            }
            
            getch();
        }   
     void student()  
     {      
            char s;
           
            printf("\n\t\t > Press T to take the Test \n ");
            printf("\n\t\t > Press R to see your Results.\n");
            printf("\n\t\t > Press H For Help.\n");
            printf("\n\t\t > Press Q to Quit the system.\n");
            s=getch();
            
            if (s=='t'||s=='T')
            {
              test();
              
            }
            else if(s=='R'||s=='r')
            {
              result_student();
              
            }
            else if(s=='Q'||s=='q')
            {
              
             exit(0);
            }
            else if(s=='h'||s=='H')
            {
              
            help_student();
            }
            
            else 
            {
              
              printf("\n\n\n\n\n\n\t\t\t\t\t\t\tPlease Enter Valid Input!!!.");
              getch();
              system("cls");
              student();
            }
            
            getch();
        }
     void test()
    {
      system("cls");
    int A,B,C,D,E,F,G,H,I,J,count=0;
    char name[20];
         printf("\t\t\tWelcome To The Test\n ");
         printf("\t\t\tPlease Enter Your First Name only :");
         scanf("%s",name);
         getch();
         printf("\n\t\t\tplease enter any key to continue!!");
         system("cls");
         printf("\nA.A potential difference of 10 V is applied across a conductor\n whose resistance is 2.5 ohm.\n What is the value of current flowing through it?\n1.4 amperes\t\t\n2.2 amperes\t\t\n3.10 amperes\t\t\n4.6 amperes\t\t\t\nAnswer: ");
         scanf("%d",&A);
         
         if(A==1)
         {
         count++;
         printf(">>>Correct!!!");
         }
         
         else if(A!=1){
         printf(">>>Wrong The Correct Answer Is 1.\n");
     
         }
         getch();
         system("cls");
    
    
         printf("\nB.The current passing through a resistor in a circuit is 1 A \nwhen the voltage across the same resistor is 10 V.\nWhat is the value of current when the voltage across the resistor is 8 V\n1.8 A\t\t\n2.80 A\t\t\n3.0.8 A\t\t\n4.18 A\t\t\t\nAnswer: ");
         scanf("%d",&B);
         
         if(B==3)
         {
           count++;
           printf(">>>Correct!!!\n");
          }
        
         else if(B!=3){
         printf(">>>Wrong The Correct Answer Is 3.\n");

              }
         getch();
         system("cls");
   
         printf("\nC. Two resistors R1 and R2 with resistance 5 ohms and 10 ohms\n respectively are connected in series. The voltage across R1 is 4 V. What will be the value \nof current across R2.\n1.8 A\t\t\n2.0.8 A\t\t\n3.18 A\t\t\n4.2.8 A\t\t\t\nAnswer: ");
         scanf("%d",&C);
         
            if(C=2)
            {
            count++;
            printf(">>>Correct!!!\n");
           
           }
         
         else if(C!=2){
            printf(">>>Wrong The Correct Answer Is 2.\n");
            
             }
         getch();
         system("cls");
   
         printf("\nD.Ohms law is true for\n1.Metallic conductors at low temperature\t\t\n2.Metallic conductors at high temperature\t\t\n3.For electrolytes when current passes through them\t\t\n4.For diode when current flows\t\t\t\n Answer:");
         scanf("%d",&D);
         
         if(D==1)
          {
         count++;
         printf(">>>Correct!!!\n");
           }
         
         else if(D!=1){
         printf(">>>Wrong The Correct Answer Is 1. \n");
               
             }
         getch();
         system("cls");
   
         printf("\nE. Which of the following does a hole in the semiconductor define?\n1.A free proton\t\t\tn2.A free neutron\t\t\n3.A free-electron\t\t\n4.An incomplete part of an electron pair bond\t\t\t\nAnswer: ");
         scanf("%d",&E);
          
             if(E==4)
             {
              count++;
              printf(">>>Correct!!!\n");
             
             }
              
         else if(E!=4){
         printf(">>>Wrong The Correct Answer Is 4.\n");
                 
            }
         getch();
         system("cls");

         printf("\nF.The electrical resistance of the depletion layer is large because\n1.It has no change carriers\t\t\n2.It has a large number of charge carriers\t\t\n3.It contains electrons as charge carriers\t\t\n4.It has holes as charge carriers\t\t\t\nAnswer: ");
         scanf("%d",&F);
         
         if(F==1)
         {
           count++;
           printf(">>>Correct!!!\n");
          
              }
         
         else if(F!=1){
         printf(">>>Wrong The Correct Answer Is 1.\n");
               
            }
      
         getch();
         system("cls");
   
         printf("\nG.If the forward voltage in a semiconductor diode is doubled, the width of the depletion layer will\n1.Become half\t\t\n2.Become one-fourth\t\t\n3.Remain unchanged\t\t\n4.Become double\t\t\t\nAnswer:");
         scanf("%d",&G);
          
            if(G==1)
            {
             count++;
             printf(">>>Correct!!!\n");
            
             }
          
         else if(G!=1){
          printf(">>>Wrong The Correct Answer Is 1.\n");
              
             }
        
         getch();
         system("cls");
    
         printf("\nH.The PN junction diode is used as\n1.An amplifier\t\t\n2.A rectifier\t\t\n3.An oscillator\t\t\n4.A modulator\t\t\t\nAnswer:");
         scanf("%d",&H);
         
         if(H==1)
         {
         count++;
         printf(">>>Correct!!!\n");
        
         }
         
         else if(H!=1){
         printf(">>>Wrong The Correct Answer Is 1.\n");
              
            }
        
         getch();
         system("cls");
    
         printf("\nI. In the depletion region of an unbiased PN junction diode there are?\n1.Only electrons\t\t\n2.Only holes\t\t\n3.Both electrons and holes\t\t\n4.Only fixed ions\t\t\t \nAnswer:");
         scanf("%d",&I);
         
     
         if(I==4)
         {
         count++;
         printf(">>>Correct!!!\n");
        
         }
         
         else if(I!=4){
         printf(">>>Wrong The Correct Answer Is 4.\n");
              
            }
         
         getch();
         system("cls");
   
         printf("\nJ.A 90 ohm resistor, a coil with 30 ohm of reactance,\n and a capacitor with 50 Ω of reactance are in series across a 12 V ac source. \nThe current through the resistor is\n1.9 mA\t\t\n2.90 mA\t\t\n3.13 mA\t\t\n4.130 mA\t\t\t\nAnswer: ");
         scanf("%d",&J);
        
         if(J==1) 
         {
         count++;
         printf(">>>Correct!!!\n");
         
           }
           
         else if(J!=1){
         printf(">>>Wrong The Correct Answer Is 1.\n");
            
            }
         getch();
         system("cls");
         printf("the result is %d",count);
         getch();
         result_name (name);
         result_marks (count);
          
       }
     void sys_reset()
         {
          system("cls"); 
          int num,pw;
          FILE *fptr;

          if ((fptr = fopen("password_student.txt","r")) == NULL)
          {
         printf("The File Does not Exist.");
         exit(1);
          }
         fscanf(fptr,"%d", &num);
         printf("\t\t\t\tPlease Enter The Admin Password:\n\t\t\t");
         scanf("%d",&pw);
         if(num==pw)
          {
         fclose(fopen("marks.txt", "w"));
         fclose(fopen("name.txt","w"));
         printf("\t\t\t>>The System has been sucessfully reset<<.\n");
         printf("\t\t\t>>Please Enter Any Key To Return To Menu.<<");
         getch();
         system("cls");
         admin();
          }
         else
          {
         printf("\t\t\t***PLEASE ENTER CORRECT PASSWORD!!!***");
         sys_reset();
         getch();
          }
         }
     void result_name(char name[])
      {
    	system("cls");
     	char name_1[20];
    	FILE *f;
	    f=fopen("name.txt","a");
	    fprintf(f,"%s\n",name);
	    fclose(f);
      getch();
  		}
     void result_marks(int marks)
      {
    	system("cls");
   	  int marks_1;
    	FILE *f;
	    f=fopen("marks.txt","a");
	    fprintf(f,"%d\n",marks);
	    fclose(f);
      printf("\t\t\t>>>Thank You For Using Our System!!<<<\n\t");
      printf("\t\t\t>>>Please Enter Any Key to Return to the Menu<<<");
      getch();
      system("cls");
      student();
     
  		}
     void verify_admin()
     {
      system("cls");
     int num,pw;
     FILE *fptr;

     if ((fptr = fopen("password_admin.txt","r")) == NULL)
     {
       printf("The File Does not Exist.");
       exit(1);
     }
     fscanf(fptr,"%d", &num);
     printf("\n\t\t\t\tPlease Enter The PassWord For Login:\n\t\t\t");
     scanf("%d",&pw);
     if(num==pw)
     {
      system("cls");
     printf("\t\t\t### Welcome To The Admin System ###\n");
     getch();
     admin();
     }
      else if (pw_count_admin>4)
     {
     system("cls");
     printf("\n\n\n\n\t\t\t###You Have Entered The Wrong Password For More Than 5 times!!!##\n");
     printf("\t\t\tPlease Contact Your System Support For Further Info!!!");
     getch();
     system("cls");
     printf("\n\n\n\n\n\t\t\t\t>>>Thank You<<<");
     getch(); 
     exit(0);
     }
      else
     {   
     printf("\t\t\t***PLEASE ENTER CORRECT PASSWORD!!!***");
     getch();
     pw_count_admin++;
     system("cls");
     verify_admin();
     }
     fclose(fptr); 

     }
     void verify_student()
     {
      system("cls");
     int num,pw;
     FILE *fptr;

     if ((fptr = fopen("password_student.txt","r")) == NULL)
     {
       printf("The File Does not Exist.");
       exit(1);
     }
     fscanf(fptr,"%d", &num);
     printf("\t\t\t\tPlease Enter The PassWord For Login:\n\t\t\t");
     scanf("%d",&pw);
     if(num==pw)
     {system("cls");
     printf("\t\t\t### Welcome To The Student System ###\n");
     getch();
     student();
     }
     else if (pw_count_student>4)
     {
     system("cls"); 
     printf("\n\n\n\n\t\t\tYou Have Entered The Wrong Password For More Than 5 times!!!\n");
     printf("\t\t\tPlease Contact Your Adminstrator For Further information!!!");
     getch();
     system("cls");
     printf("\n\n\n\n\n\t\t\t\t>>>Thank You<<<");
     getch(); 
     exit(0);
     }
     
      else
     {   
     printf("\t\t\t***PLEASE ENTER CORRECT PASSWORD!!!***");
     getch();
     pw_count_student++;
     verify_student();
     }
     fclose(fptr); 

     }
     void reset_admin()
     { system("cls"); 
     fclose(fopen("password_admin.txt", "w"));
     int num,pw_new;  
     FILE *fptr;
     if ((fptr = fopen("password_admin.txt","w")) == NULL)
     {
       printf("The File Does Not Exist.");
       exit(1);
      }
     printf("\t\t\t\tPlease Enter The New Password:\n\t\t\t");
     scanf("%d",&pw_new);   
     fprintf(fptr,"%d",pw_new);
     fclose(fptr);
    printf("\t\t\t\tThe Password Has Been Sucessfully Changed!!\n");
    printf("\t\t\t>>>please enter any key to retun to menu");
    getch();
    system("cls"); 
    admin();

     }  
     void reset_pw_admin()
     {system("cls"); 
        int num,pw_old;
       FILE *fptr;

       if ((fptr = fopen("password_admin.txt","r")) == NULL)
        {
       printf("The File Does not Exist.");
       exit(1);
       }
       fscanf(fptr,"%d", &num);
         printf("\t\t\t\tPlease Enter The Old Password:\n\t\t\t");
       scanf("%d",&pw_old);
        if(num==pw_old)
       {
        reset_admin();
        }
       else
       {
        printf("\t\t\t***PLEASE ENTER CORRECT PASSWORD!!!***");
         reset_pw_admin();
        getch();
       }
       fclose(fptr); 
       getch();
       
       } 
     void reset_pw_student()
     {system("cls"); 
        int num,pw_old;
       FILE *fptr;

       if ((fptr = fopen("password_student.txt","r")) == NULL)
        {
       printf("The File Does not Exist.");
       exit(1);
       }
       fscanf(fptr,"%d", &num);
         printf("\t\t\t\tPlease Enter The Old Password:\n\t\t\t");
       scanf("%d",&pw_old);
        if(num==pw_old)
       {
        reset_student();
        }
       else
       {
        printf("\t\t\t***PLEASE ENTER CORRECT PASSWORD!!!***");
        reset_pw_student();
        getch();
       }
       fclose(fptr); 
       getch();
       } 
     void reset_student()
     { system("cls"); 
     fclose(fopen("password_student.txt", "w"));
     int num,pw_new;  
     FILE *fptr;
     if ((fptr = fopen("password_student.txt","w")) == NULL)
     {
       printf("The File Does Not Exist.");
       exit(1);
      }
     printf("\t\t\t\tPlease Enter The New Password:\n\t\t\t");
     scanf("%d",&pw_new);   
     fprintf(fptr,"%d",pw_new);
     fclose(fptr);
     printf("\t\t\t\tThe Password Has Been Sucessfully Changed!!");
     printf("\t\t\t>>>please enter any key to return to menu!!");
     getch();
     system("cls"); 
       admin();
     }    
     void result_admin()
     {system("cls"); 
     FILE *fp1;
     FILE *fp2;
     char ch,name[20];
     int marks,i;
     int l=0;
     fp1=fopen("name.txt","r");
     fp2=fopen("marks.txt","r");
     while(1)
     {
        ch=getc(fp1);
        if(ch==EOF){
            break;
        }
        else if (ch=='\n')
        {
           l++;
        }
     }
     printf("The Obtained Results Of The %d Students are:\n",l);
     getch();
     rewind(fp1);
     for(i=0;i<l;i++)
     {
     fgets(name,20,fp1);
     fscanf(fp2,"%d",&marks);
     printf("\t\t\t\nName:%s\n\t\t\tObtained Marks:%d\n",name,marks);
     
     }
     fclose(fp1);
     fclose(fp2);
     printf("Press Any Key To Return To Menu");
     getch();
     system("cls"); 
     admin();
     }
     void help_admin()
     {system("cls"); 
      printf("\n\n                              HELP");
     printf("\n -------------------------------------------------------------------------");
     printf("\n ......................... Test Taking System...........");    
     printf("\n >> The System consists of two parts :The Student System and The Admin System");
     printf("\n >> The Student system consists of a automated test taking system of which");
     printf("\n    the results are stored and displayed in seperate system.");
     printf("\n   The Student System can give test and see results.");
     printf("\n >>The Admin System Is Dedicated For Administration.It can :");
     printf("\n   Change Passwords, View Results and Reset The System");
   	 printf("\n\n\t*********************Thank You*********************************");
     printf("\nPlease Enter Any Key To Return To Menu!!");
     getch();
     system("cls"); 
     admin();
    }
     void result_student()
     {system("cls"); 
     FILE *fp1;
     FILE *fp2;
     char ch,name[20];
     int marks,i;
     int l=0;
     fp1=fopen("name.txt","r");
     fp2=fopen("marks.txt","r");
     while(1)
     {
        ch=getc(fp1);
        if(ch==EOF){
            break;
        }
        else if (ch=='\n')
        {
           l++;
        }
     }
      printf("The Obtained Results Of The %d Students are:\n",l);
     
     getch();
     rewind(fp1);
     for(i=0;i<l;i++)
     {
     fgets(name,20,fp1);
     fscanf(fp2,"%d",&marks);
     printf("\t\t\t\nName:%s\n\t\t\tObtained Marks:%d\n",name,marks);
     
     }
     fclose(fp1);
     fclose(fp2);
     printf("Press Any Key To Return To Menu");
     getch();
     system("cls"); 
     student();
     }
     void help_student()
     {
     system("cls"); 
     printf("\n\n                              HELP");
     printf("\n -------------------------------------------------------------------------");
     printf("\n ......................... Test Taking System...........");    
     printf("\n >> The System consists of two parts :The Student System and The Admin System");
     printf("\n >> The Student system consists of a automated test taking system of which");
     printf("\n    the results are stored and displayed in seperate system.");
     printf("\n   The Student System can give test and see results.");
     printf("\n >>The Admin System Is Dedicated For Administration.It can :");
     printf("\n   Change Passwords, View Results and Reset The System");
   	 printf("\n\n\t*********************Thank You*********************************\n");
     printf("Please Enter Any Key To Return To Menu!!");
     getch();
     system("cls"); 
     student();
    }
    