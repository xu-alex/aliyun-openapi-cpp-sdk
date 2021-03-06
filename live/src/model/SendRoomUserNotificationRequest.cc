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

#include <alibabacloud/live/model/SendRoomUserNotificationRequest.h>

using AlibabaCloud::Live::Model::SendRoomUserNotificationRequest;

SendRoomUserNotificationRequest::SendRoomUserNotificationRequest() :
	RpcServiceRequest("live", "2016-11-01", "SendRoomUserNotification")
{}

SendRoomUserNotificationRequest::~SendRoomUserNotificationRequest()
{}

std::string SendRoomUserNotificationRequest::getData()const
{
	return data_;
}

void SendRoomUserNotificationRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

long SendRoomUserNotificationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SendRoomUserNotificationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SendRoomUserNotificationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SendRoomUserNotificationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SendRoomUserNotificationRequest::getToAppUid()const
{
	return toAppUid_;
}

void SendRoomUserNotificationRequest::setToAppUid(const std::string& toAppUid)
{
	toAppUid_ = toAppUid;
	setParameter("ToAppUid", toAppUid);
}

std::string SendRoomUserNotificationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SendRoomUserNotificationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SendRoomUserNotificationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SendRoomUserNotificationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SendRoomUserNotificationRequest::getCallerType()const
{
	return callerType_;
}

void SendRoomUserNotificationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SendRoomUserNotificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendRoomUserNotificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SendRoomUserNotificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void SendRoomUserNotificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SendRoomUserNotificationRequest::getRegionId()const
{
	return regionId_;
}

void SendRoomUserNotificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SendRoomUserNotificationRequest::getRequestContent()const
{
	return requestContent_;
}

void SendRoomUserNotificationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SendRoomUserNotificationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SendRoomUserNotificationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SendRoomUserNotificationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SendRoomUserNotificationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SendRoomUserNotificationRequest::getCallerUid()const
{
	return callerUid_;
}

void SendRoomUserNotificationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SendRoomUserNotificationRequest::getApp_ip()const
{
	return app_ip_;
}

void SendRoomUserNotificationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SendRoomUserNotificationRequest::getPopProduct()const
{
	return popProduct_;
}

void SendRoomUserNotificationRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SendRoomUserNotificationRequest::getProduct()const
{
	return product_;
}

void SendRoomUserNotificationRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SendRoomUserNotificationRequest::getAppUid()const
{
	return appUid_;
}

void SendRoomUserNotificationRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setParameter("AppUid", appUid);
}

std::string SendRoomUserNotificationRequest::getCallerBid()const
{
	return callerBid_;
}

void SendRoomUserNotificationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SendRoomUserNotificationRequest::getOwnerId()const
{
	return ownerId_;
}

void SendRoomUserNotificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int SendRoomUserNotificationRequest::getPriority()const
{
	return priority_;
}

void SendRoomUserNotificationRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string SendRoomUserNotificationRequest::getVersion()const
{
	return version_;
}

void SendRoomUserNotificationRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SendRoomUserNotificationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SendRoomUserNotificationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SendRoomUserNotificationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SendRoomUserNotificationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string SendRoomUserNotificationRequest::getRoomId()const
{
	return roomId_;
}

void SendRoomUserNotificationRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setParameter("RoomId", roomId);
}

bool SendRoomUserNotificationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SendRoomUserNotificationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SendRoomUserNotificationRequest::getRequestId()const
{
	return requestId_;
}

void SendRoomUserNotificationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string SendRoomUserNotificationRequest::getAppId()const
{
	return appId_;
}

void SendRoomUserNotificationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

