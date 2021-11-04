class Cuenta
{
private:
    string tipoCuenta;
    double saldo;
public:
    // Default Constructor
    Cuenta(string tp,double s);
    string getTipoCuenta();
    double getSaldo();
    void setSaldo(double s);
};
Cuenta::Cuenta(string tp, double s)
 {
   tipoCuenta = tp;
    if (s<0)
     s=0.0;
    saldo = s;
 }
string Cuenta::getTipoCuenta()
{
   return tipoCuenta;
}
double Cuenta::getSaldo()
{
   return saldo;
}
void Cuenta::setSaldo(double s)
{
   if (s<0)
     s=0.0;
   saldo = s;
}
