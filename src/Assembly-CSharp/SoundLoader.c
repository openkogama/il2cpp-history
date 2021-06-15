
/* Void Destroy() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_Destroy(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (soundUrl != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)soundUrl,(MethodInfo *)0x0);
    if (pIVar1 == (IList_1_VoxelHit_ *)0x0) {
      pSVar2 = (this->fields).currentUrl;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Could_not_find_asset_info_for_au,pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?(TypeInfo__StreamingAsset);
    }
    pSVar2 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2(pSVar2,soundUrl,(MethodInfo *)0x0);
    pSVar2 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar2,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    this_00 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_00,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LoadSound() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_LoadSound(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).url;
  b = (this->fields).currentUrl;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,b,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar3 = (this->fields).audioSource;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((this->fields).callback != (SoundLoader_UpdateSoundCallback *)0x0) {
      if (*(SoundLoader_UpdateSoundCallback **)(in_stack_4 + 0x2c) !=
          (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (*(SoundLoader_UpdateSoundCallback **)(in_stack_4 + 0x2c),in_stack_5
                  );
      }
      this_00 = *(MethodInfo **)(in_stack_4 + 0x14);
      pcVar6 = *(code **)(in_stack_4 + 8);
      piVar7 = *(int **)(in_stack_4 + 0x10);
      pMStack8 = this_00;
      if (this_00->flags == 0xffff) {
        func_?(this_00,method);
      }
      cVar9 = func_?(this_00);
      if (cVar9 == '\0') {
        if ((char)this_00->iflags == '\0') {
          (*pcVar6)();
          return;
        }
      }
      else if ((this_00->flags != 0xffff) &&
              (((piVar7 == (int *)0x0 || ((*(uint *)(*piVar7 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(in_stack_4 + 0xc) != 0)))) {
        cVar9 = func_?(piVar7);
        if (cVar9 != '\0') {
          return;
        }
        method_00 = this_00;
        cVar9 = func_?();
        pOVar10 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00
                            );
        cVar11 = func_?(pOVar10);
        if (cVar9 == '\0') {
          if (cVar11 != '\0') {
            mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
            Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                      ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                       in_stack_12);
            func_?(this_00->flags);
            return;
          }
          func_?(this_00->flags);
          return;
        }
        if (cVar11 == '\0') {
          puVar13 = (undefined4 *)
                    func_?(*(undefined4 *)(*piVar7 + 0xc4 + (uint)this_00->flags * 8));
          (*(code *)*puVar13)(piVar7,puVar13);
          return;
        }
        uVar14 = 0;
        uVar15 = *(ushort *)(*piVar7 + 0xb6);
        if (uVar15 != 0) {
          do {
            if (*(char **)(*(int *)(*piVar7 + 0x58) + (uint)uVar14 * 8) == this_00->name) {
              iVar16 = *piVar7 + (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar14 * 8) +
                                 pMStack8->flags + 0x18) * 8;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        iVar16 = func_?(piVar7,this_00->name);
code_?:
        puVar13 = (undefined4 *)func_?(*(undefined4 *)(iVar16 + 4));
        (*(code *)*puVar13)(piVar7,puVar13);
        return;
      }
      (*pcVar6)(piVar7,this_00);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    bVar2 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pUVar17 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pUVar18 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar18,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
      pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar17,(Delegate *)pUVar18,(MethodInfo *)0x0);
      pUVar17 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar19 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        if (pUVar19->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar17 = pUVar19;
        }
        if (pUVar17 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar17;
      return;
    }
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar17 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar18 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar18,(Object *)this,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar17,(Delegate *)pUVar18,(MethodInfo *)0x0);
    pUVar17 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar19 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar19->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar17 = pUVar19;
      }
      if (pUVar17 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar17;
    pAVar3 = (this->fields).audioSource;
    if (pAVar3 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
code_?:
        pSVar1 = (this->fields).url;
        (this->fields).currentUrl = pSVar1;
        SoundLoader_Download(this,pSVar1,(MethodInfo *)0x0);
        return;
      }
      pAVar3 = (this->fields).audioSource;
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::SoundLoader::SoundLoader_OnDownloadFinished
               (SoundLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Failed_to_download__www_error__,pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pAVar3 = (this->fields).audioSource;
    if (pAVar3 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar3,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pAVar3 = (this->fields).audioSource;
        if (pAVar3 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar3,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
        func_?();
      }
      value = (AudioClip *)
              StreamingAsset::StreamingAsset_UnpackBundle_Cached_3
                        (www,
                         UnityEngine__AudioClip_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::AudioClip>_UnityEngine__Networking__UnityWebRequest_
                        );
      pAVar3 = (this->fields).audioSource;
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (pAVar3,value,(MethodInfo *)0x0);
        this_00 = (this->fields).callback;
        if (this_00 != (SoundLoader_UpdateSoundCallback *)0x0) {
          SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                    (this_00,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?,0);
        func_?(uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    this_01 = (this->fields).callback;
    if (this_01 != (SoundLoader_UpdateSoundCallback *)0x0) {
      SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                (this_01,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SoundLoader() */

void Assembly-CSharp.dll::SoundLoader::SoundLoader__ctor(SoundLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).currentUrl = TypeInfo__System__String->static_fields->Empty;
  (this->fields).url = TypeInfo__System__String->static_fields->Empty;
  return;
}

