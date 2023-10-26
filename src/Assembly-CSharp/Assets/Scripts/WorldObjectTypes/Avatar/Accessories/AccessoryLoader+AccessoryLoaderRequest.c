
/* Void Callback(UnityWebRequest) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Callback
               (AccessoryLoader_AccessoryLoaderRequest *this,UnityWebRequest *www,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AccessoryBackAccessoriesSettings);
    func_?(&TypeRef__AccessoryHatSettings);
    func_?(&TypeRef__AccessoryParticlesSettings);
    func_?(&
                    AvatarAccessoryBackAccessories_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryBackAccessories>__
                   );
    func_?(&
                    AvatarAccessoryHat_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryHat>__
                   );
    func_?(&
                    AvatarAccessoryParticles_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryParticles>__
                   );
    func_?(&
                    AccessorySettings_MethodInfo__UnityEngine__GameObject__GetComponent<AccessorySettings>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::GameObject>_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
code_?:
    func_?();
  }
  else {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                       (www,
                        UnityEngine__GameObject_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::GameObject>_UnityEngine__Networking__UnityWebRequest_
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (pOVar3,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    if (this_00 == (GameObject *)0x0) goto code_?;
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   AccessorySettings_MethodInfo__UnityEngine__GameObject__GetComponent<AccessorySettings>__
                  );
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    if (x == (Object_1 *)0x0) goto code_?;
    pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryHatSettings;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar4,(Object **)pTVar6,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryHat_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryHat>__;
    if (bVar2 != 0) {
code_?:
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_00,method_00);
      if (pOVar3 != (Object *)0x0) {
        (*(code *)pOVar3->klass[1]._0.fields)();
        if (method_00->name != (char *)0x0) {
          (**(code **)(method_00->name + 0xc))();
          method_00->name = (char *)0x0;
          func_?(&method_00->name,0);
        }
        return;
      }
      goto code_?;
    }
    mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryParticlesSettings;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar4,(Object **)pTVar4,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryParticles_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryParticles>__
    ;
    if (bVar2 != 0) goto code_?;
    pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryBackAccessoriesSettings;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar4,(Object **)pTVar6,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryBackAccessories_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryBackAccessories>__
    ;
    if (bVar2 != 0) goto code_?;
  }
  func_?();
  pEVar7 = (Exception *)func_?();
  func_?(pEVar7);
  pSVar1 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar1,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pEVar7 = (Exception *)func_?();
  func_?();
  pSVar1 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar1,(MethodInfo *)0x0);
  uStack8 = func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void LoadAccessory() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
                   );
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__StreamingAsset);
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
    if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
               ,(MethodInfo *)0x0);
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
    if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
                 ,(MethodInfo *)0x0);
      pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
             (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      }
      else {
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
        if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      func_?();
      if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar5,(this->fields).subUrl,(MethodInfo *)0x0);
      pSVar5 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar5,(MethodInfo *)0x0);
      this_00 = (Action_1_Object_ *)func_?();
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_01 = (AssetBundleRequest *)func_?(TypeInfo__CachedAssetBundleRequest);
        if (this_01 != (AssetBundleRequest *)0x0) {
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_01,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                     WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Remove
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    cRam_? = '\x01';
  }
  (this->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
  func_?(&(this->fields).accessoryCreatedCallback,0);
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
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

