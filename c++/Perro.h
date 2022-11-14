#ifndef PERRO_H
#define PERRO_H
#include "Animal.h";

class Perro : public Amimal{ 
    public:
    virtual void saludar();
    virtual void comunicar();
    void morder();   
};
#endif