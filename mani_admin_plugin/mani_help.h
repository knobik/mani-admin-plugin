//
// Mani Admin Plugin
//
// Copyright � 2009-2014 Giles Millward (Mani). All rights reserved.
//
// This file is part of ManiAdminPlugin.
//
// Mani Admin Plugin is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Mani Admin Plugin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Mani Admin Plugin.  If not, see <http://www.gnu.org/licenses/>.
//


//



#ifndef MANI_HELP_H
#define MANI_HELP_H

#include "mani_player.h"

class ManiHelp
{
public:
	ManiHelp();
	~ManiHelp();

	PLUGIN_RESULT		ShowHelp(player_t *player_ptr, const char *command_name, const int help_id, const int command_type);
	PLUGIN_RESULT		ProcessMaHelp(player_t *player_ptr, const char *command_name, const int	help_id, const int	command_type);

private:

};

extern	ManiHelp *gpManiHelp;

#endif
