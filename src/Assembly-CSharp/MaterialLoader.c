
/* Void Awake() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Awake
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModelMaterialHigh;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pMVar1 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar1,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this->fields).cubeModelMaterialHigh = pMVar1;
  func_?(&(this->fields).cubeModelMaterialHigh,pMVar1);
  pMVar1 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)(this->fields).cubeModelMaterialLow,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this->fields).cubeModelMaterialLow = pMVar1;
  func_?(&(this->fields).cubeModelMaterialLow,pMVar1);
  pMVar1 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)(this->fields).cubeModelMaterialMobile,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this->fields).cubeModelMaterialMobile = pMVar1;
  func_?(&(this->fields).cubeModelMaterialMobile,pMVar1);
  MaterialLoader_SetMainTexture(this,(this->fields).lowResMaterials,(MethodInfo *)0x0);
  return;
}


/* Void Callback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Callback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Failed_to_load_highres_texture_f);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
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
      if (pSVar2->max_length != 1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_load_highres_texture_f,(MethodInfo *)0x0);
        return;
      }
      if (pSVar2->max_length != 0) {
        texture = (Texture2D *)
                  UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                  AssetBundle_LoadAsset_1
                            (this_00,pSVar2->vector[0],
                             UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                            );
        MaterialLoader_SetMainTexture((MaterialLoader *)&UNK_?,texture,(MethodInfo *)0x0);
        MaterialLoader_SetupMaterials((MaterialLoader *)&UNK_?,(MethodInfo *)0x0);
        UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
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
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_TextureAtlasHackDetected);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (this_00 == (Material *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar1 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                       (this_00,(MethodInfo *)0x0);
    if (pTVar1 == (Texture2D *)0x0) goto code_?;
    this_01 = (Texture2D *)0x0;
    if (pTVar1->klass == TypeInfo__UnityEngine__Texture2D) {
      this_01 = pTVar1;
    }
    if (this_01 == (Texture2D *)0x0) goto code_?;
    uVar2 = 0;
    pBVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetRawTextureData
                       (this_01,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pBVar3 == (Byte__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pBVar3->max_length <= (int)uVar4) {
        uVar5 = (this->fields).atlasHash;
        if (uVar2 != uVar5) {
          if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          StatHatWrapper::StatHatWrapper_Count
                    (StringLiteral_TextureAtlasHackDetected,1,(MethodInfo *)0x0);
        }
        return uVar2 == uVar5;
      }
      if (pBVar3->max_length <= uVar4) break;
      uVar2 = uVar2 + pBVar3->vector[uVar4];
      uVar4 = uVar4 + 10;
    }
  }
  pTVar1 = (Texture2D *)func_?();
code_?:
  func_?(pTVar1);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void DownloadWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadWhenPossible
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_)
    ;
    func_?(&MethodInfo__MaterialLoader__DownloadWhenPossible__);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_AssetBundles_Atlas_atlas_unity3d);
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
               (MethodInfo *)0x0);
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
                (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
                 (MethodInfo *)0x0);
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
      pSVar5 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar5,StringLiteral_AssetBundles_Atlas_atlas_unity3d,(MethodInfo *)0x0);
      object = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
      this_00 = (Action_1_Object_ *)func_?();
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)object,
                   MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
                   (MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  uVar1 = (*pcVar4)();
  return uVar1;
}


/* Void InitAllMaterials(Boolean) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_InitAllMaterials
               (MaterialLoader *this,bool useSM3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&StringLiteral__MaterialSize);
    func_?(&StringLiteral__MaxMipLevel);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = mscorlib.dll::System::Math::Math_Log
                    ((double)CONCAT44(_UNK_?,_UNK_?),
                     (double)CONCAT44(_UNK_?,_UNK_?),(MethodInfo *)0x0);
  fVar2 = (float)dVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pMVar3 = TypeInfo__System__Math;
  fVar4 = (float10)func_?((double)fVar2);
  iVar5 = (int)fVar4;
  if ((pMVar3->_1).cctor_finished_or_no_cctor == 0) {
    func_?(pMVar3);
  }
  if (cRam_? == '\0') {
    func_?(&void_MethodInfo__System__Math__ThrowMinMaxException<int>_int__int_);
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (iVar5 < 0) {
    value_01 = 0;
  }
  else {
    value_01 = 5;
    if (iVar5 < 6) {
      value_01 = iVar5;
    }
  }
  pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (pMVar6 != (Material *)0x0) {
    value_00.z = 64.0;
    value_00.x = 0.0625;
    value_00.y = 0.0625;
    value_00.w = (float)iVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (pMVar6,StringLiteral__MaterialSize,value_00,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
    if (pMVar6 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInteger
                (pMVar6,StringLiteral__MaxMipLevel,value_01,(MethodInfo *)0x0);
      pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
      if ((pMVar6 != (Material *)0x0) &&
         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                             (pMVar6,(MethodInfo *)0x0), pTVar7 != (Texture *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  (pTVar7,FilterMode__Enum_Point,(MethodInfo *)0x0);
        pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
        if ((pMVar6 != (Material *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar6,(MethodInfo *)0x0), pTVar7 != (Texture *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                    (pTVar7,1,(MethodInfo *)0x0);
          pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
          if ((pMVar6 != (Material *)0x0) &&
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                 (pMVar6,(MethodInfo *)0x0), pTVar7 != (Texture *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                      (pTVar7,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
            useSM3 = (bool)value_01;
            if (useSM3 == 0) {
              return;
            }
            pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
            if (pMVar6 != (Material *)0x0) {
              value.z = 64.0;
              value.x = 0.0625;
              value.y = 0.0625;
              value.w = (float)iVar5;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar6,StringLiteral__MaterialSize,value,(MethodInfo *)0x0);
              pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
              if ((pMVar6 != (Material *)0x0) &&
                 (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                           Material_get_mainTexture(pMVar6,(MethodInfo *)0x0),
                 pTVar7 != (Texture *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                          (pTVar7,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                    == 0) {
                  pMVar6 = (this->fields)._CubeModelMaterial_k__BackingField;
                  if ((pMVar6 == (Material *)0x0) ||
                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                               Material_get_mainTexture(pMVar6,(MethodInfo *)0x0),
                     pTVar7 == (Texture *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar7,2,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Initialize
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_)
    ;
    func_?(&MethodInfo__MaterialLoader__DownloadWhenPossible__);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_AssetBundles_Atlas_atlas_unity3d);
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
               (MethodInfo *)0x0);
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
                (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadWhenPossible__,
                 (MethodInfo *)0x0);
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
      pSVar5 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar5,StringLiteral_AssetBundles_Atlas_atlas_unity3d,(MethodInfo *)0x0);
      object = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
      this_00 = (Action_1_Object_ *)func_?();
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)object,
                   MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
                   (MethodInfo *)0x0);
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_OnDestroy
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_)
    ;
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).cubeModelMaterialLow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).cubeModelMaterialHigh,(MethodInfo *)0x0);
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
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


/* Void SetMainTexture(Texture2D) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetMainTexture
               (MaterialLoader *this,Texture2D *texture,MethodInfo *method)

{
  uVar1 = 0;
  if (texture != (Texture2D *)0x0) {
    pBVar2 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetRawTextureData
                       (texture,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pBVar2 != (Byte__Array *)0x0) {
      for (; (int)uVar3 < (int)pBVar2->max_length; uVar3 = uVar3 + 10) {
        if (pBVar2->max_length <= uVar3) goto code_?;
        uVar1 = uVar1 + pBVar2->vector[uVar3];
      }
      pMVar4 = (this->fields).cubeModelMaterialHigh;
      (this->fields).atlasHash = uVar1;
      if (pMVar4 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                  (pMVar4,(Texture *)texture,(MethodInfo *)0x0);
        pMVar4 = (this->fields).cubeModelMaterialLow;
        if (pMVar4 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                    (pMVar4,(Texture *)texture,(MethodInfo *)0x0);
          pMVar4 = (this->fields).cubeModelMaterialMobile;
          if (pMVar4 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                      (pMVar4,(Texture *)texture,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupMaterials() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetupMaterials
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
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
  if (GVar3 == GraphicsDeviceType__Enum_OpenGLES2) {
code_?:
    bVar1 = false;
  }
  else {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 == GraphicsDeviceType__Enum_OpenGLCore) goto code_?;
  }
  pMVar4 = (this->fields).cubeModelMaterialHigh;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  useSM3 = 0;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
code_?:
    func_?();
    this_00 = (NullReferenceException *)func_?();
    func_?();
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor
              (this_00,(MethodInfo *)0x0);
    uStack6 = func_?(&MethodInfo__MaterialLoader__SetupMaterials__);
    pNStack7 = this_00;
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pMVar4 = (this->fields).cubeModelMaterialLow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) goto code_?;
  if (bVar1) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar4 = (this->fields).cubeModelMaterialHigh;
      goto code_?;
    }
  }
  pMVar4 = (this->fields).cubeModelMaterialLow;
code_?:
  (this->fields)._CubeModelMaterial_k__BackingField = pMVar4;
  func_?();
  MaterialLoader_InitAllMaterials(this,useSM3,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Start
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
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
  if (GVar3 == GraphicsDeviceType__Enum_OpenGLES2) {
code_?:
    bVar1 = false;
  }
  else {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 == GraphicsDeviceType__Enum_OpenGLCore) goto code_?;
  }
  pMVar4 = (this->fields).cubeModelMaterialHigh;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  useSM3 = 0;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
code_?:
    func_?();
    this_00 = (NullReferenceException *)func_?();
    func_?();
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor
              (this_00,(MethodInfo *)0x0);
    uStack6 = func_?(&MethodInfo__MaterialLoader__SetupMaterials__);
    pNStack7 = this_00;
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pMVar4 = (this->fields).cubeModelMaterialLow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) goto code_?;
  if (bVar1) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar4 = (this->fields).cubeModelMaterialHigh;
      goto code_?;
    }
  }
  pMVar4 = (this->fields).cubeModelMaterialLow;
code_?:
  (this->fields)._CubeModelMaterial_k__BackingField = pMVar4;
  func_?();
  MaterialLoader_InitAllMaterials(this,useSM3,(MethodInfo *)0x0);
  return;
}

