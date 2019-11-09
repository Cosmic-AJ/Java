#include <stdio.h>
#include <string.h>
int main()
{ 
 char n1[100],n2[100];
 char n01[100],n02[100];
 char s[7];
 char ans,an;
 int l1,l2,i,j,k,t,l=-1,count,st,b,p,h;
 do{
 system("cls");
 char as[]= "FLAMES";
 printf("Enter 1 name : ");
 fflush(stdin);
 gets(n1);
 printf("Enter 2 name : ");
 fflush(stdin);
 gets(n2);
 strcpy(n01,n1);
 strcpy(n02,n2);
 strlwr(n1);
 strlwr(n2);
 l1=strlen(n1);
 l2=strlen(n2);
 if(l1>l2)
  b=l1;
 else
  b=l2;
 for(h=0;h<b;h++)
 {for(i=0;i<l1;i++)
 { for(j=0;j<l2;j++)
    { if(n1[i]==n2[j])
       { for(k=i;k<l1-1;k++)
          {
		   n1[k]=n1[k+1];
           }
           n1[k]='\0';
          for(k=j;k<l2-1;k++)
          {
		   n2[k]=n2[k+1];
           }
           n2[k]='\0';
         l1--;
         l2--;
         break;
	   }
	}
 }
}
 t=l1+l2;
 l = strlen(as);
 st=0;
 while(l>1)
 {  count = (t%l)-1;
    p=count+1;
    if(count>=0)
     {for(i=0;;)
     { s[i]=as[p];
	   i++;
	   p++;
	   if(p==strlen(as))
	   break;}
	  for(j=0;j<count;)
     { s[i]=as[j];
	   i++;
	   j++;}
       s[i]='\0';
       strcpy(as,s);
	   }
     else
     { p=0;
	   for(i=0;i<strlen(as)-1;)
       { s[i]=as[p];
         p++;
	     i++;}
	   s[i]='\0';
	   strcpy(as,s);
	   }
     l = strlen(s);
 }
 ans=s[0];
 system("cls");
 printf("First Name  : %s\n",n01);
 printf("Second Name : %s\n",n02);
 printf("Relationship between them is \n");
 switch(ans)
 {case 'F' : printf("Friends\n");
             break;
  case 'L' : printf("Love\n");
             break;
  case 'A' : printf("Affection\n");
             break;
  case 'M' : printf("Marriage\n");
             break;
  case 'E' : printf("Enemy\n");
             break;
  case 'S' : printf("Sister\n");
             break;
 }
 printf("________________________________________________________________________\n");
  printf("\nEnter Y for Yes and N for No\nDo You Want to continue :");
    fflush(stdin);
    scanf("%c",&an);
    while(an!='Y'&&an!='y'&&an!='n'&&an!='N')
     {printf("\nInvalid Value, Enter Again : ");
	  fflush(stdin);
      scanf("%c",&an);}
    }while(an=='y'||an=='Y');
}
