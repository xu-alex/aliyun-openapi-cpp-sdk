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

#ifndef ALIBABACLOUD_RTC_RTCCLIENT_H_
#define ALIBABACLOUD_RTC_RTCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RtcExport.h"
#include "model/DescribeAppsRequest.h"
#include "model/DescribeAppsResult.h"
#include "model/ModifyConferenceRequest.h"
#include "model/ModifyConferenceResult.h"
#include "model/DescribeConferenceAuthInfoRequest.h"
#include "model/DescribeConferenceAuthInfoResult.h"
#include "model/DescribeRecordListRequest.h"
#include "model/DescribeRecordListResult.h"
#include "model/MuteAudioAllRequest.h"
#include "model/MuteAudioAllResult.h"
#include "model/UnmuteAudioRequest.h"
#include "model/UnmuteAudioResult.h"
#include "model/MuteAudioRequest.h"
#include "model/MuteAudioResult.h"
#include "model/StartAppRequest.h"
#include "model/StartAppResult.h"
#include "model/CreateConferenceRequest.h"
#include "model/CreateConferenceResult.h"
#include "model/DeleteChannelRequest.h"
#include "model/DeleteChannelResult.h"
#include "model/ModifyAppRequest.h"
#include "model/ModifyAppResult.h"
#include "model/DescribeRealTimeRecordDetailRequest.h"
#include "model/DescribeRealTimeRecordDetailResult.h"
#include "model/RemoveParticipantsRequest.h"
#include "model/RemoveParticipantsResult.h"
#include "model/DescribeStatisRequest.h"
#include "model/DescribeStatisResult.h"
#include "model/CreateChannelRequest.h"
#include "model/CreateChannelResult.h"
#include "model/DescribeRealTimeRecordListRequest.h"
#include "model/DescribeRealTimeRecordListResult.h"
#include "model/StopAppRequest.h"
#include "model/StopAppResult.h"
#include "model/DeleteConferenceRequest.h"
#include "model/DeleteConferenceResult.h"
#include "model/UpdateChannelRequest.h"
#include "model/UpdateChannelResult.h"
#include "model/UnmuteAudioAllRequest.h"
#include "model/UnmuteAudioAllResult.h"
#include "model/DescribeRecordDetailRequest.h"
#include "model/DescribeRecordDetailResult.h"


namespace AlibabaCloud
{
	namespace Rtc
	{
		class ALIBABACLOUD_RTC_EXPORT RtcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeAppsResult> DescribeAppsOutcome;
			typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeAppsRequest&, const DescribeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
			typedef Outcome<Error, Model::ModifyConferenceResult> ModifyConferenceOutcome;
			typedef std::future<ModifyConferenceOutcome> ModifyConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyConferenceRequest&, const ModifyConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConferenceAsyncHandler;
			typedef Outcome<Error, Model::DescribeConferenceAuthInfoResult> DescribeConferenceAuthInfoOutcome;
			typedef std::future<DescribeConferenceAuthInfoOutcome> DescribeConferenceAuthInfoOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeConferenceAuthInfoRequest&, const DescribeConferenceAuthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConferenceAuthInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordListResult> DescribeRecordListOutcome;
			typedef std::future<DescribeRecordListOutcome> DescribeRecordListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRecordListRequest&, const DescribeRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordListAsyncHandler;
			typedef Outcome<Error, Model::MuteAudioAllResult> MuteAudioAllOutcome;
			typedef std::future<MuteAudioAllOutcome> MuteAudioAllOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::MuteAudioAllRequest&, const MuteAudioAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAudioAllAsyncHandler;
			typedef Outcome<Error, Model::UnmuteAudioResult> UnmuteAudioOutcome;
			typedef std::future<UnmuteAudioOutcome> UnmuteAudioOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UnmuteAudioRequest&, const UnmuteAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteAudioAsyncHandler;
			typedef Outcome<Error, Model::MuteAudioResult> MuteAudioOutcome;
			typedef std::future<MuteAudioOutcome> MuteAudioOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::MuteAudioRequest&, const MuteAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAudioAsyncHandler;
			typedef Outcome<Error, Model::StartAppResult> StartAppOutcome;
			typedef std::future<StartAppOutcome> StartAppOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StartAppRequest&, const StartAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartAppAsyncHandler;
			typedef Outcome<Error, Model::CreateConferenceResult> CreateConferenceOutcome;
			typedef std::future<CreateConferenceOutcome> CreateConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateConferenceRequest&, const CreateConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConferenceAsyncHandler;
			typedef Outcome<Error, Model::DeleteChannelResult> DeleteChannelOutcome;
			typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteChannelRequest&, const DeleteChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppResult> ModifyAppOutcome;
			typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyAppRequest&, const ModifyAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeRealTimeRecordDetailResult> DescribeRealTimeRecordDetailOutcome;
			typedef std::future<DescribeRealTimeRecordDetailOutcome> DescribeRealTimeRecordDetailOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRealTimeRecordDetailRequest&, const DescribeRealTimeRecordDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealTimeRecordDetailAsyncHandler;
			typedef Outcome<Error, Model::RemoveParticipantsResult> RemoveParticipantsOutcome;
			typedef std::future<RemoveParticipantsOutcome> RemoveParticipantsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::RemoveParticipantsRequest&, const RemoveParticipantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveParticipantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatisResult> DescribeStatisOutcome;
			typedef std::future<DescribeStatisOutcome> DescribeStatisOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeStatisRequest&, const DescribeStatisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisAsyncHandler;
			typedef Outcome<Error, Model::CreateChannelResult> CreateChannelOutcome;
			typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateChannelRequest&, const CreateChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelAsyncHandler;
			typedef Outcome<Error, Model::DescribeRealTimeRecordListResult> DescribeRealTimeRecordListOutcome;
			typedef std::future<DescribeRealTimeRecordListOutcome> DescribeRealTimeRecordListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRealTimeRecordListRequest&, const DescribeRealTimeRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealTimeRecordListAsyncHandler;
			typedef Outcome<Error, Model::StopAppResult> StopAppOutcome;
			typedef std::future<StopAppOutcome> StopAppOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StopAppRequest&, const StopAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteConferenceResult> DeleteConferenceOutcome;
			typedef std::future<DeleteConferenceOutcome> DeleteConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteConferenceRequest&, const DeleteConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConferenceAsyncHandler;
			typedef Outcome<Error, Model::UpdateChannelResult> UpdateChannelOutcome;
			typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateChannelRequest&, const UpdateChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateChannelAsyncHandler;
			typedef Outcome<Error, Model::UnmuteAudioAllResult> UnmuteAudioAllOutcome;
			typedef std::future<UnmuteAudioAllOutcome> UnmuteAudioAllOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UnmuteAudioAllRequest&, const UnmuteAudioAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteAudioAllAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordDetailResult> DescribeRecordDetailOutcome;
			typedef std::future<DescribeRecordDetailOutcome> DescribeRecordDetailOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRecordDetailRequest&, const DescribeRecordDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordDetailAsyncHandler;

			RtcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RtcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RtcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RtcClient();
			DescribeAppsOutcome describeApps(const Model::DescribeAppsRequest &request)const;
			void describeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsOutcomeCallable describeAppsCallable(const Model::DescribeAppsRequest& request) const;
			ModifyConferenceOutcome modifyConference(const Model::ModifyConferenceRequest &request)const;
			void modifyConferenceAsync(const Model::ModifyConferenceRequest& request, const ModifyConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConferenceOutcomeCallable modifyConferenceCallable(const Model::ModifyConferenceRequest& request) const;
			DescribeConferenceAuthInfoOutcome describeConferenceAuthInfo(const Model::DescribeConferenceAuthInfoRequest &request)const;
			void describeConferenceAuthInfoAsync(const Model::DescribeConferenceAuthInfoRequest& request, const DescribeConferenceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConferenceAuthInfoOutcomeCallable describeConferenceAuthInfoCallable(const Model::DescribeConferenceAuthInfoRequest& request) const;
			DescribeRecordListOutcome describeRecordList(const Model::DescribeRecordListRequest &request)const;
			void describeRecordListAsync(const Model::DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordListOutcomeCallable describeRecordListCallable(const Model::DescribeRecordListRequest& request) const;
			MuteAudioAllOutcome muteAudioAll(const Model::MuteAudioAllRequest &request)const;
			void muteAudioAllAsync(const Model::MuteAudioAllRequest& request, const MuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAudioAllOutcomeCallable muteAudioAllCallable(const Model::MuteAudioAllRequest& request) const;
			UnmuteAudioOutcome unmuteAudio(const Model::UnmuteAudioRequest &request)const;
			void unmuteAudioAsync(const Model::UnmuteAudioRequest& request, const UnmuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteAudioOutcomeCallable unmuteAudioCallable(const Model::UnmuteAudioRequest& request) const;
			MuteAudioOutcome muteAudio(const Model::MuteAudioRequest &request)const;
			void muteAudioAsync(const Model::MuteAudioRequest& request, const MuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAudioOutcomeCallable muteAudioCallable(const Model::MuteAudioRequest& request) const;
			StartAppOutcome startApp(const Model::StartAppRequest &request)const;
			void startAppAsync(const Model::StartAppRequest& request, const StartAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartAppOutcomeCallable startAppCallable(const Model::StartAppRequest& request) const;
			CreateConferenceOutcome createConference(const Model::CreateConferenceRequest &request)const;
			void createConferenceAsync(const Model::CreateConferenceRequest& request, const CreateConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConferenceOutcomeCallable createConferenceCallable(const Model::CreateConferenceRequest& request) const;
			DeleteChannelOutcome deleteChannel(const Model::DeleteChannelRequest &request)const;
			void deleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChannelOutcomeCallable deleteChannelCallable(const Model::DeleteChannelRequest& request) const;
			ModifyAppOutcome modifyApp(const Model::ModifyAppRequest &request)const;
			void modifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppOutcomeCallable modifyAppCallable(const Model::ModifyAppRequest& request) const;
			DescribeRealTimeRecordDetailOutcome describeRealTimeRecordDetail(const Model::DescribeRealTimeRecordDetailRequest &request)const;
			void describeRealTimeRecordDetailAsync(const Model::DescribeRealTimeRecordDetailRequest& request, const DescribeRealTimeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRealTimeRecordDetailOutcomeCallable describeRealTimeRecordDetailCallable(const Model::DescribeRealTimeRecordDetailRequest& request) const;
			RemoveParticipantsOutcome removeParticipants(const Model::RemoveParticipantsRequest &request)const;
			void removeParticipantsAsync(const Model::RemoveParticipantsRequest& request, const RemoveParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveParticipantsOutcomeCallable removeParticipantsCallable(const Model::RemoveParticipantsRequest& request) const;
			DescribeStatisOutcome describeStatis(const Model::DescribeStatisRequest &request)const;
			void describeStatisAsync(const Model::DescribeStatisRequest& request, const DescribeStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatisOutcomeCallable describeStatisCallable(const Model::DescribeStatisRequest& request) const;
			CreateChannelOutcome createChannel(const Model::CreateChannelRequest &request)const;
			void createChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChannelOutcomeCallable createChannelCallable(const Model::CreateChannelRequest& request) const;
			DescribeRealTimeRecordListOutcome describeRealTimeRecordList(const Model::DescribeRealTimeRecordListRequest &request)const;
			void describeRealTimeRecordListAsync(const Model::DescribeRealTimeRecordListRequest& request, const DescribeRealTimeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRealTimeRecordListOutcomeCallable describeRealTimeRecordListCallable(const Model::DescribeRealTimeRecordListRequest& request) const;
			StopAppOutcome stopApp(const Model::StopAppRequest &request)const;
			void stopAppAsync(const Model::StopAppRequest& request, const StopAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopAppOutcomeCallable stopAppCallable(const Model::StopAppRequest& request) const;
			DeleteConferenceOutcome deleteConference(const Model::DeleteConferenceRequest &request)const;
			void deleteConferenceAsync(const Model::DeleteConferenceRequest& request, const DeleteConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConferenceOutcomeCallable deleteConferenceCallable(const Model::DeleteConferenceRequest& request) const;
			UpdateChannelOutcome updateChannel(const Model::UpdateChannelRequest &request)const;
			void updateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateChannelOutcomeCallable updateChannelCallable(const Model::UpdateChannelRequest& request) const;
			UnmuteAudioAllOutcome unmuteAudioAll(const Model::UnmuteAudioAllRequest &request)const;
			void unmuteAudioAllAsync(const Model::UnmuteAudioAllRequest& request, const UnmuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteAudioAllOutcomeCallable unmuteAudioAllCallable(const Model::UnmuteAudioAllRequest& request) const;
			DescribeRecordDetailOutcome describeRecordDetail(const Model::DescribeRecordDetailRequest &request)const;
			void describeRecordDetailAsync(const Model::DescribeRecordDetailRequest& request, const DescribeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordDetailOutcomeCallable describeRecordDetailCallable(const Model::DescribeRecordDetailRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RTC_RTCCLIENT_H_
