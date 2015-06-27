#ifndef UA_MEMBUF_H_
#define UA_MEMBUF_H_

#include "ua_util.h"
#include "ua_types.h"

/**
 * @ingroup membuf
 *
 * @{
 */

extern char *membuf;
extern size_t membuf_size;
extern size_t membuf_pos;

UA_StatusCode UA_Membuf_initialize(size_t bufsize);
void UA_Membuf_free(void);
void UA_Membuf_reset(void);
void * UA_balloc(size_t size);

/** @} */

#endif /* UA_MEMBUF_H_ */
