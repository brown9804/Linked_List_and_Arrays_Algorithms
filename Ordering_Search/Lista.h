#ifndef LISTA_H
#define LISTA_H
#include <string>
#include "Nodo.h"
#include <time.h>

using namespace std;

class Lista
{
    public:
        Lista(bool, bool );
        virtual ~Lista();
        int getSize();
        Nodo* getHead();
        Nodo* getTail();
        Nodo* getActual();
        void append(int elem);
        string show();
        int efi ();
        int pro ();

        //tipos de ordenamiento
        void bubbleSort();
        void insertSort();
        void selectionSort();
        void shellSort();
        void radixSort();

        int getelement(int);
        int find(int);
        void setActual (int);
        void insert (int, int);
        void remove();
        int mayor();
        int menor();
        bool isOrderedAsc();
        int apariciones(int);
        int removeAll(int);
        void reverse();
        void joinRepeteadElem();
        void removeRepeteadElem();
        bool insertAsc(int);
        void getDesc();


    protected:
    private:
        int eficiencia;
        int procesos;
        int largo;
        Nodo* head;
        Nodo* tail;
        Nodo* actual;
        bool esDoble;
        bool esCircular;

        string numberToString(int);
};

#endif // LISTA_H
