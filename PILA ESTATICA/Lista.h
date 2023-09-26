#include<iostream>


template <class obj>
class ListaEstatica{
    private:
        obj datos[50];
        int ultimo;
        bool inserta(obj, int);
        bool elimina(int);
        void imprime()const;

    public:

        ListaEstatica();
        listCopy(const ListaEstatica<obj>);
        bool Vacia()const;
        bool Llena()const;

        obj recupera(int)const;
        int primero()const;
        int Ultimo()const;
        int buscar(obj);
        void push(obj);
        obj pop();
        obj top();


};
