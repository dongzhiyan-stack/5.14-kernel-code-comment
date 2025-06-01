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
	{ 0x34163751, "param_ops_charp" },
	{ 0xb9076173, "_torture_create_kthread" },
	{ 0x5a12a7da, "torture_stutter_init" },
	{ 0xdbc5277a, "torture_shutdown_init" },
	{ 0x8b0e1d2f, "torture_shuffle_init" },
	{ 0xc94a93e3, "torture_onoff_init" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0xe6989fd3, "torture_init_end" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6c3ff11a, "torture_init_begin" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9d304dcb, "ww_mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb4b6b857, "__percpu_down_read" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x92fdfdf2, "rcuwait_wake_up" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc67a49d4, "torture_cleanup_begin" },
	{ 0x688e6a64, "torture_cleanup_end" },
	{ 0x1be7d8be, "torture_onoff_failures" },
	{ 0x4eaf834f, "_torture_stop_kthread" },
	{ 0x9287e95, "sched_set_normal" },
	{ 0x48adeb12, "sched_set_fifo" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb36f09de, "ww_mutex_unlock" },
	{ 0x31fa5ac3, "rt_mutex_lock" },
	{ 0x777c0e71, "rt_mutex_unlock" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0xeb61864b, "__percpu_init_rwsem" },
	{ 0xdbb16eb1, "percpu_free_rwsem" },
	{ 0x8ec0f79f, "percpu_down_write" },
	{ 0xa5e1a6f6, "percpu_up_write" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x52665f8b, "torture_random" },
	{ 0xe2430307, "stutter_wait" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x608e51c0, "set_user_nice" },
	{ 0xcb6a6471, "current_task" },
	{ 0xbb8ef471, "verbose_torout_sleep" },
	{ 0xf6d34fb5, "torture_kthread_stopping" },
	{ 0x679d9e50, "torture_must_stop" },
	{ 0x4c7529bd, "torture_shutdown_absorb" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "torture");


MODULE_INFO(srcversion, "CCCF1896E8D32032B9863F9");
MODULE_INFO(rhelversion, "9.2");
