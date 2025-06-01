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
	{ 0x34163751, "param_ops_charp" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x6d7e951e, "rcu_exp_batches_completed" },
	{ 0xe6e40502, "rcu_get_gp_seq" },
	{ 0xb1bb9f9, "synchronize_rcu_tasks" },
	{ 0xf6f16c56, "rcu_barrier_tasks" },
	{ 0x959ec5f5, "call_rcu_tasks" },
	{ 0x6246a629, "synchronize_rcu_tasks_trace" },
	{ 0xcfc7b4e4, "rcu_barrier_tasks_trace" },
	{ 0x52c35e83, "call_rcu_tasks_trace" },
	{ 0x5567c34d, "param_ops_int" },
	{ 0x62878f47, "param_ops_bool" },
	{ 0xb9076173, "_torture_create_kthread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe6989fd3, "torture_init_end" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6c3ff11a, "torture_init_begin" },
	{ 0xf4af35c2, "rcu_gp_is_normal" },
	{ 0xc0a96e14, "rcu_gp_is_expedited" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0xc67a49d4, "torture_cleanup_begin" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x688e6a64, "torture_cleanup_end" },
	{ 0x4eaf834f, "_torture_stop_kthread" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa5332925, "init_srcu_struct" },
	{ 0xd40eedd9, "cleanup_srcu_struct" },
	{ 0x88f39956, "__srcu_read_lock" },
	{ 0xa594a754, "__srcu_read_unlock" },
	{ 0x67ec7ea5, "srcu_batches_completed" },
	{ 0x3f083dd0, "call_srcu" },
	{ 0xaa0c960d, "srcu_barrier" },
	{ 0x7d4f9cc9, "synchronize_srcu" },
	{ 0x816ce021, "synchronize_srcu_expedited" },
	{ 0xbdc2d33b, "rcu_read_unlock_trace_special" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x52665f8b, "torture_random" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x608e51c0, "set_user_nice" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xaaa918c9, "ftrace_dump" },
	{ 0xb0747ed2, "rcu_cpu_stall_suppress" },
	{ 0x7944e0fc, "tracing_off" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x92997ed8, "_printk" },
	{ 0x9287e95, "sched_set_normal" },
	{ 0xf6d34fb5, "torture_kthread_stopping" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf7370f56, "system_state" },
	{ 0x30ca255a, "sched_set_fifo_low" },
	{ 0x37a24997, "set_cpus_allowed_ptr" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x679d9e50, "torture_must_stop" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcb6a6471, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
};

MODULE_INFO(depends, "torture");


MODULE_INFO(srcversion, "B67960B4778AA98D5EA77F3");
MODULE_INFO(rhelversion, "9.2");
