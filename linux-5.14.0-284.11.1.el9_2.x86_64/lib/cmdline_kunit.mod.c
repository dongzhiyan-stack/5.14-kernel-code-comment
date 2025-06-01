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
	{ 0x3ed2810d, "__kunit_test_suites_exit" },
	{ 0xc5cd381d, "__kunit_test_suites_init" },
	{ 0x754d539c, "strlen" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb0e10781, "get_option" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc3588384, "kunit_binary_ptr_assert_format" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xc2faf742, "kunit_do_assertion" },
	{ 0xee54a789, "kunit_binary_assert_format" },
	{ 0x868acba5, "get_options" },
};

MODULE_INFO(depends, "kunit");


MODULE_INFO(srcversion, "ABD502725482B312A84083D");
MODULE_INFO(rhelversion, "9.2");
