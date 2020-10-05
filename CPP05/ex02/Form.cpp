#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int lvltosign, int lvltoxec, std::string target) : _name(name), _sign(false), _lvlsign(lvltosign), _lvlexec(lvltoxec) , _target(target)
{

}

Form::~Form()
{

}

Form::Form(const Form &copy) : _name(copy.getName()), _sign(copy.getSign()), _lvlsign(copy.getLvlSign()), _lvlexec(copy.getLvlExec()) , _target(copy.getTargetName())
{

}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		this->_sign = copy.getSign();
	}
	return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSign() const
{
    return (_sign);
}

unsigned int Form::getLvlSign() const
{
    return (_lvlsign);
}

unsigned int Form::getLvlExec() const
{
    return (_lvlexec);
}

std::string Form::getTargetName() const
{
	return (_target);
}

void Form::setTarget(std::string target)
{
	this->_target = target;
}

void Form::setSign(bool b)
{
	this->_sign = b;
}

void Form::beSigned(Bureaucrat &admin)
{
	if ((unsigned int)admin.getGrade() <= getLvlSign())
		_sign = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("ERROR: Grade out of bound: Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade out of bound: Too Low");
}

const char *Form::FormNotSignException::what() const throw()
{
    return ("ERROR: Form: Not Signed");
}
std::ostream &operator<<(std::ostream &stream, Form &form)
{
    stream << "< " << form.getName() << " > is " << (form.getSign() ? "signed" : "not signed") << "\n"
        << "Lvl required to sign: " << form.getLvlSign() << "\n"
        << "Lvl required to exec: " << form.getLvlExec() << "\n";
    return (stream);
}
