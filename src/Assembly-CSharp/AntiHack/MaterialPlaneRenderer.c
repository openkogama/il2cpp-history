
/* Byte CalculateHash(RenderTexture) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash
                  (MaterialPlaneRenderer *this,RenderTexture *renderTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (renderTexture != (RenderTexture *)0x0) {
    iVar1 = (*(renderTexture->klass->vtable).get_width.methodPtr)
                      (renderTexture,(renderTexture->klass->vtable).get_width.method);
    height = (*(renderTexture->klass->vtable).get_height.methodPtr)
                       (renderTexture,(renderTexture->klass->vtable).get_height.method);
    this_00 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    pTStack_2 = this_00;
    if (this_00 != (Texture2D *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                (this_00,iVar1,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
      iVar3 = (*(renderTexture->klass->vtable).get_width.methodPtr)
                        (renderTexture,(renderTexture->klass->vtable).get_width.method);
      iVar4 = (*(renderTexture->klass->vtable).get_height.methodPtr)
                        (renderTexture,(renderTexture->klass->vtable).get_height.method);
      VStack_5.x = 0.0;
      VStack_5.y = 0.0;
      VStack_5.z = 0.0;
      VStack_5.w = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                (&VStack_5,0.0,0.0,(float)iVar3,(float)iVar4,(MethodInfo *)0x0);
      source.m_YMin = VStack_5.y;
      source.m_XMin = VStack_5.x;
      source.m_Width = VStack_5.z;
      source.m_Height = VStack_5.w;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_00,source,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (this_00,(MethodInfo *)0x0);
      uVar6 = 0;
      pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                         (pTStack_2,(MethodInfo *)0x0);
      uVar8 = 0;
      if (pCVar7 != (Color32__Array *)0x0) {
        pCVar9 = pCVar7->vector;
        while( true ) {
          if ((int)pCVar7->max_length <= (int)uVar8) {
            return uVar6;
          }
          if (pCVar7->max_length <= uVar8) break;
          iVar1 = pCVar9->rgba;
          uVar8 = uVar8 + 1;
          uVar6 = uVar6 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 8) + (char)iVar1;
          pCVar9 = (Color32 *)&pCVar9->r;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  uVar6 = (*pcVar10)();
  return uVar6;
}


/* Byte CalculateHash(Texture2D) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash_1
                  (MaterialPlaneRenderer *this,Texture2D *texture,MethodInfo *method)

{
  uVar1 = 0;
  if (texture != (Texture2D *)0x0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                       (texture,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pCVar2 != (Color32__Array *)0x0) {
      pCVar4 = pCVar2->vector;
      while( true ) {
        if ((int)pCVar2->max_length <= (int)uVar3) {
          return uVar1;
        }
        if (pCVar2->max_length <= uVar3) break;
        iVar5 = pCVar4->rgba;
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + (char)((uint)iVar5 >> 0x10) + (char)((uint)iVar5 >> 8) + (char)iVar5;
        pCVar4 = (Color32 *)&pCVar4->r;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  uVar1 = (*pcVar6)();
  return uVar1;
}


/* Void GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).hashes;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    index = 0;
    pLVar3 = (this->fields).textures;
    while (pLVar3 != (List_1_UnityEngine_Texture2D_ *)0x0) {
      if ((pLVar3->fields)._size <= index) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).textures;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      value = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                        );
      this_01 = (this->fields).material;
      if (this_01 == (Material *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_01,(Texture *)value,(MethodInfo *)0x0);
      this_02 = (this->fields).cam;
      if (this_02 == (Camera *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(this_02,(MethodInfo *)0x0);
      index = index + 1;
      pLVar3 = (this->fields).textures;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_Initialize
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 2;
  iVar10 = 0x10;
  iVar11 = 0x10;
  iVar12 = 1;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_bindMS
            ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_colorFormat
            ((RenderTextureDescriptor *)&stack0xffffff98,RenderTextureFormat__Enum_Default,
             (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_depthBufferBits
            ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor_set_sRGB
            ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_useMipMap
            ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_autoGenerateMips
            ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
  (this->fields).renderTextureDesc._width_k__BackingField = iVar10;
  (this->fields).renderTextureDesc._height_k__BackingField = iVar11;
  (this->fields).renderTextureDesc._msaaSamples_k__BackingField = iVar12;
  (this->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
  (this->fields).renderTextureDesc._mipCount_k__BackingField = iVar2;
  (this->fields).renderTextureDesc._graphicsFormat = iVar3;
  (this->fields).renderTextureDesc._stencilFormat_k__BackingField = iVar4;
  (this->fields).renderTextureDesc._depthStencilFormat_k__BackingField = iVar1;
  (this->fields).renderTextureDesc._dimension_k__BackingField = iVar9;
  (this->fields).renderTextureDesc._shadowSamplingMode_k__BackingField = iVar5;
  (this->fields).renderTextureDesc._vrUsage_k__BackingField = iVar6;
  (this->fields).renderTextureDesc._flags = iVar7;
  (this->fields).renderTextureDesc._memoryless_k__BackingField = iVar8;
  puVar13 = &UNK_?;
  pRVar14 = (RenderTexture *)func_?();
  if (pRVar14 != (RenderTexture *)0x0) {
    desc._height_k__BackingField = iVar11;
    desc._width_k__BackingField = iVar10;
    desc._msaaSamples_k__BackingField = iVar12;
    desc._volumeDepth_k__BackingField = 1;
    desc._mipCount_k__BackingField = iVar2;
    desc._graphicsFormat = iVar3;
    desc._stencilFormat_k__BackingField = iVar4;
    desc._depthStencilFormat_k__BackingField = iVar1;
    desc._dimension_k__BackingField = (int32_t)puVar13;
    desc._shadowSamplingMode_k__BackingField = 0;
    desc._vrUsage_k__BackingField = iVar6;
    desc._flags = iVar7;
    desc._memoryless_k__BackingField = iVar8;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_1
              (pRVar14,desc,(MethodInfo *)0x0);
    (this->fields).renderTexture = pRVar14;
    func_?();
    pRVar14 = (this->fields).renderTexture;
    if (pRVar14 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                ((Texture *)pRVar14,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
      pRVar14 = (this->fields).renderTexture;
      if (pRVar14 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)pRVar14,FilterMode__Enum_Point,(MethodInfo *)0x0);
        pRVar14 = (this->fields).renderTexture;
        if (pRVar14 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                    ((Texture *)pRVar14,1,(MethodInfo *)0x0);
          MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnPostRender_GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_OnPostRender_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&StringLiteral_MaterialPlaneRenderer_failed_to_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  if (this_00 != (Material *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (this_00,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_MaterialPlaneRenderer_failed_to_,(MethodInfo *)0x0);
      return;
    }
    mesh = (this->fields).plane;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    position = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Graphics);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,position,rotation,(MethodInfo *)0x0);
    pLVar2 = (this->fields).hashes;
    uVar3 = MaterialPlaneRenderer_CalculateHash(this,(this->fields).renderTexture,(MethodInfo *)0x0)
    ;
    pMVar4 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
    this = (MaterialPlaneRenderer *)CONCAT31(this._1_3_,uVar3);
    if (pLVar2 != (List_1_System_Byte_ *)0x0) {
      piVar5 = &(pLVar2->fields)._version;
      *piVar5 = *piVar5 + 1;
      pBVar6 = (pLVar2->fields)._items;
      if (pBVar6 != (Byte__Array *)0x0) {
        uVar7 = (pLVar2->fields)._size;
        if (pBVar6->max_length <= uVar7) {
          (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar2,this,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
          return;
        }
        (pLVar2->fields)._size = uVar7 + 1;
        if (uVar7 < pBVar6->max_length) {
          pBVar6->vector[uVar7] = uVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_OnValidate
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cam;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    (this->fields).cam = pCVar1;
    func_?(&(this->fields).cam);
  }
  pCVar1 = (this->fields).cam;
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pCVar1,0,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0)
      ;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      fVar4 = 0.0;
      this = (MaterialPlaneRenderer *)0x0;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffec,
                          (Vector3)CONCAT84(CONCAT44(this,fVar4),(float)_UNK_?),
                          (MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar3,*pQVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_VerifyTextureIntegrity(MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    func_?(&TypeInfo__AntiHack__MaterialPlaneRenderer);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral_____);
    func_?(&StringLiteral_TextureIntegrityBreached);
    func_?(&StringLiteral___has_been_changed_);
    func_?(&StringLiteral_Texture_integrity_breached_u000A_tex);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(this->fields).hashes;
  if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
    index = (undefined1 *)0x0;
    if (pUVar2 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)index) {
        return 1;
      }
      if ((undefined1 *)pUVar2->max_length <= index) goto code_?;
      this_01 = (List_1_System_ByteEnum_ *)(this->fields).hashes;
      cVar3 = (index + 0x10)[(int)pUVar2];
      if (this_01 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
      IVar4.m_value =
           (int32_t)MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_;
      BVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
              List_1_System_ByteEnum__get_Item
                        (this_01,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                        );
      if ((cVar3 != (char)BVar5) &&
         (TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent == 0)) break;
      index = (undefined1 *)(IVar4.m_value + 1);
    }
    TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent = 1;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_TextureIntegrityBreached,1,(MethodInfo *)0x0)
    ;
    values = (String__Array *)func_?(TypeInfo__System__String);
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Texture_integrity_breached_u000A_tex != (String *)0x0) &&
       (iVar6 = func_?(StringLiteral_Texture_integrity_breached_u000A_tex), iVar6 == 0))
    goto code_?;
    func_?(0);
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((pSVar7 != (String *)0x0) && (iVar6 = func_?(pSVar7), iVar6 == 0))
    goto code_?;
    func_?(1);
    if ((::StringLiteral_____ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral_____,(values->klass->_0).element_class), iVar6 == 0)
       ) goto code_?;
    func_?(2,::StringLiteral_____);
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).textures;
    if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,(int32_t)
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                             ,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                            ), this_03 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_03,(MethodInfo *)0x0);
    if ((pSVar7 == (String *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
      func_?();
      if ((StringLiteral___has_been_changed_ == (String *)0x0) ||
         (iVar6 = func_?(), iVar6 != 0)) {
        func_?();
        pSVar7 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        CheatHandling::CheatHandling_TextureHackDetected((MethodInfo *)0x0);
        return 0;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* MaterialPlaneRenderer() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer__ctor
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Texture2D>);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Texture2D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Texture2D>);
  if (this_00 != (List_1_UnityEngine_Texture2D_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__);
    (this->fields).textures = this_00;
    func_?(&(this->fields).textures,this_00);
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                (this_01,1,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_)
      ;
      (this->fields).hashes = (List_1_System_Byte_ *)this_01;
      func_?(&(this->fields).hashes,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

