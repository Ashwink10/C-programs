#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char ch, fname[30], newch[500];
    char chr;
    int i=0, j, COUNT=0;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n\n\n");
    if (fp1= fopen(fname, "r"))
 
   {
 
      chr = getc(fp1);
 
 
      fp2= fopen("ash.txt", "w+");
 
      while (chr!= EOF)
 
      {
 
         fputc(chr, fp2);
 
         chr= getc(fp1);
 
      }
    }
    printf("\nThe Content in %s is Copied in ash.txt\n\n",fname);
 
      fclose(fp1);
 
      fclose(fp2);
    
    printf("\nThe content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
}
