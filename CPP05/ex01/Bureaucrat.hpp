#ifndef CPP_MODULE_BUREAUCRAT_HPP
#define CPP_MODULE_BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Form;

class Bureaucrat
{
    public:
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);

        void signForm(Form &form);
        int getGrade() const;
        std::string getName() const;
        void increment();
        void decrement();

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
        int _grade;

};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj);

#endif
