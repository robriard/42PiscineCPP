/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 05:13:36 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:21:18 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

static void printTree(std::ofstream & ofs, std::string const file) {
    std::ifstream       ifs;
    std::string buf, content, filename = "tree_srcs/"+file;
    ifs.open(filename.c_str());
    while (getline(ifs, buf))
    {
        if (content.size())
            content.append("\n");
        content.append(buf);
    }
    ifs.close();
    ofs << content << std::endl;
    return;
}




ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Tree", 145, 137), _target("Tree"){
    std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : AForm("Tree", 145, 137), _target(target){
    std::cout << "[ShrubberyCreationForm] Overload constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm("Tree", 145, 137), _target(src._target){
    std::cout << "[ShrubberyCreationForm] copy constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "[ShrubberyCreationForm] destructor called" << std::endl;
    return;
}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    std::cout << "[ShrubberyCreationForm] operator = called" << std::endl;
    this->setName(rhs.getName());
    this->setSigGrade(145);
    this->setExeGrade(137);
    this->_target = rhs._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    try {
        if (this->getSigne() == 0)
            throw NotSigendException();
        else if (this->getExeGrade() < executor.getGrade())
            throw GradeTooLowException();
        else {
            std::string files[] = {"palmer_tree.txt", "island_tree.txt", "dead_tree.txt"};
            srand (time(NULL));
            int i = rand() % (sizeof(files) / sizeof(*files));
            std::string filename = this->_target+"_shrubbery";
            std::ofstream   ofs;
            ofs.open(filename.c_str());
            printTree(ofs, files[i]);
            ofs.close();
        }
        return;
    }
    catch (GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
        return;
    }
    catch (NotSigendException & e) {
        std::cout << e.what() << std::endl;
        return;
    }
    return;
}