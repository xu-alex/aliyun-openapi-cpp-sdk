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

#include <alibabacloud/ecs/model/RenewDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::RenewDedicatedHostsRequest;

RenewDedicatedHostsRequest::RenewDedicatedHostsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RenewDedicatedHosts")
{}

RenewDedicatedHostsRequest::~RenewDedicatedHostsRequest()
{}

std::string RenewDedicatedHostsRequest::getDedicatedHostIds()const
{
	return dedicatedHostIds_;
}

void RenewDedicatedHostsRequest::setDedicatedHostIds(const std::string& dedicatedHostIds)
{
	dedicatedHostIds_ = dedicatedHostIds;
	setParameter("DedicatedHostIds", dedicatedHostIds);
}

long RenewDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewDedicatedHostsRequest::getClientToken()const
{
	return clientToken_;
}

void RenewDedicatedHostsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long RenewDedicatedHostsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RenewDedicatedHostsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool RenewDedicatedHostsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RenewDedicatedHostsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string RenewDedicatedHostsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RenewDedicatedHostsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RenewDedicatedHostsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RenewDedicatedHostsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RenewDedicatedHostsRequest::getCallerType()const
{
	return callerType_;
}

void RenewDedicatedHostsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string RenewDedicatedHostsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewDedicatedHostsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RenewDedicatedHostsRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenewDedicatedHostsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RenewDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void RenewDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool RenewDedicatedHostsRequest::getEnable()const
{
	return enable_;
}

void RenewDedicatedHostsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string RenewDedicatedHostsRequest::getRequestContent()const
{
	return requestContent_;
}

void RenewDedicatedHostsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string RenewDedicatedHostsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RenewDedicatedHostsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string RenewDedicatedHostsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RenewDedicatedHostsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long RenewDedicatedHostsRequest::getCallerUid()const
{
	return callerUid_;
}

void RenewDedicatedHostsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string RenewDedicatedHostsRequest::getApp_ip()const
{
	return app_ip_;
}

void RenewDedicatedHostsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

int RenewDedicatedHostsRequest::getPeriod()const
{
	return period_;
}

void RenewDedicatedHostsRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string RenewDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RenewDedicatedHostsRequest::getCallerBid()const
{
	return callerBid_;
}

void RenewDedicatedHostsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long RenewDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool RenewDedicatedHostsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RenewDedicatedHostsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool RenewDedicatedHostsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RenewDedicatedHostsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool RenewDedicatedHostsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RenewDedicatedHostsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string RenewDedicatedHostsRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RenewDedicatedHostsRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string RenewDedicatedHostsRequest::getRequestId()const
{
	return requestId_;
}

void RenewDedicatedHostsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

