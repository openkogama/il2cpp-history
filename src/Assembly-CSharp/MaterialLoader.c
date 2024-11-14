
/* Void AtlasCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_AtlasCallback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Failed_to_load_atlas_texture_fro);
    cRam_? = '\x01';
  }
  (this->fields).isStreamingTexture = 0;
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
              DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                        (www,(MethodInfo *)0x0);
    if ((this_00 != (AssetBundle *)0x0) &&
       (pSVar3 = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                 AssetBundle_GetAllAssetNames(this_00,(MethodInfo *)0x0),
       pSVar3 != (String__Array *)0x0)) {
      if (pSVar3->max_length != 1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_load_atlas_texture_fro,(MethodInfo *)0x0);
        return;
      }
      if (pSVar3->max_length != 0) {
        pSVar1 = pSVar3->vector[0];
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields).isUsingSM3Shader == 0) {
          texture = (Texture2D *)
                    UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                    AssetBundle_LoadAsset_1
                              (this_00,pSVar1,
                               UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                              );
          iVar4 = (this->fields).selectedQuality;
          if (iVar4 == 0) {
            (this->fields).lowTexture2D = texture;
          }
          else if (iVar4 == 1) {
            (this->fields).midTexture2D = texture;
          }
          else {
            if (iVar4 != 2) goto code_?;
            (this->fields).highTexture2D = texture;
          }
        }
        else {
          texture = (Texture2D *)
                    UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                    AssetBundle_LoadAsset_1
                              (this_00,pSVar1,
                               UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                              );
          iVar4 = (this->fields).selectedQuality;
          if (iVar4 == 0) {
            (this->fields).lowTexture2DArray = (Texture2DArray *)texture;
          }
          else if (iVar4 == 1) {
            (this->fields).midTexture2DArray = (Texture2DArray *)texture;
          }
          else {
            if (iVar4 != 2) goto code_?;
            (this->fields).highTexture2DArray = (Texture2DArray *)texture;
          }
        }
        func_?();
code_?:
        UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                  (this_00,0,(MethodInfo *)0x0);
        if ((this->fields).storedTextureQuality == -1) {
          MaterialLoader_SetMainTexture(this,(Texture *)texture,1,(MethodInfo *)0x0);
          return;
        }
        iVar4 = (this->fields).storedTextureQuality;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((iVar4 != (this->fields).selectedQuality) && ((this->fields).isStreamingTexture == 0)) {
          bVar2 = (this->fields).isUsingSM3Shader;
          (this->fields).selectedQuality = iVar4;
          if (iVar4 == 0) {
            if (bVar2 == 0) {
              texture_00 = (Texture2DArray *)(this->fields).lowTexture2D;
            }
            else {
              texture_00 = (this->fields).lowTexture2DArray;
            }
          }
          else if (iVar4 == 1) {
            if (bVar2 == 0) {
              texture_00 = (Texture2DArray *)(this->fields).midTexture2D;
            }
            else {
              texture_00 = (this->fields).midTexture2DArray;
            }
          }
          else if (iVar4 == 2) {
            if (bVar2 == 0) {
              texture_00 = (Texture2DArray *)(this->fields).highTexture2D;
            }
            else {
              texture_00 = (this->fields).highTexture2DArray;
            }
          }
          else if (bVar2 == 0) {
            texture_00 = (Texture2DArray *)(this->fields).veryLowTexture;
          }
          else {
            texture_00 = (this->fields).veryLowTextureArray;
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)texture_00,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            MaterialLoader_DownloadAtlasWhenPossible(this,(MethodInfo *)0x0);
            (this->fields).storedTextureQuality = -1;
            return;
          }
          MaterialLoader_SetMainTexture(this,(Texture *)texture_00,1,(MethodInfo *)0x0);
        }
        (this->fields).storedTextureQuality = -1;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Awake
               (MaterialLoader *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
  }
  (this_00->fields).isStreamingTexture = 0;
  (this_00->fields).storedTextureQuality = -1;
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlasData);
  }
  TextureAtlasData::TextureAtlasData_Initialize((MethodInfo *)0x0);
  bVar1 = 0;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
                    ((MethodInfo *)0x0);
  if (0x22 < iVar2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_Direct3D12) {
      GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
      if (GVar3 != GraphicsDeviceType__Enum_Direct3D11) {
        GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                SystemInfo_GetGraphicsDeviceType((MethodInfo *)0x0);
        if (GVar3 != GraphicsDeviceType__Enum_OpenGLES3) goto code_?;
      }
    }
    bVar1 = 1;
  }
code_?:
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 == GraphicsDeviceType__Enum_OpenGLES2) {
code_?:
    (this_00->fields).isUsingSM3Shader = 0;
code_?:
    bVar1 = 0;
  }
  else {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 == GraphicsDeviceType__Enum_OpenGLCore) goto code_?;
    (this_00->fields).isUsingSM3Shader = bVar1;
    if (bVar1 == 0) goto code_?;
    if (cRam_? == '\0') {
      this = (MaterialLoader *)&TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
  }
  (this_00->fields).isUsingMobileShader = bVar1;
  if ((this_00->fields).isUsingSM3Shader == 0) {
code_?:
    original = (MaterialLoader *)(this_00->fields).cubeModelMaterialSM2;
  }
  else {
    if (bVar1 != 0) {
      if ((this_00->fields).isUsingSM3Shader != 0) {
        if (bVar1 != 0) {
          original = (MaterialLoader *)(this_00->fields).cubeModelMaterialMobile;
          goto code_?;
        }
        if ((this_00->fields).isUsingSM3Shader != 0) goto code_?;
      }
      goto code_?;
    }
    original = (MaterialLoader *)(this_00->fields).cubeModelMaterialSM3;
  }
code_?:
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)TypeInfo__UnityEngine__Object;
    this = (MaterialLoader *)&UNK_?;
    func_?();
  }
  method = 
  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
  ;
  this = original;
  method = (MethodInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this_00->fields)._CubeModelMaterial_k__BackingField = (Material *)method;
  this = (MaterialLoader *)&(this_00->fields)._CubeModelMaterial_k__BackingField;
  func_?();
  if ((this_00->fields).isUsingSM3Shader == 0) {
code_?:
    this = (MaterialLoader *)(this_00->fields).cubeModelMaterialSM2Transp;
  }
  else {
    if ((this_00->fields).isUsingMobileShader != 0) {
      if ((this_00->fields).isUsingSM3Shader != 0) {
        if ((this_00->fields).isUsingMobileShader != 0) {
          this = (MaterialLoader *)(this_00->fields).cubeModelMaterialMobileTransp;
          goto code_?;
        }
        if ((this_00->fields).isUsingSM3Shader != 0) goto code_?;
      }
      goto code_?;
    }
    this = (MaterialLoader *)(this_00->fields).cubeModelMaterialSM3Transp;
  }
code_?:
  method = 
  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
  ;
  method = (MethodInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)this,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  (this_00->fields)._CubeModelMaterialTransp_k__BackingField = (Material *)method;
  this = (MaterialLoader *)&(this_00->fields)._CubeModelMaterialTransp_k__BackingField;
  func_?();
  if ((this_00->fields).isUsingSM3Shader == 0) {
    method = (MethodInfo *)(this_00->fields).veryLowTexture;
  }
  else {
    method = (MethodInfo *)(this_00->fields).veryLowTextureArray;
  }
  this = this_00;
  MaterialLoader_SetMainTexture(this_00,(Texture *)method,0,(MethodInfo *)0x0);
  this = (MaterialLoader *)(this_00->fields)._CubeModelMaterial_k__BackingField;
  bVar1 = (this_00->fields).isUsingSM3Shader;
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
            ((Material **)&this,bVar1,(MethodInfo *)0x0);
  this = (MaterialLoader *)(this_00->fields)._CubeModelMaterialTransp_k__BackingField;
  TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
            ((Material **)&this,(this_00->fields).isUsingSM3Shader,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (SubscribableVariable_1_System_Int32Enum_ *)func_?();
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_01,0,(MethodInfo *)0x0);
  if (this_01 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    pSStack4 = this_01 + 1;
    this_01[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this_00;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this_00,(IEnumerator *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  method = (MethodInfo *)&TypeInfo__System__NullReferenceException;
  this = (MaterialLoader *)&UNK_?;
  this = (MaterialLoader *)func_?();
  this_02 = (NullReferenceException *)func_?();
  method = (MethodInfo *)0x0;
  this = (MaterialLoader *)&StringLiteral_No_Material_chosen;
  this = (MaterialLoader *)func_?();
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
            (this_02,(String *)this,method);
  method = (MethodInfo *)&MethodInfo__MaterialLoader__PickMaterial_bool_;
  this = (MaterialLoader *)&UNK_?;
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean CalculateIfUsingSM3Shader() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CalculateIfUsingSM3Shader
               (MaterialLoader *this,MethodInfo *method)

{
  bVar1 = 0;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsShaderLevel
                    ((MethodInfo *)0x0);
  if (0x22 < iVar2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_Direct3D12) {
      GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
      if (GVar3 != GraphicsDeviceType__Enum_Direct3D11) {
        GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                SystemInfo_GetGraphicsDeviceType((MethodInfo *)0x0);
        if (GVar3 != GraphicsDeviceType__Enum_OpenGLES3) goto code_?;
      }
    }
    bVar1 = 1;
  }
code_?:
  GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                    ((MethodInfo *)0x0);
  if (GVar3 != GraphicsDeviceType__Enum_OpenGLES2) {
    GVar3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                      ((MethodInfo *)0x0);
    if (GVar3 != GraphicsDeviceType__Enum_OpenGLCore) {
      return bVar1;
    }
  }
  return 0;
}


/* Boolean CalculateIsUsingMobileShader() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CalculateIsUsingMobileShader
               (MaterialLoader *this,MethodInfo *method)

{
  if ((this->fields).isUsingSM3Shader == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
}


/* Boolean CheckAtlasIntegrity() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CheckAtlasIntegrity
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TextureAtlasHackDetected);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (this_00 != (Material *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                       (this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Texture *)0x0) {
      uVar2 = (*(code *)(pTVar1->klass->vtable).GetHashCode.method)
                        (pTVar1,(pTVar1->klass->vtable).ToString.methodPtr);
      uVar3 = (this->fields).atlasHash;
      if (uVar2 != uVar3) {
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_TextureAtlasHackDetected,1,(MethodInfo *)0x0);
      }
      return uVar2 == uVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void DownloadAtlasWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadAtlasWhenPossible
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&
                    MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__);
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_AssetBundles_Atlas_);
    func_?(&StringLiteral_atlashigh);
    func_?(&StringLiteral__unity3d);
    func_?(&StringLiteral_array_unity3d);
    func_?(&StringLiteral_atlaslow);
    func_?(&StringLiteral_atlasmid);
    cRam_? = '\x01';
  }
  (this->fields).isStreamingTexture = 1;
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,
               (MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
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
    if (pUVar4 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      func_?();
      return;
    }
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,
               (MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
code_?:
      func_?();
      iVar5 = (this->fields).selectedQuality;
      if ((iVar5 == 0) ||
         ((pSVar6 = StringLiteral_atlasmid, iVar5 != 1 &&
          (pSVar6 = StringLiteral_atlashigh, iVar5 != 2)))) {
        pSVar6 = StringLiteral_atlaslow;
      }
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      str3 = StringLiteral_array_unity3d;
      if ((this->fields).isUsingSM3Shader == 0) {
        str3 = StringLiteral__unity3d;
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_5
                         (str0,StringLiteral_AssetBundles_Atlas_,pSVar6,str3,(MethodInfo *)0x0);
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AssetBundleRequest *)func_?();
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_01,pSVar6,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator DownloadNoiseAfterInit() */

IEnumerator *
Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadNoiseAfterInit
          (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void DownloadNoiseWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadNoiseWhenPossible
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__);
    func_?(&
                    MethodInfo__MaterialLoader__NoiseCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_AssetBundles_Textures_noisetextu);
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__,
               (MethodInfo *)0x0);
    pUStack4 =
         (Urls_OnStreamingAssetsUrlAvailable *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUStack4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      pUStack5 = (Urls_OnStreamingAssetsUrlAvailable__Class *)0x0;
code_?:
      pUStack4 =
           (Urls_OnStreamingAssetsUrlAvailable *)TypeInfo__MV__Common__Urls->static_fields;
      func_?();
      return;
    }
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUStack4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar2 = pUStack4;
    }
    pUStack5 = TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable;
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
    pUStack5 =
         (Urls_OnStreamingAssetsUrlAvailable__Class *)(Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUStack4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUStack5 = (Urls_OnStreamingAssetsUrlAvailable__Class *)pUStack4;
    }
    if (pUStack5 != (Urls_OnStreamingAssetsUrlAvailable__Class *)0x0) goto code_?;
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
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__,
               (MethodInfo *)0x0);
    pUStack4 =
         (Urls_OnStreamingAssetsUrlAvailable *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUStack4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      pUStack5 = (Urls_OnStreamingAssetsUrlAvailable__Class *)0x0;
code_?:
      pUStack4 =
           (Urls_OnStreamingAssetsUrlAvailable *)TypeInfo__MV__Common__Urls->static_fields;
      func_?();
      pSVar6 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar6,StringLiteral_AssetBundles_Textures_noisetextu,(MethodInfo *)0x0);
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MaterialLoader__NoiseCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AssetBundleRequest *)func_?();
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_01,pSVar6,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
      return;
    }
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUStack4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar2 = pUStack4;
    }
    pUStack5 = TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable;
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
    pUStack5 =
         (Urls_OnStreamingAssetsUrlAvailable__Class *)(Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUStack4->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUStack5 = (Urls_OnStreamingAssetsUrlAvailable__Class *)pUStack4;
    }
    if (pUStack5 != (Urls_OnStreamingAssetsUrlAvailable__Class *)0x0) goto code_?;
  }
  pUStack5 = TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable;
  pUStack5 = (Urls_OnStreamingAssetsUrlAvailable__Class *)func_?();
  pUStack4 = extraout_ECX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Shader GetCubeModelUnavailableShader() */

Shader * Assembly-CSharp.dll::MaterialLoader::MaterialLoader_GetCubeModelUnavailableShader
                   (MaterialLoader *this,MethodInfo *method)

{
  if ((this->fields).isUsingSM3Shader != 0) {
    return (this->fields).pickupUnavailableShaderArray;
  }
  return (this->fields).pickupUnavailableShader;
}


/* String MaterialLoaderInfo() */

String * Assembly-CSharp.dll::MaterialLoader::MaterialLoader_MaterialLoaderInfo
                   (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&StringLiteral_Is_using_sm3__);
    func_?(&StringLiteral__Set_Texture_Quality__);
    func_?(&StringLiteral__Is_Using_Mobile_Shader__);
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (StringBuilder *)0x0) {
    pSVar1 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                       (this_00,StringLiteral_Is_using_sm3__,(MethodInfo *)0x0);
    if (pSVar1 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                (pSVar1,(this->fields).isUsingSM3Shader,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (this_00,StringLiteral__Is_Using_Mobile_Shader__,(MethodInfo *)0x0);
      if (pSVar1 != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (pSVar1,(this->fields).isUsingMobileShader,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                           (this_00,StringLiteral__Set_Texture_Quality__,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (pSVar1 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (pSVar1,pSVar2,(MethodInfo *)0x0);
          pSVar2 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
          return pSVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void NoiseCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_NoiseCallback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Failed_to_load_noise_texture_fro);
    func_?(&StringLiteral__Noise);
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_load_noise_texture_fro,(MethodInfo *)0x0);
        return;
      }
      if (pSVar2->max_length == 0) goto code_?;
      this_01 = (Texture *)
                UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                          (this_00,pSVar2->vector[0],
                           UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                          );
      UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                (this_00,0,(MethodInfo *)0x0);
      if (((this_01 != (Texture *)0x0) &&
          (UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                     (this_01,FilterMode__Enum_Trilinear,(MethodInfo *)0x0),
          _UNK_? != (Material *)0x0)) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                    (_UNK_?,StringLiteral__Noise,this_01,(MethodInfo *)0x0),
         _UNK_? != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (_UNK_?,StringLiteral__Noise,this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_OnDestroy
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields)._CubeModelMaterial_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields)._CubeModelMaterialTransp_k__BackingField,(MethodInfo *)0x0);
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Material PickMaterial(Boolean) */

Material *
Assembly-CSharp.dll::MaterialLoader::MaterialLoader_PickMaterial
          (MaterialLoader *this,bool opaque,MethodInfo *method)

{
  if ((this->fields).isUsingSM3Shader != 0) {
    if ((this->fields).isUsingMobileShader == 0) {
      if (opaque != 0) {
        return (this->fields).cubeModelMaterialSM3;
      }
      return (this->fields).cubeModelMaterialSM3Transp;
    }
    if ((this->fields).isUsingSM3Shader != 0) {
      if ((this->fields).isUsingMobileShader != 0) {
        if (opaque != 0) {
          return (this->fields).cubeModelMaterialMobile;
        }
        return (this->fields).cubeModelMaterialMobileTransp;
      }
      if ((this->fields).isUsingSM3Shader != 0) {
        uVar1 = func_?(&TypeInfo__System__NullReferenceException);
        this_00 = (NullReferenceException *)func_?(uVar1);
        method_00 = (MethodInfo *)0x0;
        message = (String *)func_?(&StringLiteral_No_Material_chosen);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,message,method_00);
        func_?(&MethodInfo__MaterialLoader__PickMaterial_bool_);
        func_?(this_00);
        pcVar2 = (code *)swi(3);
        pMVar3 = (Material *)(*pcVar2)();
        return pMVar3;
      }
    }
  }
  if (opaque != 0) {
    return (this->fields).cubeModelMaterialSM2;
  }
  return (this->fields).cubeModelMaterialSM2Transp;
}


/* Void SetMainTexture(Texture, Boolean) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetMainTexture
               (MaterialLoader *this,Texture *texture,bool isGameModeInitialized,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  pMStack_1 = (Material *)0x0;
  if (texture != (Texture *)0x0) {
    uVar2 = (*(code *)(texture->klass->vtable).GetHashCode.method)
                      (texture,(texture->klass->vtable).ToString.methodPtr);
    (this->fields).atlasHash = uVar2;
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              (texture,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    value = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
            ProfileSettingsManager_AnisoLevelToInt
                      (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_AnistropicFilteringLevel_k__BackingField,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
              (texture,value,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._CubeModelMaterial_k__BackingField;
    if (pMVar3 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                (pMVar3,StringLiteral__MainTex,texture,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
      if (pMVar3 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (pMVar3,StringLiteral__MainTex,texture,(MethodInfo *)0x0);
        if ((this->fields).isUsingSM3Shader == 0) {
          pMStack_1 = (this->fields)._CubeModelMaterial_k__BackingField;
          if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__TextureAtlasData);
          }
          TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial(&pMStack_1,(MethodInfo *)0x0);
          pMStack_1 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
          TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial(&pMStack_1,(MethodInfo *)0x0);
        }
        if (isGameModeInitialized != 0) {
          MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar4 != MVGameMode__Enum_Play) {
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 == (MVNetworkGame *)0x0) ||
               (this_00 = (pMVar5->fields)._MaterialRepository_k__BackingField,
               this_00 == (MVMaterialRepository *)0x0)) goto code_?;
            MVMaterialRepository::MVMaterialRepository_RegenerateMaterialButtonTextures
                      (this_00,(MethodInfo *)0x0);
          }
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


/* Void SetTextureQuality(TextureQualityLevel) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetTextureQuality
               (MaterialLoader *this,TextureQualityLevel__Enum quality,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (quality != (this->fields).selectedQuality) {
    if ((this->fields).isStreamingTexture != 0) {
      (this->fields).storedTextureQuality = quality;
      return;
    }
    bVar1 = (this->fields).isUsingSM3Shader;
    (this->fields).selectedQuality = quality;
    if (quality == TextureQualityLevel__Enum_Low) {
      if (bVar1 == 0) {
        texture = (Texture2DArray *)(this->fields).lowTexture2D;
      }
      else {
        texture = (this->fields).lowTexture2DArray;
      }
    }
    else if (quality == TextureQualityLevel__Enum_Medium) {
      if (bVar1 == 0) {
        texture = (Texture2DArray *)(this->fields).midTexture2D;
      }
      else {
        texture = (this->fields).midTexture2DArray;
      }
    }
    else if (quality == TextureQualityLevel__Enum_High) {
      if (bVar1 == 0) {
        texture = (Texture2DArray *)(this->fields).highTexture2D;
      }
      else {
        texture = (this->fields).highTexture2DArray;
      }
    }
    else if (bVar1 == 0) {
      texture = (Texture2DArray *)(this->fields).veryLowTexture;
    }
    else {
      texture = (this->fields).veryLowTextureArray;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)texture,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      MaterialLoader_SetMainTexture(this,(Texture *)texture,1,(MethodInfo *)0x0);
      return;
    }
    MaterialLoader_DownloadAtlasWhenPossible(this,(MethodInfo *)0x0);
  }
  return;
}


/* Texture StoreAtlasTexture(AssetBundle, String) */

Texture * Assembly-CSharp.dll::MaterialLoader::MaterialLoader_StoreAtlasTexture
                    (MaterialLoader *this,AssetBundle *assetBundle,String *assetName,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                   );
    func_?(&
                    UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                   );
    cRam_? = '\x01';
  }
  if (assetBundle == (AssetBundle *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (Texture *)(*pcVar1)();
    return pTVar2;
  }
  if ((this->fields).isUsingSM3Shader == 0) {
    pTVar3 = (Texture2D *)
             UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                       (assetBundle,assetName,
                        UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                       );
    iVar4 = (this->fields).selectedQuality;
    if (iVar4 == 0) {
      (this->fields).lowTexture2D = pTVar3;
      func_?(&(this->fields).lowTexture2D,pTVar3);
    }
    else {
      if (iVar4 == 1) {
        (this->fields).midTexture2D = pTVar3;
        func_?(&(this->fields).midTexture2D,pTVar3);
        return (Texture *)pTVar3;
      }
      if (iVar4 == 2) {
        (this->fields).highTexture2D = pTVar3;
        func_?(&(this->fields).highTexture2D,pTVar3);
        return (Texture *)pTVar3;
      }
    }
  }
  else {
    pTVar3 = (Texture2D *)
             UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                       (assetBundle,assetName,
                        UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                       );
    iVar4 = (this->fields).selectedQuality;
    if (iVar4 == 0) {
      (this->fields).lowTexture2DArray = (Texture2DArray *)pTVar3;
      func_?(&(this->fields).lowTexture2DArray,pTVar3);
      return (Texture *)pTVar3;
    }
    if (iVar4 == 1) {
      (this->fields).midTexture2DArray = (Texture2DArray *)pTVar3;
      func_?(&(this->fields).midTexture2DArray,pTVar3);
      return (Texture *)pTVar3;
    }
    if (iVar4 == 2) {
      (this->fields).highTexture2DArray = (Texture2DArray *)pTVar3;
      func_?(&(this->fields).highTexture2DArray,pTVar3);
      return (Texture *)pTVar3;
    }
  }
  return (Texture *)pTVar3;
}

