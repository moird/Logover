/* This file is part of Logover
 * Copyright (C) 2010  Daniel Myers dan<at>moird.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Lesser GNU General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef LOGOVER_LOGOVER_H_
#define LOGOVER_LOGOVER_H_
#include <iostream>
#include "EventInt.h"
namespace Logover {
	
#ifndef PROGRAM_NAME
#define PROGRAM_NAME "Logover"
#endif
	
	class ConsoleLog{
	public:
		ConsoleLog(std::string);
		virtual ~ConsoleLog();
	};
	
}


#endif /* LOGOVER_H_ */
