#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3af7223e, "module_layout" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6b69aed, "debugfs_create_dir" },
	{ 0x33267c2e, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xdf0256ec, "single_release" },
	{ 0xf5f7945b, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf38ef1b6, "debugfs_create_file" },
	{ 0xa35a9cc0, "seq_read" },
	{ 0x30f126ce, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcb6a6471, "current_task" },
	{ 0x11abff65, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a921311, "strncmp" },
	{ 0xb6c15650, "debugfs_remove" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc822251d, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x42cd7ed2, "seq_lseek" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "64E9E3540D334A4314817CD");
MODULE_INFO(rhelversion, "9.2");
