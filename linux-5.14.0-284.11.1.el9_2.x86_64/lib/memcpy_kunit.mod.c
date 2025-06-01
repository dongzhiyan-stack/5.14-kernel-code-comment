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
	{ 0xb0e602eb, "memmove" },
	{ 0x82d70044, "kunit_log_append" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0xa916b694, "strnlen" },
	{ 0xc2faf742, "kunit_do_assertion" },
	{ 0xee54a789, "kunit_binary_assert_format" },
};

MODULE_INFO(depends, "kunit");


MODULE_INFO(srcversion, "102B247DAE55AF26DA536D4");
MODULE_INFO(rhelversion, "9.2");
