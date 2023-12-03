#include <iostream>
#include "magazine.h"

Magazine::Magazine()
	: m_issueNumber{-1}
{
}

Magazine::Magazine(int issueNumber)
	: m_issueNumber{issueNumber}
{
}

Magazine::Magazine(int issueNumber, int id)
	: m_issueNumber{issueNumber}, Resource(id)
{
}

Magazine::Magazine(int issueNumber, int id, std::string title)
	: m_issueNumber{issueNumber}, Resource(id, title)
{
}

Magazine::Magazine(int issueNumber, int id, std::string title, std::string author)
	: m_issueNumber{issueNumber}, Resource(id, title, author)
{
}

Magazine::~Magazine()
{
}

void Magazine::set_issueNumber(int issueNumber)
{
	m_issueNumber = issueNumber;
}

void Magazine::displayDetails()
{
	Resource::displayDetails();
	std::cout << "Issue Number: " << m_issueNumber << std::endl;
}
