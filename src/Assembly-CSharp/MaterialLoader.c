
/* Void Awake() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Awake
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).cubeModelMaterialHigh;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this->fields).cubeModelMaterialHigh = (Material *)pXVar1;
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)(this->fields).cubeModelMaterialLow,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this->fields).cubeModelMaterialLow = (Material *)pXVar1;
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)(this->fields).cubeModelMaterialMobile,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  tex = (this->fields).lowResMaterials;
  (this->fields).cubeModelMaterialMobile = (Material *)pXVar1;
  uVar2 = MaterialLoader_Hash(this,tex,(MethodInfo *)0x0);
  (this->fields).atlasHash = uVar2;
  pMVar3 = (this->fields).cubeModelMaterialHigh;
  if (pMVar3 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (pMVar3,(Texture *)tex,(MethodInfo *)0x0);
    pMVar3 = (this->fields).cubeModelMaterialLow;
    if (pMVar3 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (pMVar3,(Texture *)tex,(MethodInfo *)0x0);
      pMVar3 = (this->fields).cubeModelMaterialMobile;
      if (pMVar3 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                  (pMVar3,(Texture *)tex,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Callback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Callback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
              DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                        (www,(MethodInfo *)0x0);
    if ((this_00 != (AssetBundle *)0x0) &&
       (pSVar2 = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                 AssetBundle_GetAllAssetNames(this_00,(MethodInfo *)0x0),
       pSVar2 != (String__Array *)0x0)) {
      if (pSVar2->max_length == 1) {
        texture = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                  AssetBundle_LoadAsset_2
                            (this_00,pSVar2->vector[0],
                             UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                            );
        MaterialLoader_SetMainTexture((MaterialLoader *)&UNK_?,texture,(MethodInfo *)0x0);
        MaterialLoader_SetupMaterials((MaterialLoader *)&UNK_?,(MethodInfo *)0x0);
        UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Failed_to_load_highres_texture_f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean CheckAtlasIntegrity() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CheckAtlasIntegrity
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (this_00 != (Material *)0x0) {
    pTVar1 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                       (this_00,(MethodInfo *)0x0);
    tex = (Texture2D *)0x0;
    if (pTVar1 != (Texture2D *)0x0) {
      if (pTVar1->klass == TypeInfo__UnityEngine__Texture2D) {
        tex = pTVar1;
      }
      pTVar2 = TypeInfo__UnityEngine__Texture2D;
      if (tex == (Texture2D *)0x0) goto code_?;
    }
    uVar3 = MaterialLoader_Hash(this,tex,(MethodInfo *)0x0);
    bVar4 = uVar3 == (this->fields).atlasHash;
    if (!bVar4) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_TextureAtlasHackDetected,1,(MethodInfo *)0x0);
    }
    return bVar4;
  }
  func_?();
  pTVar1 = extraout_ECX;
  pTVar2 = extraout_EDX;
code_?:
  func_?(pTVar1,pTVar2);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void DownloadWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadWhenPossible
               (MaterialLoader *this,MethodInfo *method)

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
              (pUVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
               (MethodInfo *)0x0);
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
    pSVar5 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar5,StringLiteral_AssetBundles_Atlas_atlas1_unity3,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
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
            (pUVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
             (MethodInfo *)0x0);
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


/* UInt32 Hash(Texture2D) */

uint32_t Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Hash
                   (MaterialLoader *this,Texture2D *tex,MethodInfo *method)

{
  uVar1 = 0;
  if (tex != (Texture2D *)0x0) {
    pBVar2 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetRawTextureData
                       (tex,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pBVar2 != (Byte__Array *)0x0) {
      while( true ) {
        if ((int)pBVar2->max_length <= (int)uVar3) {
          return uVar1;
        }
        if (pBVar2->max_length <= uVar3) break;
        uVar1 = uVar1 + pBVar2->vector[uVar3];
        uVar3 = uVar3 + 10;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  uVar1 = (*pcVar5)();
  return uVar1;
}


/* Void InitAllMaterials(Boolean) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_InitAllMaterials
               (MaterialLoader *this,bool useSM3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
  if ((pMVar1 != (Material *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                         (pMVar1,(MethodInfo *)0x0), pTVar2 != (Texture *)0x0)) {
    iVar3 = (*(code *)(pTVar2->klass->vtable).get_width.method)
                      (pTVar2,(pTVar2->klass->vtable).set_width.methodPtr);
    pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
    if ((pMVar1 != (Material *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (pMVar1,(MethodInfo *)0x0), pTVar2 != (Texture *)0x0)) {
      iVar4 = (*(code *)(pTVar2->klass->vtable).get_width.method)
                        (pTVar2,(pTVar2->klass->vtable).set_width.methodPtr);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                        ((_UNK_? / (float)iVar4 + _UNK_?) * (float)iVar3,
                         (MethodInfo *)0x0);
      f = (float)iVar5;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Log(f,2.0,(MethodInfo *)0x0);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        (fVar6,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
      uVar7 = 0x3d7feb85;
      fVar6 = f;
      func_?(&stack0xffffffe8,0x3d7feb85);
      if (pMVar1 != (Material *)0x0) {
        value.y = fVar6;
        value.x = (float)uVar7;
        value.z = (float)iVar5;
        value.w = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (pMVar1,StringLiteral__MaterialSize,value,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
        if ((pMVar1 != (Material *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar1,(MethodInfo *)0x0), pTVar2 != (Texture *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    (pTVar2,FilterMode__Enum_Point,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
          if ((pMVar1 != (Material *)0x0) &&
             (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                 (pMVar1,(MethodInfo *)0x0), pTVar2 != (Texture *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                      (pTVar2,1,(MethodInfo *)0x0);
            if (useSM3 == 0) {
              return;
            }
            pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
            uVar7 = 0;
            uVar8 = 0;
            func_?(&stack0xffffffe8,0x3d7feb85,0x3d7feb85,f,(float)iVar5,0);
            if (pMVar1 != (Material *)0x0) {
              value_00.y = (float)uVar8;
              value_00.x = (float)uVar7;
              value_00.z = 0.0;
              value_00.w = 0.0;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar1,StringLiteral__MaterialSize,value_00,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
              if ((pMVar1 != (Material *)0x0) &&
                 (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                           Material_get_mainTexture(pMVar1,(MethodInfo *)0x0),
                 pTVar2 != (Texture *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                          (pTVar2,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
                pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
                if ((pMVar1 != (Material *)0x0) &&
                   (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                             Material_get_mainTexture(pMVar1,(MethodInfo *)0x0),
                   pTVar2 != (Texture *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar2,2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Initialize
               (MaterialLoader *this,MethodInfo *method)

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
              (pUVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
               (MethodInfo *)0x0);
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
    pSVar5 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar5,StringLiteral_AssetBundles_Atlas_atlas1_unity3,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
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
            (pUVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
             (MethodInfo *)0x0);
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_OnDestroy
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).cubeModelMaterialLow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).cubeModelMaterialHigh,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
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


/* Void SetMainTexture(Texture2D) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetMainTexture
               (MaterialLoader *this,Texture2D *texture,MethodInfo *method)

{
  uVar1 = MaterialLoader_Hash(this,texture,(MethodInfo *)0x0);
  (this->fields).atlasHash = uVar1;
  pMVar2 = (this->fields).cubeModelMaterialHigh;
  if (pMVar2 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (pMVar2,(Texture *)texture,(MethodInfo *)0x0);
    pMVar2 = (this->fields).cubeModelMaterialLow;
    if (pMVar2 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (pMVar2,(Texture *)texture,(MethodInfo *)0x0);
      pMVar2 = (this->fields).cubeModelMaterialMobile;
      if (pMVar2 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                  (pMVar2,(Texture *)texture,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupMaterials() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetupMaterials
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
                    ((MethodInfo *)0x0);
  if (0x1d < iVar2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_Direct3D12) {
      GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
      if (GVar3 != GraphicsDeviceType__Enum_Direct3D11) goto code_?;
    }
    bVar1 = true;
  }
code_?:
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 == GraphicsDeviceType__Enum_OpenGLES3) {
    bVar1 = true;
  }
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 != GraphicsDeviceType__Enum_OpenGLES2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_OpenGLCore) goto code_?;
  }
  bVar1 = false;
code_?:
  pMVar4 = (this->fields).cubeModelMaterialHigh;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  useSM3 = 0;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pMVar4 = (this->fields).cubeModelMaterialLow;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if (bVar1) {
        pMVar4 = (this->fields).cubeModelMaterialHigh;
      }
      else {
        pMVar4 = (this->fields).cubeModelMaterialLow;
      }
      (this->fields)._CubeModelMaterial_k__BackingField = pMVar4;
      MaterialLoader_InitAllMaterials(this,useSM3,(MethodInfo *)0x0);
      return;
    }
  }
  this_00 = (NullReferenceException *)func_?();
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor
            (this_00,(MethodInfo *)0x0);
  puStack6 = (undefined *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Start
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
                    ((MethodInfo *)0x0);
  if (0x1d < iVar2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_Direct3D12) {
      GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
      if (GVar3 != GraphicsDeviceType__Enum_Direct3D11) goto code_?;
    }
    bVar1 = true;
  }
code_?:
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 == GraphicsDeviceType__Enum_OpenGLES3) {
    bVar1 = true;
  }
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 != GraphicsDeviceType__Enum_OpenGLES2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_OpenGLCore) goto code_?;
  }
  bVar1 = false;
code_?:
  pMVar4 = (this->fields).cubeModelMaterialHigh;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  useSM3 = 0;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pMVar4 = (this->fields).cubeModelMaterialLow;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if (bVar1) {
        pMVar4 = (this->fields).cubeModelMaterialHigh;
      }
      else {
        pMVar4 = (this->fields).cubeModelMaterialLow;
      }
      (this->fields)._CubeModelMaterial_k__BackingField = pMVar4;
      MaterialLoader_InitAllMaterials(this,useSM3,(MethodInfo *)0x0);
      return;
    }
  }
  this_00 = (NullReferenceException *)func_?();
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor
            (this_00,(MethodInfo *)0x0);
  puStack6 = (undefined *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

