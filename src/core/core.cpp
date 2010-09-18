/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2010  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "config.h"

#include "core/core.h"

/**
 * Current running mode of ASE.
 *
 * In beta releases it starts with MODE_VERBOSE value.
 */
int ase_mode = 0;

/**
 * Returns true if the application is running in interactive mode (GUI).
 *
 * Now that the application doesn't support scripting, this always returns true.
 */
bool is_interactive()
{
  return ase_mode & MODE_GUI ? true: false;
}
