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
	{ 0xe7da4d6d, "events_sysfs_show" },
	{ 0x9222e590, "perf_pmu_unregister" },
	{ 0xc85bd1a6, "__cpuhp_remove_state" },
	{ 0x7a9be0a9, "perf_pmu_register" },
	{ 0xfc4242e2, "__cpuhp_setup_state" },
	{ 0x92997ed8, "_printk" },
	{ 0x4649a7a8, "boot_cpu_data" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0xb4479039, "__tracepoint_read_msr" },
	{ 0x4d820a7c, "perf_pmu_migrate_context" },
	{ 0x68c4b824, "cpumask_any_but" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF71AF5F11A4F39C90EE120");
MODULE_INFO(rhelversion, "9.2");
