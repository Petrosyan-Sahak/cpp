#ifndef MAGAZINE_H_
#define MAGAZINE_H_

#include "resource.h"

class Magazine : public Resource
{
	public:
		Magazine();
		Magazine(int);
		Magazine(int, int);
		Magazine(int, int, std::string);
		Magazine(int, int, std::string, std::string);

		~Magazine() override;

	public:
		int get_issueNumber() const { return m_issueNumber; }
		void set_issueNumber(int);

		void displayDetails() override;

	private:
		int m_issueNumber;
};
#endif
