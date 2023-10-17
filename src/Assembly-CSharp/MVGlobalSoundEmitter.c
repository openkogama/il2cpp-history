
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
  (pSVar2->fields).audioSource = (pSVar1->fields).audioSource;
  func_?(&(pSVar2->fields).audioSource);
  pSVar2 = (this->fields).soundLoader;
  this_01 = (SoundLoader_UpdateSoundCallback *)
            func_?(TypeInfo__SoundLoader__UpdateSoundCallback);
  if ((this_01 == (SoundLoader_UpdateSoundCallback *)0x0) ||
     (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)this,
                 MethodInfo__MVGlobalSoundEmitter__UpdateSound__,(MethodInfo *)0x0),
     pSVar2 == (SoundLoader *)0x0)) goto code_?;
  (pSVar2->fields).callback = this_01;
  func_?();
  pSVar1 = (this->fields).soundEmitterObject;
  if (pSVar1 == (SoundEmitterObject *)0x0) goto code_?;
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(pSVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
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
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pOVar5 = (Object *)0x0;
  if ((String__Class *)pOVar4->klass == TypeInfo__System__String) {
    pOVar5 = pOVar4;
  }
  if ((int)pOVar5[1].klass < 1) {
    return;
  }
  pDVar3 = (this->fields)._._._.data;
  pSVar2 = (this->fields).soundLoader;
  if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pSVar7 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar3,(Object *)StringLiteral_url,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
  pSVar8 = (String *)0x0;
  if (pSVar7 != (String *)0x0) {
    if (pSVar7->klass == TypeInfo__System__String) {
      pSVar8 = pSVar7;
    }
    if (pSVar8 == (String *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (pSVar2->fields).url = pSVar8;
  func_?();
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar9 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)in_stack_10[1].monitor,(String *)in_stack_10[1].klass,
                     (MethodInfo *)0x0);
  if (bVar9 == 0) {
    pOVar11 = in_stack_10[2].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      return;
    }
    if (in_stack_10[2].monitor != (MonitorData *)0x0) {
      (**(code **)(in_stack_10[2].monitor + 0xc))();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar9 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar13 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,in_stack_10,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0)
        ;
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
        if (in_stack_10[2].klass != (Object__Class *)0x0) {
          bVar9 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            ((AudioSource *)in_stack_10[2].klass,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            if (in_stack_10[2].klass == (Object__Class *)0x0) goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                      ((AudioSource *)in_stack_10[2].klass,(MethodInfo *)0x0);
          }
          in_stack_10[1].klass = (Object__Class *)in_stack_10[1].monitor;
          func_?();
          pOVar11 = in_stack_10[1].klass;
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
          if (pOVar11 != (Object__Class *)0x0) {
            if (((String__Fields *)&(pOVar11->_0).name)->_stringLength == 0) {
              pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_Could_not_find_asset_info_for_au,
                                  (String *)in_stack_10[1].klass,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)pSVar7,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar7 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                               (pSVar7,(String *)pOVar11,(MethodInfo *)0x0);
            pSVar7 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar7,(MethodInfo *)0x0);
            pAVar15 = (Action_1_Object_ *)func_?();
            if (pAVar15 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (pAVar15,in_stack_10,
                         MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                        ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar15,
                         (MethodInfo *)0x0);
              pAVar15 = (Action_1_Object_ *)func_?();
              if (pAVar15 != (Action_1_Object_ *)0x0) {
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (pAVar15,in_stack_10,
                           MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                this_02 = (AssetBundleRequest *)func_?();
                if (this_02 != (AssetBundleRequest *)0x0) {
                  AssetBundleRequest::AssetBundleRequest__ctor
                            (this_02,pSVar7,
                             (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar15,
                             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0)
                  ;
                  AsyncWWWManager::AsyncWWWManager_WWWRequest
                            ((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
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
    pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar13 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,in_stack_10,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_url,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 == (Object *)0x0)) goto code_?;
  pOVar3 = (Object *)0x0;
  if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
    pOVar3 = pOVar2;
  }
  if (pOVar3 == (Object *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar3 = (Object *)0x0;
  if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
    pOVar3 = pOVar2;
  }
  pDVar1 = (this->fields)._._._.data;
  if ((int)pOVar3[1].klass < 1) {
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar2 == (Object *)0x0)) goto code_?;
    pOVar3 = (Object *)0x0;
    if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
      pOVar3 = pOVar2;
    }
    if (pOVar3 == (Object *)0x0) goto code_?;
    pOVar3 = (Object *)0x0;
    if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
      pOVar3 = pOVar2;
    }
    if (0 < (int)pOVar3[1].klass) {
      return;
    }
    pDVar1 = (this->fields)._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (pDVar1,(Object *)StringLiteral_url,
               (Object *)StringLiteral_AmbientAudio_Music_slowstones_un,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    pDVar1 = (this->fields)._._._.data;
    pSVar5 = (this->fields).soundLoader;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pSVar6 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar5 == (SoundLoader *)0x0)) goto code_?;
    pSVar7 = (String *)0x0;
    if (pSVar6 != (String *)0x0) {
      if (pSVar6->klass == TypeInfo__System__String) {
        pSVar7 = pSVar6;
      }
      goto joined_?;
    }
  }
  else {
    pSVar5 = (this->fields).soundLoader;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pSVar6 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar5 == (SoundLoader *)0x0)) goto code_?;
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
  (pSVar5->fields).url = pSVar7;
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
          bVar8 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            ((AudioSource *)in_stack_9[2].klass,(MethodInfo *)0x0);
          if (bVar8 != 0) {
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
                this_00 = (AssetBundleRequest *)func_?();
                if (this_00 != (AssetBundleRequest *)0x0) {
                  AssetBundleRequest::AssetBundleRequest__ctor
                            (this_00,pSVar6,
                             (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar14,
                             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0)
                  ;
                  AsyncWWWManager::AsyncWWWManager_WWWRequest
                            ((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar5 = (float *)func_?();
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,*pfVar5,(MethodInfo *)0x0);
        pDVar3 = (this->fields)._._._.data;
        if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar3,(Object *)StringLiteral_pitch,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar4 == (Object *)0x0)) goto code_?;
        if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar5 = (float *)func_?(pOVar4);
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
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (this_00,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(pOVar4,TypeInfo__System__Single);
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
                ((MVLogicObject *)this,data,
                 (ObjectPrefab *)(pPVar1->fields).mvGloablSoundEmitterPrefab,worldObjects,
                 (MethodInfo *)0x0);
      piVar2 = &(this->fields)._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 | 0x8008000;
      piVar2 = &(this->fields)._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 & 0xffffdfff;
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
Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_get_DocumentationType
          (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter;
}

