#include <iostream>
#include <arrow/api.h>

namespace xlnt {
namespace arrow {

void xlsx2arrow(std::istream &s, ::arrow::Table &table);
void arrow2xlsx(const ::arrow::Table &table, std::istream &s);

}
}