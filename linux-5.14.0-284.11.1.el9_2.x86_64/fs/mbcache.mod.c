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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1adf9cf4, "kmem_cache_destroy" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb67590b, "kmem_cache_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xa28c0ee, "kmem_cache_alloc" },
	{ 0x6701e854, "unregister_shrinker" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x363fb6b9, "kmem_cache_create" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x62413ba6, "register_shrinker" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3446D8AABFDE463FECC7C6");
MODULE_INFO(rhelversion, "9.2");
