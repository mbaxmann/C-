#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
Form(src)
{
    this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    if (this == &src)
	return (*this);
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
	throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
	throw Form::GradeTooLowException();
    std::ofstream outfile(this->_target + "_shrubbery");
    if (outfile.is_open())
    {    
	outfile << "             	                                     ." << std::endl;
	outfile << "                                          .         ;" << std::endl;
	outfile << "             .              .              ;%     ;;" << std::endl;
	outfile << "               ,           ,                :;%  %;" << std::endl;
	outfile << "                :         ;                   :;%;'     .," << std::endl;
	outfile << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	outfile << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "                  `@%:.  :;%.         ;@@%;'" << std::endl;
	outfile << "                    `@%.  `;@%.      ;@@%;" << std::endl;
	outfile << "                      `@%%. `@%%    ;@@%;" << std::endl;
	outfile << "                        ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                          %@bd%%%bd%%:;" << std::endl;
	outfile << "                            #@%%%%%:;;" << std::endl;
	outfile << "                            %@@%%%::;" << std::endl;
	outfile << "                            %@@@%(o);  . '" << std::endl;
	outfile << "                            %@@@o%;:(.,'" << std::endl;
	outfile << "                        `.. %@@@o%::;" << std::endl;
	outfile << "                           `)@@@o%::;" << std::endl;
	outfile << "                            %@@(o)::;" << std::endl;
	outfile << "                           .%@@@@%::;" << std::endl;
	outfile << "                           ;%@@@@%::;." << std::endl;
	outfile << "                          ;%@@@@%%:;;;." << std::endl;
	outfile << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
	outfile.close();
	std::cout << executor.getName() << " executs " << "ShrubberyCreationForm" << std::endl;
    }
    else
	throw Form::FilestreamException();
}
