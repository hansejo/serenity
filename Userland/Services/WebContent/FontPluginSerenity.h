/*
 * Copyright (c) 2022, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Vector.h>
#include <LibWeb/Platform/FontPlugin.h>

namespace WebContent {

class FontPluginSerenity final : public Web::Platform::FontPlugin {
public:
    FontPluginSerenity();
    virtual ~FontPluginSerenity();

    virtual Gfx::Font& default_font() override;
    virtual Gfx::Font& default_fixed_width_font() override;
    virtual String generic_font_name(Web::Platform::GenericFont) override;
};

}
