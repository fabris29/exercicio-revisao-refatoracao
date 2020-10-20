#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

    Engenheiro eng1(35,"Joao Snow",9.5,3);
    eng1.get();  
    Engenheiro eng2(30,"Daniela Targaryen",8,1);
    eng2.get();  
    Engenheiro eng3(30,"Bruno Stark",8, 2);
    eng3.get();  
    Vendedor vend1(20,"Tonho Lannister",6,5000);
    vend1.get();  
    Vendedor vend2(25,"Jose Mormont",8,3000);
    vend2.get();  	
    Vendedor vend3(30,"Sonia Stark",8,4000);
    vend3.get();  
    return 0;	
}