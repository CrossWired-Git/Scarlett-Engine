/**
 * @file Vector2.hh
 * @author Anthony Jackson
 * @brief A grouping of aliased math vectors.
 * @version 1.0.0
 * @date 2023-12-10
 *
 * @copyright Copyright (c) 2023 Anthony Jackson, Scarlett Engine Team
 *
 */

/*
Copyright (c) 2023 Anthony Jackson, Scarlett Engine Team

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
  claim that you wrote the original software. If you use this software
  in a product, an acknowledgment in the product documentation would be
  appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
  misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#pragma once
#include <cstdint>
#include <psst/math/vector.hpp>

namespace Scarlett::Math {
	using namespace psst::math;

	// Basic integer types. All are fixed of course.
	//(I feel like I'm going to regret this...)

	/**
	 * @brief A 2d vector using bytes.
	 *
	 * Alias to \code psst::math::vector< std::int8_t, 2 > \endcode.
	 *
	 */
	using Vector2i8 = vector< std::int8_t, 2 >;

	/**
	 * @brief A 2d vector using shorts.
	 *
	 * Alias to \code psst::math::vector< std::int16_t, 2 > \endcode.
	 *
	 */
	using Vector2i16 = vector< std::int16_t, 2 >;

	/**
	 * @brief A 2d vector using integers. The standard Vector2.
	 *
	 * Alias to \code psst::math::vector< std::int32_t, 2 > \endcode.
	 *
	 */
	using Vector2i32 = vector< std::int32_t, 2 >;

	/**
	 * @brief A 2d vector using longs.
	 *
	 * Alias to \code psst::math::vector< std::int64_t, 2 > \endcode.
	 *
	 */
	using Vector2i64 = vector< std::int64_t, 2 >;

	// Gotta handle the unsigned ones too for some reason.

	/**
	 * @brief A 2d vector using unsigned bytes.
	 *
	 * Alias to \code psst::math::vector< std::uint8_t, 2 > \endcode.
	 *
	 */
	using Vector2u8 = vector< std::uint8_t, 2 >;

	/**
	 * @brief A 2d vector using unsigned shorts.
	 *
	 * Alias to \code psst::math::vector< std::uint16_t, 2 > \endcode.
	 *
	 */
	using Vector2u16 = vector< std::uint16_t, 2 >;

	/**
	 * @brief A 2d vector using unsigned integers. The standard UNSIGNED Vector2.
	 *
	 * Alias to \code psst::math::vector< std::uint32_t, 2 > \endcode.
	 *
	 */
	using Vector2u32 = vector< std::uint64_t, 2 >;

	/**
	 * @brief A 2d vector using unsigned longs.
	 *
	 * Alias to \code psst::math::vector< std::uint64_t, 2 > \endcode.
	 *
	 */
	using Vector2u64 = vector< std::uint64_t, 2 >;

	// Yay! Time for floating point!

	/**
	 * @brief A 2d vector using floats.
	 *
	 * Alias to \code psst::math::vector< float, 2 > \endcode.
	 *
	 */
	using Vector2f = vector< float, 2 >;

	/**
	 * @brief A 2d vector using doubles.
	 *
	 * Alias to \code psst::math::vector< double, 2 > \endcode.
	 *
	 */
	using Vector2d = vector< double, 2 >;

} // namespace Scarlett::Math
