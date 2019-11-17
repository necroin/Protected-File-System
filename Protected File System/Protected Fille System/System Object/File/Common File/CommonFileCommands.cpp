#include "CommonFile.h"
#include "../../Catalog/Catalog.h"

bool CommonFile::DeleteCommand::execute(SystemObject*& catalog, SystemObject*& object)
{
	static_cast<Catalog*>(catalog)->erase(object);
	return true;
}