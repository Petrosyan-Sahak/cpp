#ifndef RESOURCE_H_
#define RESOURCE_H_

#include <string>

class Resource
{
	public:
		Resource();
		Resource(int);
		Resource(int, std::string);
		Resource(int, std::string, std::string);
	public:
		int get_id() const { return m_id; }
		std::string get_title() const { return m_title; }
		std::string get_author() const { return m_author; }

		void set_id(int);
		void set_title(std::string);
		void set_author(std::string);

	public:
		virtual void displayDetails();
		virtual ~Resource();

	private:
		int m_id;
		std::string m_title;
		std::string m_author;


};

#endif
