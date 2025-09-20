// Online C++ compiler to run C++ program online

// Comentario Unilineal
/*
Comentario 
Multilinea
klk Gente
*/
#include <iostream>
//Importe la libreria iostream nativa //Permite interactua con un programa 
int main() {
    // Booleano
    // se reprecenta con verdadero o falso
    std::cout << (5>4)<<std::endl; 
    std::cout << (5>4)<<std::endl; 
    std::cout << (3==3)<<std::endl; 
    std::cout << (0<6)<<std::endl; 
    
    int edad =33;
    
    if (edad==1 && edad <=17){
    std::cout<< "Eres Menor"<< std::endl;
    }
    else if (edad <= 18 && edad >=59)
    {
        std::cout<< "Eres mayor"<< std::endl; 
    }
    else {
    std::cout<< "Eres muy viejo"<< std::endl;
    }
  
        return 0;
}
