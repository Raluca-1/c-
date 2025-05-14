/* Algoritmul care verifică dacă un șir de n numere
este ordonat crescător */

#include<stdio.h>
#include<stdlib.h>

int main(){
int n;

// Citim numărul de elemente al șirului
printf("Introduceti nr de elemente:");
scanf("%d",&n);

// Citim elementele șirului
int A[n];
printf("Introduceti elementele sirului:");
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}

// Verificăm dacă șirul este ordonat crescător
int ordonat=1; //presupunem că șirul este ordonat crescător
for(int i=0;i<n;i++){
    if(A[i]>A[i+1]){
        ordonat=0; //nu este ordonat crescător
        break;
    }
}

if(ordonat){
    printf("Sirul este ordonat crescator");
}else{
    printf("Sirul nu este ordonat crescator");
    }
return 0;
}
