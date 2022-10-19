#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		~Brain();

		void setIdeas(std::string type, int num);
		void displayIdeas() const;
};

#endif /* BRAIN_HPP */
