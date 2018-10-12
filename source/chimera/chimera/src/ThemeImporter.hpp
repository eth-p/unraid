// ---------------------------------------------------------------------------------------------------------------------
// https://github.com/eth-p/unraid/tree/master/source/chimera | Copyright (C) 2018 Ethan P. (eth-p)
// Unraid's most powerful hybrid theme manager.
//
// Tool: chimera
// File: src/ThemeImporter.hpp
//       The libsass importer for loading theme files.
// ---------------------------------------------------------------------------------------------------------------------
#pragma once

// Includes: Application
#include "sass/SassImporter.hpp"
#include "Theme.hpp"
// ---------------------------------------------------------------------------------------------------------------------

namespace chimera {
	class ThemeImporter : public chimera::sass::SassImporter {
		protected:

			const Theme& theme;

			// ----- Override: SassImporter -----
			void Import(const std::string& path, const std::string& parent, std::vector<chimera::sass::SassImportEntry>& files) override;

		public:

			// ----- Constructors / Destructor -----

			/**
			 * Creates a new importer.
			 *
			 * @param theme The theme object.
			 */
			ThemeImporter(const Theme& theme);

			virtual ~ThemeImporter() = default;

	};
}
