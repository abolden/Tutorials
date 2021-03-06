////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "App.xaml.h"

#include <NsCore/ReflectionImplement.h>


using namespace Scoreboard;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
const char* App::GetTitleOverride(UIElement*) const
{
    return "NoesisGUI - Scoreboard";
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_IMPLEMENT_REFLECTION(Scoreboard::App)
{
    NsMeta<TypeId>("Scoreboard.App");
}
