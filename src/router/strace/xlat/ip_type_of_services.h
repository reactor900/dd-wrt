/* Generated by ./xlat/gen.sh from ./xlat/ip_type_of_services.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data ip_type_of_services_xdata[] = {
#if defined(IPTOS_LOWDELAY) || (defined(HAVE_DECL_IPTOS_LOWDELAY) && HAVE_DECL_IPTOS_LOWDELAY)
  XLAT(IPTOS_LOWDELAY),
#endif
#if defined(IPTOS_THROUGHPUT) || (defined(HAVE_DECL_IPTOS_THROUGHPUT) && HAVE_DECL_IPTOS_THROUGHPUT)
  XLAT(IPTOS_THROUGHPUT),
#endif
#if defined(IPTOS_RELIABILITY) || (defined(HAVE_DECL_IPTOS_RELIABILITY) && HAVE_DECL_IPTOS_RELIABILITY)
  XLAT(IPTOS_RELIABILITY),
#endif
#if defined(IPTOS_MINCOST) || (defined(HAVE_DECL_IPTOS_MINCOST) && HAVE_DECL_IPTOS_MINCOST)
  XLAT(IPTOS_MINCOST),
#endif
};
const struct xlat ip_type_of_services[1] = { {
 .data = ip_type_of_services_xdata,
 .size = ARRAY_SIZE(ip_type_of_services_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
