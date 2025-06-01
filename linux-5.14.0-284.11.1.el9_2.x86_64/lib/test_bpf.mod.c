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
	{ 0x49e54400, "param_array_ops" },
	{ 0xef268c4a, "param_ops_string" },
	{ 0x415b2b6f, "kfree_skb_list_reason" },
	{ 0xf7ce4ef8, "skb_segment" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xd58e70dd, "net_rand_noise" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb67a3757, "bpf_prog_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x28bbb0e9, "init_net" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc9827693, "__bpf_call_base" },
	{ 0x6ef6b54f, "ktime_get_boot_fast_ns" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x37a0cba, "kfree" },
	{ 0xf04afd29, "bpf_prog_free" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x49608959, "migrate_disable" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x51a65a13, "bpf_prog_select_runtime" },
	{ 0xa07c8f26, "bpf_prog_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x6329e89b, "bpf_prog_create" },
	{ 0xe56f849a, "skb_add_rx_frag" },
	{ 0x47f90044, "__free_pages" },
	{ 0xb048d907, "__netdev_alloc_skb" },
	{ 0xa0258811, "alloc_pages" },
	{ 0xd09827c9, "skb_put" },
	{ 0xe0272619, "kfree_skb_reason" },
	{ 0x69a0b11c, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x618911fc, "numa_node" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B96F6DB9679F6D5803C073D");
MODULE_INFO(rhelversion, "9.2");
