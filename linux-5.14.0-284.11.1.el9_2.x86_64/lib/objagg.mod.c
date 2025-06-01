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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe8aa330b, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xbbe166d8, "bpf_trace_run3" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xa851dddf, "bpf_trace_run1" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf4a34e74, "trace_event_reg" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb7c0f443, "sort" },
	{ 0x74adea50, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x878a8974, "trace_event_ignore_this_pid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4946ea12, "trace_event_buffer_commit" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x6236143a, "event_triggers_call" },
	{ 0xf66d413f, "bpf_trace_run2" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x247aa195, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf2b6b1d7, "trace_event_printf" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x67cb3a78, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xed574d5c, "bpf_trace_run4" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "50F31EB851ED6C92BE03F2F");
MODULE_INFO(rhelversion, "9.2");
