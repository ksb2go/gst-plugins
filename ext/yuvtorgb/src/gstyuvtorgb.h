/*
 * GStreamer
 * Copyright (C) 2006 Stefan Kost <ensonic@users.sf.net>
 * Copyright (C) 2013  <<user@hostname.org>>
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
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GST_YUVTORGB_H__
#define __GST_YUVTORGB_H__

#include <gst/gst.h>
#include <gst/video/video.h>
#include <gst/video/gstvideofilter.h>

G_BEGIN_DECLS

#define GST_TYPE_YUVTORGB \
  (gst_yuv_to_rgb_get_type())
#define GST_YUVTORGB(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_YUVTORGB,GstYuvToRgb))
#define GST_YUVTORGB_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_YUVTORGB,GstYuvToRgbClass))
#define GST_IS_YUVTORGB(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_YUVTORGB))
#define GST_IS_YUVTORGB_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_YUVTORGB))
#define GST_YUVTORGB_CAST(obj) \
  ((GstYuvToRgb *)(obj))


typedef struct _GstYuvToRgb      GstYuvToRgb;
typedef struct _GstYuvToRgbClass GstYuvToRgbClass;

struct _GstYuvToRgb {
  GstVideoFilter element;
};

struct _GstYuvToRgbClass {
  GstVideoFilterClass parent_class;
};

// GType gst_yuv_to_rgb_get_type (void);

G_END_DECLS

#endif /* __GST_YUVTORGB_H__ */
