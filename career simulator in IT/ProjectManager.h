#pragma once
#include "Humanist.h"
class ProjectManager :
	public Humanist
{
public:
	ProjectManager();
	~ProjectManager();
private:
	int projectsDone;
};

