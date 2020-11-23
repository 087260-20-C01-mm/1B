#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Rus");
    int i,j,P,n,count=0;


    FILE *fp,*fp1;
    char s[80], linkIn[80],linkOut[80];

    printf("¬ведите путь к файлу, с которого будет считыватьс€ текст\n");
    gets(linkIn);
    fp=fopen(linkIn,"r");
    printf("¬ведите путь к файлу, в который будет зписан текст\n");
    gets(linkOut);
    fp1=fopen(linkOut,"w");
    fgets(&s[0],80,fp);
    n=strlen(&s[0]);


        j=0;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]==' ')
        {
            if(i==n-1 || i+1==n-1 || s[i+1]==' ' || s[i+1]=='.' || j==0){continue;}
            else{s[j]=' ';j++;}
        }
        else{s[j]=s[i];j++;}
    }
    s[j]='\0';
    fprintf(fp1,"%s",&s[0]);


    fclose(fp);
    fclose(fp1);
    printf("¬роде готово, посмотрите в ");
    puts(linkOut);
    return 0;
}
