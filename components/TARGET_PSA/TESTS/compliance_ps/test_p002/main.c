#include "val_interfaces.h"
#include "pal_mbed_os_intf.h"
#include "lifecycle.h"


void test_entry_p002(val_api_t *val_api, psa_api_t *psa_api);

int main(void)
{
    test_start(test_entry_p002, COMPLIANCE_TEST_PS_STORAGE);
}
