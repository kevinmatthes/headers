/**
 * nullptr.h : a header introducing the `nullptr'.
 *
 * See `LICENSE' for full license.
 * See `README.md' for project details.
 */

/**
 * Copyright (C) 2021 Kevin Matthes
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/******************************************************************************/

/**
 * Security settings.
 */

#pragma once
#ifndef __NULLPTR_H__
#define __NULLPTR_H__



/**
 * Macros.
 */

// The null pointer.  To use instead of `NULL'.
#ifndef nullptr
#define nullptr (void *) 0x0
#endif  // ! nullptr



/**
 * End of header.
 */

// Leaving the header.
#endif  // ! __NULLPTR_H__
