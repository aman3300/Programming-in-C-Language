#include <stdio.h>
void main()
{
    FILE *fp;
    int n;
    char ch;
    fp = fopen("Text.txt", "w");
    while (ch != '.')
    {
        ch = getchar();
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("Text.txt", "r");
    printf("\n content of the file \n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    fp = fopen("Text.txt", "r");
    printf("How many character you want to Skip \n");
    scanf("%d", &n);
    fseek(fp, n, SEEK_SET);
    printf("information after Skip n Character \n");
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}