#include "val_interfaces.h"
#include "pal_mbed_os_intf.h"

void test_entry_p009(val_api_t *val_api, psa_api_t *psa_api);

int main(void)
{
    test_start(test_entry_p009, COMPLIANCE_TEST_PS_STORAGE);
}
