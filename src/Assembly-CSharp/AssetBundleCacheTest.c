
/* Void DownloadTestAsset(Action`3[UnityEngine.Networking.UnityWebRequest,Single,Int32], Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
               (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *onDownloadFinished,
               int32_t currentStreamingAssetVersion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AssetBundleCacheTest___DownloadTestAsset_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this == (ScaleAnimationBase *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    (this->fields)._._._._.m_CachedPtr = onDownloadFinished;
    (this->fields).originalScale.x = (float)currentStreamingAssetVersion;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).state = (int32_t)fVar2;
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar3,StringLiteral_Test_bignoise_unity3d,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar3 != (String *)0x0) && (iVar4 = func_?(pSVar3), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar3;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar5 == (KoGaMaSettingsContainer *)0x0) goto code_?;
    pSVar6 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                       (pKVar5,(MethodInfo *)0x0);
    if ((pSVar6 != (String *)0x0) &&
       (iVar4 = func_?(pSVar6,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar6;
    pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar5 == (KoGaMaSettingsContainer *)0x0) goto code_?;
    System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json
    ::Schema::JsonSchemaType]::
    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                *)pKVar5,(MethodInfo *)0x0);
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32);
    if ((pOVar7 == (Object *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
      if (2 < args->max_length) {
        args->vector[2] = pOVar7;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers,args,(MethodInfo *)0x0);
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__AssetBundleCacheTest___DownloadTestAsset_c__AnonStorey0____m__0_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        this_01 = (AssetBundleRequest *)func_?();
        AssetBundleRequest::AssetBundleRequest__ctor
                  (this_01,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                   WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFirstDownloadFinished(UnityWebRequest, Single, Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_OnFirstDownloadFinished
               (UnityWebRequest *result,float startTime,int32_t currentStreamingAssetVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
      arg0 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Download_time_1___0_,arg0,(MethodInfo *)0x0);
      TextCommand::TextCommand_NotifyUser(pSVar1,(MethodInfo *)0x0);
      if (TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache1 ==
          (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__AssetBundleCacheTest__OnSecondDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>__Action_System__Object__void__
                  );
        TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache1 =
             (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this_00;
      }
      AssetBundleCacheTest_DownloadTestAsset
                (TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache1,
                 currentStreamingAssetVersion,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (this != (KoGaMaSettingsContainer *)0x0) {
      TimedPlayReward::TimedPlayReward_set_RewardXP
                ((TimedPlayReward *)this,currentStreamingAssetVersion,(MethodInfo *)0x0);
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(result,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Error_executing_command___0_,(Object *)pSVar1,
                          (MethodInfo *)0x0);
      TextCommand::TextCommand_NotifyUser(pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSecondDownloadFinished(UnityWebRequest, Single, Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_OnSecondDownloadFinished
               (UnityWebRequest *result,float startTime,int32_t currentStreamingAssetVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(result,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Error_executing_command___0_,(Object *)pSVar1,
                          (MethodInfo *)0x0);
      currentStreamingAssetVersion = 0;
      TextCommand::TextCommand_NotifyUser(pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
      arg0 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Download_time_2___0_,arg0,(MethodInfo *)0x0);
      currentStreamingAssetVersion = (int32_t)&UNK_?;
      TextCommand::TextCommand_NotifyUser(pSVar1,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (this != (KoGaMaSettingsContainer *)0x0) {
      TimedPlayReward::TimedPlayReward_set_RewardXP
                ((TimedPlayReward *)this,currentStreamingAssetVersion,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Run(Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_Run
               (int32_t version,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pKVar1 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar1 != (KoGaMaSettingsContainer *)0x0) {
    currentStreamingAssetVersion =
         System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::
         Json::Schema::JsonSchemaType]::
         Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                   ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                     *)pKVar1,(MethodInfo *)0x0);
    pKVar1 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaSettingsContainer *)0x0) {
      TimedPlayReward::TimedPlayReward_set_RewardXP
                ((TimedPlayReward *)pKVar1,version + currentStreamingAssetVersion,(MethodInfo *)0x0)
      ;
      if (TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache0 ==
          (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)0x0) {
        this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this,(Object *)0x0,
                   MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>__Action_System__Object__void__
                  );
        TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache0 =
             (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this;
      }
      AssetBundleCacheTest_DownloadTestAsset
                (TypeInfo__AssetBundleCacheTest->static_fields->__f__mg_cache0,
                 currentStreamingAssetVersion,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

