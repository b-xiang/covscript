#pragma once
/*
* Covariant Script Extensions
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Copyright (C) 2018 Michael Lee(李登淳)
* Email: mikecovlee@163.com
* Github: https://github.com/mikecovlee
*/
#ifndef CS_EXTENSIONS_MINIMAL

#include <covscript/extensions/iostream.hpp>
#include <covscript/extensions/system.hpp>
#include <covscript/extensions/runtime.hpp>
#include <covscript/extensions/math.hpp>

#endif

#include <covscript/extensions/exception.hpp>
#include <covscript/extensions/char.hpp>
#include <covscript/extensions/string.hpp>
#include <covscript/extensions/list.hpp>
#include <covscript/extensions/array.hpp>
#include <covscript/extensions/pair.hpp>
#include <covscript/extensions/hash_map.hpp>

namespace cs {
	void init_extensions()
	{
#ifndef CS_EXTENSIONS_MINIMAL
		iostream_cs_ext::init();
		istream_cs_ext::init();
		ostream_cs_ext::init();
		system_cs_ext::init();
		runtime_cs_ext::init();
		math_cs_ext::init();
#endif
		except_cs_ext::init();
		char_cs_ext::init();
		string_cs_ext::init();
		list_cs_ext::init();
		array_cs_ext::init();
		pair_cs_ext::init();
		hash_map_cs_ext::init();
	}
}