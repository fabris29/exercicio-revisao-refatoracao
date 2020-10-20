#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
    public:
        Vendedor( double salario , std::string nomeEmpregado , double horas , double quota){
		    salarioHora = salario;
		    nome = nomeEmpregado;
		    horasTrabalhadas = horas;
		    quotaMensalVendas = quota;
	    }
	    void get () override{
		    std::cout << "Nome: " << nome << std::endl;
            std::cout << "Salario Mes: "<< pagamentoMes() << std::endl;  
            std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
            std::cout << std::endl; 			
	    }
	private:
        const int mesesAno = 12;
        double quotaMensalVendas;		
	    double quotaTotalAnual () {
	        return ( quotaMensalVendas * mesesAno );
		}	
};
			
