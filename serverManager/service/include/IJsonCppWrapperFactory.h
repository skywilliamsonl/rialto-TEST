/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2023 Sky UK
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
 */

#ifndef RIALTO_SERVERMANAGER_SERVICE_I_JSON_CPP_WRAPPER_FACTORY_H_
#define RIALTO_SERVERMANAGER_SERVICE_I_JSON_CPP_WRAPPER_FACTORY_H_

#include "IJsonCppWrapper.h"
#include <memory>
#include <string>

namespace rialto::servermanager::service
{
class IJsonCppWrapperFactory
{
public:
    virtual ~IJsonCppWrapperFactory() = default;
    virtual std::shared_ptr<IJsonCppWrapper> createJsonCppWrapper() const = 0;
};

} // namespace rialto::servermanager::service

#endif // RIALTO_SERVERMANAGER_SERVICE_I_JSON_CPP_WRAPPER_FACTORY_H_
