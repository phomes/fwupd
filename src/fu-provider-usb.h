/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU General Public License Version 2
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __FU_PROVIDER_USB_H
#define __FU_PROVIDER_USB_H

#include <glib-object.h>

#include "fu-device.h"
#include "fu-provider.h"

G_BEGIN_DECLS

#define FU_TYPE_PROVIDER_USB		(fu_provider_usb_get_type ())
#define FU_PROVIDER_USB(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), FU_TYPE_PROVIDER_USB, FuProviderUsb))
#define FU_IS_PROVIDER_USB(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), FU_TYPE_PROVIDER_USB))

typedef struct _FuProviderUsbPrivate	FuProviderUsbPrivate;
typedef struct _FuProviderUsb		FuProviderUsb;
typedef struct _FuProviderUsbClass	FuProviderUsbClass;

struct _FuProviderUsb
{
	FuProvider			 parent;
	FuProviderUsbPrivate		*priv;
};

struct _FuProviderUsbClass
{
	FuProviderClass			 parent_class;
};

GType		 fu_provider_usb_get_type	(void);
FuProvider	*fu_provider_usb_new		(void);

G_END_DECLS

#endif /* __FU_PROVIDER_USB_H */
