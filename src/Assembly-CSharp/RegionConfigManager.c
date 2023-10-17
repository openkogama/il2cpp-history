
/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_get_RegionConfig
          (RegionConfigManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_friends);
    func_?(&StringLiteral_br);
    func_?(&StringLiteral_www);
    func_?(&StringLiteral_test);
    func_?(&StringLiteral_dev);
    func_?(&StringLiteral_ut);
    func_?(&StringLiteral_local);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).regionTag;
  if (pTVar1 != (TextAsset *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                       (pTVar1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,StringLiteral_local,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return (this->fields).local;
    }
    pTVar1 = (this->fields).regionTag;
    if (pTVar1 != (TextAsset *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar1,(MethodInfo *)0x0);
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,StringLiteral_dev,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return (this->fields).dev;
      }
      pTVar1 = (this->fields).regionTag;
      if (pTVar1 != (TextAsset *)0x0) {
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar1,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar2,StringLiteral_test,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return (this->fields).test;
        }
        pTVar1 = (this->fields).regionTag;
        if (pTVar1 != (TextAsset *)0x0) {
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar1,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar2,StringLiteral_friends,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (this->fields).friends;
          }
          pTVar1 = (this->fields).regionTag;
          if (pTVar1 != (TextAsset *)0x0) {
            pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                               (pTVar1,(MethodInfo *)0x0);
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar2,StringLiteral_br,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return (this->fields).br;
            }
            pSVar2 = RegionConfigManager_get_RegionTag(this,(MethodInfo *)0x0);
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar2,StringLiteral_www,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return (this->fields).www;
            }
            pSVar2 = RegionConfigManager_get_RegionTag(this,(MethodInfo *)0x0);
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar2,StringLiteral_ut,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return (this->fields).ut;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (Exception *)func_?();
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar2 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar2,method_00);
  uStack4 = func_?();
  pEStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  pRVar7 = (RegionConfig *)(*pcVar6)();
  return pRVar7;
}


/* String get_RegionTag() */

String * Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_get_RegionTag
                   (RegionConfigManager *this,MethodInfo *method)

{
  pTVar1 = (this->fields).regionTag;
  puVar2 = &stack0xfffffffc;
  if (pTVar1 != (TextAsset *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pTStack_3 = pTVar1;
    (*pcRam_?)();
    in_stack_4 = 0xffffffff;
    in_stack_5 = &DAT_?;
    in_stack_6 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0x00000028;
    if (cRam_? == '\0') {
      func_?();
      pTStack_3 = (TextAsset *)
                  &
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Byte_[],_System::Text::Encoding>__get_Key__
      ;
      func_?();
      ppMStack_7 = &
                   MethodInfo__System__Collections__Generic__KeyValuePair<System::Byte_[],_System::Text::Encoding>__get_Value__
      ;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__TextAsset__EncodingUtility->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pKVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility->static_fields->encodingLookup;
    puVar2 = &stack0x00000034;
    if (pKVar8 != (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0) {
      iVar9 = pKVar8->max_length;
      pTVar10 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
      for (uVar11 = 0; (int)uVar11 < (int)iVar9; uVar11 = uVar11 + 1) {
        if ((pTVar10->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pTVar10 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
        }
        pKVar8 = pTVar10->static_fields->encodingLookup;
        puVar2 = &stack0x00000034;
        if (pKVar8 == (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0)
        goto code_?;
        if (pKVar8->max_length <= uVar11) {
code_?:
          func_?();
          pcVar12 = (code *)swi(3);
          pSVar13 = (String *)(*pcVar12)();
          return pSVar13;
        }
        pBVar14 = pKVar8->vector[uVar11].key;
        puVar2 = &stack0x00000034;
        if ((pBVar14 == (Byte__Array *)0x0) ||
           (iVar15 = pBVar14->max_length, puVar2 = &stack0x00000034,
           in_stack_16 == (undefined *)0x0)) goto code_?;
        if ((int)iVar15 <= *(int *)(in_stack_16 + 0xc)) {
          uVar17 = 0;
          if (0 < (int)iVar15) {
            do {
              if ((pBVar14->max_length <= uVar17) || (*(uint *)(in_stack_16 + 0xc) <= uVar17))
              goto code_?;
              if (pBVar14->vector[uVar17] != in_stack_16[uVar17 + 0x10]) {
                iVar15 = 0xffffffff;
              }
              uVar17 = uVar17 + 1;
              pTVar10 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
            } while ((int)uVar17 < (int)iVar15);
          }
          if (-1 < (int)iVar15) {
            in_stack_4 = 0;
            if ((TypeInfo__UnityEngine__TextAsset__EncodingUtility->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            puVar2 = &stack0x00000034;
            if (TypeInfo__UnityEngine__TextAsset__EncodingUtility->static_fields->encodingLookup !=
                (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0) {
              iVar18 = func_?();
              puVar2 = &stack0x00000034;
              if (*(undefined **)(iVar18 + 4) != (undefined *)0x0) {
                ppMStack_7 = (MethodInfo **)in_stack_16;
                puStack_19 = *(undefined **)(iVar18 + 4);
                pTStack_3 = (TextAsset *)iVar15;
                pSVar13 = (String *)func_?(0x23);
                *unaff_FS_OFFSET = in_stack_6;
                return pSVar13;
              }
            }
            goto code_?;
          }
        }
      }
      if ((pTVar10->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pTVar10 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
      }
      pEVar20 = pTVar10->static_fields->targetEncoding;
      puVar2 = &stack0x00000034;
      if ((in_stack_16 != (undefined *)0x0) &&
         (puVar2 = &stack0x00000034, pEVar20 != (Encoding *)0x0)) {
        pTStack_3 = *(TextAsset **)(in_stack_16 + 0xc);
        ppMStack_7 = (MethodInfo **)0x0;
        puStack_19 = in_stack_16;
        pSVar13 = (String *)(*(pEVar20->klass->vtable).GetString_1.methodPtr)(pEVar20);
        *unaff_FS_OFFSET = in_stack_6;
        return pSVar13;
      }
    }
  }
code_?:
  pTStack_3 = (TextAsset *)puVar2;
  uVar21 = func_?(&puStack_19);
  func_?(uVar21);
  pcVar12 = (code *)swi(3);
  pSVar13 = (String *)(*pcVar12)();
  return pSVar13;
}

