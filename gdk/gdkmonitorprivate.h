/*
 * gdkmonitorprivate.h
 *
 * Copyright 2016 Red Hat, Inc.
 *
 * Matthias Clasen <mclasen@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GDK_MONITOR_PRIVATE_H__
#define __GDK_MONITOR_PRIVATE_H__

#include "gdkmonitor.h"

struct _GdkMonitor {
  GObject parent;

  GdkDisplay *display;
  GdkRectangle geometry;
  int width;
  int height;
  char *manufacturer;
  char *model;
  int scale;
};

struct _GdkMonitorClass {
  GObjectClass parent_class;
};

G_BEGIN_DECLS

GdkMonitor *	gdk_monitor_new 		(GdkDisplay *display);

void            gdk_monitor_set_manufacturer    (GdkMonitor *monitor,
                                                 const char *manufacturer);
void            gdk_monitor_set_model           (GdkMonitor *monitor,
                                                 const char *model);
void 		gdk_monitor_set_geometry 	(GdkMonitor *monitor,
                         			 int         x,
                         			 int         y,
                         			 int         width,
                         			 int         height);
void 		gdk_monitor_set_size 		(GdkMonitor *monitor,
                     				 int         width_mm,
                     				 int         height_mm);
void 		gdk_monitor_set_scale 		(GdkMonitor *monitor,
                       				 int         scale);

G_END_DECLS

#endif  /* __GDK_MONITOR_PRIVATE_H__ */