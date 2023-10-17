
/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::TextureIntegrityChecker_Initialize
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this_00 = (this->fields).materialPlaneRenderer;
  if (this_00 != (MaterialPlaneRenderer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__RenderTexture);
      cRam_? = '\x01';
    }
    RStack_1._depthStencilFormat_k__BackingField = 0;
    RStack_1._volumeDepth_k__BackingField = 0;
    RStack_1._mipCount_k__BackingField = 0;
    RStack_1._graphicsFormat = 0;
    RStack_1._stencilFormat_k__BackingField = 0;
    RStack_1._shadowSamplingMode_k__BackingField = 0;
    RStack_1._vrUsage_k__BackingField = 0;
    RStack_1._flags = 0;
    RStack_1._memoryless_k__BackingField = 0;
    RStack_1._dimension_k__BackingField = 2;
    RStack_1._width_k__BackingField = 0x10;
    RStack_1._height_k__BackingField = 0x10;
    RStack_1._msaaSamples_k__BackingField = 1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_bindMS(&RStack_1,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_colorFormat
              (&RStack_1,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_depthBufferBits(&RStack_1,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_sRGB(&RStack_1,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_useMipMap(&RStack_1,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_autoGenerateMips(&RStack_1,0,(MethodInfo *)0x0);
    iVar2 = RStack_1._memoryless_k__BackingField;
    RStack_1._volumeDepth_k__BackingField = 1;
    (this_00->fields).renderTextureDesc._width_k__BackingField = RStack_1._width_k__BackingField;
    (this_00->fields).renderTextureDesc._height_k__BackingField = RStack_1._height_k__BackingField;
    (this_00->fields).renderTextureDesc._msaaSamples_k__BackingField =
         RStack_1._msaaSamples_k__BackingField;
    (this_00->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
    iStack_3 = RStack_1._width_k__BackingField;
    iStack_4 = RStack_1._height_k__BackingField;
    iStack_5 = RStack_1._msaaSamples_k__BackingField;
    uStack_6 = 1;
    (this_00->fields).renderTextureDesc._mipCount_k__BackingField =
         RStack_1._mipCount_k__BackingField;
    (this_00->fields).renderTextureDesc._graphicsFormat = RStack_1._graphicsFormat;
    (this_00->fields).renderTextureDesc._stencilFormat_k__BackingField =
         RStack_1._stencilFormat_k__BackingField;
    (this_00->fields).renderTextureDesc._depthStencilFormat_k__BackingField =
         RStack_1._depthStencilFormat_k__BackingField;
    iStack_7 = RStack_1._mipCount_k__BackingField;
    iStack_8 = RStack_1._graphicsFormat;
    iStack_9 = RStack_1._stencilFormat_k__BackingField;
    iStack_10 = RStack_1._depthStencilFormat_k__BackingField;
    (this_00->fields).renderTextureDesc._dimension_k__BackingField =
         RStack_1._dimension_k__BackingField;
    (this_00->fields).renderTextureDesc._shadowSamplingMode_k__BackingField =
         RStack_1._shadowSamplingMode_k__BackingField;
    (this_00->fields).renderTextureDesc._vrUsage_k__BackingField =
         RStack_1._vrUsage_k__BackingField;
    (this_00->fields).renderTextureDesc._flags = RStack_1._flags;
    (this_00->fields).renderTextureDesc._memoryless_k__BackingField =
         RStack_1._memoryless_k__BackingField;
    iStack_11 = RStack_1._shadowSamplingMode_k__BackingField;
    iStack_12 = RStack_1._vrUsage_k__BackingField;
    iStack_13 = RStack_1._flags;
    pRVar14 = (RenderTexture *)func_?();
    if (pRVar14 != (RenderTexture *)0x0) {
      desc._height_k__BackingField = iStack_4;
      desc._width_k__BackingField = iStack_3;
      desc._msaaSamples_k__BackingField = iStack_5;
      desc._volumeDepth_k__BackingField = uStack_6;
      desc._mipCount_k__BackingField = iStack_7;
      desc._graphicsFormat = iStack_8;
      desc._stencilFormat_k__BackingField = iStack_9;
      desc._depthStencilFormat_k__BackingField = iStack_10;
      desc._dimension_k__BackingField = (int32_t)puStack_15;
      desc._shadowSamplingMode_k__BackingField = iStack_11;
      desc._vrUsage_k__BackingField = iStack_12;
      desc._flags = iStack_13;
      desc._memoryless_k__BackingField = iVar2;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_1
                (pRVar14,desc,(MethodInfo *)0x0);
      (this_00->fields).renderTexture = pRVar14;
      func_?(&(this_00->fields).renderTexture,pRVar14);
      pRVar14 = (this_00->fields).renderTexture;
      if (pRVar14 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                  ((Texture *)pRVar14,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
        pRVar14 = (this_00->fields).renderTexture;
        if (pRVar14 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar14,FilterMode__Enum_Point,(MethodInfo *)0x0);
          pRVar14 = (this_00->fields).renderTexture;
          if (pRVar14 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                      ((Texture *)pRVar14,1,(MethodInfo *)0x0);
            MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
                      (this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::
     TextureIntegrityChecker_VerifyTextureIntegrity
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this_03 = (this->fields).materialPlaneRenderer;
  if (this_03 != (MaterialPlaneRenderer *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_)
      ;
      func_?(&TypeInfo__AntiHack__MaterialPlaneRenderer);
      func_?(&TypeInfo__StatHatWrapper);
      func_?(&TypeInfo__System__String);
      func_?(&::StringLiteral_____);
      func_?(&StringLiteral_TextureIntegrityBreached);
      func_?(&StringLiteral___has_been_changed_);
      func_?(&StringLiteral_Texture_integrity_breached_u000A_tex);
      cRam_? = '\x01';
    }
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              (this_03->fields).hashes;
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_03,(MethodInfo *)0x0);
      IVar2.m_value = 0;
      if (pUVar1 != (UnitySynchronizationContext_WorkRequest__Array *)0x0) {
        while( true ) {
          if ((int)pUVar1->max_length <= IVar2.m_value) {
            return 1;
          }
          if (pUVar1->max_length <= (uint)IVar2.m_value) goto code_?;
          this_01 = (List_1_System_ByteEnum_ *)(this_03->fields).hashes;
          cVar3 = *(char *)((int)&pUVar1->vector[0].m_DelagateCallback + IVar2.m_value);
          if (this_01 == (List_1_System_ByteEnum_ *)0x0) goto code_?;
          BVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
                  List_1_System_ByteEnum__get_Item
                            (this_01,IVar2.m_value,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          if ((cVar3 != (char)BVar4) &&
             (TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent == 0))
          break;
          IVar2.m_value = IVar2.m_value + 1;
        }
        TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent = 1;
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_TextureIntegrityBreached,1,(MethodInfo *)0x0);
        values = (String__Array *)func_?();
        if (values != (String__Array *)0x0) {
          if ((StringLiteral_Texture_integrity_breached_u000A_tex == (String *)0x0) ||
             (iVar5 = func_?(), iVar5 != 0)) {
            func_?();
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            if ((pSVar6 != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
            goto code_?;
            IVar2.m_value = 1;
            func_?();
            if ((::StringLiteral_____ != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
            goto code_?;
            func_?();
            this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this_03->fields).textures;
            if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                ) || (this_04 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (this_02,IVar2.m_value,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                                          ), this_04 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)this_04,(MethodInfo *)0x0);
            if ((pSVar6 != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
            goto code_?;
            func_?();
            if ((StringLiteral___has_been_changed_ == (String *)0x0) ||
               (iVar5 = func_?(), iVar5 != 0)) {
              func_?();
              pSVar6 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar6,(MethodInfo *)0x0);
              CheatHandling::CheatHandling_TextureHackDetected((MethodInfo *)0x0);
              return 0;
            }
          }
          else {
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
          }
          func_?();
          func_?();
code_?:
          func_?();
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
      }
    }
  }
code_?:
  uVar9 = func_?(&stack0xfffffff0);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

