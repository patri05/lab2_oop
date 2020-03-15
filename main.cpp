#include <iostream>
#include "complex.h"
#include <vector>
#include <fstream>

std::vector<complex> Sortare(std::vector<complex> my_vec)
{
    complex aux;
    for(unsigned int i=0;i<my_vec.size()-1;i++)
    {
        for(unsigned int j=0;j<my_vec.size()-i-1;j++)
        {
            if(my_vec[j].get_real()>my_vec[j+i].get_real())
            {
                aux=my_vec[j];
                my_vec[j]=my_vec[j+1];
                my_vec[j+1]=aux;
            }
            else if(my_vec[j].get_real()==my_vec[j+i].get_real())
            {
                if(my_vec[j].get_imaginary()>my_vec[j+1].get_imaginary())
                {
                    aux=my_vec[j];
                    my_vec[j]=my_vec[j+1];
                    my_vec[j+1]=aux;
                }
            }
        }
    }
    return my_vec;
}
std::vector<complex> Citrire()
{
    int i,n;
    double a,b;
    std::vector<complex> my_vec;
    std::ifstream f;
    f.open("date.txt");
    f>>n;
    for(i = 0; i < n; i++)
    {
        f >> a >> b;
        my_vec.push_back(complex(a,b));
    }
}

void Print_vector(std::vector<complex> my_vec)
{
    for(unsigned int i=0;i<my_vec.size();i++)
    {
        my_vec[i].print(my_vec[i]);
        std::cout<<std::endl;
    }
}

int main()
{
    //std::vector<complex> vec;
    //vec=Citrire();
    Print_vector(Citrire());


    return 0;
}
