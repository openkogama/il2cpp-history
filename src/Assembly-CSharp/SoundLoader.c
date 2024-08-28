
/* Void Destroy() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_Destroy(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Download(String) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_Download
               (SoundLoader *this,String *soundUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    func_?(&StringLiteral_Could_not_find_asset_info_for_au);
    cRam_? = '\x01';
  }
  if (soundUrl != (String *)0x0) {
    if ((soundUrl->fields)._stringLength == 0) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Could_not_find_asset_info_for_au,(this->fields).currentUrl,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StreamingAsset);
    }
    pSVar1 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,soundUrl,(MethodInfo *)0x0);
    StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar1,(MethodInfo *)0x0);
    pDVar2 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar2,(Object *)this,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar2,(MethodInfo *)0x0);
    pDVar2 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar2,(Object *)this,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    this_00 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_00,(String *)pDVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar2,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LoadSound() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_LoadSound(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&MethodInfo__SoundLoader__LoadSound__);
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    ((this->fields).url,(this->fields).currentUrl,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pAVar2 = (this->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pSVar3 = (this->fields).callback;
    if (pSVar3 != (SoundLoader_UpdateSoundCallback *)0x0) {
      (*(pSVar3->fields)._._.invoke_impl)();
      return;
    }
code_?:
    func_?();
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pUVar4 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
             (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      }
      else {
        pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar6 = pUVar4;
        }
        if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar6;
        pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar6 = pUVar4;
        }
        if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      func_?();
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pAVar2 = (this->fields).audioSource;
          if (pAVar2 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (pAVar2,(MethodInfo *)0x0);
        }
        pSVar7 = &this->fields;
        pSVar7->currentUrl = (this->fields).url;
        func_?();
        pSVar8 = pSVar7->currentUrl;
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
        if (pSVar8 != (String *)0x0) {
          if ((pSVar8->fields)._stringLength != 0) {
            if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            str0 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
            pSVar8 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar8,(MethodInfo *)0x0);
            StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar8,(MethodInfo *)0x0);
            pDVar9 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar9,(Object *)this,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                      ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar9,(MethodInfo *)0x0
                      );
            pDVar9 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (pDVar9,(Object *)this,
                       MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_00 = (AssetBundleRequest *)func_?();
            AssetBundleRequest::AssetBundleRequest__ctor
                      (this_00,(String *)0x0,
                       (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar9,
                       WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
            AsyncWWWManager::AsyncWWWManager_WWWRequest
                      ((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
            return;
          }
          pSVar8 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Could_not_find_asset_info_for_au,pSVar7->currentUrl,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar4 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar6 = pUVar4;
    }
    if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar6;
    pUVar6 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar6 = pUVar4;
    }
    if (pUVar6 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_OnDownloadFinished
               (SoundLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__AudioClip_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::AudioClip>_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    func_?(&StringLiteral_Failed_to_download__www_error__);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Failed_to_download__www_error__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    if (*(AudioSource **)(unaff_EDI + 0x10) != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (*(AudioSource **)(unaff_EDI + 0x10),(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*(AudioSource **)(unaff_EDI + 0x10) == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                  (*(AudioSource **)(unaff_EDI + 0x10),(MethodInfo *)0x0);
      }
      if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (AudioClip *)
              StreamingAsset::StreamingAsset_UnpackBundle_Cached
                        (www,
                         UnityEngine__AudioClip_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::AudioClip>_UnityEngine__Networking__UnityWebRequest_
                        );
      if (*(AudioSource **)(unaff_EDI + 0x10) != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (*(AudioSource **)(unaff_EDI + 0x10),value,(MethodInfo *)0x0);
        iVar3 = *(int *)(unaff_EDI + 0x14);
        if (iVar3 != 0) {
          uStack4 = *(undefined4 *)(iVar3 + 0x14);
          uStack5 = *(undefined4 *)(iVar3 + 0x20);
          (**(code **)(iVar3 + 0xc))();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StopAndDestroySound() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_StopAndDestroySound
               (SoundLoader *this,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this->fields).audioSource != (AudioSource *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      uStack2 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSound(AudioClip) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_UpdateSound
               (SoundLoader *this,AudioClip *clip,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (this_00,clip,(MethodInfo *)0x0);
    pSVar1 = (this->fields).callback;
    if (pSVar1 != (SoundLoader_UpdateSoundCallback *)0x0) {
      (*(pSVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SoundLoader() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader__ctor(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).currentUrl = ::StringLiteral__;
  func_?(&this->fields,::StringLiteral__);
  method_00 = (MethodInfo *)&(this->fields).url;
  *(String **)method_00 = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

