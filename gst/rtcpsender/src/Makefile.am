# Note: plugindir is set in configure

##############################################################################
# TODO: change libgstplugin.la to something else, e.g. libmysomething.la     #
##############################################################################
plugin_LTLIBRARIES = libgstrtcpsender.la

##############################################################################
# TODO: for the next set of variables, name the prefix if you named the .la, #
#  e.g. libmysomething.la => libmysomething_la_SOURCES                       #
#                            libmysomething_la_CFLAGS                        #
#                            libmysomething_la_LIBADD                        #
#                            libmysomething_la_LDFLAGS                       #
##############################################################################

# sources used to compile this plug-in
libgstrtcpsender_la_SOURCES = gstrtcpsender.c gstrtcpsender.h

# compiler and linker flags used to compile this plugin, set in configure.ac
libgstrtcpsender_la_CFLAGS = $(GST_CFLAGS)
libgstrtcpsender_la_LIBADD = $(GST_LIBS)
libgstrtcpsender_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)
libgstrtcpsender_la_LIBTOOLFLAGS = --tag=disable-static

# headers we need but don't want installed
noinst_HEADERS = gstrtcpsender.h
