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
	{ 0xe2d5255a, "strcmp" },
	{ 0x5d240c53, "kunit_binary_str_assert_format" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc2faf742, "kunit_do_assertion" },
	{ 0xee54a789, "kunit_binary_assert_format" },
	{ 0x53e80039, "kunit_kmalloc_array" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kunit");


MODULE_INFO(srcversion, "2C8D382750237280D97A8F8");
MODULE_INFO(rhelversion, "9.2");
