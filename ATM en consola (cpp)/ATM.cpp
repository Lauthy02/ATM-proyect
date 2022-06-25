#include "Class_User.h"
#include "Headers.h"

int SaldoCajero = 0, Opcion = 0;
bool Salir = false;

int main()
{
    do
    {
        LimpiarConsola;
        cout << "----- BIENVENIDOS AL CAJERO AUTOMATICO -----" << endl;
        Enter;
        cout << "--- Opciones ---" << endl;
        cout << "1 - Soy cliente" << endl;
        cout << "2 - Soy banco" << endl;
        cout << "3 - Soy operador del banco" << endl;
        cin >> Opcion;

        switch (Opcion)
        {
            case 1:
            {
                LimpiarConsola;
                cout << "Usted es cliente" << endl:
                break;
            }
            case 2:
            {
                LimpiarConsola;
                cout << "Usted es banco" << endl:
                break;
            }
            case 3:
            {
                LimpiarConsola;
                cout << "Usted es el operador del banco" << endl:
                break;
            }
            default:
            {
                cout << "No selecciono nunguna opción posible" << endl;
                cout << "Vuelva a intentar" << endl;
                Salir = false;
                Pausa;
                DeleteBuffer;
                break;
            }
        }
    }while(Salir == false)
    return 0;
}