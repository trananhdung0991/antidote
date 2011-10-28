/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_device_MARSHAL_H__
#define __dbus_glib_marshal_device_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#define g_marshal_value_peek_variant(v)  g_value_get_variant (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_variant(v)  (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* BOOLEAN:POINTER */
extern void dbus_glib_marshal_device_BOOLEAN__POINTER (GClosure     *closure,
                                                       GValue       *return_value,
                                                       guint         n_param_values,
                                                       const GValue *param_values,
                                                       gpointer      invocation_hint,
                                                       gpointer      marshal_data);
void
dbus_glib_marshal_device_BOOLEAN__POINTER (GClosure     *closure,
                                           GValue       *return_value G_GNUC_UNUSED,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint G_GNUC_UNUSED,
                                           gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__POINTER) (gpointer     data1,
                                                     gpointer     arg_1,
                                                     gpointer     data2);
  register GMarshalFunc_BOOLEAN__POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 2);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_pointer (param_values + 1),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT,POINTER,POINTER */
extern void dbus_glib_marshal_device_BOOLEAN__INT_POINTER_POINTER (GClosure     *closure,
                                                                   GValue       *return_value,
                                                                   guint         n_param_values,
                                                                   const GValue *param_values,
                                                                   gpointer      invocation_hint,
                                                                   gpointer      marshal_data);
void
dbus_glib_marshal_device_BOOLEAN__INT_POINTER_POINTER (GClosure     *closure,
                                                       GValue       *return_value G_GNUC_UNUSED,
                                                       guint         n_param_values,
                                                       const GValue *param_values,
                                                       gpointer      invocation_hint G_GNUC_UNUSED,
                                                       gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT_POINTER_POINTER) (gpointer     data1,
                                                                 gint         arg_1,
                                                                 gpointer     arg_2,
                                                                 gpointer     arg_3,
                                                                 gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT_POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:POINTER,POINTER */
extern void dbus_glib_marshal_device_BOOLEAN__POINTER_POINTER (GClosure     *closure,
                                                               GValue       *return_value,
                                                               guint         n_param_values,
                                                               const GValue *param_values,
                                                               gpointer      invocation_hint,
                                                               gpointer      marshal_data);
void
dbus_glib_marshal_device_BOOLEAN__POINTER_POINTER (GClosure     *closure,
                                                   GValue       *return_value G_GNUC_UNUSED,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                   gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__POINTER_POINTER) (gpointer     data1,
                                                             gpointer     arg_1,
                                                             gpointer     arg_2,
                                                             gpointer     data2);
  register GMarshalFunc_BOOLEAN__POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_pointer (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT,POINTER */
extern void dbus_glib_marshal_device_BOOLEAN__INT_POINTER (GClosure     *closure,
                                                           GValue       *return_value,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint,
                                                           gpointer      marshal_data);
void
dbus_glib_marshal_device_BOOLEAN__INT_POINTER (GClosure     *closure,
                                               GValue       *return_value G_GNUC_UNUSED,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint G_GNUC_UNUSED,
                                               gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT_POINTER) (gpointer     data1,
                                                         gint         arg_1,
                                                         gpointer     arg_2,
                                                         gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT,INT,POINTER,POINTER */
extern void dbus_glib_marshal_device_BOOLEAN__INT_INT_POINTER_POINTER (GClosure     *closure,
                                                                       GValue       *return_value,
                                                                       guint         n_param_values,
                                                                       const GValue *param_values,
                                                                       gpointer      invocation_hint,
                                                                       gpointer      marshal_data);
void
dbus_glib_marshal_device_BOOLEAN__INT_INT_POINTER_POINTER (GClosure     *closure,
                                                           GValue       *return_value G_GNUC_UNUSED,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint G_GNUC_UNUSED,
                                                           gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT_INT_POINTER_POINTER) (gpointer     data1,
                                                                     gint         arg_1,
                                                                     gint         arg_2,
                                                                     gpointer     arg_3,
                                                                     gpointer     arg_4,
                                                                     gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT_INT_POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT_INT_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

G_END_DECLS

#endif /* __dbus_glib_marshal_device_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_device_methods[] = {
  { (GCallback) device_connect, dbus_glib_marshal_device_BOOLEAN__POINTER, 0 },
  { (GCallback) device_disconnect, dbus_glib_marshal_device_BOOLEAN__POINTER, 37 },
  { (GCallback) device_reqmdsattr, dbus_glib_marshal_device_BOOLEAN__POINTER, 77 },
  { (GCallback) device_getconfig, dbus_glib_marshal_device_BOOLEAN__POINTER_POINTER, 130 },
  { (GCallback) device_reqactivationscanner, dbus_glib_marshal_device_BOOLEAN__INT_POINTER, 188 },
  { (GCallback) device_reqdeactivationscanner, dbus_glib_marshal_device_BOOLEAN__INT_POINTER, 253 },
  { (GCallback) device_reqmdsattr, dbus_glib_marshal_device_BOOLEAN__POINTER, 320 },
  { (GCallback) device_releaseassoc, dbus_glib_marshal_device_BOOLEAN__POINTER, 384 },
  { (GCallback) device_abortassoc, dbus_glib_marshal_device_BOOLEAN__POINTER, 432 },
  { (GCallback) device_get_pmstore, dbus_glib_marshal_device_BOOLEAN__INT_POINTER_POINTER, 478 },
  { (GCallback) device_get_segminfo, dbus_glib_marshal_device_BOOLEAN__INT_POINTER_POINTER, 552 },
  { (GCallback) device_get_segmdata, dbus_glib_marshal_device_BOOLEAN__INT_INT_POINTER_POINTER, 630 },
  { (GCallback) device_clearsegmdata, dbus_glib_marshal_device_BOOLEAN__INT_INT_POINTER_POINTER, 733 },
  { (GCallback) device_clearallsegmdata, dbus_glib_marshal_device_BOOLEAN__INT_POINTER_POINTER, 834 },
};

const DBusGObjectInfo dbus_glib_device_object_info = {  1,
  dbus_glib_device_methods,
  14,
"com.signove.health.device\0Connect\0S\0\0com.signove.health.device\0Disconnect\0S\0\0com.signove.health.device\0RequestDeviceAttributes\0S\0\0com.signove.health.device\0GetConfiguration\0S\0xml\0O\0F\0N\0s\0\0com.signove.health.device\0RequestActivationScanner\0S\0handle\0I\0i\0\0com.signove.health.device\0RequestDeactivationScanner\0S\0handle\0I\0i\0\0com.signove.health.device\0RequestMeasurementDataTransmission\0S\0\0com.signove.health.device\0ReleaseAssociation\0S\0\0com.signove.health.device\0AbortAssociation\0S\0\0com.signove.health.device\0GetPMStore\0S\0pmstore_handle\0I\0i\0result\0O\0F\0N\0i\0\0com.signove.health.device\0GetSegmentInfo\0S\0pmstore_handle\0I\0i\0result\0O\0F\0N\0i\0\0com.signove.health.device\0GetSegmentData\0S\0pmstore_handle\0I\0i\0pmsegment_instnumber\0I\0i\0result\0O\0F\0N\0i\0\0com.signove.health.device\0ClearSegment\0S\0pmstore_handle\0I\0i\0pmsegment_instnumber\0I\0i\0result\0O\0F\0N\0i\0\0com.signove.health.device\0ClearAllSegments\0S\0pmstore_handle\0I\0i\0result\0O\0F\0N\0i\0\0\0",
"\0",
"\0"
};

