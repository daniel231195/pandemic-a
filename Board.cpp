
#include <iostream>
#include "Board.hpp"

using namespace std;
using namespace pandemic;   

  
    Board::Board(){
    }
    bool Board::is_clean(){
        return true;
    }   
    void Board ::remove_cures(){   

    }
    void Board::remove_stations(){
        
    }
    int& Board::operator[] (City city){
         return city_by_disease_level[city]; 
    }
    ostream& pandemic::operator<< (std::ostream& os ,const Board& b){
        return os;  
    }
    
