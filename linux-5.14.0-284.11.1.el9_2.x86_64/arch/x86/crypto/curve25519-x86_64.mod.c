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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x12627f15, "curve25519_generic" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0x4649a7a8, "boot_cpu_data" },
	{ 0x4743b863, "crypto_register_kpp" },
	{ 0x7e6fdbfc, "curve25519_base_point" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4a5a8811, "curve25519_null_point" },
	{ 0x9137d860, "crypto_unregister_kpp" },
};

MODULE_INFO(depends, "libcurve25519-generic");


MODULE_INFO(srcversion, "7ACAA65085FA1ECB2A57149");
MODULE_INFO(rhelversion, "9.2");
