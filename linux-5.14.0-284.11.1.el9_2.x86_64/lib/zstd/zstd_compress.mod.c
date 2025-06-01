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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3af7223e, "module_layout" },
	{ 0x3f0eabd2, "xxh64_update" },
	{ 0x658ce1a8, "xxh64_reset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xe32ab4d8, "xxh64_digest" },
	{ 0xb2f35c6a, "xxh64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "002792252D1D002FE77C2C1");
MODULE_INFO(rhelversion, "9.2");
