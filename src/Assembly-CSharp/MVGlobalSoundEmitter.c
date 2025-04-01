
/* Void Initialize() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_Initialize
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__MVGlobalSoundEmitter__UpdateSound__);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__SoundLoader__UpdateSoundCallback);
    func_?(&StringLiteral_url);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundEmitterObject;
  if ((pSVar1 == (SoundEmitterObject *)0x0) ||
     (this_00 = (pSVar1->fields).soundCheck, this_00 == (SoundEmitterActiveCheck *)0x0))
  goto code_?;
  SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize_1(this_00,this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).soundEmitterObject;
  if ((pSVar1 == (SoundEmitterObject *)0x0) ||
     (pSVar2 = (this->fields).soundLoader, pSVar2 == (SoundLoader *)0x0)) goto code_?;
  ppAVar3 = &(pSVar2->fields).audioSource;
  *ppAVar3 = (pSVar1->fields).audioSource;
  func_?(ppAVar3);
  pSVar2 = (this->fields).soundLoader;
  this_01 = (SoundLoader_UpdateSoundCallback *)
            func_?(TypeInfo__SoundLoader__UpdateSoundCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)this,
             MethodInfo__MVGlobalSoundEmitter__UpdateSound__,(MethodInfo *)0x0);
  if (pSVar2 == (SoundLoader *)0x0) goto code_?;
  (pSVar2->fields).callback = this_01;
  func_?();
  pSVar1 = (this->fields).soundEmitterObject;
  if (pSVar1 == (SoundEmitterObject *)0x0) goto code_?;
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(pSVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
  pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if ((pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar4,(Object *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar5.m_Index == 0)) goto code_?;
  TVar6.m_Index = 0;
  if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
    TVar6 = TVar5;
  }
  if (TVar6.m_Index == 0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar6.m_Index = 0;
  if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
    TVar6 = TVar5;
  }
  if (*(int *)(TVar6.m_Index + 8) < 1) {
    return;
  }
  pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  pSVar2 = (this->fields).soundLoader;
  if ((pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar4,(Object *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
  TVar6.m_Index = 0;
  if (TVar5.m_Index != 0) {
    if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
      TVar6 = TVar5;
    }
    if ((String *)TVar6.m_Index == (String *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (pSVar2->fields).url = (String *)TVar6.m_Index;
  func_?();
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar8 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)in_stack_9[1].monitor,(String *)in_stack_9[1].klass,
                     (MethodInfo *)0x0);
  if (bVar8 == 0) {
    pOVar10 = in_stack_9[2].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pOVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 == 0) {
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
    bVar8 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar8 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
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
        bVar8 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          ((AudioSource *)in_stack_9[2].klass,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          if (in_stack_9[2].klass == (Object__Class *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    ((AudioSource *)in_stack_9[2].klass,(MethodInfo *)0x0);
        }
        pOVar14 = in_stack_9 + 1;
        pOVar14->klass = (Object__Class *)in_stack_9[1].monitor;
        func_?();
        pOVar10 = pOVar14->klass;
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
          if (((String__Fields *)&(pOVar10->_0).name)->_stringLength != 0) {
            if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar15 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
            pSVar15 = mscorlib.dll::System::String::String_Concat_3
                                (pSVar15,(String *)pOVar10,(MethodInfo *)0x0);
            StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar15,(MethodInfo *)0x0);
            pDVar16 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar16,in_stack_9,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                      ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar16,(MethodInfo *)0x0
                      );
            pDVar16 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar16,in_stack_9,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_02 = (AssetBundleRequest *)func_?();
            AssetBundleRequest::AssetBundleRequest__ctor
                      (this_02,(String *)0x0,
                       (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar16,
                       WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
            AsyncWWWManager::AsyncWWWManager_WWWRequest
                      ((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
            return;
          }
          pSVar15 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Could_not_find_asset_info_for_au,
                               (String *)pOVar14->klass,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar15,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_OnDataUpdate
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_url);
    func_?(&StringLiteral_AmbientAudio_Music_slowstones_un);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  TVar3.m_Index = 0;
  if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
    TVar3 = TVar2;
  }
  pSVar4 = TypeInfo__System__String;
  if (TVar3.m_Index == 0) {
code_?:
    func_?(TVar2.m_Index,pSVar4);
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar3.m_Index = 0;
  if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
    TVar3 = TVar2;
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (*(int *)(TVar3.m_Index + 8) < 1) {
    if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar2.m_Index == 0)) goto code_?;
    TVar3.m_Index = 0;
    if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
      TVar3 = TVar2;
    }
    pSVar4 = TypeInfo__System__String;
    if (TVar3.m_Index == 0) goto code_?;
    TVar3.m_Index = 0;
    if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
      TVar3 = TVar2;
    }
    if (0 < *(int *)(TVar3.m_Index + 8)) {
      return;
    }
    this_00 = (this->fields)._._._.data;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_url,
               (Object *)StringLiteral_AmbientAudio_Music_slowstones_un,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    in_stack_6 = StringLiteral_url;
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    pSVar4 = (String__Class *)(this->fields).soundLoader;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (pSVar4 == (String__Class *)0x0) goto code_?;
    TVar3.m_Index = 0;
    if (TVar2.m_Index != 0) {
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        TVar3 = TVar2;
      }
      goto joined_?;
    }
  }
  else {
    pSVar4 = (String__Class *)(this->fields).soundLoader;
    if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pSVar4 == (String__Class *)0x0)) goto code_?;
    TVar3.m_Index = 0;
    if (TVar2.m_Index != 0) {
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        TVar3 = TVar2;
      }
joined_?:
      if ((char *)TVar3.m_Index == (char *)0x0) {
        func_?();
        TVar2.m_Index = extraout_EDX;
        goto code_?;
      }
    }
  }
  (pSVar4->_0).namespaze = (char *)TVar3.m_Index;
  func_?();
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&MethodInfo__SoundLoader__LoadSound__);
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  bVar7 = mscorlib.dll::System::String::String_op_Inequality
                    (*(String **)&(in_stack_6->fields)._firstChar,
                     (String *)(in_stack_6->fields)._stringLength,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    pSVar4 = in_stack_6[1].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    if (in_stack_6[1].monitor != (MonitorData *)0x0) {
      (**(code **)(in_stack_6[1].monitor + 0xc))();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar7 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pUVar8 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar9,(Object *)in_stack_6,MethodInfo__SoundLoader__LoadSound__,
                 (MethodInfo *)0x0);
      pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
      if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
             (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      }
      else {
        pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar8->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar10 = pUVar8;
        }
        if (pUVar10 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar10;
        pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar8->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar10 = pUVar8;
        }
        if (pUVar10 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      func_?();
      if (in_stack_6[1].klass != (String__Class *)0x0) {
        bVar7 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          ((AudioSource *)in_stack_6[1].klass,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (in_stack_6[1].klass == (String__Class *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    ((AudioSource *)in_stack_6[1].klass,(MethodInfo *)0x0);
        }
        pSVar11 = &in_stack_6->fields;
        pSVar11->_stringLength = *(int32_t *)&(in_stack_6->fields)._firstChar;
        func_?();
        pSVar12 = (String *)pSVar11->_stringLength;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?(&StringLiteral_Could_not_find_asset_info_for_au);
          cRam_? = '\x01';
        }
        if (pSVar12 != (String *)0x0) {
          if ((pSVar12->fields)._stringLength == 0) {
            pSVar12 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Could_not_find_asset_info_for_au,
                                (String *)pSVar11->_stringLength,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar12,(MethodInfo *)0x0);
            return;
          }
          if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          str0 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
          pSVar12 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar12,(MethodInfo *)0x0);
          StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar12,(MethodInfo *)0x0);
          pDVar13 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar13,(Object *)in_stack_6,
                     MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                    ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar13,(MethodInfo *)0x0);
          pDVar13 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (pDVar13,(Object *)in_stack_6,
                     MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          this_01 = (AssetBundleRequest *)func_?();
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_01,(String *)0x0,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar13,
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
    pUVar8 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar9,(Object *)in_stack_6,MethodInfo__SoundLoader__LoadSound__,
               (MethodInfo *)0x0);
    pUVar8 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
    if (pUVar8 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar8->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar10 = pUVar8;
    }
    if (pUVar10 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar10;
    pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar8->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar10 = pUVar8;
    }
    if (pUVar10 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_soundEmitterObject_is_null);
    func_?(&StringLiteral_audioSource_for_soundEmitterObje);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_audioSource_for_soundEmitterObje,(MethodInfo *)0x0);
      return;
    }
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (((pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
        (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar3,(Object *)StringLiteral_volume,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), this_00 != (AudioSource *)0x0)) && (TVar4.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar5 = (float *)func_?();
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,*pfVar5,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._.data;
        if ((pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
           (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar3,(Object *)StringLiteral_pitch,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), TVar4.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar5 = (float *)func_?(TVar4.m_Index);
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (this_00,*pfVar5,(MethodInfo *)0x0);
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_spatialBlend
                    (this_00,0.0,(MethodInfo *)0x0);
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (this_00,1,(MethodInfo *)0x0);
          bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (this_00,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return;
          }
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (this_00,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(TVar4.m_Index,TypeInfo__System__Single);
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVGlobalSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
               (MVGlobalSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SoundEmitterObject);
    func_?(&TypeInfo__SoundLoader);
    cRam_? = '\x01';
  }
  this_00 = (SoundLoader *)func_?(TypeInfo__SoundLoader);
  SoundLoader::SoundLoader__ctor(this_00,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields).soundLoader;
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
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
              ((MVLogicObject *)this,data,
               (ObjectPrefab *)(pPVar2->fields).mvGloablSoundEmitterPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8008000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 & 0xffffdfff;
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

