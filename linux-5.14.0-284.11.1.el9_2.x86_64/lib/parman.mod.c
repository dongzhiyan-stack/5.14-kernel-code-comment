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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD0E20D3A294F9ABBFAD85C");
MODULE_INFO(rhelversion, "9.2");
