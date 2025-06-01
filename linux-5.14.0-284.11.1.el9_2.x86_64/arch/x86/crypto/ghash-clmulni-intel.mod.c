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
	{ 0xdd53bc71, "cryptd_ahash_queued" },
	{ 0x71948073, "shash_ahash_digest" },
	{ 0xa4582db7, "crypto_stats_ahash_update" },
	{ 0x621114ac, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x39073654, "crypto_ahash_final" },
	{ 0xc50a5719, "crypto_ahash_digest" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x10f5c66c, "cryptd_shash_desc" },
	{ 0x9c739b29, "crypto_register_ahash" },
	{ 0x8944b515, "crypto_unregister_shash" },
	{ 0xc3063037, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf459f565, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x56c1e047, "cryptd_ahash_child" },
	{ 0x577e4a60, "crypto_ahash_setkey" },
	{ 0x47dcbff, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xf7f859b8, "crypto_stats_get" },
	{ 0xe692fefa, "cryptd_alloc_ahash" },
	{ 0x5b01f7f3, "cryptd_free_ahash" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "093D268C05107044754339D");
MODULE_INFO(rhelversion, "9.2");
