#ifndef HILO_H
#define HILO_H
#include <QThread>

class Hilo : public QThread
{
    Q_OBJECT
public:
    Hilo(int Tiempo, QObject *parent = nullptr);
    void run();
private:
    int ms;

signals:
    void cambiar(int);
};

#endif // HILO_H
