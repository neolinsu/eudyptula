# Task 01

## Task Description
This is Task 01 of the Eudyptula Challenge
------------------------------------------

Write a Linux kernel module, and stand-alone Makefile, that when loaded
prints to the kernel debug log level, "Hello World!"  Be sure to make
the module be able to be unloaded as well.

The Makefile should build the kernel module against the source for the
currently running kernel, or, use an environment variable to specify
what kernel tree to build it against.

Please show proof of this module being built, and running, in your
kernel.  What this proof is is up to you, I'm sure you can come up with
something.  Also be sure to send the kernel module you wrote, along with
the Makefile you created to build the module.

Remember to use your ID assigned to you in the Subject: line when
responding to this task, so that I can figure out who to attribute it
to.  You can just respond to the task with the answers and all should be
fine.

If you forgot, your id is "ac7a54497a64".  But of course you have not
forgotten that yet, you are better than that.

-----------

## Note from Neolinsu
1. I, myself, made up that id, for convenience, for I miss that application due of the Eudyptula Challenge.
2. Well, just a kick off.
3. [sudo] After `helloworld.ko` been built, run `insmod helloworld.ko` then `dmesg | grep Hello`. `[x.x] Hello World!` should be found. And `[x.x] See you later.` can be found after `rmmod helloworld.ko && dmesg | grep See`.