
/* Void AtlasCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_AtlasCallback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_load_atlas_texture_fro);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isStreamingTexture = 0;
  if (www == (UnityWebRequest *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(www,(MethodInfo *)0x0);
  if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
    return;
  }
  this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
            DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent(www,(MethodInfo *)0x0)
  ;
  if ((this_00 == (AssetBundle *)0x0) ||
     (pSVar3 = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
               AssetBundle_GetAllAssetNames(this_00,(MethodInfo *)0x0),
     pSVar3 == (String__Array *)0x0)) goto code_?;
  if ((int)pSVar3->max_length != 1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_Failed_to_load_atlas_texture_fro;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar2);
    return;
  }
  if ((int)pSVar3->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = pSVar3->vector[0];
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isUsingSM3Shader == 0) {
    texture = (Texture2D *)
              UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                        (this_00,pSVar2,
                         UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                        );
    iVar5 = (this->fields).selectedQuality;
    if (iVar5 == 0) {
      (this->fields).lowTexture2D = texture;
      ppTVar6 = &(this->fields).lowTexture2D;
    }
    else if (iVar5 == 1) {
      (this->fields).midTexture2D = texture;
      ppTVar6 = &(this->fields).midTexture2D;
    }
    else {
      if (iVar5 != 2) goto code_?;
      (this->fields).highTexture2D = texture;
      ppTVar6 = &(this->fields).highTexture2D;
    }
  }
  else {
    texture = (Texture2D *)
              UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                        (this_00,pSVar2,
                         UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                        );
    iVar5 = (this->fields).selectedQuality;
    if (iVar5 == 0) {
      (this->fields).lowTexture2DArray = (Texture2DArray *)texture;
      ppTVar6 = (Texture2D **)&(this->fields).lowTexture2DArray;
    }
    else if (iVar5 == 1) {
      (this->fields).midTexture2DArray = (Texture2DArray *)texture;
      ppTVar6 = (Texture2D **)&(this->fields).midTexture2DArray;
    }
    else {
      if (iVar5 != 2) goto code_?;
      (this->fields).highTexture2DArray = (Texture2DArray *)texture;
      ppTVar6 = (Texture2D **)&(this->fields).highTexture2DArray;
    }
  }
  func_?(ppTVar6);
code_?:
  UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
            (this_00,0,(MethodInfo *)0x0);
  if ((this->fields).storedTextureQuality == -1) {
    MaterialLoader_SetMainTexture(this,(Texture *)texture,1,(MethodInfo *)0x0);
    return;
  }
  MaterialLoader_SetTextureQuality(this,(this->fields).storedTextureQuality,(MethodInfo *)0x0);
  (this->fields).storedTextureQuality = -1;
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_Awake
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isStreamingTexture = 0;
  (this->fields).storedTextureQuality = -1;
  (this->fields).selectedQuality = -1;
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TextureAtlasData::TextureAtlasData_Initialize((MethodInfo *)0x0);
  bVar1 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  if (0x22 < iVar4) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)();
    if (iVar4 != 0x12) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      iVar4 = (*pcRam_?)();
      if ((iVar4 != 2) &&
         (GVar5 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                  SystemInfo_GetGraphicsDeviceType((MethodInfo *)0x0),
         GVar5 != GraphicsDeviceType__Enum_OpenGLES3)) goto code_?;
    }
    bVar1 = 1;
  }
code_?:
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  bVar6 = 0;
  if (iVar4 != 0x11) {
    bVar6 = bVar1;
  }
  (this->fields).isUsingSM3Shader = bVar6;
  if (bVar6 == 0) {
    bVar1 = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
  }
  (this->fields).isUsingMobileShader = bVar1;
  if ((this->fields).isUsingSM3Shader == 0) {
code_?:
    pMVar7 = (this->fields).cubeModelMaterialSM2;
  }
  else {
    if (bVar1 != 0) {
      if ((this->fields).isUsingSM3Shader != 0) {
        if (bVar1 != 0) {
          pMVar7 = (this->fields).cubeModelMaterialMobile;
          goto code_?;
        }
        if ((this->fields).isUsingSM3Shader != 0) {
          uVar3 = func_?(&TypeInfo__System__NullReferenceException);
          pNVar8 = (NullReferenceException *)func_?(uVar3);
          pSVar9 = (String *)func_?(&StringLiteral_No_Material_chosen);
          mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                    (pNVar8,pSVar9,(MethodInfo *)0x0);
          uVar3 = func_?(&MethodInfo__MaterialLoader__PickMaterial_bool_);
          FUN_?(pNVar8,uVar3);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto code_?;
    }
    pMVar7 = (this->fields).cubeModelMaterialSM3;
  }
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar7,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  bVar10 = iRam_? != 0;
  (this->fields)._CubeModelMaterial_k__BackingField = pMVar7;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields)._CubeModelMaterial_k__BackingField >> 0xc);
    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if ((this->fields).isUsingSM3Shader != 0) {
    if ((this->fields).isUsingMobileShader == 0) {
      pMVar7 = (this->fields).cubeModelMaterialSM3Transp;
      goto code_?;
    }
    if ((this->fields).isUsingSM3Shader != 0) {
      if ((this->fields).isUsingMobileShader != 0) {
        pMVar7 = (this->fields).cubeModelMaterialMobileTransp;
        goto code_?;
      }
      if ((this->fields).isUsingSM3Shader != 0) {
        uVar3 = func_?(&TypeInfo__System__NullReferenceException);
        pNVar8 = (NullReferenceException *)func_?(uVar3);
        pSVar9 = (String *)func_?(&StringLiteral_No_Material_chosen);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (pNVar8,pSVar9,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__MaterialLoader__PickMaterial_bool_);
        FUN_?(pNVar8,uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pMVar7 = (this->fields).cubeModelMaterialSM2Transp;
code_?:
  pMVar7 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar7,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  bVar10 = iRam_? != 0;
  (this->fields)._CubeModelMaterialTransp_k__BackingField = pMVar7;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields)._CubeModelMaterialTransp_k__BackingField >> 0xc);
    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  lVar12 = 0x70;
  if ((this->fields).isUsingSM3Shader == 0) {
    lVar12 = 0x78;
  }
  MaterialLoader_SetMainTexture
            (this,*(Texture **)((longlong)&this->klass + lVar12),0,(MethodInfo *)0x0);
  pMStackX_8 = (this->fields)._CubeModelMaterial_k__BackingField;
  bVar1 = (this->fields).isUsingSM3Shader;
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial(&pMStackX_8,bVar1,(MethodInfo *)0x0);
  pMStackX_8 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
  TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
            (&pMStackX_8,(this->fields).isUsingSM3Shader,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar12 = FUN_?(TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
  bVar10 = iRam_? != 0;
  *(undefined4 *)(lVar12 + 0x10) = 0;
  *(MaterialLoader **)(lVar12 + 0x20) = this;
  if (bVar10) {
    uVar11 = (uint)(lVar12 + 0x20U >> 0xc);
    lVar15 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar15 + 0xADDR);
      puVar14 = (ulonglong *)(lVar15 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (lVar12 == 0) {
    uVar3 = func_?(&TypeInfo__System__NullReferenceException);
    pNVar8 = (NullReferenceException *)func_?(uVar3);
    pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (pNVar8,pSVar9,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(pNVar8,uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar3);
    pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar9,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_00,uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (MaterialLoader *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar16 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar16 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar16,lVar12);
  return;
}


/* Boolean CalculateIfUsingSM3Shader() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CalculateIfUsingSM3Shader
               (MaterialLoader *this,MethodInfo *method)

{
  bVar1 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  if (0x22 < iVar4) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)();
    if (iVar4 != 0x12) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        bVar1 = (*pcVar2)();
        return bVar1;
      }
      pcRam_? = pcVar2;
      iVar4 = (*pcRam_?)();
      if ((iVar4 != 2) &&
         (GVar5 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                  SystemInfo_GetGraphicsDeviceType((MethodInfo *)0x0),
         GVar5 != GraphicsDeviceType__Enum_OpenGLES3)) goto code_?;
    }
    bVar1 = 1;
  }
code_?:
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  bVar6 = 0;
  if (iVar4 != 0x11) {
    bVar6 = bVar1;
  }
  return bVar6;
}


/* Boolean CalculateIsUsingMobileShader() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CalculateIsUsingMobileShader
               (MaterialLoader *this,MethodInfo *method)

{
  if ((this->fields).isUsingSM3Shader == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
}


/* Boolean CheckAtlasIntegrity() */

bool Assembly-CSharp.dll::MaterialLoader::MaterialLoader_CheckAtlasIntegrity
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TextureAtlasHackDetected);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (this_00 != (Material *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                       (this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Texture *)0x0) {
      uVar2 = (*(pTVar1->klass->vtable).GetHashCode.methodPtr)
                        (pTVar1,(pTVar1->klass->vtable).GetHashCode.method);
      bVar3 = uVar2 == (this->fields).atlasHash;
      if (!bVar3) {
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_TextureAtlasHackDetected,1,(MethodInfo *)0x0);
      }
      return bVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void DownloadAtlasWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadAtlasWhenPossible
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AssetBundles_Atlas_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_atlashigh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_array_unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_atlaslow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_atlasmid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isStreamingTexture = 1;
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
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
    }
    else {
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
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
    }
    else {
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    iVar11 = (this->fields).selectedQuality;
    pSVar12 = StringLiteral_atlaslow;
    if (((iVar11 != 0) && (pSVar12 = StringLiteral_atlasmid, iVar11 != 1)) &&
       (pSVar12 = StringLiteral_atlaslow, iVar11 == 2)) {
      pSVar12 = StringLiteral_atlashigh;
    }
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    str3 = StringLiteral_array_unity3d;
    if ((this->fields).isUsingSM3Shader == 0) {
      str3 = StringLiteral__unity3d;
    }
    pSVar12 = mscorlib.dll::System::String::String_Concat_6
                        (str0,StringLiteral_AssetBundles_Atlas_,pSVar12,str3,(MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
    AsyncWebRequest::AsyncWebRequest__ctor
              (this_01,pSVar12,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator DownloadNoiseAfterInit() */

IEnumerator *
Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadNoiseAfterInit
          (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MaterialLoader___DownloadNoiseAfterInit_d__54);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void DownloadNoiseWhenPossible() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_DownloadNoiseWhenPossible
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialLoader__NoiseCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AssetBundles_Textures_noisetextu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__,
               (MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
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
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__MaterialLoader__DownloadNoiseWhenPossible__,
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
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pSVar11 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar11,StringLiteral_AssetBundles_Textures_noisetextu,(MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MaterialLoader__NoiseCallback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
    AsyncWebRequest::AsyncWebRequest__ctor
              (this_01,pSVar11,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
  }
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
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Is_using_sm3__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Set_Texture_Quality__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Is_Using_Mobile_Shader__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
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
        EStack_2.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
        iStack_3 = (this->fields).selectedQuality;
        EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
        if (pSVar1 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (pSVar1,pSVar4,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar4 = (String *)
                   (*(this_00->klass->vtable).ToString.methodPtr)
                             (this_00,(this_00->klass->vtable).ToString.method);
          return pSVar4;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void NoiseCallback(UnityWebRequest) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_NoiseCallback
               (MaterialLoader *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_load_noise_texture_fro);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Noise);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      return;
    }
    this_00 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
              DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_GetContent
                        (www,(MethodInfo *)0x0);
    if ((this_00 != (AssetBundle *)0x0) &&
       (pSVar2 = UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::
                 AssetBundle_GetAllAssetNames(this_00,(MethodInfo *)0x0),
       pSVar2 != (String__Array *)0x0)) {
      if ((int)pSVar2->max_length != 1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar1 = StringLiteral_Failed_to_load_noise_texture_fro;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar3 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar1);
        return;
      }
      if ((int)pSVar2->max_length == 0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = (Texture *)
                UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_LoadAsset_1
                          (this_00,pSVar2->vector[0],
                           UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                          );
      UnityEngine.AssetBundleModule.dll::UnityEngine::AssetBundle::AssetBundle_Unload
                (this_00,0,(MethodInfo *)0x0);
      if (this_01 != (Texture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  (this_01,FilterMode__Enum_Trilinear,(MethodInfo *)0x0);
        pMVar5 = (this->fields)._CubeModelMaterial_k__BackingField;
        if (pMVar5 != (Material *)0x0) {
          iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__Noise,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                    (pMVar5,iVar6,this_01,(MethodInfo *)0x0);
          pMVar5 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
          if (pMVar5 != (Material *)0x0) {
            iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              (StringLiteral__Noise,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                      (pMVar5,iVar6,this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_OnDestroy
               (MaterialLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._CubeModelMaterial_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pMVar1,0.0,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pMVar1,0.0,(MethodInfo *)0x0);
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = 0;
  DStack_2._current._4_4_ = 0;
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  DStack_2._36_4_ = 0;
  QStack_3._q = (Queue_1_System_Object_ *)0x0;
  QStack_3._version = 0;
  QStack_3._index = 0;
  QStack_3._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar4 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar4 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pHStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_12 = 0;
    auStack_13._8_8_ = pDStack_11;
    pOStack_14 = (Object *)0x0;
    pHStack_6 = pHVar4;
    auStack_13._0_8_ = pHVar4;
code_?:
    while (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_13,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar16 = pOStack_14, bVar15 != 0) {
      ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar17 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      pOVar18 = pOVar16[1].klass;
      if (pOVar18 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar19 = (**(code **)&(pOVar18->_0).image[4].typeCount)(pOVar18,this_01), cVar19 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
      uStack_23 = 2;
      uStack_24 = 0;
      uStack_25 = 0;
      DStack_2._version = (undefined4)uStack_22;
      DStack_2._index = uStack_22._4_4_;
      DStack_2._current.key = 0;
      DStack_2._current._4_4_ = 0;
      DStack_2._current.value = (Object *)0x0;
      DStack_2._getEnumeratorRetType = 2;
      DStack_2._36_4_ = 0;
      pHStack_6 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_11 = &DStack_2;
      pDStack_21 = pDVar20;
      DStack_2._dictionary = pDVar20;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar15 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_22 = 0;
        uStack_24 = 0;
        pDStack_21 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_3._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_2._current.value + 0x10))->_freeList;
        uStack_22 = CONCAT44(0xffffffff,QStack_3._version);
        uStack_24 = 0;
        QStack_3._q = (Queue_1_System_Object_ *)DStack_2._current.value;
        QStack_3._index = 0xffffffff;
        QStack_3._currentElement = (Object *)0x0;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_3,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar16 = QStack_3._currentElement, bVar15 != 0) {
          ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_3._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar16,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar16;
        }
        QStack_3._index = 0xfffffffe;
        QStack_3._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar17,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar7 = func_?((((AsyncWWWManager__Class *)ppAVar17)->_0).byval_arg.data.dummy);
  uVar26 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(&QStack_3,uVar26);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
code_?:
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar16[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar18 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar18 = (Object__Class *)
                  FUN_?(unaff_RDI,
                                TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar18 == (Object__Class *)0x0)) goto code_?;
    pOVar16[1].klass = pOVar18;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  goto code_?;
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
        message = (String *)func_?(&StringLiteral_No_Material_chosen);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,message,(MethodInfo *)0x0);
        uVar1 = func_?(&MethodInfo__MaterialLoader__PickMaterial_bool_);
        FUN_?(this_00,uVar1);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (texture != (Texture *)0x0) {
    uVar1 = (*(texture->klass->vtable).GetHashCode.methodPtr)
                      (texture,(texture->klass->vtable).GetHashCode.method);
    (this->fields).atlasHash = uVar1;
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              (texture,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           _AnistropicFilteringLevel_k__BackingField) {
    default:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = 1;
      break;
    case 2:
      iVar2 = 2;
      break;
    case 3:
      iVar2 = 4;
      break;
    case 4:
      iVar2 = 8;
      break;
    case 5:
      iVar2 = 0x10;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
              (texture,iVar2,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._CubeModelMaterial_k__BackingField;
    if (pMVar3 != (Material *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__MainTex,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (pMVar3,iVar2,texture,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
      if (pMVar3 != (Material *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__MainTex,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                  (pMVar3,iVar2,texture,(MethodInfo *)0x0);
        if ((this->fields).isUsingSM3Shader == 0) {
          pMStackX_10 = (this->fields)._CubeModelMaterial_k__BackingField;
          if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
            FUN_?();
          }
          TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                    (&pMStackX_10,(MethodInfo *)0x0);
          pMStackX_10 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
          TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                    (&pMStackX_10,(MethodInfo *)0x0);
        }
        if (isGameModeInitialized != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar4 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar4->fields).gameMode != 1) {
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 == (MVNetworkGame *)0x0) ||
               (this_00 = (pMVar5->fields)._MaterialRepository_k__BackingField,
               this_00 == (MVMaterialRepository *)0x0)) goto code_?;
            MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
                      (this_00,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTextureQuality(TextureQualityLevel) */

void Assembly-CSharp.dll::MaterialLoader::MaterialLoader_SetTextureQuality
               (MaterialLoader *this,TextureQualityLevel__Enum quality,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (quality != (this->fields).selectedQuality) {
    if ((this->fields).isStreamingTexture == 0) {
      (this->fields).selectedQuality = quality;
      if (quality == TextureQualityLevel__Enum_Low) {
        lVar1 = 0xb0;
        lVar2 = 200;
      }
      else if (quality == TextureQualityLevel__Enum_Medium) {
        lVar1 = 0xa8;
        lVar2 = 0xc0;
      }
      else if (quality == TextureQualityLevel__Enum_High) {
        lVar1 = 0xa0;
        lVar2 = 0xb8;
      }
      else {
        lVar1 = 0x70;
        lVar2 = 0x78;
      }
      if ((this->fields).isUsingSM3Shader == 0) {
        lVar1 = lVar2;
      }
      this_01 = *(Texture **)((longlong)&this->klass + lVar1);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 != (Texture *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._.m_CachedPtr != (void *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__TextureAtlasData);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__MainTex);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_01 != (Texture *)0x0) {
            uVar3 = (*(this_01->klass->vtable).GetHashCode.methodPtr)
                              (this_01,(this_01->klass->vtable).GetHashCode.method);
            (this->fields).atlasHash = uVar3;
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      (this_01,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_AnistropicFilteringLevel_k__BackingField) {
            default:
              iVar4 = 0;
              break;
            case 1:
              iVar4 = 1;
              break;
            case 2:
              iVar4 = 2;
              break;
            case 3:
              iVar4 = 4;
              break;
            case 4:
              iVar4 = 8;
              break;
            case 5:
              iVar4 = 0x10;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                      (this_01,iVar4,(MethodInfo *)0x0);
            pMVar5 = (this->fields)._CubeModelMaterial_k__BackingField;
            if (pMVar5 != (Material *)0x0) {
              iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                (StringLiteral__MainTex,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                        (pMVar5,iVar4,this_01,(MethodInfo *)0x0);
              pMVar5 = (this->fields)._CubeModelMaterialTransp_k__BackingField;
              if (pMVar5 != (Material *)0x0) {
                iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  (StringLiteral__MainTex,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                          (pMVar5,iVar4,this_01,(MethodInfo *)0x0);
                if ((this->fields).isUsingSM3Shader == 0) {
                  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                            ((Material **)&stack0x00000010,(MethodInfo *)0x0);
                  TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                            ((Material **)&stack0x00000010,(MethodInfo *)0x0);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar6 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar6 != (GameSessionData *)0x0) {
                  if ((pGVar6->fields).gameMode != 1) {
                    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar7 == (MVNetworkGame *)0x0) ||
                       (this_00 = (pMVar7->fields)._MaterialRepository_k__BackingField,
                       this_00 == (MVMaterialRepository *)0x0)) goto code_?;
                    MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
                              (this_00,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AsyncWWWManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedAssetBundleRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_AssetBundles_Atlas_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_atlashigh);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__unity3d);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_array_unity3d);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_atlaslow);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_atlasmid);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).isStreamingTexture = 1;
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar9 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
      if (bVar9 == 0) {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar10 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar11 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar11,(Object *)this,MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,
                   (MethodInfo *)0x0);
        pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar10,(Delegate *)pNVar11,(MethodInfo *)0x0);
        if (pUVar10 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar10->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar12 = pUVar10;
          }
          if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar10,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar12;
          pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar10->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar12 = pUVar10;
          }
          if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar10);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
          lVar1 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar1 + 0xADDR);
            puVar15 = (ulonglong *)(lVar1 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
      }
      else {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar10 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar11 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar11,(Object *)this,MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,
                   (MethodInfo *)0x0);
        pUVar10 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar10,(Delegate *)pNVar11,(MethodInfo *)0x0);
        if (pUVar10 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar10->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar12 = pUVar10;
          }
          if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar10,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar12;
          pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar10->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar12 = pUVar10;
          }
          if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar10);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
          lVar1 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar1 + 0xADDR);
            puVar15 = (ulonglong *)(lVar1 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (ulonglong)(uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        iVar17 = (this->fields).selectedQuality;
        pSVar18 = StringLiteral_atlaslow;
        if (((iVar17 != 0) && (pSVar18 = StringLiteral_atlasmid, iVar17 != 1)) &&
           (pSVar18 = StringLiteral_atlaslow, iVar17 == 2)) {
          pSVar18 = StringLiteral_atlashigh;
        }
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?();
        }
        str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
        str3 = StringLiteral_array_unity3d;
        if ((this->fields).isUsingSM3Shader == 0) {
          str3 = StringLiteral__unity3d;
        }
        pSVar18 = mscorlib.dll::System::String::String_Concat_6
                            (str0,StringLiteral_AssetBundles_Atlas_,pSVar18,str3,(MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_03 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
        AsyncWebRequest::AsyncWebRequest__ctor
                  (this_03,pSVar18,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                   WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest(this_03,(MethodInfo *)0x0);
      }
      return;
    }
    (this->fields).storedTextureQuality = quality;
  }
  return;
}


/* Texture StoreAtlasTexture(AssetBundle, String) */

Texture * Assembly-CSharp.dll::MaterialLoader::MaterialLoader_StoreAtlasTexture
                    (MaterialLoader *this,AssetBundle *assetBundle,String *assetName,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Texture2DArray_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2DArray>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Texture2D_MethodInfo__UnityEngine__AssetBundle__LoadAsset<UnityEngine::Texture2D>_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (assetBundle == (AssetBundle *)0x0) {
    FUN_?();
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
      ppTVar5 = &(this->fields).lowTexture2D;
    }
    else if (iVar4 == 1) {
      (this->fields).midTexture2D = pTVar3;
      ppTVar5 = &(this->fields).midTexture2D;
    }
    else {
      if (iVar4 != 2) {
        return (Texture *)pTVar3;
      }
      (this->fields).highTexture2D = pTVar3;
      ppTVar5 = &(this->fields).highTexture2D;
    }
    func_?(ppTVar5);
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
      func_?(&(this->fields).lowTexture2DArray);
      return (Texture *)pTVar3;
    }
    if (iVar4 == 1) {
      (this->fields).midTexture2DArray = (Texture2DArray *)pTVar3;
      func_?(&(this->fields).midTexture2DArray);
      return (Texture *)pTVar3;
    }
    if (iVar4 == 2) {
      (this->fields).highTexture2DArray = (Texture2DArray *)pTVar3;
      func_?(&(this->fields).highTexture2DArray);
      return (Texture *)pTVar3;
    }
  }
  return (Texture *)pTVar3;
}

