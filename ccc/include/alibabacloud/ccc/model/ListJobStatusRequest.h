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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTJOBSTATUSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTJOBSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListJobStatusRequest : public RpcServiceRequest
			{

			public:
				ListJobStatusRequest();
				~ListJobStatusRequest();

				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getTimeAlignment()const;
				void setTimeAlignment(const std::string& timeAlignment);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getScenarioId()const;
				void setScenarioId(const std::string& scenarioId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string contactName_;
				std::string instanceId_;
				std::string timeAlignment_;
				std::string groupId_;
				std::string phoneNumber_;
				int pageSize_;
				long endTime_;
				long startTime_;
				std::string scenarioId_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTJOBSTATUSREQUEST_H_