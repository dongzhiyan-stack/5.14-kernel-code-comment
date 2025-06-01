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
	{ 0x5567c34d, "param_ops_int" },
	{ 0x25333a8a, "blowfish_setkey" },
	{ 0x7e6f707, "crypto_unregister_skciphers" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x4649a7a8, "boot_cpu_data" },
	{ 0xebd51d20, "skcipher_walk_done" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf8617714, "crypto_register_skciphers" },
	{ 0xf49131ca, "skcipher_walk_virt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3df6a143, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2898537a, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "blowfish_common");


MODULE_INFO(srcversion, "AE8D171E2464FB18F1E0406");
MODULE_INFO(rhelversion, "9.2");
