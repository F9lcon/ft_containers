#ifndef STACK_HPP
#define STACK_HPP

#include <vector>
#include <iostream>

namespace ft
{

template < typename T, typename Container = std::vector<T> >
class Stack
{
	protected:
		Container	c;

	public:
		typedef Container                                container_type;
		typedef typename container_type::value_type      value_type;
		typedef typename container_type::size_type       size_type;

		Stack( void ) { };
		Stack( const Stack &src ) { *this = src; }
		explicit Stack(const container_type& ctnr ) { this->c = ctnr; }
		~Stack( void ) { };
		Stack &operator=(const Stack &rhs)
		{
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		}
		bool				empty( void ) const { return (this->c.empty()); }
		size_type			size( void ) const { return (this->c.size()); }
		const value_type	&top( void ) const { return (this->c.back()); }
		value_type			&top( void ) { return (this->c.back()); }
		void				push (const value_type& val) { this->c.push_back( val ); }
		void				pop( void ) { this->c.pop_back(); }

		bool	operator== (const Stack<T,Container>& rhs) { return (this->c == rhs.c); }
		bool	operator!= (const Stack<T,Container>& rhs) { return (this->c != rhs.c); }
		bool	operator<  (const Stack<T,Container>& rhs) { return (this->c <	rhs.c); }
		bool	operator<= (const Stack<T,Container>& rhs) { return (this->c <= rhs.c); }
		bool	operator>  (const Stack<T,Container>& rhs) { return (this->c >	rhs.c); }
		bool	operator>= (const Stack<T,Container>& rhs) { return (this->c >= rhs.c); }
};

}

#endif