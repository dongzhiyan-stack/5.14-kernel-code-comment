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
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0xe5349cf9, "simd_unregister_skciphers" },
	{ 0xebd51d20, "skcipher_walk_done" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x5995666d, "simd_register_skciphers_compat" },
	{ 0xe4ae7508, "__twofish_enc_blk_3way" },
	{ 0xf49131ca, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1b58f606, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92a51c43, "twofish_dec_blk_cbc_3way" },
	{ 0xb4e98a46, "twofish_dec_blk_3way" },
	{ 0x1f491d36, "twofish_dec_blk" },
};

MODULE_INFO(depends, "twofish-x86_64,twofish-x86_64-3way,twofish_common");


MODULE_INFO(srcversion, "82EE1F6ACF2E7D5F672971A");
MODULE_INFO(rhelversion, "9.2");
