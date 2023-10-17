
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Delete
               (MVSoundEmitter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).soundLoader;
  if (this_00 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_StopAndDestroySound(this_00,(MethodInfo *)0x0);
    bVar1 = MVWorldObjectClient::MVWorldObjectClient_Delete
                      ((MVWorldObjectClient *)this,worldObjectClientManager,errorText,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Destroy
               (MVSoundEmitter *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).soundLoader == (SoundLoader *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,in_stack_2,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single GetMaxDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMaxDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Single GetMinDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMinDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Initialize
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&MethodInfo__MVSoundEmitter__UpdateSound__);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__SoundLoader__UpdateSoundCallback);
    func_?(&StringLiteral_url);
    func_?(&StringLiteral_AmbientAudio_Nature_kgm_amb_fore);
    cRam_? = '\x01';
  }
  this_02 = (Action_2_Int32Enum_Object_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  if (this_02 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_02,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  pSVar2 = (this->fields).soundEmitterObject;
  if ((pSVar2 == (SoundEmitterObject *)0x0) ||
     (this_00 = (pSVar2->fields).soundCheck, this_00 == (SoundEmitterActiveCheck *)0x0))
  goto code_?;
  SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize(this_00,this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar2 = (this->fields).soundEmitterObject;
  if ((pSVar2 == (SoundEmitterObject *)0x0) ||
     (pSVar3 = (this->fields).soundLoader, pSVar3 == (SoundLoader *)0x0)) goto code_?;
  pAVar4 = (pSVar2->fields).audioSource;
  (pSVar3->fields).audioSource = pAVar4;
  func_?(&(pSVar3->fields).audioSource,pAVar4);
  pSVar3 = (this->fields).soundLoader;
  pSVar5 = (SoundLoader_UpdateSoundCallback *)
           func_?(TypeInfo__SoundLoader__UpdateSoundCallback);
  if ((pSVar5 == (SoundLoader_UpdateSoundCallback *)0x0) ||
     (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)pSVar5,(Object *)this,
                 MethodInfo__MVSoundEmitter__UpdateSound__,(MethodInfo *)0x0),
     pSVar3 == (SoundLoader *)0x0)) goto code_?;
  (pSVar3->fields).callback = pSVar5;
  func_?(&(pSVar3->fields).callback,pSVar5);
  pSVar2 = (this->fields).soundEmitterObject;
  if (pSVar2 == (SoundEmitterObject *)0x0) goto code_?;
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(pSVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
  this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_01,(Object *)StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar6 == 0) {
    pSVar7 = (String__Class *)(this->fields).soundLoader;
    if (pSVar7 == (String__Class *)0x0) goto code_?;
    (pSVar7->_0).namespaze = (char *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
  }
  else {
    pDVar8 = (this->fields)._._._.data;
    if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar9 == (Object *)0x0)) goto code_?;
    pOVar10 = (Object *)0x0;
    if ((String__Class *)pOVar9->klass == TypeInfo__System__String) {
      pOVar10 = pOVar9;
    }
    pSVar7 = TypeInfo__System__String;
    if (pOVar10 == (Object *)0x0) {
code_?:
      func_?(pOVar9,pSVar7);
      goto code_?;
    }
    pOVar10 = (Object *)0x0;
    if ((String__Class *)pOVar9->klass == TypeInfo__System__String) {
      pOVar10 = pOVar9;
    }
    if ((int)pOVar10[1].klass < 1) {
      return;
    }
    pDVar8 = (this->fields)._._._.data;
    pSVar7 = (String__Class *)(this->fields).soundLoader;
    if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar7 == (String__Class *)0x0)) goto code_?;
    pOVar10 = (Object *)0x0;
    if (pOVar9 != (Object *)0x0) {
      if ((String__Class *)pOVar9->klass == TypeInfo__System__String) {
        pOVar10 = pOVar9;
      }
      if (pOVar10 == (Object *)0x0) {
        func_?(pOVar9,TypeInfo__System__String);
        pOVar9 = extraout_EDX;
        goto code_?;
      }
    }
    (pSVar7->_0).namespaze = (char *)pOVar10;
  }
  func_?(&(pSVar7->_0).namespaze);
  pSVar3 = (this->fields).soundLoader;
  if (pSVar3 == (SoundLoader *)0x0) {
code_?:
    func_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&MethodInfo__SoundLoader__LoadSound__);
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  bVar6 = mscorlib.dll::System::String::String_op_Inequality
                    ((pSVar3->fields).url,(pSVar3->fields).currentUrl,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    pAVar4 = (pSVar3->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      return;
    }
    pSVar5 = (pSVar3->fields).callback;
    if (pSVar5 != (SoundLoader_UpdateSoundCallback *)0x0) {
      (*(pSVar5->fields)._._.invoke_impl)();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    bVar6 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar6 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
      if (pNVar13 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)pSVar3,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
        pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
        if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
        }
        func_?();
        pAVar4 = (pSVar3->fields).audioSource;
        if (pAVar4 != (AudioSource *)0x0) {
          bVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (pAVar4,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pAVar4 = (pSVar3->fields).audioSource;
            if (pAVar4 == (AudioSource *)0x0) goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                      (pAVar4,(MethodInfo *)0x0);
          }
          (pSVar3->fields).currentUrl = (pSVar3->fields).url;
          func_?();
          pSVar15 = (pSVar3->fields).currentUrl;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?(&TypeInfo__UnityEngine__Debug);
            func_?(&
                            MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           );
            func_?(&TypeInfo__StreamingAsset);
            func_?(&StringLiteral_Could_not_find_asset_info_for_au);
            cRam_? = '\x01';
          }
          if (pSVar15 != (String *)0x0) {
            if ((pSVar15->fields)._stringLength == 0) {
              pSVar15 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_Could_not_find_asset_info_for_au,
                                   (pSVar3->fields).currentUrl,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)pSVar15,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            str0 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
            pSVar15 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar15,(MethodInfo *)0x0);
            pSVar15 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar15,(MethodInfo *)0x0);
            pAVar16 = (Action_1_Object_ *)func_?();
            if (pAVar16 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (pAVar16,(Object *)pSVar3,
                         MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                        ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar16,
                         (MethodInfo *)0x0);
              pAVar16 = (Action_1_Object_ *)func_?();
              if (pAVar16 != (Action_1_Object_ *)0x0) {
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (pAVar16,(Object *)pSVar3,
                           MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                this_03 = (AssetBundleRequest *)func_?();
                if (this_03 != (AssetBundleRequest *)0x0) {
                  AssetBundleRequest::AssetBundleRequest__ctor
                            (this_03,pSVar15,
                             (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar16,
                             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0)
                  ;
                  AsyncWWWManager::AsyncWWWManager_WWWRequest
                            ((AsyncWebRequest *)this_03,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    if (pNVar13 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,(Object *)pSVar3,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
    if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar14 = pUVar12;
    }
    if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
    pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar14 = pUVar12;
    }
    if (pUVar14 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_InputStateUpdateCallback
               (MVSoundEmitter *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((logicInputState != LogicInputState__Enum_Cold) &&
     (logicInputState != LogicInputState__Enum_Hot)) {
    pSVar1 = (this->fields).soundEmitterObject;
    if (pSVar1 == (SoundEmitterObject *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (pSVar1->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      bVar4 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pSVar1 = (this->fields).soundEmitterObject;
        if ((pSVar1 == (SoundEmitterObject *)0x0) ||
           (pAVar3 = (pSVar1->fields).audioSource, pAVar3 == (AudioSource *)0x0))
        goto code_?;
        bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar3,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
        }
      }
      bVar4 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pSVar1 = (this->fields).soundEmitterObject;
        if ((pSVar1 == (SoundEmitterObject *)0x0) ||
           (pAVar3 = (pSVar1->fields).audioSource, pAVar3 == (AudioSource *)0x0))
        goto code_?;
        bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_OnDataUpdate
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_url);
    func_?(&StringLiteral_AmbientAudio_Nature_kgm_amb_fore);
    cRam_? = '\x01';
  }
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_00,(Object *)StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar1 == 0) {
    pSVar2 = (this->fields).soundLoader;
    if (pSVar2 == (SoundLoader *)0x0) goto code_?;
    (pSVar2->fields).url = StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
  }
  else {
    pDVar3 = (this->fields)._._._.data;
    if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar3,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar4 == (Object *)0x0)) goto code_?;
    pOVar5 = (Object *)0x0;
    if ((String__Class *)pOVar4->klass == TypeInfo__System__String) {
      pOVar5 = pOVar4;
    }
    if (pOVar5 == (Object *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    pOVar5 = (Object *)0x0;
    if ((String__Class *)pOVar4->klass == TypeInfo__System__String) {
      pOVar5 = pOVar4;
    }
    pDVar3 = (this->fields)._._._.data;
    if ((int)pOVar5[1].klass < 1) {
      if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_url,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar4 == (Object *)0x0)) goto code_?;
      pOVar5 = (Object *)0x0;
      if ((String__Class *)pOVar4->klass == TypeInfo__System__String) {
        pOVar5 = pOVar4;
      }
      if (pOVar5 == (Object *)0x0) goto code_?;
      pOVar5 = (Object *)0x0;
      if ((String__Class *)pOVar4->klass == TypeInfo__System__String) {
        pOVar5 = pOVar4;
      }
      if (0 < (int)pOVar5[1].klass) {
        return;
      }
      pDVar3 = (this->fields)._._._.data;
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar3,(Object *)StringLiteral_url,
                 (Object *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pDVar3 = (this->fields)._._._.data;
      pSVar2 = (this->fields).soundLoader;
      if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pSVar6 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_url,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
      pSVar7 = (String *)0x0;
      if (pSVar6 != (String *)0x0) {
        if (pSVar6->klass == TypeInfo__System__String) {
          pSVar7 = pSVar6;
        }
        goto joined_?;
      }
    }
    else {
      pSVar2 = (this->fields).soundLoader;
      if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pSVar6 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_url,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
      pSVar7 = (String *)0x0;
      if (pSVar6 != (String *)0x0) {
        if (pSVar6->klass == TypeInfo__System__String) {
          pSVar7 = pSVar6;
        }
joined_?:
        if (pSVar7 == (String *)0x0) {
          func_?();
          goto code_?;
        }
      }
    }
    (pSVar2->fields).url = pSVar7;
  }
  func_?();
  if ((this->fields).soundLoader == (SoundLoader *)0x0) {
code_?:
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)in_stack_9[1].monitor,(String *)in_stack_9[1].klass,
                     (MethodInfo *)0x0);
  if (bVar1 == 0) {
    pOVar10 = in_stack_9[2].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pOVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (in_stack_9[2].monitor != (MonitorData *)0x0) {
      (**(code **)(in_stack_9[2].monitor + 0xc))();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar12 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar12,in_stack_9,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
        pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
        if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar13 = pUVar11;
          }
          if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar13;
          pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar13 = pUVar11;
          }
          if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
        }
        func_?();
        if (in_stack_9[2].klass != (Object__Class *)0x0) {
          bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            ((AudioSource *)in_stack_9[2].klass,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            if (in_stack_9[2].klass == (Object__Class *)0x0) goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                      ((AudioSource *)in_stack_9[2].klass,(MethodInfo *)0x0);
          }
          in_stack_9[1].klass = (Object__Class *)in_stack_9[1].monitor;
          func_?();
          pOVar10 = in_stack_9[1].klass;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar10 != (Object__Class *)0x0) {
            if (((String__Fields *)&(pOVar10->_0).name)->_stringLength == 0) {
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_Could_not_find_asset_info_for_au,
                                  (String *)in_stack_9[1].klass,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)pSVar6,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar6 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (pSVar6,(String *)pOVar10,(MethodInfo *)0x0);
            pSVar6 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar6,(MethodInfo *)0x0);
            pAVar14 = (Action_1_Object_ *)func_?();
            if (pAVar14 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (pAVar14,in_stack_9,
                         MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                        ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar14,
                         (MethodInfo *)0x0);
              pAVar14 = (Action_1_Object_ *)func_?();
              if (pAVar14 != (Action_1_Object_ *)0x0) {
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (pAVar14,in_stack_9,
                           MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                this_01 = (AssetBundleRequest *)func_?();
                if (this_01 != (AssetBundleRequest *)0x0) {
                  AssetBundleRequest::AssetBundleRequest__ctor
                            (this_01,pSVar6,
                             (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar14,
                             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0)
                  ;
                  AsyncWWWManager::AsyncWWWManager_WWWRequest
                            ((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar12 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,in_stack_9,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar13 = pUVar11;
    }
    if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar13;
    pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar13 = pUVar11;
    }
    if (pUVar13 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean ShouldPlay() */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_ShouldPlay
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&StringLiteral_mute);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_mute,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pcVar2 = (char *)func_?();
      if (*pcVar2 != '\0') {
        return 0;
      }
      if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
        cVar3 = func_?(1,TypeInfo__IInputSignalReceiver);
        return cVar3 != '\0';
      }
    }
  }
  pOVar1 = (Object *)func_?();
code_?:
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_UpdateSound
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_range);
    func_?(&StringLiteral_soundEmitterObject_is_null);
    func_?(&StringLiteral_audioSource_for_soundEmitterObje);
    func_?(&StringLiteral_loop);
    func_?(&StringLiteral_pitch);
    func_?(&StringLiteral_volume);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_soundEmitterObject_is_null,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if (pSVar1 != (SoundEmitterObject *)0x0) {
    this_00 = (pSVar1->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_audioSource_for_soundEmitterObje,(MethodInfo *)0x0);
      return;
    }
    pDVar3 = (this->fields)._._._.data;
    if (((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar3,(Object *)StringLiteral_volume,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_00 != (AudioSource *)0x0)) && (pOVar4 != (Object *)0x0)) {
      pIVar5 = (Int32__Class *)TypeInfo__System__Single;
      if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar6 = (float *)func_?();
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,*pfVar6,(MethodInfo *)0x0);
        pDVar3 = (this->fields)._._._.data;
        if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar3,(Object *)StringLiteral_pitch,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar4 == (Object *)0x0)) goto code_?;
        pIVar5 = (Int32__Class *)TypeInfo__System__Single;
        if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar6 = (float *)func_?(pOVar4);
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (this_00,*pfVar6,(MethodInfo *)0x0);
          pDVar3 = (this->fields)._._._.data;
          if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
             (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar3,(Object *)StringLiteral_loop,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar4 == (Object *)0x0)) goto code_?;
          pIVar5 = (Int32__Class *)TypeInfo__System__Boolean;
          if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
            pbVar7 = (bool *)func_?(pOVar4);
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                      (this_00,*pbVar7,(MethodInfo *)0x0);
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_rolloffMode
                      (this_00,AudioRolloffMode__Enum_Custom,(MethodInfo *)0x0);
            pDVar3 = (this->fields)._._._.data;
            if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
               (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar3,(Object *)StringLiteral_range,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pOVar4 == (Object *)0x0)) goto code_?;
            pIVar5 = TypeInfo__System__Int32;
            if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar8 = (int *)func_?(pOVar4);
              iVar9 = *piVar8;
              fVar10 = _UNK_?;
              if (((iVar9 != 0) && (fVar10 = _UNK_?, iVar9 != 1)) &&
                 (fVar10 = _UNK_?, iVar9 != 2)) {
                fVar10 = _UNK_?;
              }
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                        (this_00,fVar10,(MethodInfo *)0x0);
              pDVar3 = (this->fields)._._._.data;
              if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                 (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar3,(Object *)StringLiteral_range,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pOVar4 == (Object *)0x0)) goto code_?;
              pIVar5 = TypeInfo__System__Int32;
              if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar8 = (int *)func_?(pOVar4);
                iVar9 = *piVar8;
                fVar10 = _UNK_?;
                if (((iVar9 != 0) && (fVar10 = _UNK_?, iVar9 != 1)) &&
                   (fVar10 = _UNK_?, iVar9 != 2)) {
                  fVar10 = _UNK_?;
                }
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_maxDistance
                          (this_00,fVar10,(MethodInfo *)0x0);
                bVar2 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                bVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_get_isPlaying(this_00,(MethodInfo *)0x0);
                if (bVar2 == bVar11) {
                  return;
                }
                bVar2 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                if (bVar2 == 0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                          (this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      func_?(pOVar4,pIVar5);
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter__ctor
               (MVSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SoundEmitterObject);
    func_?(&TypeInfo__SoundLoader);
    cRam_? = '\x01';
  }
  this_00 = (SoundLoader *)func_?(TypeInfo__SoundLoader);
  if (this_00 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).soundLoader = this_00;
    func_?(&(this->fields).soundLoader,this_00);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvSoundEmitterPrefab,
                 worldObjects,(MethodInfo *)0x0);
      piVar2 = &(this->fields)._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 | 0x1008000;
      pSVar3 = (SoundEmitterObject *)(this->fields)._._.component;
      *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
           *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
      if (pSVar3 == (SoundEmitterObject *)0x0) {
        (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
        func_?();
        return;
      }
      if (((TypeInfo__SoundEmitterObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy
          [(TypeInfo__SoundEmitterObject->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
        (this->fields).soundEmitterObject = pSVar3;
        if (((TypeInfo__SoundEmitterObject->_1).typeHierarchyDepth <=
             (((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchyDepth) &&
           ((((ObjectPrefab__Class *)pSVar3->klass)->_1).typeHierarchy
            [(TypeInfo__SoundEmitterObject->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  pSVar3 = extraout_EDX;
code_?:
  func_?(pSVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_get_DocumentationType
          (MVSoundEmitter *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_SoundEmitter;
}

