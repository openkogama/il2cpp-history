
/* Void ClearCache() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_ClearCache(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                   );
    func_?(&TypeInfo__StreamingAsset);
    cRam_? = '\x01';
  }
  UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_UnloadAllAssetBundles
            (1,(MethodInfo *)0x0);
  if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pHVar1 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
  if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Clear__
              );
    pHVar1 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
    if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__TrimExcess
                ((HashSet_1_System_Object_ *)pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                );
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String DBUrlToServerUrl(String) */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DBUrlToServerUrl
                   (String *url,MethodInfo *method)

{
  if (url != (String *)0x0) {
    length = mscorlib.dll::System::String::String_LastIndexOf(url,0x2f,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(url,0,length,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                       (url,length,(url->fields)._stringLength - length,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar2,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* IEnumerator DelayedUnload(UnityWebRequest) */

IEnumerator *
Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DelayedUnload
          (UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamingAsset___DelayedUnload_d__11);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__StreamingAsset___DelayedUnload_d__11;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)www;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,www);
  return (IEnumerator *)value;
}


/* Void Download_Cached(String, UnityAction) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_Cached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&TypeInfo__StreamingAsset);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
code_?:
    func_?();
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,(String *)0x0,(MethodInfo *)0x0);
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0);
    this_02 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_02,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
    return;
  }
  pUVar3 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar3 = pUVar1;
  }
  if (pUVar3 != (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Download_NonCached(String, UnityAction) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_NonCached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AssetBundleRequest);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__StreamingAsset);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
code_?:
    func_?();
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,(String *)0x0,(MethodInfo *)0x0);
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0);
    this_02 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_02,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
    return;
  }
  pUVar3 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar3 = pUVar1;
  }
  if (pUVar3 != (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_OnDestroy
               (StreamingAsset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUStack2 = (UnityAction__Class *)0x0;
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)0x0;
code_?:
    func_?();
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUStack2 = (UnityAction__Class *)pUVar1;
  }
  if (pUStack2 != (UnityAction__Class *)0x0) {
    (this->fields).onAssetSetAction = (UnityAction *)pUStack2;
    pUStack2 = (UnityAction__Class *)(UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUStack2 = (UnityAction__Class *)pUVar1;
    }
    if (pUStack2 != (UnityAction__Class *)0x0) goto code_?;
  }
  pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Object UnpackBundle[Object](UnityWebRequest) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle
                   (UnityWebRequest *www,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Asset_download_failed__Most_like);
    func_?(&StringLiteral_u000AThere_are_multiple_objects_in_b);
    func_?(&StringLiteral_Unable_to_extract_asset_bundle_f);
    func_?(&StringLiteral_Attempt_to_extract_bundle__);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
         DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent(www,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this != (AssetBundle *)0x0) {
      pOVar2 = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
               AssetBundle_LoadAllAssets_1(this,(method->field7_0x1c).rgctx_data[1].method);
      if (pOVar2 != (Object__Array *)0x0) {
        if (pOVar2->max_length != 0) {
          if (1 < (int)pOVar2->max_length) {
            if (www == (UnityWebRequest *)0x0) goto code_?;
            pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                     ::UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
            str2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (pSVar3,StringLiteral_u000AThere_are_multiple_objects_in_b,str2,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)pSVar3,(MethodInfo *)0x0);
          }
          if (pOVar2->max_length != 0) {
            return pOVar2->vector[0];
          }
          goto code_?;
        }
        if (www != (UnityWebRequest *)0x0) {
          pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Attempt_to_extract_bundle__,pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Asset_download_failed__Most_like,pSVar3,
                              (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          return (Object *)0x0;
        }
      }
    }
  }
  else if (www != (UnityWebRequest *)0x0) {
    pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Attempt_to_extract_bundle__,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unable_to_extract_asset_bundle_f,(MethodInfo *)0x0);
    return (Object *)0x0;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar4)();
  return pOVar5;
}


/* Object UnpackBundle_Cached[Object](UnityWebRequest) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_Cached
                   (UnityWebRequest *www,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Add_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if (www != (UnityWebRequest *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StreamingAsset);
    }
    pOVar1 = StreamingAsset_UnpackBundle(www,((method->field7_0x1c).rgctx_data)->method);
    this = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
    if (this != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Object_ *)this,(Object *)www,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Add_UnityEngine__Networking__UnityWebRequest_
                );
      return pOVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object UnpackBundle_NonCached[Object](UnityWebRequest, MonoBehaviour) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_NonCached
                   (UnityWebRequest *www,MonoBehaviour *coroutineHost,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__StreamingAsset);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StreamingAsset);
  }
  pOVar1 = StreamingAsset_UnpackBundle(www,((method->field7_0x1c).rgctx_data)->method);
  routine = StreamingAsset_DelayedUnload(www,(MethodInfo *)0x0);
  if (coroutineHost != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              (coroutineHost,routine,(MethodInfo *)0x0);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* StreamingAsset() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__HashSet__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>
                   );
    func_?(&TypeInfo__StreamingAsset);
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__HashSet__
            );
  TypeInfo__StreamingAsset->static_fields->cachedAssetBundles = this;
  func_?(TypeInfo__StreamingAsset->static_fields,this);
  TypeInfo__StreamingAsset->static_fields->assetBundleUrl = (String *)0x0;
  func_?(&TypeInfo__StreamingAsset->static_fields->assetBundleUrl,0);
  return;
}


/* StreamingAsset() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset__ctor
               (StreamingAsset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_NOT_SET);
    cRam_? = '\x01';
  }
  (this->fields).url = StringLiteral_NOT_SET;
  func_?(&(this->fields).url,StringLiteral_NOT_SET);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* String get_AssetBundleUrl() */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_get_AssetBundleUrl(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamingAsset);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_AssetBundles_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StreamingAsset);
  }
  if (TypeInfo__StreamingAsset->static_fields->assetBundleUrl == (String *)0x0) {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar1,StringLiteral_AssetBundles_,(MethodInfo *)0x0);
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__StreamingAsset->static_fields->assetBundleUrl = pSVar1;
    func_?();
  }
  if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StreamingAsset);
    return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
  }
  return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
}

