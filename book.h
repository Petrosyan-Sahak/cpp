#ifndef BOOK_H_
#define BOOK_H_

#include "resource.h"

class Book : public Resource
{
	public:
		Book();
		Book(int);
		Book(int, int);
		Book(int, int, int);
		Book(int, int, int, int);
		Book(int, int, int, int, std::string);
		Book(int, int, int, int, std::string, std::string);
		
		~Book() override;

	public:
		int get_numPages() const { return m_numPages; }
		int get_releaseYear() const { return m_releaseYear; }
		int get_price() const { return m_price; }

		void set_numPages(int);
		void set_releaseYear(int);
		void set_price(int);

		void displayDetails() override;

	private:
		int m_numPages;
		int m_releaseYear;
		int m_price;
};

#endif
