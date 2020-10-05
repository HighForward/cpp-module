#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    if (getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	if (getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		this->_grade = copy._grade;
	}
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("ERROR: Grade out of bound: Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade out of bound: Too Low");
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

void Bureaucrat::increment()
{
    if (_grade > 1)
        _grade--;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement()
{
    if (_grade < 150)
        _grade++;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form &form)
{
    if ((unsigned int)getGrade() < form.getLvlSign())
    {
        form.beSigned(*this);
        std::cout << "< " << getName() << " > signs < " << form.getName() << " >\n";
    }
    else
    {
        std::cout << "< " << getName() << " > can't sign < " << form.getName() << " > because < Grade too low >\n";
    }
}
void Bureaucrat::executeForm(const Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << "< " << getName() << " > executs < " << form.getName() << " >\n";
    }
    catch (std::exception &e)
    {
        std::cout << "< " << getName() << " > " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj)
{
    stream << "< " << obj.getName() << " >, bureaucrat grade < " << obj.getGrade() << " >\n";
    return (stream);
}