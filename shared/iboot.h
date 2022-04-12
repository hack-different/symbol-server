#include <stdint.h>

uint64_t arm_read_sctlr();
void arm_write_sctlr(uint64_t sctlr);
void arm_write_scr(uint64_t scr);
uint64_t arm_read_l2_cramconfig();
void arm_write_mair(uint64_t mair);
void arm_write_tcr(uint64_t tcr)
void arm_write_ttbr0(uint64_t ttbr0);
uint64_t arm_read_cpacr();
void arm_write_cpacr(uint64_t cpacr);
uint64_t arm_read_cntp_ctl()
void arm_write_cntp_ctl(uint64_t cntp_ctl);
uint64_t arm_read_cntpct();
void arm_write_cntp_tval(uint64_t cntp_tval);
void arm_flush_tlbs();
void arm_invalidate_icache();
void arm_invalidate_dcache_line() {}
void arm_clean_dcache_line() {}
void arm_clean_invalidate_dcache() {}
void arm_clean_dcache() {}
void arm_invalidate_dcache() {}
void arm_clean_invalidate_dcache_line(void* address);
void arm_drain_write_buffer() {}
void arm_memory_barrier();
arm_vtop
void arm_disable_async_aborts();
void arm_enable_async_aborts();
void arch_disable_ints();
void arch_enable_ints();
void arch_halt();
void arch_spin();
void arch_task_context_switch();
void arch_task_context_restore();
void start();

void arch_task_trampoline();
void arch_task_trampoline();
int arch_task_create(struct task *task_obj);

static uint64_t *tt_top_level;

void mmu_printf(int verbosity, const char *format, ...);
unsigned get_page_granule_shift();
void get_table_entry_hook(unsigned level, addr_t table_base, size_t index);
void assert_valid_level(unsigned level);
bool level_permits_blocks(unsigned level);
uint64_t get_table_entry(unsigned level, addr_t table_base, size_t index);
void set_table_entry(unsigned level, addr_t table_base, size_t index, uint64_t value);
unsigned get_start_level();
unsigned get_virt_address_bits();


typedef struct {
    void* text_base;
    void* text_end;
    size_t text_size;
    void* data_ro_start;
    void* data_base;
    void* data_end;
    void* bss_start;
    void* bss_end;
    void* stacks_base;
    size_t stacks_size;
    void* page_tables_base;
    size_t page_tables_size;
#ifdef HEAP_GUARD
    void* heap_guard;
#endif
#ifdef BOOT_TRAMPOLINE_BASE
    void* boot_handoff_trampoline
    void* boot_handoff_trampoline_end
    void* boot_trampoline_base;
#endif
} iboot_aarch64_rom_t;