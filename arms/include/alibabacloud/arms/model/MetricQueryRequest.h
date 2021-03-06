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

#ifndef ALIBABACLOUD_ARMS_MODEL_METRICQUERYREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_METRICQUERYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT MetricQueryRequest : public RpcServiceRequest
			{
				struct Filters
				{
					std::string value;
					std::string key;
				};

			public:
				MetricQueryRequest();
				~MetricQueryRequest();

				int getIintervalInSec()const;
				void setIintervalInSec(int iintervalInSec);
				std::vector<std::string> getMeasures()const;
				void setMeasures(const std::vector<std::string>& measures);
				std::string getMetric()const;
				void setMetric(const std::string& metric);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getLimit()const;
				void setLimit(int limit);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::vector<Filters> getFilters()const;
				void setFilters(const std::vector<Filters>& filters);
				std::vector<std::string> getDimensions()const;
				void setDimensions(const std::vector<std::string>& dimensions);
				std::string getOrder()const;
				void setOrder(const std::string& order);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				int iintervalInSec_;
				std::vector<std::string> measures_;
				std::string metric_;
				std::string securityToken_;
				int limit_;
				long endTime_;
				std::string orderBy_;
				long startTime_;
				std::vector<Filters> filters_;
				std::vector<std::string> dimensions_;
				std::string order_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_METRICQUERYREQUEST_H_