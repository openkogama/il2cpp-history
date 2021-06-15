
/* Void Callback(UnityWebRequest) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Callback
               (AccessoryLoader_AccessoryLoaderRequest *this,UnityWebRequest *www,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
code_?:
    func_?();
  }
  else {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar3 = (XpBoostParticlePreviewer *)
             StreamingAsset::StreamingAsset_UnpackBundle_Cached_3
                       (www,
                        UnityEngine__GameObject_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::GameObject>_UnityEngine__Networking__UnityWebRequest_
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (pXVar3 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)pXVar3,
                   AccessorySettings_MethodInfo__UnityEngine__GameObject__GetComponent<AccessorySettings>__
                  );
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_01 = (IsolatedStorageException *)func_?();
      pSVar1 = StringLiteral_AvatarAccessory_settings_not_fou;
      goto code_?;
    }
    if (x == (UseInteractorHandler *)0x0) goto code_?;
    pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryHatSettings;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryHat_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryHat>__;
    if (pTVar4 == pTVar6) {
code_?:
      arg2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       ((GameObject *)pXVar3,method_00);
      if (arg2 != (Worker *)0x0) {
        (*(code *)arg2->klass[1]._0.events)();
        this_00 = *(Action_2_Int32_Object_ **)&(x->fields)._.findWorldObjectParent;
        if (this_00 != (Action_2_Int32_Object_ *)0x0) {
          System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                    (this_00,(int32_t)(x->fields)._._._._._.m_CachedPtr,(Object *)arg2,
                     MethodInfo__System__Action<int,_AvatarAccessory>__Invoke_int__AvatarAccessory_)
          ;
          *(undefined4 *)&(x->fields)._.findWorldObjectParent = 0;
        }
        return;
      }
      goto code_?;
    }
    pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryParticlesSettings;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryParticles_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryParticles>__
    ;
    if (pTVar4 == pTVar6) goto code_?;
    pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)x,(MethodInfo *)0x0);
    pIVar5 = TypeRef__AccessoryBackAccessoriesSettings;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    method_00 = 
    AvatarAccessoryBackAccessories_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryBackAccessories>__
    ;
    if (pTVar4 == pTVar6) goto code_?;
  }
  this_01 = (IsolatedStorageException *)func_?();
  pSVar1 = StringLiteral_Unknown_settings;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void LoadAccessory() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
               ,(MethodInfo *)0x0);
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar4 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar2 = pUVar4;
      }
      if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
    if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
      func_?();
    }
    str0 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar5 = (this->fields).subUrl;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_2(str0,pSVar5,(MethodInfo *)0x0);
    pSVar5 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar5,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    this_00 = (AssetBundleRequest *)func_?();
    AssetBundleRequest::AssetBundleRequest__ctor
              (this_00,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,
             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
             ,(MethodInfo *)0x0);
  pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
  pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
  if (pUVar4 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if (pUVar4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar2 = pUVar4;
    }
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Remove
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
             ,
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

