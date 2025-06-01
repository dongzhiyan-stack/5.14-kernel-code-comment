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
	{ 0xc426c51f, "klp_shadow_free_all" },
	{ 0x3b95f543, "klp_shadow_free" },
	{ 0xe79bf0c4, "klp_shadow_get" },
	{ 0x8539f0, "klp_shadow_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb6888188, "klp_shadow_get_or_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A56C51946DCB80C4AE6B45");
MODULE_INFO(rhelversion, "9.2");
