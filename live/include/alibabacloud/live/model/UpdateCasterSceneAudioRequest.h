/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATECASTERSCENEAUDIOREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATECASTERSCENEAUDIOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT UpdateCasterSceneAudioRequest : public RpcServiceRequest
			{
				struct AudioLayer
				{
					int fixedDelayDuration;
					float volumeRate;
					std::string validChannel;
				};

			public:
				UpdateCasterSceneAudioRequest();
				~UpdateCasterSceneAudioRequest();

				std::vector<AudioLayer> getAudioLayer()const;
				void setAudioLayer(const std::vector<AudioLayer>& audioLayer);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				std::string getSceneId()const;
				void setSceneId(const std::string& sceneId);
				std::vector<std::string> getMixList()const;
				void setMixList(const std::vector<std::string>& mixList);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getFollowEnable()const;
				void setFollowEnable(int followEnable);

            private:
				std::vector<AudioLayer> audioLayer_;
				std::string regionId_;
				std::string casterId_;
				std::string sceneId_;
				std::vector<std::string> mixList_;
				long ownerId_;
				int followEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATECASTERSCENEAUDIOREQUEST_H_