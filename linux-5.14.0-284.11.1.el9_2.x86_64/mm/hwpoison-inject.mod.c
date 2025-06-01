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
	{ 0xec0c4b0b, "simple_attr_release" },
	{ 0x51a369fe, "debugfs_attr_write" },
	{ 0xe131436c, "debugfs_attr_read" },
	{ 0x46f8e8c, "no_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0xc2769ea7, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0x808e7a22, "debugfs_create_u32" },
	{ 0xf38ef1b6, "debugfs_create_file" },
	{ 0xd6b69aed, "debugfs_create_dir" },
	{ 0xb6c15650, "debugfs_remove" },
	{ 0x7918d817, "memory_failure" },
	{ 0x92997ed8, "_printk" },
	{ 0xd567d975, "hwpoison_filter" },
	{ 0x3fbcaf39, "is_free_buddy_page" },
	{ 0xd6d80067, "PageHuge" },
	{ 0x9092d9f5, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa3521253, "mem_section" },
	{ 0x4649a7a8, "boot_cpu_data" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3fb5a112, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BDCD02BE63B7769BA8F6714");
MODULE_INFO(rhelversion, "9.2");
