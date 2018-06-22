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

#include <alibabacloud/rtc/model/CreateChannelRequest.h>

using AlibabaCloud::Rtc::Model::CreateChannelRequest;

CreateChannelRequest::CreateChannelRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateChannel")
{}

CreateChannelRequest::~CreateChannelRequest()
{}

std::string CreateChannelRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateChannelRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateChannelRequest::getProduct()const
{
	return product_;
}

void CreateChannelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long CreateChannelRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateChannelRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateChannelRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateChannelRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateChannelRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateChannelRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateChannelRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateChannelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateChannelRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateChannelRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateChannelRequest::getVersion()const
{
	return version_;
}

void CreateChannelRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string CreateChannelRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateChannelRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateChannelRequest::getCallerType()const
{
	return callerType_;
}

void CreateChannelRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool CreateChannelRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateChannelRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateChannelRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateChannelRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string CreateChannelRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateChannelRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool CreateChannelRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateChannelRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateChannelRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateChannelRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateChannelRequest::getRequestId()const
{
	return requestId_;
}

void CreateChannelRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateChannelRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateChannelRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateChannelRequest::getAppId()const
{
	return appId_;
}

void CreateChannelRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string CreateChannelRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateChannelRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateChannelRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateChannelRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string CreateChannelRequest::getChannelId()const
{
	return channelId_;
}

void CreateChannelRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

long CreateChannelRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateChannelRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

