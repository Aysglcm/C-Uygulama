#include <stdio.h>
#include <stdlib.h>


// �dev 1: Kullan�c�dan al�nan bir metni tersine �eviren fonksiyon
void ReverseText(char* text) {
    int length = strlen(text);
    for (int i = 0; i < length / 2; i++) {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }
}

// �dev 2: Kullan�c�dan al�nan bir kelimenin polindrom olup olmad���n� kontrol eden fonksiyon
int IsPolindrom(char* word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            return 0; // Polindrom de�il
        }
    }
    return 1; // Polindrom
}

// �dev 3: Kullan�c�dan al�nan integer bir dizinin elemanlar�n� k���kten b�y��e s�ralayan fonksiyon
void SortIntArr(int* arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(int argc, char *argv[]) {
	
	// �dev 1 testi
    char text[100];
    printf("Metni girin: ");
    gets(text);
    ReverseText(text);
    printf("Tersine cevrilmis metin: %s\n", text);

    // �dev 2 testi
    char word[100];
    printf("Kelimeyi girin: ");
    gets(word);
    if (IsPolindrom(word)) {
        printf("Bu kelime polindromdur.\n");
    } else {
        printf("Bu kelime polindrom degildir.\n");
    }
    
    // �dev 3 testi
    int length;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &length);
    int arr[100];
    printf("Dizinin elemanlarini girin: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    SortIntArr(arr, length);
    printf("Siralama sonucu: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
