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
	{ 0xe091c977, "list_sort" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x427d33c2, "kunit_ptr_not_err_assert_format" },
	{ 0x53e80039, "kunit_kmalloc_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc3588384, "kunit_binary_ptr_assert_format" },
	{ 0xc2faf742, "kunit_do_assertion" },
	{ 0xee54a789, "kunit_binary_assert_format" },
};

MODULE_INFO(depends, "kunit");


MODULE_INFO(srcversion, "9371FA3570118825D6466C4");
MODULE_INFO(rhelversion, "9.2");
