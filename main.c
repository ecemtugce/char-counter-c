#include<stdio.h>
#include <string.h>
int strChCount(char *str, char harf){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]== harf){
            count++; 
        }
    }
    return count;
}
int main(){
    char metin[100];
    printf("bir metin giriniz=");
    char bul;
    fgets(metin,sizeof(metin),stdin);
    printf("aranacak harfi giriniz=");
    scanf("%c",&bul);
    int result= strChCount(metin,bul);
    printf("metindeki %c sayisi %d tanedir.",bul,result);
}