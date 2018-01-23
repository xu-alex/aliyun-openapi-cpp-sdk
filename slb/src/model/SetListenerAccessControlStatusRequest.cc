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

#include <alibabacloud/slb/model/SetListenerAccessControlStatusRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetListenerAccessControlStatusRequest::SetListenerAccessControlStatusRequest() :
	SlbRequest("SetListenerAccessControlStatus")
{}

SetListenerAccessControlStatusRequest::~SetListenerAccessControlStatusRequest()
{}

std::string SetListenerAccessControlStatusRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetListenerAccessControlStatusRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetListenerAccessControlStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetListenerAccessControlStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SetListenerAccessControlStatusRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetListenerAccessControlStatusRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string SetListenerAccessControlStatusRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetListenerAccessControlStatusRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetListenerAccessControlStatusRequest::getRegionId()const
{
	return regionId_;
}

void SetListenerAccessControlStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetListenerAccessControlStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetListenerAccessControlStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetListenerAccessControlStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetListenerAccessControlStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SetListenerAccessControlStatusRequest::getAccessControlStatus()const
{
	return accessControlStatus_;
}

void SetListenerAccessControlStatusRequest::setAccessControlStatus(const std::string& accessControlStatus)
{
	accessControlStatus_ = accessControlStatus;
	setParameter("AccessControlStatus", accessControlStatus);
}

long SetListenerAccessControlStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void SetListenerAccessControlStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetListenerAccessControlStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetListenerAccessControlStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetListenerAccessControlStatusRequest::getTags()const
{
	return tags_;
}

void SetListenerAccessControlStatusRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}
