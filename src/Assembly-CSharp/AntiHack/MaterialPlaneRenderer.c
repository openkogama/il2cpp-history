
/* Byte CalculateHash(RenderTexture) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash
                  (MaterialPlaneRenderer *this,RenderTexture *renderTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (renderTexture != (RenderTexture *)0x0) {
    width = (*(renderTexture->klass->vtable).get_width.methodPtr)
                      (renderTexture,(renderTexture->klass->vtable).get_width.method);
    height = (*(renderTexture->klass->vtable).get_height.methodPtr)
                       (renderTexture,(renderTexture->klass->vtable).get_height.method);
    this_00 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Texture);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar1 = 0;
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    stack0xffffffffffffffe0 = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
              (this_00,width,height,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,
               (MipmapLimitDescriptor *)auStack_2,(MethodInfo *)0x0);
    iVar3 = (*(renderTexture->klass->vtable).get_width.methodPtr)
                      (renderTexture,(renderTexture->klass->vtable).get_width.method);
    iVar4 = (*(renderTexture->klass->vtable).get_height.methodPtr)
                      (renderTexture,(renderTexture->klass->vtable).get_height.method);
    if (this_00 != (Texture2D *)0x0) {
      stack0xffffffffffffffe0 = (String *)CONCAT44((float)iVar4,(float)iVar3);
      auStack_2._0_4_ = 0.0;
      auStack_2._4_4_ = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_00,(Rect *)auStack_2,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply
                (this_00,1,0,(MethodInfo *)0x0);
      uVar5 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture2D>_UnityEngine__Texture2D_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (this_00->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        uVar5 = (*pcVar7)();
        return uVar5;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        uVar5 = (*pcVar7)();
        return uVar5;
      }
      pcRam_? = pcVar7;
      lVar9 = (*pcRam_?)(pvVar6,0);
      if (lVar9 != 0) {
        puVar10 = (undefined4 *)(lVar9 + 0x20);
        while( true ) {
          if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar1) {
            return uVar5;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
          uVar11 = *puVar10;
          uVar1 = uVar1 + 1;
          uVar5 = uVar5 + (char)((uint)uVar11 >> 0x10) + (char)((uint)uVar11 >> 8) + (char)uVar11;
          puVar10 = puVar10 + 1;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        uVar5 = (*pcVar7)();
        return uVar5;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar5 = (*pcVar7)();
  return uVar5;
}


/* Byte CalculateHash(Texture2D) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash_1
                  (MaterialPlaneRenderer *this,Texture2D *texture,MethodInfo *method)

{
  uVar1 = 0;
  if (texture != (Texture2D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture2D>_UnityEngine__Texture2D_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (texture->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)texture,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      uVar1 = (*pcVar3)();
      return uVar1;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      uVar1 = (*pcVar3)();
      return uVar1;
    }
    pcRam_? = pcVar3;
    lVar5 = (*pcRam_?)(pvVar2,0);
    this = (MaterialPlaneRenderer *)0x0;
    if (lVar5 != 0) {
      puVar6 = (undefined4 *)(lVar5 + 0x20);
      while( true ) {
        uVar7 = (uint)this;
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
          return uVar1;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) break;
        uVar8 = *puVar6;
        this = (MaterialPlaneRenderer *)(ulonglong)(uVar7 + 1);
        uVar1 = uVar1 + (char)((uint)uVar8 >> 0x10) + (char)((uint)uVar8 >> 8) + (char)uVar8;
        puVar6 = puVar6 + 1;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      uVar1 = (*pcVar3)();
      return uVar1;
    }
  }
  FUN_?(this);
  pcVar3 = (code *)swi(3);
  uVar1 = (*pcVar3)();
  return uVar1;
}


/* Void GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).hashes;
  if (pLVar1 != (List_1_System_Byte_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    uVar3 = 0;
    (pLVar1->fields)._size = 0;
    pLVar4 = (this->fields).textures;
    if (pLVar4 != (List_1_UnityEngine_Texture2D_ *)0x0) {
      lVar5 = 0x20;
      do {
        if ((pLVar4->fields)._size <= (int)uVar3) {
          return;
        }
        pLVar4 = (this->fields).textures;
        if (pLVar4 == (List_1_UnityEngine_Texture2D_ *)0x0) break;
        if ((uint)(pLVar4->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar7 = (pLVar4->fields)._items;
        if (pTVar7 == (Texture2D__Array *)0x0) break;
        if ((uint)pTVar7->max_length <= uVar3) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = (this->fields).material;
        value = *(Texture **)((longlong)pTVar7->vector + lVar5 + -0x20);
        if (this_00 == (Material *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Material);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        name = UnityEngine.CoreModule.dll::UnityEngine::Material::
               Material_GetFirstPropertyNameIdByAttribute
                         (this_00,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0);
        if (name < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__Material);
          }
          name = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                  (this_00,name,value,(MethodInfo *)0x0);
        obj = (this->fields).cam;
        if (obj == (Camera *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar8);
        pLVar4 = (this->fields).textures;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 8;
      } while (pLVar4 != (List_1_UnityEngine_Texture2D_ *)0x0);
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_Initialize
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1._depthStencilFormat_k__BackingField = 0;
  RStack_1._dimension_k__BackingField = 2;
  RStack_1._volumeDepth_k__BackingField = 0;
  RStack_1._mipCount_k__BackingField = 0;
  RStack_1._graphicsFormat = 0;
  RStack_1._stencilFormat_k__BackingField = 0;
  RStack_1._shadowSamplingMode_k__BackingField = 0;
  RStack_1._vrUsage_k__BackingField = 0;
  RStack_1._memoryless_k__BackingField = 0;
  RStack_1._width_k__BackingField = 0x10;
  RStack_1._height_k__BackingField = 0x10;
  RStack_1._msaaSamples_k__BackingField = 1;
  RStack_1._flags = 0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_colorFormat
            (&RStack_1,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
  RStack_1._depthStencilFormat_k__BackingField =
       UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
       RenderTexture_GetDepthStencilFormatLegacy_4
                 (0,RStack_1._shadowSamplingMode_k__BackingField != 2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Experimental__Rendering__GraphicsFormatUtility);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Experimental__Rendering__GraphicsFormatUtility->_1).
               field_0x1c == 0) {
    FUN_?();
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
  value = (*pcRam_?)(RStack_1._graphicsFormat);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_graphicsFormat(&RStack_1,value,(MethodInfo *)0x0);
  iVar4 = RStack_1._memoryless_k__BackingField;
  uVar5 = RStack_1._0_8_;
  uVar6._4_4_ = RStack_1._graphicsFormat;
  uVar6._0_4_ = RStack_1._mipCount_k__BackingField;
  uVar7._4_4_ = RStack_1._depthStencilFormat_k__BackingField;
  uVar7._0_4_ = RStack_1._stencilFormat_k__BackingField;
  uVar8._4_4_ = RStack_1._shadowSamplingMode_k__BackingField;
  uVar8._0_4_ = RStack_1._dimension_k__BackingField;
  uVar9 = CONCAT44(RStack_1._flags,RStack_1._vrUsage_k__BackingField) & 0xfffffffcffffffff;
  RStack_1._volumeDepth_k__BackingField = 1;
  uVar3._4_4_ = 1;
  uVar3._0_4_ = RStack_1._msaaSamples_k__BackingField;
  (this->fields).renderTextureDesc._width_k__BackingField = RStack_1._width_k__BackingField;
  (this->fields).renderTextureDesc._height_k__BackingField = RStack_1._height_k__BackingField;
  (this->fields).renderTextureDesc._msaaSamples_k__BackingField =
       RStack_1._msaaSamples_k__BackingField;
  (this->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
  (this->fields).renderTextureDesc._mipCount_k__BackingField = RStack_1._mipCount_k__BackingField;
  (this->fields).renderTextureDesc._graphicsFormat = RStack_1._graphicsFormat;
  (this->fields).renderTextureDesc._stencilFormat_k__BackingField =
       RStack_1._stencilFormat_k__BackingField;
  (this->fields).renderTextureDesc._depthStencilFormat_k__BackingField =
       RStack_1._depthStencilFormat_k__BackingField;
  (this->fields).renderTextureDesc._dimension_k__BackingField = RStack_1._dimension_k__BackingField
  ;
  (this->fields).renderTextureDesc._shadowSamplingMode_k__BackingField =
       RStack_1._shadowSamplingMode_k__BackingField;
  (this->fields).renderTextureDesc._vrUsage_k__BackingField = (int)uVar9;
  (this->fields).renderTextureDesc._flags = (int)(uVar9 >> 0x20);
  (this->fields).renderTextureDesc._memoryless_k__BackingField =
       RStack_1._memoryless_k__BackingField;
  RStack_1._flags = RStack_1._flags & 0xfffffffc;
  pRVar10 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
  uVar11 = RStack_1._0_8_;
  RStack_1._width_k__BackingField = (int32_t)uVar5;
  RStack_1._height_k__BackingField = SUB84(uVar5,4);
  aRStack_12[0]._width_k__BackingField = RStack_1._width_k__BackingField;
  aRStack_12[0]._height_k__BackingField = RStack_1._height_k__BackingField;
  aRStack_12[0]._memoryless_k__BackingField = iVar4;
  RStack_1._0_8_ = uVar11;
  aRStack_12[0]._8_8_ = uVar3;
  aRStack_12[0]._16_8_ = uVar6;
  aRStack_12[0]._24_8_ = uVar7;
  aRStack_12[0]._32_8_ = uVar8;
  aRStack_12[0]._40_8_ = uVar9;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
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
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ValidateRenderTextureDesc
            (aRStack_12,(MethodInfo *)0x0);
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
  (*pcRam_?)(pRVar10);
  RStack_1._width_k__BackingField = aRStack_12[0]._width_k__BackingField;
  RStack_1._height_k__BackingField = aRStack_12[0]._height_k__BackingField;
  RStack_1._msaaSamples_k__BackingField = (int32_t)aRStack_12[0]._8_8_;
  RStack_1._volumeDepth_k__BackingField = SUB84(aRStack_12[0]._8_8_,4);
  RStack_1._dimension_k__BackingField = aRStack_12[0]._dimension_k__BackingField;
  RStack_1._shadowSamplingMode_k__BackingField = aRStack_12[0]._shadowSamplingMode_k__BackingField;
  RStack_1._vrUsage_k__BackingField = aRStack_12[0]._vrUsage_k__BackingField;
  RStack_1._flags = aRStack_12[0]._flags;
  RStack_1._mipCount_k__BackingField = (int32_t)aRStack_12[0]._16_8_;
  RStack_1._graphicsFormat = SUB84(aRStack_12[0]._16_8_,4);
  RStack_1._stencilFormat_k__BackingField = (int32_t)aRStack_12[0]._24_8_;
  RStack_1._depthStencilFormat_k__BackingField = SUB84(aRStack_12[0]._24_8_,4);
  RStack_1._memoryless_k__BackingField = aRStack_12[0]._memoryless_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar10 == (RenderTexture *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar13 = (pRVar10->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar13,&RStack_1);
  bVar14 = iRam_? != 0;
  (this->fields).renderTexture = pRVar10;
  if (bVar14) {
    uVar15 = (uint)((ulonglong)&(this->fields).renderTexture >> 0xc);
    puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar17 = *puVar16;
      LOCK();
      uVar9 = *puVar16;
      if (uVar17 == uVar9) {
        *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (uVar17 != uVar9);
  }
  pRVar10 = (this->fields).renderTexture;
  if (pRVar10 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
              ((Texture *)pRVar10,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
    pRVar10 = (this->fields).renderTexture;
    if (pRVar10 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar10,FilterMode__Enum_Point,(MethodInfo *)0x0);
      pRVar10 = (this->fields).renderTexture;
      if (pRVar10 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                  ((Texture *)pRVar10,1,(MethodInfo *)0x0);
        MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_OnPostRender
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaterialPlaneRenderer_failed_to_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  if (this_00 != (Material *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                       (this_00,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_MaterialPlaneRenderer_failed_to_;
      if (cRam_? == '\0') {
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        auStack_3._8_8_ = &UNK_?;
        FUN_?();
      }
      if (cRam_? == '\0') {
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        auStack_3._8_8_ = &UNK_?;
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        pSStack_5 = pSVar2;
        auStack_3._8_8_ = &UNK_?;
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0);
        return;
      }
      auStack_3._8_8_ = &UNK_?;
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    mesh = (this->fields).plane;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8._0_4_ = (pVVar7->zeroVector).x;
    uVar8._4_4_ = (pVVar7->zeroVector).y;
    fVar9 = (pVVar7->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar11._0_4_ = (pQVar10->identityQuaternion).x;
    uVar11._4_4_ = (pQVar10->identityQuaternion).y;
    uVar12._0_4_ = (pQVar10->identityQuaternion).z;
    uVar12._4_4_ = (pQVar10->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Graphics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_3._8_4_ = fVar9;
    auStack_3._0_8_ = uVar8;
    auStack_13._0_8_ = uVar11;
    auStack_13._8_8_ = uVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow
              (mesh,(Vector3 *)auStack_3,(Quaternion *)auStack_13,-1,(MethodInfo *)0x0);
    pLVar14 = (this->fields).hashes;
    uVar15 = MaterialPlaneRenderer_CalculateHash
                       (this,(this->fields).renderTexture,(MethodInfo *)0x0);
    pMVar16 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
    if (pLVar14 != (List_1_System_Byte_ *)0x0) {
      piVar17 = &(pLVar14->fields)._version;
      *piVar17 = *piVar17 + 1;
      pBVar18 = (pLVar14->fields)._items;
      if (pBVar18 != (Byte__Array *)0x0) {
        uVar19 = (pLVar14->fields)._size;
        if (uVar19 < (uint)pBVar18->max_length) {
          (pLVar14->fields)._size = uVar19 + 1;
          if (uVar19 < (uint)pBVar18->max_length) {
            pBVar18->vector[(int)uVar19] = uVar15;
            return;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = (pLVar14->fields)._size;
        auStack_13._8_8_ = &UNK_?;
        FUN_?(pLVar14,uVar19 + 1,
                      (pMVar16->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                      rgctxDataDummy);
        pBVar18 = (pLVar14->fields)._items;
        (pLVar14->fields)._size = uVar19 + 1;
        if (pBVar18 != (Byte__Array *)0x0) {
          if (uVar19 < (uint)pBVar18->max_length) {
            pBVar18->vector[(int)uVar19] = uVar15;
            return;
          }
          auStack_13._8_8_ = &UNK_?;
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        auStack_13._8_8_ = &UNK_?;
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPostRender_GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_OnPostRender_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaterialPlaneRenderer_failed_to_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  if (this_00 != (Material *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                       (this_00,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_MaterialPlaneRenderer_failed_to_;
      if (cRam_? == '\0') {
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        auStack_3._8_8_ = &UNK_?;
        FUN_?();
      }
      if (cRam_? == '\0') {
        auStack_3._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        auStack_3._8_8_ = &UNK_?;
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        pSStack_5 = pSVar2;
        auStack_3._8_8_ = &UNK_?;
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0);
        return;
      }
      auStack_3._8_8_ = &UNK_?;
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    mesh = (this->fields).plane;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8._0_4_ = (pVVar7->zeroVector).x;
    uVar8._4_4_ = (pVVar7->zeroVector).y;
    fVar9 = (pVVar7->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar11._0_4_ = (pQVar10->identityQuaternion).x;
    uVar11._4_4_ = (pQVar10->identityQuaternion).y;
    uVar12._0_4_ = (pQVar10->identityQuaternion).z;
    uVar12._4_4_ = (pQVar10->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Graphics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_3._8_4_ = fVar9;
    auStack_3._0_8_ = uVar8;
    auStack_13._0_8_ = uVar11;
    auStack_13._8_8_ = uVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow
              (mesh,(Vector3 *)auStack_3,(Quaternion *)auStack_13,-1,(MethodInfo *)0x0);
    pLVar14 = (this->fields).hashes;
    uVar15 = MaterialPlaneRenderer_CalculateHash
                       (this,(this->fields).renderTexture,(MethodInfo *)0x0);
    pMVar16 = MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_;
    if (pLVar14 != (List_1_System_Byte_ *)0x0) {
      piVar17 = &(pLVar14->fields)._version;
      *piVar17 = *piVar17 + 1;
      pBVar18 = (pLVar14->fields)._items;
      if (pBVar18 != (Byte__Array *)0x0) {
        uVar19 = (pLVar14->fields)._size;
        if (uVar19 < (uint)pBVar18->max_length) {
          (pLVar14->fields)._size = uVar19 + 1;
          if (uVar19 < (uint)pBVar18->max_length) {
            pBVar18->vector[(int)uVar19] = uVar15;
            return;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = (pLVar14->fields)._size;
        auStack_13._8_8_ = &UNK_?;
        FUN_?(pLVar14,uVar19 + 1,
                      (pMVar16->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                      rgctxDataDummy);
        pBVar18 = (pLVar14->fields)._items;
        (pLVar14->fields)._size = uVar19 + 1;
        if (pBVar18 != (Byte__Array *)0x0) {
          if (uVar19 < (uint)pBVar18->max_length) {
            pBVar18->vector[(int)uVar19] = uVar15;
            return;
          }
          auStack_13._8_8_ = &UNK_?;
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        auStack_13._8_8_ = &UNK_?;
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_OnValidate
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cam;
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
  if (pCVar1 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar1 = (Camera *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).cam = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cam >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
code_?:
  pCVar1 = (this->fields).cam;
  if (pCVar1 == (Camera *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pCVar1,0,(MethodInfo *)0x0);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar8 == (Transform *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar9);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  uStack_11 = (ulonglong)_UNK_?;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_11);
  if (pTVar8 == (Transform *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uStack_15 = (undefined4)uStack_13;
  uStack_16 = uStack_13._4_4_;
  uStack_17 = (undefined4)uStack_14;
  uStack_18 = uStack_14._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar9,&uStack_15);
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_VerifyTextureIntegrity(MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AntiHack__MaterialPlaneRenderer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral_____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TextureIntegrityBreached);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___has_been_changed_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_integrity_breached_u000A_tex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).hashes != (List_1_System_Byte_ *)0x0) {
    lVar1 = FUN_?();
    MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
    aIStackX_8[0].m_value = 0;
    if (lVar1 != 0) {
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= aIStackX_8[0].m_value) {
          return 1;
        }
        if (*(uint *)(lVar1 + 0x18) <= (uint)aIStackX_8[0].m_value) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pLVar4 = (this->fields).hashes;
        if (pLVar4 == (List_1_System_Byte_ *)0x0) break;
        if ((uint)(pLVar4->fields)._size <= (uint)aIStackX_8[0].m_value) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pBVar5 = (pLVar4->fields)._items;
        if (pBVar5 == (Byte__Array *)0x0) break;
        if ((uint)pBVar5->max_length <= (uint)aIStackX_8[0].m_value) goto code_?;
        if ((*(uint8_t *)((longlong)aIStackX_8[0].m_value + 0x20 + lVar1) !=
             pBVar5->vector[aIStackX_8[0].m_value]) &&
           (TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent == 0)) {
          TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent = 1;
          if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          StatHatWrapper::StatHatWrapper_Count
                    (StringLiteral_TextureIntegrityBreached,1,(MethodInfo *)0x0);
          values = (String__Array *)FUN_?(TypeInfo__System__String);
          if (values != (String__Array *)0x0) {
            FUN_?(values,0,StringLiteral_Texture_integrity_breached_u000A_tex);
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
            FUN_?(values,1,pSVar6);
            FUN_?(values,2,::StringLiteral_____);
            if ((this->fields).textures != (List_1_UnityEngine_Texture2D_ *)0x0) {
              this_00 = (Object_1 *)FUN_?();
              if (this_00 != (Object_1 *)0x0) {
                pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                   (this_00,(MethodInfo *)0x0);
                FUN_?(values,3,pSVar6);
                FUN_?(values,4,StringLiteral___has_been_changed_);
                pSVar6 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar6,(MethodInfo *)0x0);
                CheatHandling::CheatHandling_ExecuteBan
                          ((CheatType__Enum)CONCAT71((int7)((ulonglong)pSVar6 >> 8),2),
                           (MethodInfo *)0x0);
                return 0;
              }
            }
          }
          break;
        }
        aIStackX_8[0].m_value = aIStackX_8[0].m_value + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* MaterialPlaneRenderer() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer__ctor
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Texture2D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Texture2D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).textures = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).textures >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_System_Byte_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  pvVar7 = MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
    pvVar7 = (void *)FUN_?(pvVar7);
  }
  pBVar8 = (Byte__Array *)FUN_?(pvVar7,1);
  (pLVar6->fields)._items = pBVar8;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pLVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar9 = iRam_?;
  (this->fields).hashes = pLVar6;
  if (iVar9 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).hashes >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

