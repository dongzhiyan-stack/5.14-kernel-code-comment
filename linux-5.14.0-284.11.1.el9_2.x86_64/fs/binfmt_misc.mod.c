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
	{ 0x3f5c49ce, "kill_litter_super" },
	{ 0x17e2545c, "noop_llseek" },
	{ 0x9759dc12, "default_llseek" },
	{ 0x325e4499, "simple_statfs" },
	{ 0xd33cd42c, "unregister_filesystem" },
	{ 0x739218d0, "unregister_binfmt" },
	{ 0xb943c18f, "__register_binfmt" },
	{ 0xc2ce5388, "register_filesystem" },
	{ 0x1b67a85e, "remove_arg_zero" },
	{ 0xb38ab483, "dentry_open" },
	{ 0x18bd6df, "bprm_change_interp" },
	{ 0x3aedb8c8, "copy_string_kernel" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x95ca5df6, "iput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2cb2ed7b, "d_instantiate" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb7a54af9, "simple_pin_fs" },
	{ 0x5d3abf40, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x56e82e51, "new_inode" },
	{ 0x611b5a72, "open_exec" },
	{ 0xd20bf828, "lookup_one_len" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x754d539c, "strlen" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x483d2618, "simple_release_fs" },
	{ 0x36c917e9, "dput" },
	{ 0x8e92a3d0, "d_drop" },
	{ 0x81b6f3fc, "drop_nlink" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe6612f1c, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d2a4409, "clear_inode" },
	{ 0x55a02875, "simple_fill_super" },
	{ 0x26a65567, "get_tree_single" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "82A38B7372120A634FF3181");
MODULE_INFO(rhelversion, "9.2");
