#include "Headers.h"

class User
{
    private: //Atributos
        int Edad;
    public: //Funciones
        User(int); //Constructor
};

class Cliente : public User
{
    private: //Atributos
        
    public: //Funciones
        Cliente(int); //Constructor
        int Retirar_Dinero();
        int Consultar_Saldo();
        int Transferir_Dinero();
};

class Banco : public User
{
    private: //Atributos
        
    public: //Funciones
        Banco(int); //Constructor
        int Transferir_Dinero();
        int Depositar_Dinero();
};

class Operador_Banco : public User
{
    private: //Atributos
        
    public: //Funciones
        Operador_Banco(int); //Constructor
        int Depositar_Dinero();
};