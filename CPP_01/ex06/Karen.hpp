#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream> 
#include <string>

class Karen{
    private:
        typedef void (Karen::*func)(); 
        func ptmf [4];
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen();
        ~Karen();
        void complain( std::string level );
};



#endif