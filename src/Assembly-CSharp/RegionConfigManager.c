
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
  if (pTVar1 != (TextAsset *)0x0) {
    if (cRam_? == '\0') {
      pTStack_2 = (TextAsset *)&TypeInfo__System__String;
      func_?();
      cRam_? = '\x01';
    }
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pTStack_2 = pTVar1;
    iVar3 = (*pcRam_?)();
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        return TypeInfo__System__String->static_fields->Empty;
      }
      pTStack_2 = (TextAsset *)0xffffffff;
      puStack_4 = &DAT_?;
      uStack_5 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &uStack_5;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__TextAsset__EncodingUtility);
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<System::Byte_[],_System::Text::Encoding>__get_Key__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<System::Byte_[],_System::Text::Encoding>__get_Value__
                       );
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__TextAsset__EncodingUtility->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__TextAsset__EncodingUtility);
      }
      pKVar6 = TypeInfo__UnityEngine__TextAsset__EncodingUtility->static_fields->encodingLookup;
      if (pKVar6 != (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0) {
        iVar7 = pKVar6->max_length;
        pTVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
        for (uVar9 = 0; (int)uVar9 < (int)iVar7; uVar9 = uVar9 + 1) {
          if ((pTVar8->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pTVar8);
            pTVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
          }
          pKVar6 = pTVar8->static_fields->encodingLookup;
          if (pKVar6 == (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0)
          goto code_?;
          if (pKVar6->max_length <= uVar9) {
code_?:
            func_?();
            pcVar10 = (code *)swi(3);
            pSVar11 = (String *)(*pcVar10)();
            return pSVar11;
          }
          pBVar12 = pKVar6->vector[uVar9].key;
          if ((pBVar12 == (Byte__Array *)0x0) || (uVar13 = pBVar12->max_length, iVar3 == 0))
          goto code_?;
          if ((int)uVar13 <= *(int *)(iVar3 + 0xc)) {
            uVar14 = 0;
            uVar15 = uVar13;
            if (0 < (int)uVar13) {
              do {
                if ((uVar13 <= uVar14) || (*(uint *)(iVar3 + 0xc) <= uVar14)) goto code_?;
                if (pBVar12->vector[uVar14] != *(uint8_t *)(uVar14 + 0x10 + iVar3)) {
                  uVar15 = 0xffffffff;
                }
                uVar14 = uVar14 + 1;
                pTVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
              } while ((int)uVar14 < (int)uVar15);
            }
            if (-1 < (int)uVar15) {
              pTStack_2 = (TextAsset *)0x0;
              if ((TypeInfo__UnityEngine__TextAsset__EncodingUtility->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__UnityEngine__TextAsset__EncodingUtility);
              }
              if (TypeInfo__UnityEngine__TextAsset__EncodingUtility->static_fields->encodingLookup
                  != (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0) {
                iVar16 = func_?(uVar9);
                if (*(int *)(iVar16 + 4) != 0) {
                  pSVar11 = (String *)
                            func_?(0x23,*(int *)(iVar16 + 4),iVar3,uVar15,
                                            *(int *)(iVar3 + 0xc) - uVar15);
                  *unaff_FS_OFFSET = uStack_5;
                  return pSVar11;
                }
              }
              goto code_?;
            }
          }
        }
        if ((pTVar8->_1).cctor_finished_or_no_cctor == 0) {
          func_?(pTVar8);
          pTVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
        }
        pEVar17 = pTVar8->static_fields->targetEncoding;
        if ((iVar3 != 0) && (pEVar17 != (Encoding *)0x0)) {
          pSVar11 = (String *)
                    (*(code *)(pEVar17->klass->vtable).GetString_1.method)
                              (pEVar17,iVar3,0,*(undefined4 *)(iVar3 + 0xc),
                               (pEVar17->klass->vtable).GetBestFitUnicodeToBytesData.methodPtr);
          *unaff_FS_OFFSET = uStack_5;
          return pSVar11;
        }
      }
    }
  }
code_?:
  pTStack_2 = (TextAsset *)&stack0xfffffffc;
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar11 = (String *)(*pcVar10)();
  return pSVar11;
}

