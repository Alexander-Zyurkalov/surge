// #include "catch2.hpp" // do NOT include this here since we want it included by
// the includer so we can set CATCH_CONFIG_RUNNER properly

#include "SurgeSynthesizer.h"

namespace Surge {
namespace Test {
      
/*
** An approximation of the frequency of a signal using a simple zero crossing
** frequency measure (which works great for the sine patch and poorly for others
** At one day we could do this with autocorrelation instead but no need now.
*/
double frequencyForNote( std::shared_ptr<SurgeSynthesizer> surge, int note,
                         int seconds = 2, bool audioChannel = 0,
                         int midiChannel = 0 );

void copyScenedataSubset(SurgeStorage *storage, int scene, int start, int end);
void setupStorageRanges(Parameter *start, Parameter *endIncluding,
                        int &storage_id_start, int &storage_id_end);


}
}
