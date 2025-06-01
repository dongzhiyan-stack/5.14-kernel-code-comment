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
	{ 0x16f56967, "param_ops_uint" },
	{ 0x5567c34d, "param_ops_int" },
	{ 0xca9a1d5e, "ring_buffer_free" },
	{ 0x608e51c0, "set_user_nice" },
	{ 0x30ca255a, "sched_set_fifo_low" },
	{ 0x48adeb12, "sched_set_fifo" },
	{ 0x11abff65, "kthread_stop" },
	{ 0x30f126ce, "kthread_create_on_node" },
	{ 0x6198dfea, "__ring_buffer_alloc" },
	{ 0x6fcef6ab, "ring_buffer_reset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5e85415b, "ring_buffer_consume" },
	{ 0xa6257a2f, "complete" },
	{ 0x1000e51, "schedule" },
	{ 0xcb6a6471, "current_task" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf180070, "ring_buffer_free_read_page" },
	{ 0x77222306, "ring_buffer_read_page" },
	{ 0xfe8cdb84, "ring_buffer_alloc_read_page" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xa4ab7c1c, "ring_buffer_overruns" },
	{ 0xea38036f, "ring_buffer_entries" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc822251d, "wake_up_process" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x93255b2b, "ring_buffer_lock_reserve" },
	{ 0x42e9d0da, "ring_buffer_unlock_commit" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1e25684, "__trace_bputs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C52159F7F7B5075ACD9CB57");
MODULE_INFO(rhelversion, "9.2");
