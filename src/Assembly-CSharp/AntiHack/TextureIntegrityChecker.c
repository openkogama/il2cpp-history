
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
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_sRGB
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_useMipMap
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_autoGenerateMips
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    (this_00->fields).renderTextureDesc._width_k__BackingField = iVar10;
    (this_00->fields).renderTextureDesc._height_k__BackingField = iVar11;
    (this_00->fields).renderTextureDesc._msaaSamples_k__BackingField = iVar12;
    (this_00->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
    (this_00->fields).renderTextureDesc._mipCount_k__BackingField = iVar2;
    (this_00->fields).renderTextureDesc._graphicsFormat = iVar3;
    (this_00->fields).renderTextureDesc._stencilFormat_k__BackingField = iVar4;
    (this_00->fields).renderTextureDesc._depthStencilFormat_k__BackingField = iVar1;
    (this_00->fields).renderTextureDesc._dimension_k__BackingField = iVar9;
    (this_00->fields).renderTextureDesc._shadowSamplingMode_k__BackingField = iVar5;
    (this_00->fields).renderTextureDesc._vrUsage_k__BackingField = iVar6;
    (this_00->fields).renderTextureDesc._flags = iVar7;
    (this_00->fields).renderTextureDesc._memoryless_k__BackingField = iVar8;
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
    (this_00->fields).renderTexture = pRVar14;
    func_?();
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
          MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_00,(MethodInfo *)0x0);
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
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)(this_03->fields).hashes;
    if (this_00 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_03,(MethodInfo *)0x0);
      IVar2.m_value = 0;
      if (pMVar1 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
        while( true ) {
          if ((int)pMVar1->max_length <= IVar2.m_value) {
            return 1;
          }
          if (pMVar1->max_length <= (uint)IVar2.m_value) {
            func_?();
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          this_01 = (this_03->fields).hashes;
          iVar5 = *(int8_t *)((int)&pMVar1->vector[0].index + IVar2.m_value);
          if (this_01 == (List_1_System_Byte_ *)0x0) goto code_?;
          iVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::SByte]::
                  List_1_System_SByte__get_Item
                            ((List_1_System_SByte_ *)this_01,IVar2.m_value,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                            );
          if ((iVar5 != iVar6) &&
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
          func_?();
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          IVar2.m_value = 1;
          func_?();
          func_?();
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this_03->fields).textures;
          if ((this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             && (this_04 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (this_02,IVar2.m_value,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                                     ), this_04 != (RegexCharClass_SingleRange)0x0)) {
            pSStack7 =
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)this_04,(MethodInfo *)0x0);
            uStack8 = 3;
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
  uVar9 = func_?(&stack0xfffffff0);
  func_?(uVar9);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

