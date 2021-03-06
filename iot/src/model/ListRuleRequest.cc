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

#include <alibabacloud/iot/model/ListRuleRequest.h>

using AlibabaCloud::Iot::Model::ListRuleRequest;

ListRuleRequest::ListRuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListRule")
{}

ListRuleRequest::~ListRuleRequest()
{}

int ListRuleRequest::getPageSize()const
{
	return pageSize_;
}

void ListRuleRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListRuleRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListRuleRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

