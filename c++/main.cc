#include "Animal.h"
#include "Gato.h"
#include "Perro.h"

void saludar(Animal* a);
void comunicar(Amimal* a);

int main (){
    Amimal* gato = new Gato;
    Amimal* perro = new Perro;

    perro->saludar();
    perro->comunicar();
    gato->saludar();
    gato->comunicar();

    saludar(gato);
    comunicar(gato);
    saludar(perro);
    comunicar(perro);

    return 0;
};
void saludar(Animal* a){
    a->saludar();
};
void comunicar(Amimal* a){
    a->comunicar();
}