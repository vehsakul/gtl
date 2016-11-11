// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2016
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 3.0.0 (2016/06/19)

#pragma once

#include <Applications/MSW/GteMSWWindowSystem.h>
#include <Applications/MSW/GteMSWWindow.h>

namespace gte
{

class GTE_IMPEXP WindowSystem : public MSWWindowSystem
{
public:
    virtual ~WindowSystem();
    WindowSystem();

private:
    virtual void CreateEngineAndProgramFactory(MSWWindow::Parameters& parameters) override;
};

extern GTE_IMPEXP WindowSystem TheWindowSystem;

}
