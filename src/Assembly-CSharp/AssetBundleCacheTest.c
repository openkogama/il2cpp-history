
/* Void DownloadTestAsset(Action`3[UnityEngine.Networking.UnityWebRequest,Single,Int32], Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
               (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *onDownloadFinished,
               int32_t currentStreamingAssetVersion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__StreamingAsset);
    func_?(&
                    MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
    func_?(&StringLiteral_Test_bignoise_unity3d);
    func_?(&StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)onDownloadFinished;
    func_?(value + 1,onDownloadFinished);
    value[2].klass = (Object__Class *)currentStreamingAssetVersion;
    pMVar2 = (MonitorData *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    value[1].monitor = pMVar2;
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StreamingAsset);
    }
    pSVar3 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar3,StringLiteral_Test_bignoise_unity3d,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,3);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar3 != (String *)0x0) &&
       (iVar4 = func_?(pSVar3,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar3;
    func_?(args->vector,pSVar3);
    pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar5 == (KoGaMaSettingsContainer *)0x0) goto code_?;
    pSVar6 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                       (pKVar5,(MethodInfo *)0x0);
    if ((pSVar6 != (String *)0x0) &&
       (iVar4 = func_?(pSVar6,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar6;
    func_?(args->vector + 1,pSVar6);
    pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar5 == (KoGaMaSettingsContainer *)0x0) goto code_?;
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if ((pOVar7 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar7,(args->klass->_0).element_class), iVar4 != 0)) {
      if (args->max_length < 3) goto code_?;
      args->vector[2] = pOVar7;
      func_?(args->vector + 2,pOVar7);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                (StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers,args,(MethodInfo *)0x0);
      this = (Action_1_Object_ *)
             func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this,value,
                   MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_00 = (AssetBundleRequest *)func_?(TypeInfo__CachedAssetBundleRequest);
        if (this_00 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_00,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                     WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
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
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>)
    ;
    func_?(&
                    MethodInfo__AssetBundleCacheTest__OnSecondDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Error_executing_command___0_);
    func_?(&StringLiteral_Download_time_1___0_);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pKVar3 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
      if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
        (pKVar3->fields).streamingAssetVersion = currentStreamingAssetVersion;
        pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                 UnityWebRequest_get_error(result,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_Error_executing_command___0_,(Object *)pSVar1,
                            (MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
      arg0 = (Object *)func_?();
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Download_time_1___0_,arg0,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      this = (Action_3_Object_Single_Int32_ *)
             func_?(
                            TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                            );
      if (this != (Action_3_Object_Single_Int32_ *)0x0) {
        mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
                  (this,(Object *)0x0,
                   MethodInfo__AssetBundleCacheTest__OnSecondDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   ,(MethodInfo *)0x0);
        AssetBundleCacheTest_DownloadTestAsset
                  ((Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this,
                   currentStreamingAssetVersion,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSecondDownloadFinished(UnityWebRequest, Single, Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_OnSecondDownloadFinished
               (UnityWebRequest *result,float startTime,int32_t currentStreamingAssetVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Error_executing_command___0_);
    func_?(&StringLiteral_Download_time_2___0_);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(result,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Error_executing_command___0_,(Object *)pSVar1,
                          (MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
      arg0 = (Object *)func_?();
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_Download_time_2___0_,arg0,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
    }
    pKVar3 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
      (pKVar3->fields).streamingAssetVersion = currentStreamingAssetVersion;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Run(Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_Run
               (int32_t version,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>)
    ;
    func_?(&
                    MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   );
    cRam_? = '\x01';
  }
  pKVar1 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar1 != (KoGaMaSettingsContainer *)0x0) {
    currentStreamingAssetVersion = (pKVar1->fields).streamingAssetVersion;
    pKVar1 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaSettingsContainer *)0x0) {
      (pKVar1->fields).streamingAssetVersion = version + currentStreamingAssetVersion;
      this = (Action_3_Object_Single_Int32_ *)
             func_?(
                            TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                            );
      if (this != (Action_3_Object_Single_Int32_ *)0x0) {
        mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
                  (this,(Object *)0x0,
                   MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                   ,(MethodInfo *)0x0);
        AssetBundleCacheTest_DownloadTestAsset
                  ((Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this,
                   currentStreamingAssetVersion,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

