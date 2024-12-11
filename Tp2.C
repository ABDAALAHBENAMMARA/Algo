#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* charge(int N) {

    printf("entre une chaine de %d caracter :", N);
    scanf("%d", &N);
    char* chaine = (char*)malloc((N + 1) * sizeof(char));
    scanf("%s", chaine);
    chaine[strcspn(chaine, "\n")] ='0';
    return chaine;
}  

int longar(char* chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}
void chargetab(char* p, char tab[]) {
    int i;
    for (i = 0;p[i] != 0;i++) {
        tab[i] = p[i];

}
}
void inversertap(char tab[], char t[], int m) {
    int i;
    for (i = 0;i < m;i++) {
        t[i] = tab[m - i + 1];
    }
    t[m] = '\0';
}
void affichertab(char tab[], int m) {
    int i;
    for (i = 0;i<m;i++) {
        printf("%c", tab[i]);
    }
    printf("\n");
}




int main()
{
    int N;
    printf("enter la tail maximal de le chaine : ");
    scanf("%d", &N);

    char* chaine = charge(N);

    int longer = longar(chaine);
    char tab[100], t[100];
    chargetab(chaine, tab);
    inversertap(tab, t, longer);
    affichertab(t, longer);

    free(chaine);


    return 0;
}
