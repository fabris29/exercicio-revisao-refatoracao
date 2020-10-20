#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
    public:
        Engenheiro( double salario , std::string nomeEmpregado , double horas , double projetos ){
		    salarioHora = salario;
		    nome = nomeEmpregado;
		    horasTrabalhadas = horas;
		    numProjetos = projetos;
	      }
        void get () override
        {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salario Mes: "<< pagamentoMes() << std::endl;
        std::cout << "Projetos: " << numProjetos << std::endl;
        std::cout << std::endl;
        }
    private:
	      int numProjetos;	
};

