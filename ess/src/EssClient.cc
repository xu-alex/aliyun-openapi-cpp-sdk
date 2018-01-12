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

#include <alibabacloud/ess/EssClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

EssClient::EssClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ess");
}

EssClient::EssClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ess");
}

EssClient::EssClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ess");
}

EssClient::~EssClient()
{}

CoreClient::EndpointOutcome EssClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

EssClient::AttachInstancesOutcome EssClient::attachInstances(const AttachInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AttachInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachInstancesOutcome(AttachInstancesResult(outcome.result()));
	else
		return AttachInstancesOutcome(outcome.error());
}

void EssClient::attachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachInstancesOutcomeCallable EssClient::attachInstancesCallable(const AttachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingGroupsOutcome EssClient::describeScalingGroups(const DescribeScalingGroupsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingGroupsOutcome(DescribeScalingGroupsResult(outcome.result()));
	else
		return DescribeScalingGroupsOutcome(outcome.error());
}

void EssClient::describeScalingGroupsAsync(const DescribeScalingGroupsRequest& request, const DescribeScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingGroupsOutcomeCallable EssClient::describeScalingGroupsCallable(const DescribeScalingGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeScalingGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingActivitiesOutcome EssClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivitiesOutcome(DescribeScalingActivitiesResult(outcome.result()));
	else
		return DescribeScalingActivitiesOutcome(outcome.error());
}

void EssClient::describeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingActivitiesOutcomeCallable EssClient::describeScalingActivitiesCallable(const DescribeScalingActivitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivitiesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingRulesOutcome EssClient::describeScalingRules(const DescribeScalingRulesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingRulesOutcome(DescribeScalingRulesResult(outcome.result()));
	else
		return DescribeScalingRulesOutcome(outcome.error());
}

void EssClient::describeScalingRulesAsync(const DescribeScalingRulesRequest& request, const DescribeScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingRulesOutcomeCallable EssClient::describeScalingRulesCallable(const DescribeScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScalingGroupOutcome EssClient::modifyScalingGroup(const ModifyScalingGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingGroupOutcome(ModifyScalingGroupResult(outcome.result()));
	else
		return ModifyScalingGroupOutcome(outcome.error());
}

void EssClient::modifyScalingGroupAsync(const ModifyScalingGroupRequest& request, const ModifyScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScalingGroupOutcomeCallable EssClient::modifyScalingGroupCallable(const ModifyScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::EnableScalingGroupOutcome EssClient::enableScalingGroup(const EnableScalingGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EnableScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableScalingGroupOutcome(EnableScalingGroupResult(outcome.result()));
	else
		return EnableScalingGroupOutcome(outcome.error());
}

void EssClient::enableScalingGroupAsync(const EnableScalingGroupRequest& request, const EnableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::EnableScalingGroupOutcomeCallable EssClient::enableScalingGroupCallable(const EnableScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->enableScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeactivateScalingConfigurationOutcome EssClient::deactivateScalingConfiguration(const DeactivateScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateScalingConfigurationOutcome(DeactivateScalingConfigurationResult(outcome.result()));
	else
		return DeactivateScalingConfigurationOutcome(outcome.error());
}

void EssClient::deactivateScalingConfigurationAsync(const DeactivateScalingConfigurationRequest& request, const DeactivateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeactivateScalingConfigurationOutcomeCallable EssClient::deactivateScalingConfigurationCallable(const DeactivateScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deactivateScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::VerifyAuthenticationOutcome EssClient::verifyAuthentication(const VerifyAuthenticationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyAuthenticationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyAuthenticationOutcome(VerifyAuthenticationResult(outcome.result()));
	else
		return VerifyAuthenticationOutcome(outcome.error());
}

void EssClient::verifyAuthenticationAsync(const VerifyAuthenticationRequest& request, const VerifyAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyAuthentication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::VerifyAuthenticationOutcomeCallable EssClient::verifyAuthenticationCallable(const VerifyAuthenticationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyAuthenticationOutcome()>>(
			[this, request]()
			{
			return this->verifyAuthentication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScheduledTaskOutcome EssClient::createScheduledTask(const CreateScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScheduledTaskOutcome(CreateScheduledTaskResult(outcome.result()));
	else
		return CreateScheduledTaskOutcome(outcome.error());
}

void EssClient::createScheduledTaskAsync(const CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScheduledTaskOutcomeCallable EssClient::createScheduledTaskCallable(const CreateScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->createScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScheduledTaskOutcome EssClient::deleteScheduledTask(const DeleteScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScheduledTaskOutcome(DeleteScheduledTaskResult(outcome.result()));
	else
		return DeleteScheduledTaskOutcome(outcome.error());
}

void EssClient::deleteScheduledTaskAsync(const DeleteScheduledTaskRequest& request, const DeleteScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScheduledTaskOutcomeCallable EssClient::deleteScheduledTaskCallable(const DeleteScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingRuleOutcome EssClient::createScalingRule(const CreateScalingRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingRuleOutcome(CreateScalingRuleResult(outcome.result()));
	else
		return CreateScalingRuleOutcome(outcome.error());
}

void EssClient::createScalingRuleAsync(const CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingRuleOutcomeCallable EssClient::createScalingRuleCallable(const CreateScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingConfigurationsOutcome EssClient::describeScalingConfigurations(const DescribeScalingConfigurationsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingConfigurationsOutcome(DescribeScalingConfigurationsResult(outcome.result()));
	else
		return DescribeScalingConfigurationsOutcome(outcome.error());
}

void EssClient::describeScalingConfigurationsAsync(const DescribeScalingConfigurationsRequest& request, const DescribeScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingConfigurationsOutcomeCallable EssClient::describeScalingConfigurationsCallable(const DescribeScalingConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->describeScalingConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScheduledTaskOutcome EssClient::modifyScheduledTask(const ModifyScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScheduledTaskOutcome(ModifyScheduledTaskResult(outcome.result()));
	else
		return ModifyScheduledTaskOutcome(outcome.error());
}

void EssClient::modifyScheduledTaskAsync(const ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScheduledTaskOutcomeCallable EssClient::modifyScheduledTaskCallable(const ModifyScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::RemoveInstancesOutcome EssClient::removeInstances(const RemoveInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveInstancesOutcome(RemoveInstancesResult(outcome.result()));
	else
		return RemoveInstancesOutcome(outcome.error());
}

void EssClient::removeInstancesAsync(const RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::RemoveInstancesOutcomeCallable EssClient::removeInstancesCallable(const RemoveInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveInstancesOutcome()>>(
			[this, request]()
			{
			return this->removeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ExecuteScalingRuleOutcome EssClient::executeScalingRule(const ExecuteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteScalingRuleOutcome(ExecuteScalingRuleResult(outcome.result()));
	else
		return ExecuteScalingRuleOutcome(outcome.error());
}

void EssClient::executeScalingRuleAsync(const ExecuteScalingRuleRequest& request, const ExecuteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ExecuteScalingRuleOutcomeCallable EssClient::executeScalingRuleCallable(const ExecuteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->executeScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingGroupOutcome EssClient::deleteScalingGroup(const DeleteScalingGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingGroupOutcome(DeleteScalingGroupResult(outcome.result()));
	else
		return DeleteScalingGroupOutcome(outcome.error());
}

void EssClient::deleteScalingGroupAsync(const DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingGroupOutcomeCallable EssClient::deleteScalingGroupCallable(const DeleteScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingInstancesOutcome EssClient::describeScalingInstances(const DescribeScalingInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingInstancesOutcome(DescribeScalingInstancesResult(outcome.result()));
	else
		return DescribeScalingInstancesOutcome(outcome.error());
}

void EssClient::describeScalingInstancesAsync(const DescribeScalingInstancesRequest& request, const DescribeScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingInstancesOutcomeCallable EssClient::describeScalingInstancesCallable(const DescribeScalingInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingConfigurationOutcome EssClient::createScalingConfiguration(const CreateScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingConfigurationOutcome(CreateScalingConfigurationResult(outcome.result()));
	else
		return CreateScalingConfigurationOutcome(outcome.error());
}

void EssClient::createScalingConfigurationAsync(const CreateScalingConfigurationRequest& request, const CreateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingConfigurationOutcomeCallable EssClient::createScalingConfigurationCallable(const CreateScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeCapacityHistoryOutcome EssClient::describeCapacityHistory(const DescribeCapacityHistoryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapacityHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapacityHistoryOutcome(DescribeCapacityHistoryResult(outcome.result()));
	else
		return DescribeCapacityHistoryOutcome(outcome.error());
}

void EssClient::describeCapacityHistoryAsync(const DescribeCapacityHistoryRequest& request, const DescribeCapacityHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCapacityHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeCapacityHistoryOutcomeCallable EssClient::describeCapacityHistoryCallable(const DescribeCapacityHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapacityHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeCapacityHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeRegionsOutcome EssClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void EssClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeRegionsOutcomeCallable EssClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeAccountAttributesOutcome EssClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountAttributesOutcome(DescribeAccountAttributesResult(outcome.result()));
	else
		return DescribeAccountAttributesOutcome(outcome.error());
}

void EssClient::describeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeAccountAttributesOutcomeCallable EssClient::describeAccountAttributesCallable(const DescribeAccountAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeAccountAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachInstancesOutcome EssClient::detachInstances(const DetachInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DetachInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachInstancesOutcome(DetachInstancesResult(outcome.result()));
	else
		return DetachInstancesOutcome(outcome.error());
}

void EssClient::detachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachInstancesOutcomeCallable EssClient::detachInstancesCallable(const DetachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachInstancesOutcome()>>(
			[this, request]()
			{
			return this->detachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeLimitationOutcome EssClient::describeLimitation(const DescribeLimitationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLimitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLimitationOutcome(DescribeLimitationResult(outcome.result()));
	else
		return DescribeLimitationOutcome(outcome.error());
}

void EssClient::describeLimitationAsync(const DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLimitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeLimitationOutcomeCallable EssClient::describeLimitationCallable(const DescribeLimitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLimitationOutcome()>>(
			[this, request]()
			{
			return this->describeLimitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingActivityDetailOutcome EssClient::describeScalingActivityDetail(const DescribeScalingActivityDetailRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivityDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivityDetailOutcome(DescribeScalingActivityDetailResult(outcome.result()));
	else
		return DescribeScalingActivityDetailOutcome(outcome.error());
}

void EssClient::describeScalingActivityDetailAsync(const DescribeScalingActivityDetailRequest& request, const DescribeScalingActivityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivityDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingActivityDetailOutcomeCallable EssClient::describeScalingActivityDetailCallable(const DescribeScalingActivityDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivityDetailOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivityDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeAlertConfigOutcome EssClient::describeAlertConfig(const DescribeAlertConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertConfigOutcome(DescribeAlertConfigResult(outcome.result()));
	else
		return DescribeAlertConfigOutcome(outcome.error());
}

void EssClient::describeAlertConfigAsync(const DescribeAlertConfigRequest& request, const DescribeAlertConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeAlertConfigOutcomeCallable EssClient::describeAlertConfigCallable(const DescribeAlertConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAlertConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingGroupOutcome EssClient::createScalingGroup(const CreateScalingGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingGroupOutcome(CreateScalingGroupResult(outcome.result()));
	else
		return CreateScalingGroupOutcome(outcome.error());
}

void EssClient::createScalingGroupAsync(const CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingGroupOutcomeCallable EssClient::createScalingGroupCallable(const CreateScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->createScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingConfigurationOutcome EssClient::deleteScalingConfiguration(const DeleteScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingConfigurationOutcome(DeleteScalingConfigurationResult(outcome.result()));
	else
		return DeleteScalingConfigurationOutcome(outcome.error());
}

void EssClient::deleteScalingConfigurationAsync(const DeleteScalingConfigurationRequest& request, const DeleteScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingConfigurationOutcomeCallable EssClient::deleteScalingConfigurationCallable(const DeleteScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DisableScalingGroupOutcome EssClient::disableScalingGroup(const DisableScalingGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DisableScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableScalingGroupOutcome(DisableScalingGroupResult(outcome.result()));
	else
		return DisableScalingGroupOutcome(outcome.error());
}

void EssClient::disableScalingGroupAsync(const DisableScalingGroupRequest& request, const DisableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DisableScalingGroupOutcomeCallable EssClient::disableScalingGroupCallable(const DisableScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->disableScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScalingRuleOutcome EssClient::modifyScalingRule(const ModifyScalingRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingRuleOutcome(ModifyScalingRuleResult(outcome.result()));
	else
		return ModifyScalingRuleOutcome(outcome.error());
}

void EssClient::modifyScalingRuleAsync(const ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScalingRuleOutcomeCallable EssClient::modifyScalingRuleCallable(const ModifyScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingRuleOutcome EssClient::deleteScalingRule(const DeleteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingRuleOutcome(DeleteScalingRuleResult(outcome.result()));
	else
		return DeleteScalingRuleOutcome(outcome.error());
}

void EssClient::deleteScalingRuleAsync(const DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingRuleOutcomeCallable EssClient::deleteScalingRuleCallable(const DeleteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::VerifyUserOutcome EssClient::verifyUser(const VerifyUserRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyUserOutcome(VerifyUserResult(outcome.result()));
	else
		return VerifyUserOutcome(outcome.error());
}

void EssClient::verifyUserAsync(const VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::VerifyUserOutcomeCallable EssClient::verifyUserCallable(const VerifyUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyUserOutcome()>>(
			[this, request]()
			{
			return this->verifyUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyAlertConfigOutcome EssClient::modifyAlertConfig(const ModifyAlertConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAlertConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAlertConfigOutcome(ModifyAlertConfigResult(outcome.result()));
	else
		return ModifyAlertConfigOutcome(outcome.error());
}

void EssClient::modifyAlertConfigAsync(const ModifyAlertConfigRequest& request, const ModifyAlertConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAlertConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyAlertConfigOutcomeCallable EssClient::modifyAlertConfigCallable(const ModifyAlertConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAlertConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAlertConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

