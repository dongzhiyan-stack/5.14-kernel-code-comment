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
	{ 0xc5c0444a, "textsearch_unregister" },
	{ 0x41aee8f1, "textsearch_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x11089ac7, "_ctype" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FEE00FEA7A968CAF3971F0B");
MODULE_INFO(rhelversion, "9.2");
