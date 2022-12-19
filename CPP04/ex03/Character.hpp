/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:20:09 by vmiseiki          #+#    #+#             */
/*   Updated: 2022/05/15 21:35:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        static const int   _size = 4;
        AMateria*   _inventory[_size];
        std::string _name;
    
    public:
        Character();
        Character(const std::string name);
        Character(const Character &src);
        virtual ~Character();

        const Character &operator=(const Character &src);

        std::string const &getName() const;

        void    use(int idx, ICharacter& target);
        void	equip(AMateria *m);
		void	unequip(int idx);
};

#endif
