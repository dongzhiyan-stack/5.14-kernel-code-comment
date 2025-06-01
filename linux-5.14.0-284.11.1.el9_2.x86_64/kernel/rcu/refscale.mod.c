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
	{ 0x3f8182da, "param_ops_long" },
	{ 0x5567c34d, "param_ops_int" },
	{ 0x62878f47, "param_ops_bool" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb9076173, "_torture_create_kthread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe6989fd3, "torture_init_end" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6c3ff11a, "torture_init_begin" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0xc67a49d4, "torture_cleanup_begin" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa594a754, "__srcu_read_unlock" },
	{ 0x88f39956, "__srcu_read_lock" },
	{ 0x688e6a64, "torture_cleanup_end" },
	{ 0x4eaf834f, "_torture_stop_kthread" },
	{ 0xbdc2d33b, "rcu_read_unlock_trace_special" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf6d34fb5, "torture_kthread_stopping" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x608e51c0, "set_user_nice" },
	{ 0x37a24997, "set_cpus_allowed_ptr" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xcb6a6471, "current_task" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0x52c9aed, "ktime_get_real_fast_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x679d9e50, "torture_must_stop" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "torture");


MODULE_INFO(srcversion, "FC2032BAEAD77900FC00DB0");
MODULE_INFO(rhelversion, "9.2");
