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

#include <alibabacloud/rtc/model/ModifyAppRequest.h>

using AlibabaCloud::Rtc::Model::ModifyAppRequest;

ModifyAppRequest::ModifyAppRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "ModifyApp")
{}

ModifyAppRequest::~ModifyAppRequest()
{}

std::string ModifyAppRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyAppRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyAppRequest::getProduct()const
{
	return product_;
}

void ModifyAppRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long ModifyAppRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyAppRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyAppRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyAppRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyAppRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyAppRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyAppRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAppRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAppRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyAppRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyAppRequest::getVersion()const
{
	return version_;
}

void ModifyAppRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string ModifyAppRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyAppRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyAppRequest::getCallerType()const
{
	return callerType_;
}

void ModifyAppRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool ModifyAppRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyAppRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyAppRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyAppRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string ModifyAppRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAppRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ModifyAppRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyAppRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyAppRequest::getAppName()const
{
	return appName_;
}

void ModifyAppRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ModifyAppRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAppRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyAppRequest::getRequestId()const
{
	return requestId_;
}

void ModifyAppRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyAppRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyAppRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyAppRequest::getAppId()const
{
	return appId_;
}

void ModifyAppRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ModifyAppRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyAppRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyAppRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyAppRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyAppRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyAppRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

