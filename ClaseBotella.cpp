    /*
    Realizar una clase Botella que contenga las siguientes propiedades y comportamientos:

        Propiedades
        float Capacidad: La capacidad total de carga del recipiente.
        float Ocupaci�n: La carga actual del recipiente.
        bool Tapada: Determina si la botella se encuentra tapada o no.

        Comportamientos
        Llenar (float): Debe permitir aumentar la ocupaci�n del recipiente pero nunca por encima de su capacidad.
        Vaciar(float): Debe permitir disminuir la ocupaci�n del recipiente pero nunca por debajo de 0.
        Vaciar(): Debe vaciar por completo la ocupaci�n del recipiente.
        Tapar(): Debe tapar la botella.
        Destapar(): Debe destapar la botella.
        Hacer m�todos que permitan obtener la capacidad,

        la ocupaci�n y la disponibilidad de la botella(esto �ltimo representa cu�nto tiene disponible a�n para cargar).
        Al crear un objeto Botella se puede suministrar la capacidad del mismo.
        Si no se indica, debe ser 100 por defecto. En cualquier caso, la ocupaci�n ser� inicialmente de 0.

        Todos los m�todos que consideren necesarios deben limitarse a que la botella se encuentre destapada.
        De lo contrario, no podr�n realizarse. Ejemplo: No se puede vaciar una botella tapada.
    */

 #include <iostream>
 #include <string>

 using namespace std;

 class Botella{
    private:
        float _capacidad, _ocupacion;
        bool _tapada;
    public:
    Botella(float c=100, float o=0, bool t=1){///Constructor x valores
        _capacidad=c;
        _ocupacion=o;
        _tapada=t;
    }



    //Gets

    float getCapacidad(){
    return _capacidad;
    }

    float getOcupacion(){
    return _ocupacion;
    }

    bool getTapada(){
    return _tapada;
    }

    //Sets
    void setCapacidad(float capacidad ){
        _capacidad=capacidad;
        }
    void setOcupacion(float ocupacion){
            if(ocupacion<=100){
            _ocupacion=ocupacion;
            }

        }
    void setTapada(bool tapada){
        _tapada=tapada;
    }


    void Llenar(float l);
    void Vaciar(float l);

    //void Vaciar ();//Sobre carga
    void Tapar();
    void Destapar();

    void Mostrar();
    ~Botella(){}; ///Destructor -->> En memoria dinamica devuelve dicha memoria

 };

 void Botella::Mostrar(){
    cout << "Capacidad: " << getCapacidad();
    cout << endl;
    cout << "Ocupacion: " << getOcupacion();

 }


 void Botella::Llenar(float l){


    cout << endl << "Aumentar el contenido de la botella: " << endl;
    cin >> l;
    setOcupacion(l);
 }

  void Botella::Vaciar(float l){
    float v;

    cout << "Vaciar botella: " << endl;
    cin >> v;

    v = l-v;
    setOcupacion(v);

 }





 int main(){
     float l;
     Botella obj;


     obj.Mostrar();
     cout << endl;
     obj.Llenar(l);
     obj.Mostrar();
     cout << endl;
     obj.Vaciar(l);
     cout << endl;
     obj.Mostrar();

 return 0;
 }
