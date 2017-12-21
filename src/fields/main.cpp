#include <stdint.h>
#include <iostream>
#include "fields.h"

using namespace std;
using namespace Fields;

int main ()
{
    cout << BeginSeqNo << endl;
    cout << FieldUtils::getFieldName (35) << endl;
}
