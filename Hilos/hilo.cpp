#include "hilo.h"

Hilo::Hilo(int Tiempo, QObject *parent) : QThread(parent)
{
    this->ms = Tiempo;
}

void Hilo::run()
{
    int n=0;

    while(true){
        if( n == 100){
            n = 0;
        }

        emit cambiar( n );

        msleep(ms);

        n++;
    }
}

