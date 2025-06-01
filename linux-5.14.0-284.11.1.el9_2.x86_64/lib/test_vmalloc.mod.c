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
	{ 0x62878f47, "param_ops_bool" },
	{ 0x5567c34d, "param_ops_int" },
	{ 0xa6257a2f, "complete" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x668b19a1, "down_read" },
	{ 0x92997ed8, "_printk" },
	{ 0x11abff65, "kthread_stop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xce807a25, "up_write" },
	{ 0xc822251d, "wake_up_process" },
	{ 0x30f126ce, "kthread_create_on_node" },
	{ 0x57bc19d2, "down_write" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x71d12995, "__vmalloc_node" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x999e8297, "vfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xd6ee688f, "vmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00FDC9FA6CAD2FF189F0874");
MODULE_INFO(rhelversion, "9.2");
