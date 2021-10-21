class Persona
{
private:
    string nombre, paterno, materno, fechaNac;
    float estatura, peso;
public:
    void setNombre(string n)
    {
        nombre = n;
    }
    string getNombre()
    {
        return nombre;
    }
    void setPaterno(string p)
    {
        paterno = p;
    }
    string getPaterno()
    {
        return paterno;
    }
    void setEstatura(float e)
    {
        estatura = e;
    }
    float getEstatura()
    {
        return estatura;
    }
    void imprimeDatos()
    {
        cout << "El nombre es: " << getNombre() << endl;
        cout << "El paterno es: " << getPaterno() << endl;
    }

};
