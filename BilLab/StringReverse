/* Main fonksiyonu içerisinde verilen 5 farklı string cümleyi sırasıyla tersine çeviren ve her bir 
stringin uzunluğunu bulan program. */

#include <stdio.h>
#include <string.h>

void print_array(const char arr[5][50])
{
	for (int i=0; i<5; i++)
	{
		printf("'%s' uzunluk %d\n", arr[i], strlen(arr[i]));
	}
}

int main(){
	char arr[5][50] =
	{ "Bilgisayar Muhendisligi Bilgisayar Laboratuvari",
	  "Birinci Sinif",
	  "String cumlelerin uzunluk toplamini bulun.",
	  "sureniz yetmis bes dakika",
	  "soruyu dikkatli okuyun!"
	};
	
	printf("Ilk Cumleler:\n");
	print_array(arr);

	for (int i=0; i<5; i++)
	{
		for (int j=0, k =strlen(arr[i])-1; j <k; j++, k--)
		{
			char gecici = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = gecici;
		}
	}

	printf("\nTers Cümleler:\n");
	print_array(arr);
	
	return 0;

}
