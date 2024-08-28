
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
      renderTexture = (RenderTexture *)0x0;
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                         (this_00,(MethodInfo *)0x0);
      uVar6 = 0;
      if (pCVar5 != (Color32__Array *)0x0) {
        pCVar7 = pCVar5->vector;
        bVar8 = 0;
        while( true ) {
          if ((int)pCVar5->max_length <= (int)uVar6) {
            return bVar8;
          }
          if (pCVar5->max_length <= uVar6) break;
          iVar1 = pCVar7->rgba;
          uVar6 = uVar6 + 1;
          bVar8 = renderTexture._3_1_ +
                  (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 8) + (char)iVar1;
          pCVar7 = (Color32 *)&pCVar7->r;
          renderTexture = (RenderTexture *)((uint)bVar8 << 0x18);
        }
        func_?();
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  uVar10 = (*pcVar9)();
  return uVar10;
}


/* Byte CalculateHash(Texture2D) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash_1
                  (MaterialPlaneRenderer *this,Texture2D *texture,MethodInfo *method)

{
  uStack_1 = 0;
  if (texture != (Texture2D *)0x0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                       (texture,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pCVar2 != (Color32__Array *)0x0) {
      pCVar4 = pCVar2->vector;
      while( true ) {
        if ((int)pCVar2->max_length <= (int)uVar3) {
          return uStack_1;
        }
        if (pCVar2->max_length <= uVar3) break;
        iVar5 = pCVar4->rgba;
        uVar3 = uVar3 + 1;
        uStack_1 = uStack_1 + (char)((uint)iVar5 >> 0x10) + (char)((uint)iVar5 >> 8) + (char)iVar5;
        pCVar4 = (Color32 *)&pCVar4->r;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return uVar7;
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
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).textures;
    while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size <= index) {
        return;
      }
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
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).textures;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (RenderTexture *)func_?();
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
            (this_00,desc,(MethodInfo *)0x0);
  ppRVar14 = &(this->fields).renderTexture;
  *ppRVar14 = this_00;
  func_?();
  if (*ppRVar14 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
              ((Texture *)*ppRVar14,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
    if (*ppRVar14 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)*ppRVar14,FilterMode__Enum_Point,(MethodInfo *)0x0);
      if (*ppRVar14 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                  ((Texture *)*ppRVar14,1,(MethodInfo *)0x0);
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


/* Void OnPostRender() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_OnPostRender
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
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,position,rotation,(MethodInfo *)0x0);
    this_01 = (this->fields).hashes;
    pRVar2 = (this->fields).renderTexture;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Texture2D);
      cRam_? = '\x01';
    }
    if (pRVar2 != (RenderTexture *)0x0) {
      iVar3 = (*(code *)(pRVar2->klass->vtable).get_width.method)
                        (pRVar2,(pRVar2->klass->vtable).set_width.methodPtr);
      height = (*(code *)(pRVar2->klass->vtable).get_height.method)
                         (pRVar2,(pRVar2->klass->vtable).set_height.methodPtr);
      this_02 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                (this_02,iVar3,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
      iVar4 = (*(code *)(pRVar2->klass->vtable).get_width.method)
                        (pRVar2,(pRVar2->klass->vtable).set_width.methodPtr);
      iVar5 = (*(code *)(pRVar2->klass->vtable).get_height.method)
                         (pRVar2,(pRVar2->klass->vtable).set_height.methodPtr);
      if (this_02 != (Texture2D *)0x0) {
        auVar6._4_4_ = (float)iVar5;
        auVar6._0_4_ = (float)iVar4;
        auVar6._8_8_ = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (this_02,(Rect)(auVar6 << 0x40),0,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                  (this_02,(MethodInfo *)0x0);
        bVar7 = 0;
        this = (MaterialPlaneRenderer *)0x0;
        pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                            (this_02,(MethodInfo *)0x0);
        pMVar9 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
        uVar10 = 0;
        if (pCVar8 != (Color32__Array *)0x0) {
          pCVar11 = pCVar8->vector;
          for (; (int)uVar10 < (int)pCVar8->max_length; uVar10 = uVar10 + 1) {
            if (pCVar8->max_length <= uVar10) goto code_?;
            iVar3 = pCVar11->rgba;
            bVar7 = bVar7 + (char)((uint)iVar3 >> 0x10) + (char)((uint)iVar3 >> 8) + (char)iVar3;
            pCVar11 = (Color32 *)&pCVar11->r;
            this = (MaterialPlaneRenderer *)(uint)bVar7;
          }
          if (this_01 != (List_1_System_Byte_ *)0x0) {
            piVar12 = &(this_01->fields)._version;
            *piVar12 = *piVar12 + 1;
            pBVar13 = (this_01->fields)._items;
            if (pBVar13 != (Byte__Array *)0x0) {
              uVar10 = (this_01->fields)._size;
              if (pBVar13->max_length <= uVar10) {
                mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__AddWithResize
                          ((List_1_System_SByte_ *)this_01,(int8_t)this,
                           pMVar9->klass->rgctx_data[0xe].method);
                return;
              }
              (this_01->fields)._size = uVar10 + 1;
              if (uVar10 < pBVar13->max_length) {
                pBVar13->vector[uVar10] = bVar7;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,position,rotation,(MethodInfo *)0x0);
    this_01 = (this->fields).hashes;
    pRVar2 = (this->fields).renderTexture;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Texture2D);
      cRam_? = '\x01';
    }
    if (pRVar2 != (RenderTexture *)0x0) {
      iVar3 = (*(code *)(pRVar2->klass->vtable).get_width.method)
                        (pRVar2,(pRVar2->klass->vtable).set_width.methodPtr);
      height = (*(code *)(pRVar2->klass->vtable).get_height.method)
                         (pRVar2,(pRVar2->klass->vtable).set_height.methodPtr);
      this_02 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                (this_02,iVar3,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
      iVar4 = (*(code *)(pRVar2->klass->vtable).get_width.method)
                        (pRVar2,(pRVar2->klass->vtable).set_width.methodPtr);
      iVar5 = (*(code *)(pRVar2->klass->vtable).get_height.method)
                         (pRVar2,(pRVar2->klass->vtable).set_height.methodPtr);
      if (this_02 != (Texture2D *)0x0) {
        auVar6._4_4_ = (float)iVar5;
        auVar6._0_4_ = (float)iVar4;
        auVar6._8_8_ = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (this_02,(Rect)(auVar6 << 0x40),0,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                  (this_02,(MethodInfo *)0x0);
        bVar7 = 0;
        this = (MaterialPlaneRenderer *)0x0;
        pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                            (this_02,(MethodInfo *)0x0);
        pMVar9 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
        uVar10 = 0;
        if (pCVar8 != (Color32__Array *)0x0) {
          pCVar11 = pCVar8->vector;
          for (; (int)uVar10 < (int)pCVar8->max_length; uVar10 = uVar10 + 1) {
            if (pCVar8->max_length <= uVar10) goto code_?;
            iVar3 = pCVar11->rgba;
            bVar7 = bVar7 + (char)((uint)iVar3 >> 0x10) + (char)((uint)iVar3 >> 8) + (char)iVar3;
            pCVar11 = (Color32 *)&pCVar11->r;
            this = (MaterialPlaneRenderer *)(uint)bVar7;
          }
          if (this_01 != (List_1_System_Byte_ *)0x0) {
            piVar12 = &(this_01->fields)._version;
            *piVar12 = *piVar12 + 1;
            pBVar13 = (this_01->fields)._items;
            if (pBVar13 != (Byte__Array *)0x0) {
              uVar10 = (this_01->fields)._size;
              if (pBVar13->max_length <= uVar10) {
                mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                List_1_System_SByte__AddWithResize
                          ((List_1_System_SByte_ *)this_01,(int8_t)this,
                           pMVar9->klass->rgctx_data[0xe].method);
                return;
              }
              (this_01->fields)._size = uVar10 + 1;
              if (uVar10 < pBVar13->max_length) {
                pBVar13->vector[uVar10] = bVar7;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  ppCVar1 = &(this->fields).cam;
  pCVar2 = *ppCVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pCVar2 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    *ppCVar1 = pCVar2;
    func_?(ppCVar1,pCVar2);
  }
  if (*ppCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)*ppCVar1,0,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0)
      ;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      euler.y = 0.0;
      euler.z = 0.0;
      euler.x = (float)_UNK_?;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        fStack6 = pQVar5->y;
        fStack7 = pQVar5->z;
        fStack8 = pQVar5->w;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,*pQVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  ppLVar1 = &(this->fields).textures;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,1,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  ppLVar2 = &(this->fields).hashes;
  *ppLVar2 = (List_1_System_Byte_ *)this_01;
  func_?(ppLVar2,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

