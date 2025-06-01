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
	{ 0xadd09ab9, "crypto_nhpoly1305_init" },
	{ 0x2bbf124f, "crypto_nhpoly1305_setkey" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8944b515, "crypto_unregister_shash" },
	{ 0xc3063037, "crypto_register_shash" },
	{ 0xbdbe2290, "crypto_nhpoly1305_update" },
	{ 0xd6ead3ca, "crypto_nhpoly1305_update_helper" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6cc8bd66, "crypto_nhpoly1305_final" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "B22E40A92580268BAC3C8DB");
MODULE_INFO(rhelversion, "9.2");
