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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1b58f606, "twofish_setkey" },
	{ 0x3df6a143, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2898537a, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "twofish_common");


MODULE_INFO(srcversion, "CB6AD4940C960B9481FBBAE");
MODULE_INFO(rhelversion, "9.2");
