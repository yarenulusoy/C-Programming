#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	
	int sayi;
	printf("Bir sayi giriniz = ",sayi);
	scanf("%d",&sayi);
	
	/*if i�inde birden fazla komut se�tirebiliriz.Altta say�n�n 2 ile modundan kalan 0 olmal� hemde sayi 100 den b�y�k olmal�d�r.
	&& i�areti oldu�u i�in her iki komutta do�ru olmal� yoksa if yap�s� �al��maz direk elseye d�ner 
	&& i�areti "ve" yi temsil eder if komutunun i�ine yaz�lan her komut do�ru olmak zorundad�r. 
	|| i�areti "veya" y� temsil eder if komutunun i�ine yaz�lan her komut do�ru olmak zorunda de�ildir sadece bir tanesi do�ru olsa yetiyor.  */
	if(sayi%2==0 && sayi>100) 
			printf("Girilen say� �ifttir ve 100 den b�y�kt�r.",sayi);
	else
			printf("Girilen say� �artlar� sa�lam�yor.",sayi);
	getch();

}
