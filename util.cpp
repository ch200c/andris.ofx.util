#include "pch.h"
#include "util.h"
#include <cmath>
#include "opencv2/core.hpp"


constexpr int util::mat_type(
	OFX::PixelComponentEnum pixel_components,
	OFX::BitDepthEnum pixel_depth) noexcept
{
	switch (pixel_components)
	{
		case OFX::ePixelComponentRGBA:
		{
			switch (pixel_depth)
			{
				case OFX::eBitDepthUByte:
					return CV_8UC4;

				case OFX::eBitDepthUShort:
					return CV_16UC4;

				case OFX::eBitDepthHalf:
					return CV_16FC4;

				case OFX::eBitDepthFloat:
					return CV_32FC4;

				default:
					return -1;
			}

			break;
		}

		case OFX::ePixelComponentRGB:
		{
			switch (pixel_depth)
			{
				case OFX::eBitDepthUByte:
					return CV_8UC3;

				case OFX::eBitDepthUShort:
					return CV_16UC3;

				case OFX::eBitDepthHalf:
					return CV_16FC3;

				case OFX::eBitDepthFloat:
					return CV_32FC3;

				default:
					return -1;
			}

			break;
		}

		case OFX::ePixelComponentAlpha:
		{
			switch (pixel_depth)
			{
				case OFX::eBitDepthUByte:
					return CV_8UC1;

				case OFX::eBitDepthUShort:
					return CV_16UC1;

				case OFX::eBitDepthHalf:
					return CV_16FC1;

				case OFX::eBitDepthFloat:
					return CV_32FC1;

				default:
					return -1;
			}

			break;
		}

		default:
		{
			return -1;
		}
	}
}

long util::nearest_even(double x) noexcept
{
	auto _x{ std::lround(x) };
	return _x % 2 ? _x + 1 : _x;
}
