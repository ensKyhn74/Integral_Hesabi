#include <stdio.h>
// klavyeden katsayı ve x'e bağlı üs girilir,belirsiz integral hesaplanır

int main() 

{

  int sayi,us; 
  
  printf("bu program x'e bagli belirsiz integral hesaplar.\n");
  
  printf("sayi girin: ");
  scanf("%d",&sayi);
  
  printf("x^ olacak sekilde bir us girin: ");
  scanf("%d",&us); 
    
  printf("f(x) = (%dx^%d) fonksiyonunun integrali: (%dx^%d/%d) + c",sayi,us,sayi,us+1,us+1);
  
  return 0;

}