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

#include <alibabacloud/rtc/model/DeleteConferenceRequest.h>

using AlibabaCloud::Rtc::Model::DeleteConferenceRequest;

DeleteConferenceRequest::DeleteConferenceRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DeleteConference")
{}

DeleteConferenceRequest::~DeleteConferenceRequest()
{}

std::string DeleteConferenceRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteConferenceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteConferenceRequest::getProduct()const
{
	return product_;
}

void DeleteConferenceRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DeleteConferenceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteConferenceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteConferenceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteConferenceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteConferenceRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteConferenceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteConferenceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteConferenceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteConferenceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteConferenceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteConferenceRequest::getVersion()const
{
	return version_;
}

void DeleteConferenceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DeleteConferenceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteConferenceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteConferenceRequest::getCallerType()const
{
	return callerType_;
}

void DeleteConferenceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DeleteConferenceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteConferenceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteConferenceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteConferenceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DeleteConferenceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteConferenceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteConferenceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteConferenceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteConferenceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteConferenceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteConferenceRequest::getConferenceId()const
{
	return conferenceId_;
}

void DeleteConferenceRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string DeleteConferenceRequest::getRequestId()const
{
	return requestId_;
}

void DeleteConferenceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteConferenceRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteConferenceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteConferenceRequest::getAppId()const
{
	return appId_;
}

void DeleteConferenceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeleteConferenceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteConferenceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteConferenceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteConferenceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteConferenceRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteConferenceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

