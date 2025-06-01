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
	{ 0x20bcbe4f, "blake2s_compress" },
	{ 0x4649a7a8, "boot_cpu_data" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfb578fc5, "memset" },
	{ 0xa84f3b11, "crypto_register_shashes" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99e170e0, "crypto_unregister_shashes" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "182D98C559F3F4F82A81B89");
MODULE_INFO(rhelversion, "9.2");
