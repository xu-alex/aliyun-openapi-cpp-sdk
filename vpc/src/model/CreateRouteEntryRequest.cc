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

#include <alibabacloud/vpc/model/CreateRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouteEntryRequest;

CreateRouteEntryRequest::CreateRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateRouteEntry")
{}

CreateRouteEntryRequest::~CreateRouteEntryRequest()
{}

long CreateRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void CreateRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateRouteEntryRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRouteEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateRouteEntryRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void CreateRouteEntryRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string CreateRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateRouteEntryRequest::getNextHopId()const
{
	return nextHopId_;
}

void CreateRouteEntryRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setParameter("NextHopId", nextHopId);
}

long CreateRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRouteEntryRequest::getNextHopType()const
{
	return nextHopType_;
}

void CreateRouteEntryRequest::setNextHopType(const std::string& nextHopType)
{
	nextHopType_ = nextHopType;
	setParameter("NextHopType", nextHopType);
}

std::vector<CreateRouteEntryRequest::NextHopList> CreateRouteEntryRequest::getNextHopList()const
{
	return nextHopList_;
}

void CreateRouteEntryRequest::setNextHopList(const std::vector<NextHopList>& nextHopList)
{
	nextHopList_ = nextHopList;
	int i = 0;
	for(int i = 0; i!= nextHopList.size(); i++)	{
		auto obj = nextHopList.at(i);
		std::string str ="NextHopList."+ std::to_string(i);
		setParameter(str + ".NextHopType", obj.nextHopType);
		setParameter(str + ".NextHopId", obj.nextHopId);
		setParameter(str + ".Weight", std::to_string(obj.weight));
	}
}

std::string CreateRouteEntryRequest::getRouteTableId()const
{
	return routeTableId_;
}

void CreateRouteEntryRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

