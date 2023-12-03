#include <string>
#include <iostream>
#include "resource.h"

Resource::Resource() : m_id {-1}, m_title {"Unknown"}, m_author {"Unknown"}
{
}

Resource::Resource(int id) : m_id {id}, m_title {"Unknown"}, m_author {"Unknown"}
{
}

Resource::Resource(int id, std::string title) : m_id {id}, m_title {title}, m_author {"Unknown"}
{
}

Resource::Resource(int id, std::string title, std::string author) : m_id {id}, m_title {title}, m_author {author}
{
}

Resource::~Resource()
{
}

void Resource::displayDetails()
{
	std::cout << "Id: " << m_id << std::endl;
	std::cout << "Title: " << m_title << std::endl;
	std::cout << "Author: " << m_author << std::endl;
}

void Resource::set_id(int id)
{
	m_id = id;
}

void Resource::set_title(std::string title)
{
	m_title = title;
}

void Resource::set_author(std::string author)
{
	m_author = author;
}
