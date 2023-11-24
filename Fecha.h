#ifndef DATE_H
#define DATE_H

class Fecha 
{
    private:
        int dia;
        int mes;
        int año;

        std::vector <int> diasxmes {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        std::vector <int> diasxmesB {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    public:
        Fecha(int Dia, int Mes, int Año)
        : dia(Dia), mes(Mes), año(Año) {}


        // Método Set

        void setFecha(int Dia, int Mes, int Año)
        {
            bool evaluarAñoBiciesto (int Año)
            {
                if (Año % 4 == 0) 
                {
                    return true;
                }
                else if (Año % 100 != 0 || Año % 400 == 0) 
                {
                    return true;
                } 
                else 
                {
                    return false;
                }
            }

            bool esBiciesto = evaluarAñoBiciesto(Año);

            if (esBiciesto)
            {
                año = Año;

                if (Mes >= 1 && Mes <= 12)
                {
                    mes = Mes;

                }
                else
                {
                    throw invalid_argument ("El mes esta fuera de rango.");
                }

                if (Dia >= 1 && Dia <= diasxmesB[mes])
                {
                    dia = Dia;
                }
                else
                {
                    throw invalid_argument ("El día esta fuera de rango.");
                }
            }
            else
            {
                año = Año;

                if (Mes >= 1 && Mes <= 12)
                {
                    mes = Mes;

                }
                else
                {
                    throw invalid_argument ("El mes esta fuera de rango.");
                }

                if (Dia >= 1 && Dia <= diasxmes[mes])
                {
                    dia = Dia;
                }
                else
                {
                    throw invalid_argument ("El día esta fuera de rango.");
                }
            }
        }


        // Métodos Get

        int getDia() const 
        {
            return dia;
        }

        int getMes() const
        {
            return mes;
        }

        int getAño() const
        {
            return año;
        }

        // Método Display

        void print() const
        {
            std::cout << dia << " / " << mes << " / " << año << std::endl;
        }

};

#endif // DATE_H