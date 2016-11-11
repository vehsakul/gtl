// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2016
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 3.0.0 (2016/06/19)

#pragma once

#include <Applications/MSW/GteMSWWindow.h>

namespace gte
{

class GTE_IMPEXP Window : public MSWWindow
{
public:
    struct GTE_IMPEXP Parameters : public MSWWindow::Parameters
    {
        Parameters();

        Parameters(std::wstring const& inTitle,
            int inXOrigin, int inYOrigin, int inXSize, int inYSize);

        UINT deviceCreationFlags;
    };

protected:
    // Abstract base class.  Only WindowSystem may create windows.
    Window(Parameters& parameters);
public:
    virtual ~Window();
};

}
