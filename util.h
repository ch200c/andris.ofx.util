#pragma once

#include "common.h"				// UTIL_API
#include "ofxsImageEffect.h"    // OFX::PixelComponentEnum, OFX::BitDepthEnum

namespace util
{
	UTIL_API constexpr int mat_type(
		OFX::PixelComponentEnum pixel_components,
		OFX::BitDepthEnum pixel_depth) noexcept;

	UTIL_API long nearest_even(
		double x) noexcept;
}