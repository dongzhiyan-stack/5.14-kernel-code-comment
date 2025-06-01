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
	{ 0x9759dc12, "default_llseek" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa58f562a, "cdev_add" },
	{ 0x21c74aa9, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xea14ff92, "find_vma" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x85efc7e0, "zero_pfn" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3b6bcbed, "hmm_range_fault" },
	{ 0x32fb4af7, "mmu_interval_read_begin" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f72edf1, "__mmap_lock_do_trace_released" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x541cc5c5, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x99262a87, "__mmap_lock_do_trace_start_locking" },
	{ 0x999e8297, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe00bb583, "mmput" },
	{ 0x53b954a2, "up_read" },
	{ 0xe5d25d42, "__tracepoint_mmap_lock_released" },
	{ 0x4e470f7c, "unlock_page" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x337a5d7, "make_device_exclusive_range" },
	{ 0xc004e0a0, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x668b19a1, "down_read" },
	{ 0x571f4a6c, "__tracepoint_mmap_lock_start_locking" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x88f1dbc3, "__put_devmap_managed_page_refs" },
	{ 0x33637ca1, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x29941b5a, "vm_insert_page" },
	{ 0xa0258811, "alloc_pages" },
	{ 0xc2181d59, "__folio_lock" },
	{ 0xb09250a3, "migrate_vma_finalize" },
	{ 0xe4ca9128, "migrate_vma_pages" },
	{ 0x33b84f74, "copy_page" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xd2ba2cb6, "alloc_pages_vma" },
	{ 0x8df1f8c2, "migrate_vma_setup" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x92997ed8, "_printk" },
	{ 0xe53ba671, "memremap_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x24d13dd, "request_free_mem_region" },
	{ 0x3b39c21a, "mmu_interval_notifier_insert" },
	{ 0xcb6a6471, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8b4cd20d, "kmem_cache_alloc_trace" },
	{ 0x4ce572de, "kmalloc_caches" },
	{ 0x72fd0e67, "cdev_del" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x77666f67, "memunmap_pages" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x47f90044, "__free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x745a981, "xa_erase" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xa323ac37, "mmu_interval_notifier_remove" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7499A098B069EF676AD7C31");
MODULE_INFO(rhelversion, "9.2");
