/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:49:43 by armendes          #+#    #+#             */
/*   Updated: 2022/05/06 18:38:46 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap{

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &T);
	~ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &T);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  std::string getName(void) const;
  int getHitPoints(void) const;
  int getEnergyPoints(void) const;
  int getAttackDamage(void) const;

  void setName(std::string name);
  void setHitPoints(int nb);
  void setEnergyPoints(int nb);
  void setAttackDamage(int nb);

};

#endif
