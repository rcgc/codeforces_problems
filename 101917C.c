#include<stdio.h>
#include<string.h>

int main(){
    int n, key, aux=0;
    char newAsciiCharacter;
    char cad[1000], newCad[1000], br='\n';

    int i=0, j=0;

    scanf("%i%*c", &n);
    scanf("%i%*c", &key);

    key = key %26;

    memset(newCad, 0, strlen(newCad)); // Clean string buffer
    memset(cad, 0, strlen(cad)); // Clean string buffer

    for(i=0; i<n; i++){
        gets(cad);

        for( j=0; j<strlen(cad); j++){
            if( (cad[j] >= 65 && cad[j] <= 90) || (cad[j]>=97 && cad[j]<=122) ){ // letters
                if( (cad[j]>=97 && cad[j]<=122) && (cad[j]-key < 97) ){ // lower case + rotation
                    aux = cad[j] - 97;
                    newAsciiCharacter = (char) (123 - (key-aux));
                    strncat(newCad, &newAsciiCharacter, 1);
                }
                else if( (cad[j] >=65 && cad[j] <= 90) && (cad[j]-key < 65) ){ // upper case + rotation
                    aux = cad[j] - 65;
                    newAsciiCharacter = (char) (91 - (key-aux));
                    strncat(newCad, &newAsciiCharacter, 1);
                }
                else { // whatever letters + no rotation
                    newAsciiCharacter = (char) (cad[j] - key);
                    strncat(newCad, &newAsciiCharacter, 1);
                }
                aux = 0;
            }else { // special characters
                strncat(newCad, &cad[j], 1);
            }
        }
        strncat(newCad, &br, 1);
        printf("%s", newCad);
        memset(newCad, 0, strlen(newCad));
    }
    return 0;
}
