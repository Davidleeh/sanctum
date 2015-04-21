#if !defined(BARE_ARCH_RISCV_CPU_CONTEXT_ARCH_H_INCLUDED)
#define BARE_ARCH_RISCV_CPU_CONTEXT_ARCH_H_INCLUDED

namespace sanctum {
namespace bare {

inline size_t read_core_count() {
  // TODO: asm intrinsic
  return 0;
}
inline size_t current_core() {
  // TODO: asm intrinsic
  return 0;
}
inline void flush_tlbs() {
  // TODO: asm intrinsic
}
inline void flush_private_caches() {
  // TODO: asm intrinsic
}
inline void set_cache_index_shift(size_t cache_index_shift) {
  // TODO: asm intrinsic
}
struct enclave_exit_state_t {
  // TODO: RISC V register state
};

};  // namespace sanctum::bare
};  // namespace sanctum
#endif  // !defined(BARE_ARCH_RISCV_CPU_CONTEXT_ARCH_H_INCLUDED)