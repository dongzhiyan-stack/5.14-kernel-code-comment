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
	{ 0x12627f15, "curve25519_generic" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3c74a43e, "curve25519_base_arch" },
	{ 0xc832c670, "curve25519_arch" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4a5a8811, "curve25519_null_point" },
};

MODULE_INFO(depends, "libcurve25519-generic,curve25519-x86_64");


MODULE_INFO(srcversion, "1BBE13A95CE3C4AC4D60359");
MODULE_INFO(rhelversion, "9.2");
