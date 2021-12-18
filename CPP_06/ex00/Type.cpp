#include "Type.hpp"

Type::Type(): _expr(""){}

Type::Type(const std::string expr): _expr(expr){}

Type::~Type(){}

std::string	Type::getType() const 
{
	return this->_type;
}

 void	Type::setExpression(const std::string expr)
 {
	 this->_expr= expr;
 }



bool 	Type::check(int step, std::string::size_type sz)
{
	try
	{
		if (step == 0){
			this->_double = std::stod(this->_expr, &sz);
			this->_type = "double";
		}
		else if (step == 1 && this->_expr.substr(sz) == "f"){
			this->_float = std::stof(this->_expr, &sz);
			this->_type = "float";
			return true;
		}
		else if (step == 2){
			std::size_t pos = this->_expr.find(".", 0);
			if (pos != std::string::npos){
				this->_int = std::stoi(this->_expr, &sz);
				this->_type = "int";
			}
		}
		else if(step == 3)
			return (sz == this->_expr.length());
		return check(step + 1, sz);
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "Out of Range error: " << oor.what() << '\n';
	}
	catch (const std::invalid_argument& ia) {
		std::cerr << "Invalid argument: " << ia.what() << '\n';
		return false;
	}
	return true;
} 

bool   Type::isFloat()
{
	std::string::size_type sz = 0;

	if (this->isInt())
		return false;
	if (this->_expr == "-inff" || this->_expr == "+inff" || this->_expr == "nanf")
		return true;

	const char *cstr = this->_expr.c_str();

	if (cstr[this->_expr.length() - 1] == 'f')
	{
		std::string str = this->_expr.substr(0,this->_expr.length() - 1);
		std::cout << "floating " << str <<  std::endl;
		try{
			this->_float = std::stof(str, &sz);
		}
		catch (const std::out_of_range& oor) {
    		std::cerr << "Float Out of Range error: " << oor.what() << '\n';
  		}
		catch (const std::invalid_argument& ia) {
			std::cerr << "Invalid argument: " << ia.what() << '\n';
			return false;
		}
		return (sz == str.length());
	}
	return (false);
}

bool   Type::isDouble()
{
	std::string::size_type sz;

	if (this->isInt())
		return false;
	if (this->_expr == "-inf" || this->_expr == "+inf" || this->_expr == "nan")
		return true;

	try{
		this->_double = std::stod(this->_expr, &sz);
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "Double Out of Range error: " << oor.what() << '\n';
	}
	catch (const std::invalid_argument& ia) {
		std::cerr << "Invalid argument: " << ia.what() << '\n';
		return false;
	}
	return (sz == this->_expr.length());
}

bool   Type::isInt()
{
	std::string::size_type sz;

	try{
		this->_int = std::stoi(this->_expr, &sz);
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "Int Out of Range error: " << oor.what() << '\n';
	}
	catch (const std::invalid_argument& ia) {
		std::cerr << "Invalid argument: " << ia.what() << '\n';
		return false;
	}
	return (sz == this->_expr.length());
}

bool    Type::isChar()
{
	const char *cstr = this->_expr.c_str();
	if (this->_expr.length() == 1 && !this->isInt()){
		this->_char = cstr[this->_expr.length()-1];
		return true;
	}
	return false;
}

void    Type::analyse()
{
	if (this->isInt())
		this->_type = "int";
	else if (this->isDouble())
		this->_type = "double";
	else if (this->isFloat())
		this->_type = "float";
	else if (this->isChar())
		this->_type = "char";
	else
		this->_type = "undef";
}

void Type::toChar() const{
	char c;
	std::cout << "char: ";
	if (this->_type == "int")
		c = static_cast<char>(this->_int);
	else if (this->_type == "float")
		c = static_cast<char>(this->_float);
	else if (this->_type == "double")
		c = static_cast<char>(this->_double);
	else 
		c = this->_char;
	if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << " Non displayable" << std::endl;
}

void Type::toInt() const{
	int c;
	std::cout << "int: ";
	if (this->_type == "int")
		c = this->_int;
	else if (this->_type == "float")
		c = static_cast<int>(this->_float);
	else if (this->_type == "double")
		c = static_cast<int>(this->_double);
	else if (this->_type == "char")
		c = static_cast<int>(this->_char);
	else
		return;
	std::cout << c << std::endl;
}

void Type::toFloat() const{
	float c;
	std::cout << "float ";
	if (this->_type == "int")
		c = static_cast<float>(this->_int);
	else if (this->_type == "char")
		c = static_cast<float>(this->_char);
	else if (this->_type == "double")
		c = static_cast<float>(this->_double);
	else 
		c = this->_float;
	std::cout << c << "f" << std::endl;
}

void Type::toDouble() const{
	double c;
	std::cout << "double: ";
	if (this->_type == "int")
		c = static_cast<double>(this->_int);
	else if (this->_type == "float")
		c = static_cast<double>(this->_float);
	else if (this->_type == "char")
		c = static_cast<double>(this->_char);
	else 
		c = this->_double;
	std::cout << c << std::endl;
}

void    Type::print()
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}