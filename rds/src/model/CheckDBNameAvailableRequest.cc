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

#include <alibabacloud/rds/model/CheckDBNameAvailableRequest.h>

using AlibabaCloud::Rds::Model::CheckDBNameAvailableRequest;

CheckDBNameAvailableRequest::CheckDBNameAvailableRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CheckDBNameAvailable")
{}

CheckDBNameAvailableRequest::~CheckDBNameAvailableRequest()
{}

long CheckDBNameAvailableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckDBNameAvailableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckDBNameAvailableRequest::getDBName()const
{
	return dBName_;
}

void CheckDBNameAvailableRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CheckDBNameAvailableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckDBNameAvailableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckDBNameAvailableRequest::getClientToken()const
{
	return clientToken_;
}

void CheckDBNameAvailableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CheckDBNameAvailableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckDBNameAvailableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CheckDBNameAvailableRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CheckDBNameAvailableRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CheckDBNameAvailableRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckDBNameAvailableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckDBNameAvailableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckDBNameAvailableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

