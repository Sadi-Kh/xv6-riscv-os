#include "types.h"
#include "riscv.h"
#include "custom_logger.h"
#include "defs.h"

void log_message(int level, const char *message) {
    switch (level) {
        case INFO:
            printf("INFO − %s\n", message);
            break;
        case WARN:
            printf("WARNING − %s\n", message);
            break;
        case ERROR:
            printf("ERROR − %s\n", message);
            break;
    }
}
