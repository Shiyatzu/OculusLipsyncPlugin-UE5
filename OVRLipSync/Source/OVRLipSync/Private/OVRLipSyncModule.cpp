/*******************************************************************************
 * Filename    :   OVRLipSyncModule.cpp
 * Content     :   OVRLipSync Module
 * Created     :   Aug 9th, 2018
 * Copyright   :   Copyright Facebook Technologies, LLC and its affiliates.
 *                 All rights reserved.
 *
 * Licensed under the Oculus Audio SDK License Version 3.3 (the "License");
 * you may not use the Oculus Audio SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.

 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/audio-3.3/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus Audio SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/
#include "OVRLipSyncModule.h"

#include "Modules/ModuleManager.h"
#include "OVRLipSync.h"

DEFINE_LOG_CATEGORY(LogOvrLipSync);

class FOVRLipSyncModule : public IModuleInterface
{
public:
	void ShutdownModule() override { ovrLipSync_Shutdown(); }
};

IMPLEMENT_MODULE(FOVRLipSyncModule, OVRLipSync);
