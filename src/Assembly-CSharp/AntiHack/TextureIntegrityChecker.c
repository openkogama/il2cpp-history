
/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::TextureIntegrityChecker_Initialize
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this_00 = (this->fields).materialPlaneRenderer;
  if (this_00 == (MaterialPlaneRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_2._depthStencilFormat_k__BackingField = 0;
  RStack_2._dimension_k__BackingField = 2;
  RStack_2._volumeDepth_k__BackingField = 0;
  RStack_2._mipCount_k__BackingField = 0;
  RStack_2._graphicsFormat = 0;
  RStack_2._stencilFormat_k__BackingField = 0;
  RStack_2._shadowSamplingMode_k__BackingField = 0;
  RStack_2._vrUsage_k__BackingField = 0;
  RStack_2._memoryless_k__BackingField = 0;
  RStack_2._width_k__BackingField = 0x10;
  RStack_2._height_k__BackingField = 0x10;
  RStack_2._msaaSamples_k__BackingField = 1;
  RStack_2._flags = 0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_colorFormat
            (&RStack_2,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
  RStack_2._depthStencilFormat_k__BackingField =
       UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
       RenderTexture_GetDepthStencilFormatLegacy_4
                 (0,RStack_2._shadowSamplingMode_k__BackingField != 2,(MethodInfo *)0x0);
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  value = (*pcRam_?)(RStack_2._graphicsFormat);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_graphicsFormat(&RStack_2,value,(MethodInfo *)0x0);
  iVar4 = RStack_2._memoryless_k__BackingField;
  uVar5 = RStack_2._0_8_;
  uVar6._4_4_ = RStack_2._graphicsFormat;
  uVar6._0_4_ = RStack_2._mipCount_k__BackingField;
  uVar7._4_4_ = RStack_2._depthStencilFormat_k__BackingField;
  uVar7._0_4_ = RStack_2._stencilFormat_k__BackingField;
  uVar8._4_4_ = RStack_2._shadowSamplingMode_k__BackingField;
  uVar8._0_4_ = RStack_2._dimension_k__BackingField;
  uVar9 = CONCAT44(RStack_2._flags,RStack_2._vrUsage_k__BackingField) & 0xfffffffcffffffff;
  RStack_2._volumeDepth_k__BackingField = 1;
  uVar3._4_4_ = 1;
  uVar3._0_4_ = RStack_2._msaaSamples_k__BackingField;
  (this_00->fields).renderTextureDesc._width_k__BackingField = RStack_2._width_k__BackingField;
  (this_00->fields).renderTextureDesc._height_k__BackingField = RStack_2._height_k__BackingField;
  (this_00->fields).renderTextureDesc._msaaSamples_k__BackingField =
       RStack_2._msaaSamples_k__BackingField;
  (this_00->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
  (this_00->fields).renderTextureDesc._mipCount_k__BackingField =
       RStack_2._mipCount_k__BackingField;
  (this_00->fields).renderTextureDesc._graphicsFormat = RStack_2._graphicsFormat;
  (this_00->fields).renderTextureDesc._stencilFormat_k__BackingField =
       RStack_2._stencilFormat_k__BackingField;
  (this_00->fields).renderTextureDesc._depthStencilFormat_k__BackingField =
       RStack_2._depthStencilFormat_k__BackingField;
  (this_00->fields).renderTextureDesc._dimension_k__BackingField =
       RStack_2._dimension_k__BackingField;
  (this_00->fields).renderTextureDesc._shadowSamplingMode_k__BackingField =
       RStack_2._shadowSamplingMode_k__BackingField;
  (this_00->fields).renderTextureDesc._vrUsage_k__BackingField = (int)uVar9;
  (this_00->fields).renderTextureDesc._flags = (int)(uVar9 >> 0x20);
  (this_00->fields).renderTextureDesc._memoryless_k__BackingField =
       RStack_2._memoryless_k__BackingField;
  RStack_2._flags = RStack_2._flags & 0xfffffffc;
  pRVar10 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
  uVar11 = RStack_2._0_8_;
  RStack_2._width_k__BackingField = (int32_t)uVar5;
  RStack_2._height_k__BackingField = SUB84(uVar5,4);
  RStack_12._width_k__BackingField = RStack_2._width_k__BackingField;
  RStack_12._height_k__BackingField = RStack_2._height_k__BackingField;
  RStack_12._memoryless_k__BackingField = iVar4;
  RStack_2._0_8_ = uVar11;
  RStack_12._8_8_ = uVar3;
  RStack_12._16_8_ = uVar6;
  RStack_12._24_8_ = uVar7;
  RStack_12._32_8_ = uVar8;
  RStack_12._40_8_ = uVar9;
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
            (&RStack_12,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pRVar10);
  RStack_2._width_k__BackingField = RStack_12._width_k__BackingField;
  RStack_2._height_k__BackingField = RStack_12._height_k__BackingField;
  RStack_2._msaaSamples_k__BackingField = RStack_12._msaaSamples_k__BackingField;
  RStack_2._volumeDepth_k__BackingField = RStack_12._volumeDepth_k__BackingField;
  RStack_2._dimension_k__BackingField = RStack_12._dimension_k__BackingField;
  RStack_2._shadowSamplingMode_k__BackingField = RStack_12._shadowSamplingMode_k__BackingField;
  RStack_2._vrUsage_k__BackingField = RStack_12._vrUsage_k__BackingField;
  RStack_2._flags = RStack_12._flags;
  RStack_2._mipCount_k__BackingField = RStack_12._mipCount_k__BackingField;
  RStack_2._graphicsFormat = RStack_12._graphicsFormat;
  RStack_2._stencilFormat_k__BackingField = RStack_12._stencilFormat_k__BackingField;
  RStack_2._depthStencilFormat_k__BackingField = RStack_12._depthStencilFormat_k__BackingField;
  RStack_2._memoryless_k__BackingField = RStack_12._memoryless_k__BackingField;
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
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar13 = (pRVar10->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar13,&RStack_2);
  bVar14 = iRam_? != 0;
  (this_00->fields).renderTexture = pRVar10;
  if (bVar14) {
    uVar15 = (uint)((ulonglong)&(this_00->fields).renderTexture >> 0xc);
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
  pRVar10 = (this_00->fields).renderTexture;
  if (pRVar10 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
              ((Texture *)pRVar10,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
    pRVar10 = (this_00->fields).renderTexture;
    if (pRVar10 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar10,FilterMode__Enum_Point,(MethodInfo *)0x0);
      pRVar10 = (this_00->fields).renderTexture;
      if (pRVar10 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                  ((Texture *)pRVar10,1,(MethodInfo *)0x0);
        MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::
     TextureIntegrityChecker_VerifyTextureIntegrity
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this_00 = (this->fields).materialPlaneRenderer;
  if (this_00 == (MaterialPlaneRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
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
  if ((this_00->fields).hashes != (List_1_System_Byte_ *)0x0) {
    lVar3 = FUN_?();
    MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_00,(MethodInfo *)0x0);
    aIStackX_8[0].m_value = 0;
    if (lVar3 != 0) {
      do {
        if ((int)*(uint *)(lVar3 + 0x18) <= aIStackX_8[0].m_value) {
          return 1;
        }
        if (*(uint *)(lVar3 + 0x18) <= (uint)aIStackX_8[0].m_value) {
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          bVar2 = (*pcVar1)();
          return bVar2;
        }
        pLVar4 = (this_00->fields).hashes;
        if (pLVar4 == (List_1_System_Byte_ *)0x0) break;
        if ((uint)(pLVar4->fields)._size <= (uint)aIStackX_8[0].m_value) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          bVar2 = (*pcVar1)();
          return bVar2;
        }
        pBVar5 = (pLVar4->fields)._items;
        if (pBVar5 == (Byte__Array *)0x0) break;
        if ((uint)pBVar5->max_length <= (uint)aIStackX_8[0].m_value) goto code_?;
        if ((*(uint8_t *)((longlong)aIStackX_8[0].m_value + 0x20 + lVar3) !=
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
            if ((this_00->fields).textures != (List_1_UnityEngine_Texture2D_ *)0x0) {
              this_01 = (Object_1 *)FUN_?();
              if (this_01 != (Object_1 *)0x0) {
                pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                   (this_01,(MethodInfo *)0x0);
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
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

