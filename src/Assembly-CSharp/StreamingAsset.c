
/* Void ClearCache() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_ClearCache(MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffa8;
  puVar6 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  iStack_7 = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_9 = (undefined4 *)&stack0xffffffa8;
  puStack_5 = &stack0xffffffa8;
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xffffffa8, puStack_5 = &stack0xffffffa8,
     (TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xffffffa8;
    puStack_5 = &stack0xffffffa8;
    func_?(TypeInfo__StreamingAsset);
  }
  this = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
  if (this != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_11,(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this,
                        MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__GetEnumerator__
                       );
    CStack_8.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar10->hashset;
    CStack_8.monitor = (MonitorData *)pHVar10->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar10->stamp;
    CStack_8.fields.syncRoot = (Object *)pHVar10->current;
    uStack_2 = 0;
    while( true ) {
      uStack_1 = 0;
      cVar12 = func_?();
      if (cVar12 == '\0') break;
      www = (UnityWebRequest *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      (&CStack_8,
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<UnityEngine::Networking::UnityWebRequest>__get_Current__
                      );
      uStack_1 = 1;
      this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
                DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                          (www,(MethodInfo *)0x0);
      if (this_00 == (AssetBundle *)0x0) goto code_?;
      UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                (this_00,1,(MethodInfo *)0x0);
    }
    *puStack_9 = 0x65;
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    func_?(&CStack_8,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<UnityEngine::Networking::UnityWebRequest>__Dispose__
                   );
    iVar13 = iStack_7;
    if (iStack_7 != 0) goto code_?;
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?(TypeInfo__StreamingAsset);
    }
    pHVar14 = (HashSet_1_UnityEngine_Vector3_ *)
             TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
    if (pHVar14 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (pHVar14,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Clear__
                );
      pHVar14 = (HashSet_1_UnityEngine_Vector3_ *)
               TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
      if (pHVar14 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__TrimExcess
                  (pHVar14,
                   MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                  );
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
    }
  }
code_?:
  func_?(0);
  auStack_15[0] = *unaff_ESI;
  iVar13 = func_?(auStack_15,&UNK_?);
code_?:
  func_?(iVar13,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* String DBUrlToServerUrl(String) */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DBUrlToServerUrl
                   (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (url != (String *)0x0) {
    length = mscorlib.dll::System::String::String_LastIndexOf(url,0x2f,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(url,0,length,(MethodInfo *)0x0);
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)url,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (url,length,(int)pIVar2 - length,(MethodInfo *)0x0);
    if (pSVar3 != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* IEnumerator DelayedUnload(UnityWebRequest) */

IEnumerator *
Assembly-CSharp.dll::StreamingAsset::StreamingAsset_DelayedUnload
          (UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__StreamingAsset___DelayedUnload_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = www;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Download_Cached(String, UnityAction) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_Cached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->fields).onAssetSetAction = pUVar1;
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?();
  }
  url = (String *)0x0;
  pSVar5 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    url = (String *)&UNK_?;
    func_?();
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_2(pSVar5,url,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  this_00 = (AssetBundleRequest *)func_?();
  AssetBundleRequest::AssetBundleRequest__ctor
            (this_00,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Download_NonCached(String, UnityAction) */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_Download_NonCached
               (StreamingAsset *this,String *url,UnityAction *onAssetSetAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->fields).onAssetSetAction = pUVar1;
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?();
  }
  url = (String *)0x0;
  pSVar5 = StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    url = (String *)&UNK_?;
    func_?();
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_2(pSVar5,url,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  this_00 = (AssetBundleRequest *)func_?();
  AssetBundleRequest::AssetBundleRequest__ctor
            (this_00,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset_OnDestroy
               (StreamingAsset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onAssetSetAction;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).__unknown_1.methodPtr,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->fields).onAssetSetAction = pUVar1;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
  return;
}


/* Object UnpackBundle[Object](UnityWebRequest) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle
                   (UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
      DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent(www,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (x != (AssetBundle *)0x0) {
      iVar2 = (*(code *)method->parameters[1]->data)(x);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (iVar3 != 0) {
          if (1 < iVar3) {
            if (www == (UnityWebRequest *)0x0) goto code_?;
            pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                     ::UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar4 = mscorlib.dll::System::String::String_Concat_2
                               (pSVar4,StringLiteral_u000AThere_are_multiple_objects_in_b,
                                (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)pSVar4,(MethodInfo *)0x0);
            iVar3 = *(int *)(iVar2 + 0xc);
          }
          if (iVar3 != 0) {
            return *(Object **)(iVar2 + 0x10);
          }
          goto code_?;
        }
        if (www != (UnityWebRequest *)0x0) {
          pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                   UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Attempt_to_extract_bundle__,pSVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Download_failed__Asset_is_null_a,(MethodInfo *)0x0);
          ppIVar5 = method->parameters;
          goto code_?;
        }
      }
    }
  }
  else if (www != (UnityWebRequest *)0x0) {
    pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Attempt_to_extract_bundle__,pSVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Unable_to_extract_asset_bundle_f,(MethodInfo *)0x0);
    ppIVar5 = ppIRam00000018;
code_?:
    pIStack6 = *ppIVar5;
    if ((pIStack6[0x17].type & 1) == 0) {
      func_?();
    }
    return (Object *)0x0;
  }
code_?:
  func_?();
code_?:
  uStack7 = 0;
  uStack8 = 0;
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pOVar10 = (Object *)(*pcVar9)();
  return pOVar10;
}


/* Sprite UnpackBundle_Cached[Sprite](UnityWebRequest) */

Sprite * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_Cached_3
                   (UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?(TypeInfo__StreamingAsset);
    }
    pSVar1 = (Sprite *)(*(code *)(*method->parameters)->data)(www,*method->parameters);
    this = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
    if (this != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                (this,www,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Add_UnityEngine__Networking__UnityWebRequest_
                );
      return pSVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (Sprite *)(*pcVar2)();
  return pSVar1;
}


/* Object UnpackBundle_NonCached[Object](UnityWebRequest, MonoBehaviour) */

Object * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_UnpackBundle_NonCached
                   (UnityWebRequest *www,MonoBehaviour *coroutineHost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamingAsset);
  }
  pOVar1 = (Object *)(*(code *)(*method->parameters)->data)(www,*method->parameters);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__HashSet__
            );
  TypeInfo__StreamingAsset->static_fields->cachedAssetBundles =
       (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this;
  TypeInfo__StreamingAsset->static_fields->assetBundleUrl = (String *)0x0;
  return;
}


/* StreamingAsset() */

void Assembly-CSharp.dll::StreamingAsset::StreamingAsset__ctor
               (StreamingAsset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).url = StringLiteral_NOT_SET;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* String get_AssetBundleUrl() */

String * Assembly-CSharp.dll::StreamingAsset::StreamingAsset_get_AssetBundleUrl(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamingAsset);
  }
  if (TypeInfo__StreamingAsset->static_fields->assetBundleUrl == (String *)0x0) {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar1,StringLiteral_AssetBundles_,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?(TypeInfo__StreamingAsset);
    }
    TypeInfo__StreamingAsset->static_fields->assetBundleUrl = pSVar1;
  }
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamingAsset);
    return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
  }
  return TypeInfo__StreamingAsset->static_fields->assetBundleUrl;
}

