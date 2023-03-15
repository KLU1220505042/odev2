##include <stdlib.h>
#include <stdio.h>


// Harun_Yakut_1220505042

int search(int D[], int N, int sayi){
	
	int i = 0;								// +1 
	while(i<N){								// n+1
	if(D[i]==sayi) break;	               // +1 
	i++;					               // +1 
	}
	if(i<N) return i;			                              // + 1
	else return -1;				                 // +1
	
	/* 1. = 1
	   2. = n+1
	   3. = 1
	   4. = 1
	   5. = 1
	   6. = 1
	   toplam = n+6 T(n)=O(n) */
}
	// Bir dizide arama yapmak icin dögnünün kaç kez çalışmasını hesaplarız. Bagıntıda önemli olan n in derecesidir T(n/2) gibi bagıntılar O(n) e dönüşür

 // Bu kod dosyası verilen bir dizi içinde, aranan elemanın bulunup bulunmadığını kontrol eder ve varsa dizideki elemanı , yoksa -1 değerini geri döndürür.

 //	a) En iyi durumda, aranacak öğenin dizinin ilk elemanı olarak kabul edilirse . Bu durumda, döngü sadece bir kez çalışır ve kod satırından istenen eleman  bulunur. Bu nedenle, en iyi durumda çalışma zamanı O(1) 'dir.

 //	b) Ortalama durumda, öğe dizi içinde rastgele bir konumda olabilir. Bu nedenle, ortalama olarak, öğenin dizinin yarısında bulunduğu varsayılır. 
 //	 Bu durumda, ortalama çalışma zamanı O(n/2) 'dir, yani O(n)'dir.  Önemli olan n'in baskatsayısı ya da sabit terimler değil n 'in derecesi oldugundan n/2 = n degerı alınır

 //	c) En kötü durumda, aranacak öğenin dizinin son elemanı olduğu durumu ele alalım. Bu durumda, döngü dizinin tüm elemanlarını kontrol etmek zorunda kalır ve öğe sonunda bulunur. 
 //	Bu nedenle, en kötü durumda çalışma zamanı O(n) 'dir.

 //	Sonuç olarak, bu kod parçasının çalışma zamanı, en iyi durumda O(1), ortalama durumda O(n) ve en kötü durumda O(n) 'dir.
