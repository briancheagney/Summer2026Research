#include "OWLPackagingData.h"

FString FOWLPackagingData::Date()
{
	return FString(PREPROCESSOR_TO_STRING(OWL_CURRENT_DATE)).TrimQuotes();
}
