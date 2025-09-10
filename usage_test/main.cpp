#include <conc/atomic.hpp>
#include <conc/concurrency.hpp>

#if __STDC_HOSTED__ == 0
extern "C" {
#endif

auto main() -> int { return 0; }

#if __STDC_HOSTED__ == 0
}
#endif
