#include <stdlib.h>
#include <stdio.h>

//Harun_YAKUT_1220505042 

int find_min(int arr[], int n) {
	
    int bul_kucuk = arr[0];
    int i;
    for (i = 1; i < n; i++) 
	{
        if (arr[i] < bul_kucuk) 
		{
            bul_kucuk = arr[i];
        }
    }
    return bul_kucuk;
}

int main() {
    int arr[] = {6, 8, 12, 1, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = find_min(arr, n);
    
    printf("Dizinin en kucuk eleman: %d", min);
    
    return 0;
} 

