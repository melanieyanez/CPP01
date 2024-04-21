/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:38:54 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 14:57:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void		ft_replace(std::string &buffer, std::string const &s1, std::string const &s2){
	std::size_t i(0);
	std::size_t s1_size = s1.size();
	std::size_t s2_size = s2.size();

	if (s1.empty())
		return ;
	while (i != std::string::npos){
		i = buffer.find(s1, i);
		if (i != std::string::npos){
			buffer.erase(i, s1_size);
			buffer.insert(i, s2);
			i += s2_size;
		}
	}
}

int main(int argc, char **argv)
{
	//gestion des arguments
	
	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <string to replace> <replacement string>" << std::endl;
		return 1;
	}
	std::string	FileName = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	//lecture du fichier

	std::ifstream input(FileName);
	if (!input.is_open()){
		std::cerr << "Error: could not open input file" << std::endl;
		return 1;
	}

	//stockage du contenu du fichier
	
	std::string buffer((std::istreambuf_iterator<char>(input)),
						std::istreambuf_iterator<char>());

	//fermeture du fichier

	input.close();
	
	//modification du buffer
	
	ft_replace(buffer, s1, s2);
	
	//creation du nouveau fichier
	
	std::ofstream output(FileName + ".replace");
	if (!output.is_open()){
		std::cerr << "Error: could not create output file" << std::endl;
		return 1;
	}

	//ecriture dans le nouveau fichier
	
	output << buffer;

	//fermeture du nouveau fichier
	
	output.close();
	
}