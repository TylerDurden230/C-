#include "Type.hpp"

Type::Type(): _expr(""),_impossible(-1){}

Type::Type(const std::string expr): _expr(expr),_impossible(-1){}

Type::~Type(){}

std::string	Type::getType() const 
{
	return this->_type;
}

void	Type::setExpression(const std::string expr)
{
	this->_expr= expr;
}

void 	Type::evalType(std::string::size_type sz)
{
	if (this->_expr == "-inf" || this->_expr == "+inf" || this->_expr == "nan")
		this->_type = "double";
	else if (this->_expr == "-inff" || this->_expr == "+inff" || this->_expr == "nanf")
		this->_type = "float";
	else{
		std::string sub = this->_expr.substr(sz);
		if (sub.length() == 0){
			if (this->_expr.find(".") != std::string::npos)
				this->_type = "double";
			else
				this->_type = "int";
		}
		else if (sub == "f")
			this->_type = "float";
		else
			this->_type = "undef";		
	}
}

void 	Type::checkType(int step, std::string::size_type sz)
{
	try
	{
		if (step == 0)
			this->_int = std::stoi(this->_expr, &sz);
		else if (step == 1)
			this->_float = std::stof(this->_expr, &sz);
		if (step == 2)
			this->_double = std::stod(this->_expr, &sz);
	}
	catch (const std::invalid_argument& ia) {
		//std::cerr << "Invalid argument: " << ia.what() << '\n';
		this->_impossible = step;
		if (this->_expr.length() == 1){
			this->_char = this->_expr.at(0);
			this->_type = "char";
			this->_impossible = -1;
			return;
		}
	}
	catch (const std::out_of_range& oor) {
		//std::cerr << "Out of Range error: " << oor.what() << '\n';
		this->_impossible = step;
	}
	if (step == 3){
		evalType(sz);
		return;
	}
	checkType(step + 1, sz);
}


void    Type::analyse()
{
	this->checkType(0,0);
}

void Type::toChar() const{
	char c;
	std::cout << "char: ";
	if (this->_impossible >= 0)
		std::cout << " impossible" << std::endl;
	else{
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
}

void Type::toInt() const{
	int c;
	std::cout << "int: ";
	if (this->_impossible >= 0)
		std::cout << " impossible" << std::endl;
	else{
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
}

void Type::toFloat() const{
	float c;
	std::cout << "float ";
	if (this->_impossible >= 1)
		std::cout << " impossible" << std::endl;
	else{
		if (this->_type == "int")
			c = static_cast<float>(this->_int);
		else if (this->_type == "char")
			c = static_cast<float>(this->_char);
		else if (this->_type == "double")
			c = static_cast<float>(this->_double);
		else 
			c = this->_float;
		std::cout << c;
		if (this->_type == "char" || this->_type == "int")
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void Type::toDouble() const{
	double c;
	std::cout << "double: ";
	if (this->_impossible >= 2)
		std::cout << " impossible" << std::endl;
	else{
		if (this->_type == "int")
			c = static_cast<double>(this->_int);
		else if (this->_type == "float")
			c = static_cast<double>(this->_float);
		else if (this->_type == "char")
			c = static_cast<double>(this->_char);
		else 
			c = this->_double;
		std::cout << c;
		if (this->_type == "char" || this->_type == "int")
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void    Type::print()
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}