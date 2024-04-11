cmd_scripts/basic/cc-wrapper := gcc -Wp,-MMD,scripts/basic/.cc-wrapper.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o scripts/basic/cc-wrapper scripts/basic/cc-wrapper.c   

source_scripts/basic/cc-wrapper := scripts/basic/cc-wrapper.c

deps_scripts/basic/cc-wrapper := \

scripts/basic/cc-wrapper: $(deps_scripts/basic/cc-wrapper)

$(deps_scripts/basic/cc-wrapper):
