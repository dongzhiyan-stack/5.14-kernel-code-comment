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
	{ 0x1dff809c, "kunit_alloc_and_get_resource" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x177e751a, "kunit_destroy_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9409300c, "kunit_add_named_resource" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0x53e80039, "kunit_kmalloc_array" },
	{ 0xa829fcf, "kunit_try_catch_throw" },
	{ 0xd3e33b91, "kunit_try_catch_run" },
	{ 0xc3588384, "kunit_binary_ptr_assert_format" },
	{ 0x326f711f, "kunit_add_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x72c0f9fc, "kunit_cleanup" },
	{ 0x427d33c2, "kunit_ptr_not_err_assert_format" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x82d70044, "kunit_log_append" },
	{ 0x92997ed8, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x5d240c53, "kunit_binary_str_assert_format" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x43a46998, "kunit_fail_assert_format" },
	{ 0x18935f12, "kunit_unary_assert_format" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc2faf742, "kunit_do_assertion" },
	{ 0xee54a789, "kunit_binary_assert_format" },
	{ 0xae791d04, "kunit_init_test" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
};

MODULE_INFO(depends, "kunit");


MODULE_INFO(srcversion, "B004392DCEE07E527F74764");
MODULE_INFO(rhelversion, "9.2");
