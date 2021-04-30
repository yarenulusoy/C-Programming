#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	
	int sayi;
	printf("Bir sayi giriniz = ",sayi);
	scanf("%d",&sayi);
	
	/*if içinde birden fazla komut seçtirebiliriz.Altta sayýnýn 2 ile modundan kalan 0 olmalý hemde sayi 100 den büyük olmalýdýr.
	&& iþareti olduðu için her iki komutta doðru olmalý yoksa if yapýsý çalýþmaz direk elseye döner 
	&& iþareti "ve" yi temsil eder if komutunun içine yazýlan her komut doðru olmak zorundadýr. 
	|| iþareti "veya" yý temsil eder if komutunun içine yazýlan her komut doðru olmak zorunda deðildir sadece bir tanesi doðru olsa yetiyor.  */
	if(sayi%2==0 && sayi>100) 
			printf("Girilen sayý çifttir ve 100 den büyüktür.",sayi);
	else
			printf("Girilen sayý þartlarý saðlamýyor.",sayi);
	getch();

}
