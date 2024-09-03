
/* Void DownloadWhenPossible() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__DownloadWhenPossible
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,method->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
  else {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,method->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      onAssetSetAction = (this->fields)._.onAssetSetAction;
      url = (this->fields)._.url;
      if ((this->fields).useCache == 0) {
        StreamingAsset::StreamingAsset_Download_NonCached
                  ((StreamingAsset *)this,url,onAssetSetAction,(MethodInfo *)0x0);
        return;
      }
      StreamingAsset::StreamingAsset_Download_Cached
                ((StreamingAsset *)this,url,onAssetSetAction,(MethodInfo *)0x0);
      return;
    }
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__OnDestroy
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (this == (StreamingAsset_2_System_Object_System_Object_ *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar3 = (this->fields)._.onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,(this->klass->vtable).OnDownloadFinished.methodPtr,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pUStack4 = (UnityAction__Class *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
    (this->fields)._.onAssetSetAction = (UnityAction *)0x0;
code_?:
    func_?();
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUStack4 = (UnityAction__Class *)pUVar3;
  }
  if (pUStack4 != (UnityAction__Class *)0x0) {
    (this->fields)._.onAssetSetAction = (UnityAction *)pUStack4;
    pUStack4 = (UnityAction__Class *)(UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUStack4 = (UnityAction__Class *)pUVar3;
    }
    if (pUStack4 != (UnityAction__Class *)0x0) goto code_?;
  }
  pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__OnDownloadFinished
               (StreamingAsset_2_System_Object_System_Object_ *this,UnityWebRequest *www,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamingAsset);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).useCache == 0) {
        if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar2 = StreamingAsset::StreamingAsset_UnpackBundle_NonCached
                           (www,(MonoBehaviour *)this,method->klass->rgctx_data[3].method);
        (this->fields).asset = pOVar2;
        func_?(&(this->fields).asset);
      }
      else {
        if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar2 = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                           (www,method->klass->rgctx_data[5].method);
        (this->fields).asset = pOVar2;
        func_?(&(this->fields).asset);
      }
      if ((this->fields)._.onAssetSetAction != (UnityAction *)0x0) {
        (*(((this->fields)._.onAssetSetAction)->fields)._._.invoke_impl)();
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__Start
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_StreamedAsset_is_missing_a_refer);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty((this->fields)._.url,(MethodInfo *)0x0)
  ;
  if (bVar1 == 0) {
    StreamingAsset_2_System_Object_System_Object__DownloadWhenPossible
              (this,method->klass->rgctx_data[2].method);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_StreamedAsset_is_missing_a_refer,(MethodInfo *)0x0);
  return;
}


/* StreamingAsset`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object___ctor
               (StreamingAsset_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamingAsset);
    cRam_? = '\x01';
  }
  (this->fields).useCache = 1;
  if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StreamingAsset);
  }
  StreamingAsset::StreamingAsset__ctor((StreamingAsset *)this,(MethodInfo *)0x0);
  return;
}


/* Object op_Implicit(StreamingAsset`2[System.Object,System.Object]) */

Object * Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
         StreamingAsset_2_System_Object_System_Object__op_Implicit
                   (StreamingAsset_2_System_Object_System_Object_ *a,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (a != (StreamingAsset_2_System_Object_System_Object_ *)0x0) {
    return (a->fields).asset;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar4)();
  return pOVar5;
}


/* Void set_Asset(Object) */

void Assembly-CSharp.dll::StreamingAsset`2[System::Object,System::Object]::
     StreamingAsset_2_System_Object_System_Object__set_Asset
               (StreamingAsset_2_System_Object_System_Object_ *this,Object *value,MethodInfo *method
               )

{
  (this->fields).asset = value;
  func_?(&(this->fields).asset,value);
  if ((this->fields)._.onAssetSetAction != (UnityAction *)0x0) {
    pUVar1 = (this->fields)._.onAssetSetAction;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}

