
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Delete
               (MVSoundEmitter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  pSVar1 = (this->fields).soundLoader;
  if ((pSVar1 != (SoundLoader *)0x0) &&
     (pAVar2 = (pSVar1->fields).audioSource, pAVar2 != (AudioSource *)0x0)) {
    bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar2 = (pSVar1->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar2,(MethodInfo *)0x0);
    }
    bVar3 = MVWorldObjectClient::MVWorldObjectClient_Delete
                      ((MVWorldObjectClient *)this,worldObjectClientManager,errorText,
                       (MethodInfo *)0x0);
    return bVar3;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Destroy
               (MVSoundEmitter *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  object = (this->fields).soundLoader;
  if (object != (SoundLoader *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      func_?(&TypeInfo__AsyncWWWManager);
      func_?(&
                      MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     );
      cRam_? = '\x01';
    }
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
    ;
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)object,
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
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                      ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                       (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  ppIVar2 = &(this->fields)._InputSignalReceiver_k__BackingField;
  *ppIVar2 = pIVar1;
  func_?(ppIVar2,pIVar1);
  pSVar3 = (this->fields).soundEmitterObject;
  if ((pSVar3 == (SoundEmitterObject *)0x0) ||
     (pSVar4 = (pSVar3->fields).soundCheck, pSVar4 == (SoundEmitterActiveCheck *)0x0)) {
code_?:
    func_?();
  }
  else {
    (pSVar4->fields).soundEmitter = this;
    func_?();
    (pSVar4->fields).initialized = 1;
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pSVar3 = (this->fields).soundEmitterObject;
    if ((pSVar3 == (SoundEmitterObject *)0x0) ||
       (pSVar5 = (this->fields).soundLoader, pSVar5 == (SoundLoader *)0x0)) goto code_?;
    (pSVar5->fields).audioSource = (pSVar3->fields).audioSource;
    func_?();
    pIVar6 = (Il2CppType *)func_?();
    pMVar7 = MethodInfo__MVSoundEmitter__UpdateSound__;
    pIVar6[1].data = (_union_86)MethodInfo__MVSoundEmitter__UpdateSound__->virtualMethodPointer;
    *(MethodInfo **)&pIVar6[2].attrs = pMVar7;
    pIVar6[2].data.typeHandle = (Il2CppMetadataTypeHandle)this;
    func_?(pIVar6 + 2);
    uVar8 = pMVar7->parameters_count;
    pIVar6[4].data.type = pIVar6;
    cVar9 = func_?();
    if ((cVar9 == '\0') || (uVar8 != 0)) {
      pIVar6[4].data = pIVar6[2].data;
      _Var12 = pIVar6[1].data;
    }
    else {
      _Var12.dummy = &UNK_?;
    }
    *(_union_86 *)&pIVar6[1].attrs = _Var12;
    *(undefined **)&pIVar6[3].attrs = &UNK_?;
    if (pMVar7 == (MethodInfo *)0x0) goto code_?;
    pMVar7->return_type = pIVar6;
    func_?();
    pSVar3 = (this->fields).soundEmitterObject;
    if (pSVar3 == (SoundEmitterObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pSVar3->fields).visualObject,2.0,(MethodInfo *)0x0);
    pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar10,(Object *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar11 == 0) {
      pSVar5 = (this->fields).soundLoader;
      if (pSVar5 == (SoundLoader *)0x0) goto code_?;
      pSVar12 = (String *)&(pSVar5->fields).url;
      *(String **)pSVar12 = StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
code_?:
      func_?(pSVar12);
      pSVar5 = (this->fields).soundLoader;
      if (pSVar5 != (SoundLoader *)0x0) {
        SoundLoader::SoundLoader_LoadSound(pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if ((pDVar10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (pSVar12 = StringLiteral_url,
       TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar10,(Object *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar13.m_Index == 0)) goto code_?;
    TVar14.m_Index = 0;
    if (*(String__Class **)TVar13.m_Index == TypeInfo__System__String) {
      TVar14 = TVar13;
    }
    if (TVar14.m_Index == 0) goto code_?;
    TVar14.m_Index = 0;
    if (*(String__Class **)TVar13.m_Index == TypeInfo__System__String) {
      TVar14 = TVar13;
    }
    if (*(int *)(TVar14.m_Index + 8) < 1) {
      return;
    }
    pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    pSVar5 = (this->fields).soundLoader;
    if ((pDVar10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar10,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar5 == (SoundLoader *)0x0)) goto code_?;
    TVar14.m_Index = 0;
    if (TVar13.m_Index == 0) {
code_?:
      (pSVar5->fields).url = (String *)TVar14.m_Index;
      goto code_?;
    }
    if (*(String__Class **)TVar13.m_Index == TypeInfo__System__String) {
      TVar14 = TVar13;
    }
    if ((String *)TVar14.m_Index != (String *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    (pDVar1,(Object *)StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 == 0) {
    pSVar3 = (this->fields).soundLoader;
    if (pSVar3 == (SoundLoader *)0x0) goto code_?;
    (pSVar3->fields).url = StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar4.m_Index == 0)) goto code_?;
    TVar5.m_Index = 0;
    if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
      TVar5 = TVar4;
    }
    if (TVar5.m_Index == 0) {
code_?:
      func_?();
      goto code_?;
    }
    TVar5.m_Index = 0;
    if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
      TVar5 = TVar4;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (*(int *)(TVar5.m_Index + 8) < 1) {
      if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar1,(Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), TVar4.m_Index == 0)) goto code_?;
      TVar5.m_Index = 0;
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      if (TVar5.m_Index == 0) goto code_?;
      TVar5.m_Index = 0;
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      if (0 < *(int *)(TVar5.m_Index + 8)) {
        return;
      }
      this_00 = (this->fields)._._._.data;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_url,
                 (Object *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      pSVar3 = (this->fields).soundLoader;
      if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar1,(Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pSVar3 == (SoundLoader *)0x0)) goto code_?;
      TVar5.m_Index = 0;
      if (TVar4.m_Index != 0) {
        if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
          TVar5 = TVar4;
        }
        goto joined_?;
      }
    }
    else {
      pSVar3 = (this->fields).soundLoader;
      if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar1,(Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pSVar3 == (SoundLoader *)0x0)) goto code_?;
      TVar5.m_Index = 0;
      if (TVar4.m_Index != 0) {
        if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
          TVar5 = TVar4;
        }
joined_?:
        if ((String *)TVar5.m_Index == (String *)0x0) {
          func_?();
          goto code_?;
        }
      }
    }
    (pSVar3->fields).url = (String *)TVar5.m_Index;
  }
  func_?();
  if ((this->fields).soundLoader == (SoundLoader *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)in_stack_7[1].monitor,(String *)in_stack_7[1].klass,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    pOVar8 = in_stack_7[2].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pOVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (in_stack_7[2].monitor != (MonitorData *)0x0) {
      (**(code **)(in_stack_7[2].monitor + 0xc))();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pUVar9 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar10,in_stack_7,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
      pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
      if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
             (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      }
      else {
        pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar9->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar11 = pUVar9;
        }
        if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar11;
        pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar9->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar11 = pUVar9;
        }
        if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      func_?();
      if (in_stack_7[2].klass != (Object__Class *)0x0) {
        bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          ((AudioSource *)in_stack_7[2].klass,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (in_stack_7[2].klass == (Object__Class *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    ((AudioSource *)in_stack_7[2].klass,(MethodInfo *)0x0);
        }
        pOVar12 = in_stack_7 + 1;
        pOVar12->klass = (Object__Class *)in_stack_7[1].monitor;
        func_?();
        pOVar8 = pOVar12->klass;
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
        if (pOVar8 != (Object__Class *)0x0) {
          if (((String__Fields *)&(pOVar8->_0).name)->_stringLength == 0) {
            pSVar13 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_Could_not_find_asset_info_for_au,
                                 (String *)pOVar12->klass,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar13,(MethodInfo *)0x0);
            return;
          }
          if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar13 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
          pSVar13 = mscorlib.dll::System::String::String_Concat_3
                              (pSVar13,(String *)pOVar8,(MethodInfo *)0x0);
          StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar13,(MethodInfo *)0x0);
          pDVar14 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar14,in_stack_7,
                     MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                    ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar14,(MethodInfo *)0x0);
          pDVar14 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar14,in_stack_7,
                     MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          this_01 = (AssetBundleRequest *)func_?();
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_01,(String *)0x0,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar14,
                     WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar9 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar10,in_stack_7,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar9 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
    if (pUVar9 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar9->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar11 = pUVar9;
    }
    if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar11;
    pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar9->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar11 = pUVar9;
    }
    if (pUVar11 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean ShouldPlay() */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_ShouldPlay
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&StringLiteral_mute);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)StringLiteral_mute,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if (pOStack_1 == (Object *)0x0) goto code_?;
      if ((pOStack_1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pcVar3 = (char *)func_?();
      if (*pcVar3 != '\0') {
        return 0;
      }
    }
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      pOStack_1 = (Object *)0x1;
      bVar2 = func_?();
      return bVar2;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_UpdateSound
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
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
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_soundEmitterObject_is_null,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if (pSVar1 == (SoundEmitterObject *)0x0) goto code_?;
  this_00 = (pSVar1->fields).audioSource;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_audioSource_for_soundEmitterObje,(MethodInfo *)0x0);
    return;
  }
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (((pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
      (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar3,(Object *)StringLiteral_volume,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), this_00 == (AudioSource *)0x0)) || (TVar4.m_Index == 0))
  goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
      (TypeInfo__System__Single->_0).element_class) {
    pfVar5 = (float *)func_?();
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,*pfVar5,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if ((pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,(Object *)StringLiteral_pitch,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar4.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?();
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (this_00,*pfVar5,(MethodInfo *)0x0);
      this_01 = (this->fields)._._._.data;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_01,(Object *)StringLiteral_loop,(Object **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar2 != 0) {
        if ((Object *)TVar4.m_Index == (Object *)0x0) goto code_?;
        if ((((Object *)TVar4.m_Index)->klass->_0).element_class !=
            (TypeInfo__System__Boolean->_0).element_class) {
          TVar4.m_Index = func_?(TVar4.m_Index);
          goto code_?;
        }
        pbVar6 = (bool *)func_?();
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                  (this_00,*pbVar6,(MethodInfo *)0x0);
      }
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_rolloffMode
                (this_00,AudioRolloffMode__Enum_Custom,(MethodInfo *)0x0);
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if ((pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar3,(Object *)StringLiteral_range,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), TVar4.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar7 = (int *)func_?();
        iVar8 = *piVar7;
        fVar9 = _UNK_?;
        if (((iVar8 != 0) && (fVar9 = _UNK_?, iVar8 != 1)) &&
           (fVar9 = _UNK_?, iVar8 != 2)) {
          fVar9 = _UNK_?;
        }
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                  (this_00,fVar9,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._.data;
        if ((pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
           (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar3,(Object *)StringLiteral_range,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), TVar4.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar7 = (int *)func_?();
          iVar8 = *piVar7;
          fVar9 = _UNK_?;
          if (((iVar8 != 0) && (fVar9 = _UNK_?, iVar8 != 1)) &&
             (fVar9 = _UNK_?, iVar8 != 2)) {
            fVar9 = _UNK_?;
          }
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_maxDistance
                    (this_00,fVar9,(MethodInfo *)0x0);
          bVar2 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
          bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (this_00,(MethodInfo *)0x0);
          if (bVar2 == bVar10) {
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
code_?:
  func_?(TVar4.m_Index);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  value = (SoundLoader *)func_?(TypeInfo__SoundLoader);
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (value->fields).currentUrl = ::StringLiteral__;
  func_?(&value->fields,::StringLiteral__);
  method_00 = (MethodInfo *)&(value->fields).url;
  *(String **)method_00 = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  ppSVar1 = &(this->fields).soundLoader;
  *ppSVar1 = value;
  func_?(ppSVar1,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    func_?();
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).mvSoundEmitterPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x1008000;
    pSVar4 = (SoundEmitterObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pSVar4 == (SoundEmitterObject *)0x0) {
      (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
      func_?();
      return;
    }
    bVar5 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if ((bVar5 <= (((ObjectPrefab__Class *)pSVar4->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pSVar4->klass)->_1).typeHierarchy[bVar5 - 1] ==
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      (this->fields).soundEmitterObject = pSVar4;
      bVar5 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
      if ((bVar5 <= (((ObjectPrefab__Class *)pSVar4->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pSVar4->klass)->_1).typeHierarchy[bVar5 - 1] ==
          (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

