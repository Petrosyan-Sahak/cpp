#include <iostream>
#include "book.h"

Book::Book()
	: m_numPages {0}, m_releaseYear{0}, m_price {-1}
{
}

Book::Book(int numPages) 
	: m_numPages {numPages}, m_releaseYear{0}, m_price {-1}
{
}

Book::Book(int numPages, int releaseYear) 
	: m_numPages {numPages}, m_releaseYear{releaseYear}, m_price {-1}
{
}

Book::Book(int numPages, int releaseYear, int price)
	: m_numPages {numPages}, m_releaseYear{releaseYear}, m_price {price}
{
}

Book::Book(int numPages, int releaseYear, int price, int id)
	: m_numPages {numPages}, m_releaseYear{releaseYear}, m_price {price}, Resource(id)
{
}

Book::Book(int numPages, int releaseYear, int price, int id, std::string title)
	: m_numPages {numPages}, m_releaseYear{releaseYear}, m_price {price}, Resource(id, title)
{
}

Book::Book(int numPages, int releaseYear, int price, int id, std::string title, std::string author)
	: m_numPages {numPages}, m_releaseYear{releaseYear}, m_price {price}, Resource(id, title, author)
{
}

Book::~Book()
{
}

void Book::set_numPages(int numPages)
{
	m_numPages = numPages;
}

void Book::set_releaseYear(int releaseYear)
{
	m_releaseYear = releaseYear;
}

void Book::set_price(int price)
{
	m_price = price;
}

void Book::displayDetails()
{
	Resource::displayDetails();
	std::cout << "Number of Pages: " << m_numPages << std::endl;
	std::cout << "Release Year: " << m_releaseYear << std::endl;
	std::cout << "Price: " << m_price << std::endl;
}
