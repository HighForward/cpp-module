#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
class Bureaucrat;

class Form
{
    public:
        Form(std::string name, int lvltosign, int lvltoxec, std::string target);
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        std::string getName() const;
        std::string getTargetName() const;
        bool getSign() const;
        unsigned int getLvlSign() const;
        unsigned int getLvlExec() const;
        void beSigned(Bureaucrat &admin);
        virtual void execute(Bureaucrat const &executor) const;


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

        class FormNotSignException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        std::string _name;
        bool _sign;
        const unsigned int _lvlsign = 50;
        const unsigned int _lvlexec = 100;
        std::string _target;


};

std::ostream &operator<<(std::ostream &stream, Form &form);

#endif
