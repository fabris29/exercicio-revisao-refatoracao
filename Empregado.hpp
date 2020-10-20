#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {	
    public: 
        virtual void get(){
            std::cout << "Nome: " << nome << std::endl;
            std::cout << "Salario Mes: "<< pagamentoMes() << std::endl;
        };
        double horaAdicional (double horasTrabalhadas){
            return ( horasTrabalhadas - limitHoras ) / ( 2 );
        }
        double pagamentoMes() { 
            bool horaExtra = (horasTrabalhadas > limitHoras); 
	          if ( horaExtra == true ) {
                return ( ( horasTrabalhadas + horaAdicional( horasTrabalhadas ) ) * salarioHora );
            }
            else{
                return ( horasTrabalhadas * salarioHora );
            }
        }	
    protected:
        double salarioHora;
        const int limitHoras = 8;
        std::string nome;
        double horasTrabalhadas;
};
#endif