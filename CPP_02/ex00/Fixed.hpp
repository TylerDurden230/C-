
#pragma once

class Fixed
{
	private:
		int raw;
		static const int Q = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed	&operator=(const Fixed &original);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
