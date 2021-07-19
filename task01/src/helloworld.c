/*
* helloworld.c
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void)
{
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

static void hello_exit(void)
{
  printk(KERN_DEBUG "See you later.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Proprietary");
MODULE_AUTHOR("ac7a54497a64");
MODULE_DESCRIPTION("Hello World!");