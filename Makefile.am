AM_CFLAGS = -I$(top_srcdir) $(GLOBAL_CFLAGS)

bin_PROGRAMS = launchctl


launchctl_CFLAGS = $(AM_CFLAGS)
launchctl_LDFLAGS = $(AM_LDFLAGS)
launchctl_SOURCES = attach.c \
					blame.c \
					bootstrap.c \
					enable.c \
					env.c \
					error.c \
					examine.c \
					kickstart.c \
					kill.c \
					launchctl.c \
					limit.c \
					list.c \
					load.c \
					manager.c \
					missing.c \
					plist.c \
					print.c \
					reboot.c \
					remove.c \
					runstats.c \
					start_stop.c \
					userswitch.c \
					version.c \
					xpc_helper.c


all-local: launchctl
	echo "signing $<"
	ldid -Icom.apple.xpc.launchctl -S${srcdir}/launchctl.xml -Cadhoc $<