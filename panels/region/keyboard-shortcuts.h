/*
 * Copyright (C) 2010 Intel, Inc
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Authors: Thomas Wood <thomas.wood@intel.com>
 *          Rodrigo Moya <rodrigo@gnome.org>
 */

#include <gtk/gtk.h>

#include "cc-region-keyboard-item.h"

void                   keyboard_shortcuts_init         (void);

void                   keyboard_shortcuts_dispose      (void);

CcRegionKeyboardItem * keyboard_shortcuts_get_item     (const gchar          *schema,
                                                        const gchar          *key);

gboolean               keyboard_shortcuts_accel_edited (CcRegionKeyboardItem *item,
                                                        guint                 keyval,
                                                        guint                 keycode,
                                                        GdkModifierType       mask,
                                                        GtkWidget            *toplevel);
