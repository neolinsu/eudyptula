/*
* helloworld.c
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void)
{
  printk(KERN_DEBUG "Hello World!\n"); // "when loaded prints to the kernel debug log level", which can be checked by `dmesg`.
  return 0;
}

static void hello_exit(void) // "make the module be able to be unloaded as well."
{
  printk(KERN_DEBUG "See you later.\n"); // Sign for module_exit which can be checked by `dmesg`.
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ac7a54497a64");
MODULE_DESCRIPTION("Hello World!");