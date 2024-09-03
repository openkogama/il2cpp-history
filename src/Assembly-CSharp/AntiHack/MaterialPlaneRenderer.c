
/* Byte CalculateHash(RenderTexture) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash
                  (MaterialPlaneRenderer *this,RenderTexture *renderTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (renderTexture != (RenderTexture *)0x0) {
    iVar1 = (*(code *)(renderTexture->klass->vtable).get_width.method)
                      (renderTexture,(renderTexture->klass->vtable).set_width.methodPtr);
    height = (*(code *)(renderTexture->klass->vtable).get_height.method)
                       (renderTexture,(renderTexture->klass->vtable).set_height.methodPtr);
    this_00 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              (this_00,iVar1,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    iVar2 = (*(code *)(renderTexture->klass->vtable).get_width.method)
                      (renderTexture,(renderTexture->klass->vtable).set_width.methodPtr);
    iVar3 = (*(code *)(renderTexture->klass->vtable).get_height.method)
                      (renderTexture,(renderTexture->klass->vtable).set_height.methodPtr);
    if (this_00 != (Texture2D *)0x0) {
      auVar4._4_4_ = (float)iVar3;
      auVar4._0_4_ = (float)iVar2;
      auVar4._8_8_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_00,(Rect)(auVar4 << 0x40),0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (this_00,(MethodInfo *)0x0);
      uVar5 = 0;
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                         (this_00,(MethodInfo *)0x0);
      uVar7 = 0;
      if (pCVar6 != (Color32__Array *)0x0) {
        pCVar8 = pCVar6->vector;
        while( true ) {
          if ((int)pCVar6->max_length <= (int)uVar7) {
            return uVar5;
          }
          if (pCVar6->max_length <= uVar7) break;
          iVar1 = pCVar8->rgba;
          uVar7 = uVar7 + 1;
          uVar5 = uVar5 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 8) + (char)iVar1;
          pCVar8 = (Color32 *)&pCVar8->r;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  uVar5 = (*pcVar9)();
  return uVar5;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_2
              (mesh,position,rotation,(MethodInfo *)0x0);
    this_01 = (this->fields).hashes;
    item = MaterialPlaneRenderer_CalculateHash(this,(this->fields).renderTexture,(MethodInfo *)0x0);
    pMVar2 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
    if (this_01 != (List_1_System_Byte_ *)0x0) {
      piVar3 = &(this_01->fields)._version;
      *piVar3 = *piVar3 + 1;
      pBVar4 = (this_01->fields)._items;
      if (pBVar4 != (Byte__Array *)0x0) {
        uVar5 = (this_01->fields)._size;
        if (pBVar4->max_length <= uVar5) {
          mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
          List_1_System_SByte__AddWithResize
                    ((List_1_System_SByte_ *)this_01,item,pMVar2->klass->rgctx_data[0xe].method);
          return;
        }
        (this_01->fields)._size = uVar5 + 1;
        if (uVar5 < pBVar4->max_length) {
          pBVar4->vector[uVar5] = item;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).hashes;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
    index = (undefined1 *)0x0;
    if (pMVar1 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      while( true ) {
        if ((int)pMVar1->max_length <= (int)index) {
          return 1;
        }
        if ((undefined1 *)pMVar1->max_length <= index) goto code_?;
        this_01 = (this->fields).hashes;
        iVar2 = (index + 0x10)[(int)pMVar1];
        if (this_01 == (List_1_System_Byte_ *)0x0) goto code_?;
        IVar3.m_value =
             (int32_t)MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_;
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__get_Item
                          ((List_1_System_SByte_ *)this_01,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        if ((iVar2 != iVar4) &&
           (TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent == 0)) break;
        index = (undefined1 *)(IVar3.m_value + 1);
      }
      TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent = 1;
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_TextureIntegrityBreached,1,(MethodInfo *)0x0);
      values = (String__Array *)func_?(TypeInfo__System__String);
      if (values != (String__Array *)0x0) {
        func_?(0);
        mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        func_?(1);
        func_?(2,::StringLiteral_____);
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).textures;
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_02,(int32_t)
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                               ,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                              );
          if (this_03 != (RegexCharClass_SingleRange)0x0) {
            pSStack5 =
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)this_03,(MethodInfo *)0x0);
            func_?();
            func_?();
            message = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)message,(MethodInfo *)0x0);
            CheatHandling::CheatHandling_TextureHackDetected((MethodInfo *)0x0);
            return 0;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__);
  (this->fields).textures = this_00;
  func_?(&(this->fields).textures,this_00);
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,1,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this->fields).hashes = (List_1_System_Byte_ *)this_01;
  func_?(&(this->fields).hashes,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

