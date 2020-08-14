//age of a car

#include <stdio.h>


int eingabeZulassungsdatum(){ //Funktion,extrahiere Zulassengsjahr
    
    int tag,monat,zulassungsjahr;
    
    printf("Bitte geben Sie das Zulassungsdatum ein (in der Form von tt.mm.jjjj):\n");
    scanf("%i.%i.%i",&tag,&monat,&zulassungsjahr);
    
    return zulassungsjahr;
}


int alterBerechnung(int zulassungsJahr){
    
    int alter;
    
    alter = 2020 - zulassungsJahr;
    
    return alter;
}


void ausgabeAlter(int alter){
    
    printf("Das Auto ist %i Jahre alt. \n",alter);
    
}



int main(){

    
    printf("Programm zur Berechnung des Alters eines Autos \n");
    
    ausgabeAlter(alterBerechnung(eingabeZulassungsdatum()));
   
    return 0;
    
}
