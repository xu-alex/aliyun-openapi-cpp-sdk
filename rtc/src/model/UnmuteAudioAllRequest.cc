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

#include <alibabacloud/rtc/model/UnmuteAudioAllRequest.h>

using AlibabaCloud::Rtc::Model::UnmuteAudioAllRequest;

UnmuteAudioAllRequest::UnmuteAudioAllRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "UnmuteAudioAll")
{}

UnmuteAudioAllRequest::~UnmuteAudioAllRequest()
{}

std::string UnmuteAudioAllRequest::getApp_ip()const
{
	return app_ip_;
}

void UnmuteAudioAllRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string UnmuteAudioAllRequest::getProduct()const
{
	return product_;
}

void UnmuteAudioAllRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long UnmuteAudioAllRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnmuteAudioAllRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnmuteAudioAllRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnmuteAudioAllRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string UnmuteAudioAllRequest::getCallerBid()const
{
	return callerBid_;
}

void UnmuteAudioAllRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long UnmuteAudioAllRequest::getOwnerId()const
{
	return ownerId_;
}

void UnmuteAudioAllRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnmuteAudioAllRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnmuteAudioAllRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnmuteAudioAllRequest::getVersion()const
{
	return version_;
}

void UnmuteAudioAllRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string UnmuteAudioAllRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnmuteAudioAllRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnmuteAudioAllRequest::getCallerType()const
{
	return callerType_;
}

void UnmuteAudioAllRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool UnmuteAudioAllRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnmuteAudioAllRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool UnmuteAudioAllRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnmuteAudioAllRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string UnmuteAudioAllRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnmuteAudioAllRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool UnmuteAudioAllRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnmuteAudioAllRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string UnmuteAudioAllRequest::getParticipantId()const
{
	return participantId_;
}

void UnmuteAudioAllRequest::setParticipantId(const std::string& participantId)
{
	participantId_ = participantId;
	setParameter("ParticipantId", participantId);
}

std::string UnmuteAudioAllRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnmuteAudioAllRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UnmuteAudioAllRequest::getConferenceId()const
{
	return conferenceId_;
}

void UnmuteAudioAllRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string UnmuteAudioAllRequest::getRequestId()const
{
	return requestId_;
}

void UnmuteAudioAllRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string UnmuteAudioAllRequest::getRequestContent()const
{
	return requestContent_;
}

void UnmuteAudioAllRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string UnmuteAudioAllRequest::getAppId()const
{
	return appId_;
}

void UnmuteAudioAllRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UnmuteAudioAllRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnmuteAudioAllRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string UnmuteAudioAllRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnmuteAudioAllRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long UnmuteAudioAllRequest::getCallerUid()const
{
	return callerUid_;
}

void UnmuteAudioAllRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

