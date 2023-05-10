#include <iostream>
#include <string>

using namespace std;

class Personaje {
public:
    string nombre;
    string accion;

    Personaje(string nombre, string accion) {
        this->nombre = nombre;
        this->accion = accion;
    }

    void actuar() {
        cout << nombre << " " << accion << endl;
    }
};

class Molinero : public Personaje {
public:
    Molinero(string nombre) : Personaje(nombre, "fallece dejando como unica herencia a su hijo un gato") {
        
    }
};

class Gato : public Personaje {
private:
    bool botas = false;
    bool saco = false;

public:
    Gato(string nombre) : Personaje(nombre, "promete al hijo del molinero que lo sacará de la pobreza") {

    }

    void conseguirBotas() {
        botas = true;
        cout << nombre << " consigue un par de botas" << endl;
    }

    void conseguirSaco() {
        saco = true;
        cout << nombre << " consigue un saco" << endl;
    }

    void engatusarogro() {
        cout << nombre << " engaña al ogro y se hace con su castillo y tierras" << endl;
    }

    void fingirAtaque() {
        cout << nombre << " finge un ataque para que el joven amo sea visto como un heroe" << endl;
    }
};

class Ogro : public Personaje {
public:
    Ogro(string nombre) : Personaje(nombre, "malvado ogro cambiaformas") {

    }
};

class Joven : public Personaje {
public:
    Joven(string nombre) : Personaje(nombre, "se convierte en el nuevo marques de Carabas y se casa con la princesa") {

    }
};

class Rey : public Personaje {
public:
    Rey(string nombre) : Personaje(nombre, "es impresionado por los regalos del gato y nombra al joven amo marques de Carabas") {

    }
};

int main() {
    Molinero molinero("El Molinero");
    Gato gato("El Gato con Botas");
    Ogro ogro("El Ogro");
    Joven joven("El Joven Amo");
    Rey rey("El Rey");

    molinero.actuar();
    gato.conseguirBotas();
    gato.conseguirSaco();
    gato.actuar();
    rey.actuar();
    ogro.actuar();
    gato.engatusarogro();
    joven.actuar();
    gato.fingirAtaque();
    joven.actuar();

    return 0;
}
