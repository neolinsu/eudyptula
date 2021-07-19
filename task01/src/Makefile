obj-m += helloworld.o
KDIR := /lib/modules/$(shell uname -r)/build # build the kernel module against the source for the currently running kernel,

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean