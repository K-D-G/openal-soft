
#include "config.h"

#include "atomic.h"


extern inline void InitRef(RefCount *ptr, uint value);
extern inline uint ReadRef(RefCount *ptr);
extern inline uint IncrementRef(RefCount *ptr);
extern inline uint DecrementRef(RefCount *ptr);

extern inline int ExchangeInt(volatile int *ptr, int newval);
extern inline void *ExchangePtr(XchgPtr *ptr, void *newval);
extern inline int CompExchangeInt(volatile int *ptr, int oldval, int newval);
extern inline void *CompExchangePtr(XchgPtr *ptr, void *oldval, void *newval);
