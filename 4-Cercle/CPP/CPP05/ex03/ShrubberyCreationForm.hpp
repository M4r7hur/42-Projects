/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:22 by armendes          #+#    #+#             */
/*   Updated: 2022/05/12 19:57:26 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <iostream>
# include <string>

class ShrubberyCreationForm : public Form{

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &T);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &T);

  void action(Bureaucrat const & executor) const;

};

# define ASCII_TREES "\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#5J?JYG@@@&BB@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@&PYJJJJ5P7!YB&&B?JG??JY7&@#5?J5@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@P~JG#&&#B5Y@@@@@@@~7B@@@Y~?75#&J7BYJ??J#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@#:G@@@@@@@@@@@@@@@@&@@@@@#!P@@@@#~JG#&@P^@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@&BB7~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&:??7?J#@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@P77J5PG@@@@@@@@@@@@@@@@@BPPB@@@@@@@@@@@@@@@@@5P#&@7J@&#B&@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@P^B@@@@@@@@@@@@@@@@P?JY5!?PG:7JJY&@@@@@@@@@@@@@@@@@!~??JY7G@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@#G!?@@@@@@@@@@@@@@@@#:B@B~P@@G!P&B.B@@@@@@@@@@@@@@@@@GG#@@@?7@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@&PJ?J5G#@@@@@@@@@@@@@@@@&!5&@@@@@@@@&!Y@@@@@@@@@@@@@@@@@@@@@@@@^!5JJP@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@B?7YB@@@@@@@@@@@@@@@@@@@@@@?~5B@@@@@@@&#@@@@@@@@@@@@@@@@@@@@@@@@&JYG##!Y@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@G^G@@@@@@@@@@@@@@@@@@@@@@@@&^B@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~?#GG&@@@@@@@@@@@@\n\
@@@@@@@@@@@?7@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#~7JY57Y@@@@@@@@@@@\n\
@@@@@@@@GJ?JY@@@@@@@@@@@@@@&J7J?PGJJYB@@@@@@@@@@@@@@@@@@@@@@@&GPB@@@@&&@@@@@@@@@@@@@@@@B:&@@@@@@@@@@\n\
@@@@@@@J7B@@@@@@@@@@@@@&G##^?#@J ?G#G.P@@@@@@@@@@@@@@@@@@@@@J~JPJ!GJ77??Y@@@@@@@@@@@@@@G.PPPG#@@@@@@\n\
@@@@@@P7@@@@@@@@@@@@@@B^JY~^@@@&G@@@#J&@@@@@@@@@@@@@@@@@@@@?~&@@@7:5&@@Y.PPP#@@@@@@@@@@&GPPP5J7#@@@@\n\
@@@@@@??@@@@@@@@@@@&5Y7.&@&#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@^J@@@@@&@@@B^?5PP7J@@@@@@@@@@@@@@@@Y~@@@@\n\
@@@@#7?G&@@@@@@@@@@?^##G#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5!7!P@@@@@@@@&&@@@#~~#@@@@@@@@@@@@@@@G:B@@@\n\
@@@@~G@@@@@@@@@@@@@B~P@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~J@&&@@@@@@@@@@@@BJ5G~Y@@@@@@@@@@@@@@@BY?5@\n\
@@&5~@@@@@@@@@@@@@@P~!G@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&P&@@@@@@@@@@@@@@@@#Y~B@@@@@@@@@@@@@@@@@Y.#\n\
@575B@@@@@@@@@@@@@&:P@@@@@@@@@@@@@@@@@@@@@#GPG&@@&&@@@@@@@@@@@@@@@@@@@@@@@@&Y5&@@@@@@@@@@@@@@@@Y~?G@\n\
B~&@@@@@@@@@@@@@@@@7J&@@@@@@@@@@@@@@@&GG#?!Y55~?7??7#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G^#@@\n\
#7B@@@@@@@@@@@@@@@@@G5#@@@@@@@@@@@@@P~J5?.B@@@77#@@:~?J@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@^5@@\n\
@&P5!P@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P^&@@#&@@@@@@@@B#@7?@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5:#@@\n\
@@@&:#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G?Y5P#@@@@@@@@@@@YJ@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#~77B@@@\n\
@@@@?YBGB@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G.YG&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Y:&@@@@@\n\
@@@@@BG!?@@@@@@&#@@@@@@@@@@@@@@@@@@@@@#5P#@@@@@@@@@@@@@@@@@@@@@@@B@@@@@@@@@@@@5Y&@@@GP#&&&B?~B@@@@@@\n\
@@@@@@@B~B@@&B5^7@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&JJ@@@@@@@B!~7B@@B!JP#&&P:J!JGY:YYJJ??P@@@@@@@@\n\
@@@@@@@@#555Y5BJ7@@G!B@@@@@@#J&@@@#~Y@@@@@P!5@@@@@@&5!JJ?PB@@#J~P@BY!77Y~J5J:7BP~PP5#@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@YYY777@@@@&P!77G#P^YJJG#5!7~:Y5PP5J^^&@@7~YJ~?Y&@@@5^#&!P@@?7@5~#@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@&@@5J5YJ~!#@&G5J!P#BP5Y^G@~P&~?B#!Y&57Y@@7Y@@&#BJ~#&^!5JJ5&5^#@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@&#&#5?Y#@@@&PYYY5G5:BB^5!@@#.!75&@B^~5YYY555&@BJPBBPJ?J#@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@&G??P#@@@@@#BP?P@P7B@@B7G@@@@GP#&@@@@@@@#GYJ??YB@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B5JJJY5PB#@@@@@@@@@@@@@@@@&@@@@@&BPJ77JGB&@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#BG5YJJ5B@GY@@@@@@@@5Y&@&5?!?YG#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&B7Y@7Y@#@@@@Y7@@5~?G&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B:&#^@5?@@#^&@?:B@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~Y@!B&~&@57@@:J@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Y!@J5@!B@J5@B G@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G:@GJ@!B@?5@5.&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#:##?@!#@JJ@7~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&:G&G@!&@P?@^?@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&:G@@&!@@B7@^J@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&.G@@&7@@#!@^?@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.B@@#7@@&!@!!@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&.G@@#?@@@!#J^@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@^J@@#Y@@@7GG.&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@7!@@@@@@@JY@:P@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J:@@@@@@@P?@!!@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5.&@#5@@@#7@Y #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5.&@G7@@@@?&@^7@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J:@@G?@@@@&@@#^J@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&:J@@5Y@@@@@@@@&!!#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P~!&@@P#@@@@@@@@@@5~J&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B!~G@@@@@@@@@@@@@@@@@&J~P@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#7~5@@B7#@@@&@@G5&@@Y!B@@#!?&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&J~Y@&P!.Y@BY^J@P^JJY5:JJ?5B&7!@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5~7GP??Y.J5?JB!7Y~#@@#P5@@&GYY?7@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#~ !?J5#@P.?P&@@&J?&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Y!5B&@@@@&#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
"

#endif
