#include <iostream>
#include <fstream>
#include <vector>



#include "ItemMenu.h"

class Orden
{
    private:
        std::vector<ItemMenu> items;

    public:

        // Metodo Add

        void addItem(const ItemMenu &item)
        {
            items.push_back(item);
        }


        // Metodo PrecioTotal

        double getPrecioTotal() const
        {
            double total = 0.0;
            int size = items.size();

            for (int i = 0; i < size; i++)
            {
                total += items[i].getPrecio();
            }
            return total;
        }


        // Metodo Print Orden

        void print(){

        }


    };

