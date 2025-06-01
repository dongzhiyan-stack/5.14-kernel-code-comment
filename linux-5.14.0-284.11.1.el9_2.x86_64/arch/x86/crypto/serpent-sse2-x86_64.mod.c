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
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0xe5349cf9, "simd_unregister_skciphers" },
	{ 0xebd51d20, "skcipher_walk_done" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0x5995666d, "simd_register_skciphers_compat" },
	{ 0xf49131ca, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
};

MODULE_INFO(depends, "serpent_generic");


MODULE_INFO(srcversion, "84A9A1FF926FE4CD80CD979");
MODULE_INFO(rhelversion, "9.2");
