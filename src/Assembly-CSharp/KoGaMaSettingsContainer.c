
/* Void InvalidateStreamingAssetsCache(Boolean) */

void Assembly-CSharp.dll::KoGaMaSettingsContainer::
     KoGaMaSettingsContainer_InvalidateStreamingAssetsCache
               (KoGaMaSettingsContainer *this,bool serialize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaSettingsContainer__CrunchDesc);
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  iVar1 = func_?(TypeInfo__KoGaMaSettingsContainer__CrunchDesc,6);
  uVar2 = 0;
  iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Year
                    ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (iVar1 == 0) {
    func_?();
  }
  else if (*(int *)(iVar1 + 0xc) != 0) {
    *(uint *)(iVar1 + 0x10) =
         CONCAT22((short)(CONCAT13(uVar2,0x60000) >> 0x10),(short)iVar3 + -0x7e1);
    uVar2 = 0;
    iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Month
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (1 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar1 + 0x14) = CONCAT13(uVar2,CONCAT12(4,(short)iVar3));
      uVar2 = 0;
      iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Day
                        ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (2 < *(uint *)(iVar1 + 0xc)) {
        *(uint *)(iVar1 + 0x18) = CONCAT13(uVar2,CONCAT12(5,(short)iVar3));
        uVar2 = 0;
        iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Hour((DateTime *)0x0,(MethodInfo *)0x0)
        ;
        if (3 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(iVar1 + 0x1c) = CONCAT13(uVar2,CONCAT12(5,(short)iVar3));
          uVar2 = 0;
          iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Minute
                            ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (4 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar1 + 0x20) = CONCAT13(uVar2,CONCAT12(6,(short)iVar3));
            uVar2 = 0;
            iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Second
                              ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
            if (5 < *(uint *)(iVar1 + 0xc)) {
              puVar4 = (undefined4 *)(iVar1 + 0x10);
              *(uint *)(iVar1 + 0x24) = CONCAT13(uVar2,CONCAT12(6,(short)iVar3));
              iVar5 = 0;
              uVar6 = 0;
              while( true ) {
                if (*(int *)(iVar1 + 0xc) <= (int)uVar6) {
                  _UNK_? = iVar5;
                  return;
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar6) break;
                uVar6 = uVar6 + 1;
                iVar5 = (iVar5 << ((byte)((uint)*puVar4 >> 0x10) & 0x1f)) + (int)(short)*puVar4;
                puVar4 = puVar4 + 1;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* KoGaMaSettingsContainer() */

void Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer__ctor
               (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).versionGuid = ::StringLiteral__;
  func_?(&(this->fields).versionGuid,::StringLiteral__);
  (this->fields).branchName = ::StringLiteral__;
  func_?(&(this->fields).branchName,::StringLiteral__);
  (this->fields).buildTime = ::StringLiteral__;
  func_?(&(this->fields).buildTime,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::ScriptableObject::ScriptableObject__ctor
            ((ScriptableObject *)this,(MethodInfo *)0x0);
  return;
}


/* String get_ReleaseName() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  pTVar1 = (this->fields).additionalMetaData;
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
          if ((pBVar12 == (Byte__Array *)0x0) || (iVar13 = pBVar12->max_length, iVar3 == 0))
          goto code_?;
          if ((int)iVar13 <= *(int *)(iVar3 + 0xc)) {
            uVar14 = 0;
            if (0 < (int)iVar13) {
              do {
                if ((pBVar12->max_length <= uVar14) || (*(uint *)(iVar3 + 0xc) <= uVar14))
                goto code_?;
                if (pBVar12->vector[uVar14] != *(uint8_t *)(uVar14 + 0x10 + iVar3)) {
                  iVar13 = 0xffffffff;
                }
                uVar14 = uVar14 + 1;
                pTVar8 = TypeInfo__UnityEngine__TextAsset__EncodingUtility;
              } while ((int)uVar14 < (int)iVar13);
            }
            if (-1 < (int)iVar13) {
              pTStack_2 = (TextAsset *)0x0;
              if ((TypeInfo__UnityEngine__TextAsset__EncodingUtility->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__UnityEngine__TextAsset__EncodingUtility);
              }
              if (TypeInfo__UnityEngine__TextAsset__EncodingUtility->static_fields->encodingLookup
                  != (KeyValuePair_2_System_Byte_System_Text_Encoding___Array *)0x0) {
                iVar15 = func_?(uVar9);
                if (*(int *)(iVar15 + 4) != 0) {
                  pSVar11 = (String *)
                           func_?(0x23,*(int *)(iVar15 + 4),iVar3,iVar13,
                                           *(int *)(iVar3 + 0xc) - iVar13);
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
        pEVar16 = pTVar8->static_fields->targetEncoding;
        if ((iVar3 != 0) && (pEVar16 != (Encoding *)0x0)) {
          pSVar11 = (String *)
                   (*(code *)(pEVar16->klass->vtable).GetString_1.method)
                             (pEVar16,iVar3,0,*(undefined4 *)(iVar3 + 0xc),
                              (pEVar16->klass->vtable).GetBestFitUnicodeToBytesData.methodPtr);
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


/* String get_UrlCacheAssetVersionArgument() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::
         KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__version_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).streamingAssetVersion,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral__version_,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int32 get_VersionCode() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionCode
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
              (this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (in_stack_1 == (Number_NumberBuffer *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (in_stack_1 == (Number_NumberBuffer *)0x0) {
      iVar2 = 0;
      BVar3._value = (void *)0x0;
    }
    else {
      BVar3._value = mscorlib.dll::System::Number+NumberBuffer::Number_NumberBuffer_get_digits
                               (in_stack_1,(MethodInfo *)0x0);
      iVar2 = in_stack_1->_sign;
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if ((TypeInfo__System__Number->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value._length = iVar2;
    value._pointer._value = BVar3._value;
    iVar2 = mscorlib.dll::System::Number::Number_ParseInt32
                      (value,NumberStyles__Enum_Integer,info,(MethodInfo *)0x0);
    return iVar2;
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar2 = (*pcVar5)();
  return iVar2;
}


/* Int32 get_VersionMajor() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMajor
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,0,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        iStack2 = 0;
        BStack3._value = (void *)0x0;
      }
      else {
        BStack3._value =
             mscorlib.dll::System::Number+NumberBuffer::Number_NumberBuffer_get_digits
                       (in_stack_1,(MethodInfo *)0x0);
        iStack2 = in_stack_1->_sign;
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if ((TypeInfo__System__Number->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value._length = iStack2;
      value._pointer._value = BStack3._value;
      iVar4 = mscorlib.dll::System::Number::Number_ParseInt32
                        (value,NumberStyles__Enum_Integer,info,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* Int32 get_VersionMicro() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMicro
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,3,3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        iStack2 = 0;
        BStack3._value = (void *)0x0;
      }
      else {
        BStack3._value =
             mscorlib.dll::System::Number+NumberBuffer::Number_NumberBuffer_get_digits
                       (in_stack_1,(MethodInfo *)0x0);
        iStack2 = in_stack_1->_sign;
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if ((TypeInfo__System__Number->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value._length = iStack2;
      value._pointer._value = BStack3._value;
      iVar4 = mscorlib.dll::System::Number::Number_ParseInt32
                        (value,NumberStyles__Enum_Integer,info,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* Int32 get_VersionMinor() */

int32_t Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionMinor
                  (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  this_00 = (this->fields).versionText;
  if (this_00 != (TextAsset *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (String *)0x0) {
      mscorlib.dll::System::String::String_Substring_1(this_01,1,2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (in_stack_1 == (Number_NumberBuffer *)0x0) {
        iStack2 = 0;
        BStack3._value = (void *)0x0;
      }
      else {
        BStack3._value =
             mscorlib.dll::System::Number+NumberBuffer::Number_NumberBuffer_get_digits
                       (in_stack_1,(MethodInfo *)0x0);
        iStack2 = in_stack_1->_sign;
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if ((TypeInfo__System__Number->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value._length = iStack2;
      value._pointer._value = BStack3._value;
      iVar4 = mscorlib.dll::System::Number::Number_ParseInt32
                        (value,NumberStyles__Enum_Integer,info,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* String get_VersionString() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,7);
  pTVar1 = (this->fields).versionText;
  if (pTVar1 != (TextAsset *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                       (pTVar1,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,1,(MethodInfo *)0x0);
      IStack_3.m_value = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
      pSStack4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      if (values != (String__Array *)0x0) {
        if (values->max_length == 0) goto code_?;
        values->vector[0] = pSStack4;
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack4 = ::StringLiteral__;
        values->vector[1] = ::StringLiteral__;
        func_?();
        pTVar1 = (this->fields).versionText;
        if (pTVar1 != (TextAsset *)0x0) {
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar1,(MethodInfo *)0x0);
          if (pSVar2 != (String *)0x0) {
            pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,1,2,(MethodInfo *)0x0);
            IStack_3.m_value = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
            pSStack4 =
                 mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
            if (values->max_length < 3) goto code_?;
            values->vector[2] = pSStack4;
            func_?();
            if (values->max_length < 4) goto code_?;
            pSStack4 = ::StringLiteral__;
            values->vector[3] = ::StringLiteral__;
            func_?();
            pTVar1 = (this->fields).versionText;
            if (pTVar1 != (TextAsset *)0x0) {
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                                 (pTVar1,(MethodInfo *)0x0);
              if (pSVar2 != (String *)0x0) {
                pSVar2 = mscorlib.dll::System::String::String_Substring_1
                                   (pSVar2,3,3,(MethodInfo *)0x0);
                IStack_3.m_value =
                     mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
                pSStack4 =
                     mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
                if (4 < values->max_length) {
                  values->vector[4] = pSStack4;
                  func_?();
                  if (5 < values->max_length) {
                    pSStack4 = ::StringLiteral__;
                    values->vector[5] = ::StringLiteral__;
                    func_?();
                    pSStack4 =
                         mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&(this->fields).versionBuild,(MethodInfo *)0x0);
                    if (6 < values->max_length) {
                      values->vector[6] = pSStack4;
                      func_?();
                      pSVar2 = mscorlib.dll::System::String::String_Concat_6
                                         (values,(MethodInfo *)0x0);
                      return pSVar2;
                    }
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String get_VersionStringNoBuild() */

String * Assembly-CSharp.dll::KoGaMaSettingsContainer::
         KoGaMaSettingsContainer_get_VersionStringNoBuild
                   (KoGaMaSettingsContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,5);
  pTVar1 = (this->fields).versionText;
  if (pTVar1 != (TextAsset *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                       (pTVar1,(MethodInfo *)0x0);
    if (pSVar2 != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,1,(MethodInfo *)0x0);
      IStack_3.m_value = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
      pSStack4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      if (values != (String__Array *)0x0) {
        if (values->max_length == 0) goto code_?;
        values->vector[0] = pSStack4;
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack4 = ::StringLiteral__;
        values->vector[1] = ::StringLiteral__;
        func_?();
        pTVar1 = (this->fields).versionText;
        if (pTVar1 != (TextAsset *)0x0) {
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar1,(MethodInfo *)0x0);
          if (pSVar2 != (String *)0x0) {
            pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,1,2,(MethodInfo *)0x0);
            IStack_3.m_value = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
            pSStack4 =
                 mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
            if (values->max_length < 3) goto code_?;
            values->vector[2] = pSStack4;
            func_?();
            if (values->max_length < 4) goto code_?;
            pSStack4 = ::StringLiteral__;
            values->vector[3] = ::StringLiteral__;
            func_?();
            pTVar1 = (this->fields).versionText;
            if (pTVar1 != (TextAsset *)0x0) {
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                                 (pTVar1,(MethodInfo *)0x0);
              if (pSVar2 != (String *)0x0) {
                pSVar2 = mscorlib.dll::System::String::String_Substring_1
                                   (pSVar2,3,3,(MethodInfo *)0x0);
                IStack_3.m_value =
                     mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
                pSStack4 =
                     mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
                if (4 < values->max_length) {
                  values->vector[4] = pSStack4;
                  func_?();
                  pSVar2 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
                  return pSVar2;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}

