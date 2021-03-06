#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
class Bureaucrat;

class Form
{
    public:
        Form(std::string name);
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);

        std::string getName() const;
        bool getSign() const;
        unsigned int getLvlSign() const;
        unsigned int getLvlExec() const;
        void beSigned(Bureaucrat &admin);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        const std::string _name;
        bool _sign;
        static const unsigned int _lvlsign = 50;
        static const unsigned int _lvlexec = 100;
};

std::ostream &operator<<(std::ostream &stream, Form &form);

#endif
