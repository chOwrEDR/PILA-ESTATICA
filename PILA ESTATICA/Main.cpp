#include"Lista.cpp"
#include"Empleado.cpp"

void Insertar(ListaEstatica<empleado>&);
void Eliminar(ListaEstatica<empleado>&);
void top(ListaEstatica<empleado>&);




int main(){
    ListaEstatica<empleado> miLista;
    int opcion;
    do {
        std::cout << "\t \n === MENU ===" << std::endl;
        std::cout << "1. PUSH" << std::endl;
        std::cout << "2. POP" <<std:: endl;
        std::cout << "3. TOP" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;
        std::cin.ignore();
        switch(opcion){

            case 1:
                Insertar(miLista);
                break;
            case 2:
                Eliminar(miLista);
                break;
            case 3:
                top(miLista);
                break;
            case 4:
                break;

            default:
                std::cout<<"Opcion invalida...";
        }
    }while(opcion != 4);
}





void Insertar(ListaEstatica<empleado>& myLista){
   empleado nuevo_empleado;
    std::cin>>nuevo_empleado;
    myLista.push(nuevo_empleado);
}


void Eliminar(ListaEstatica<empleado>& myLista){
    myLista.pop();
}


void top(ListaEstatica<empleado>& myLista){

    empleado empleadoTop;
    empleadoTop = myLista.top();
    if(empleadoTop.getNombre() == ""){
        std::cout<<"Nada en el tope..."<<std::endl;
    }else{
        std::cout<<empleadoTop;
    }
}



