
/* UInt32 CalculateChecksum(String) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_CalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  mscorlib.dll::System::String::String_Concat_3
            (input,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   cryptoKey,(MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    buf = (Byte__Array *)(*(code *)(pEVar1->klass->vtable).GetBytes_1.method)(pEVar1);
    if (buf != (Byte__Array *)0x0) {
      uVar2 = Utils::xxHash::xxHash_CalculateHash(buf,buf->max_length,0,(MethodInfo *)0x0);
      return uVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  uVar2 = (*pcVar3)();
  return uVar2;
}


/* Byte[] ConstructByteArray(Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_ConstructByteArray(uint8_t value,int32_t length,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
  if (0 < length) {
    uVar2 = 0;
    if (pBVar1 == (Byte__Array *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar3)();
      return pBVar1;
    }
    do {
      if (pBVar1->max_length <= uVar2) goto code_?;
      pBVar1->vector[uVar2] = value;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < length);
  }
  return pBVar1;
}


/* Boolean DecryptBoolValue(String, String, Boolean) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DecryptBoolValue
               (String *key,String *encryptedInput,bool defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    pSVar5 = (String__Class *)::StringLiteral__;
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      mscorlib.dll::System::Int32::Int32_TryParse
                (pSVar4,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar6 = pSVar5;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = ObscuredPrefs_EncryptKey((String *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar7 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes
                         (pSVar5 == (String__Class *)0x1,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = ObscuredPrefs_EncryptData
                        ((String *)&stack0xfffffff8,pBVar7,ObscuredPrefs_DataType__Enum_Bool,
                         (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar4,value,(MethodInfo *)0x0);
      return pSVar6 == (String__Class *)0x1;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar7 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar7 != (Byte__Array *)0x0) {
      bVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToBoolean(pBVar7,0,(MethodInfo *)0x0)
      ;
      return bVar2;
    }
  }
  return defaultValue;
}


/* Byte[] DecryptByteArrayValue(String, String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptByteArrayValue
          (String *key,String *encryptedInput,uint8_t defaultValue,int32_t defaultLength,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar6 != (Encoding *)0x0) {
        pBVar2 = (Byte__Array *)(*(code *)(pEVar6->klass->vtable).GetBytes_1.method)();
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar4 = ObscuredPrefs_EncryptKey((String *)&UNK_?,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          ((String *)&UNK_?,pBVar2,ObscuredPrefs_DataType__Enum_ByteArray,
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar4,value,(MethodInfo *)0x0);
        return pBVar2;
      }
      goto code_?;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar2 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      return pBVar2;
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultLength = (int32_t)&UNK_?;
    func_?();
  }
  pBVar2 = ObscuredPrefs_ConstructByteArray(defaultValue,defaultLength,(MethodInfo *)0x0);
  return pBVar2;
}


/* Byte[] DecryptData(String, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptData(String *key,String *encryptedInput,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  pBVar4 = mscorlib.dll::System::Convert::Convert_FromBase64String(encryptedInput,(MethodInfo *)0x0)
  ;
  uStack_1 = 0xffffffff;
  if (pBVar4 == (Byte__Array *)0x0) goto code_?;
  if (pBVar4->max_length == 0) {
code_?:
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
    goto code_?;
  }
  uVar5 = pBVar4->max_length;
  if (uVar5 <= uVar5 - 6) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    pBVar4 = (Byte__Array *)(*pcVar6)();
    return pBVar4;
  }
  if (pBVar4->vector[uVar5 - 6] != 2) goto code_?;
  if (uVar5 <= uVar5 - 5) goto code_?;
  uVar7 = pBVar4->vector[uVar5 - 5];
  pAVar8 = (Array *)func_?();
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,uVar5 - 4,pAVar8,0,4,(MethodInfo *)0x0);
  if (pAVar8 == (Array *)0x0) goto code_?;
  if ((((pAVar8[1].monitor == (MonitorData *)0x0) ||
       (uVar9 = *(undefined1 *)&pAVar8[2].klass, pAVar8[1].monitor < (MonitorData *)0x2)) ||
      (uVar10 = *(undefined1 *)((int)&pAVar8[2].klass + 1), pAVar8[1].monitor < (MonitorData *)0x3))
     || (uVar11 = *(undefined1 *)((int)&pAVar8[2].klass + 2), pAVar8[1].monitor < (MonitorData *)0x4)
     ) goto code_?;
  uVar12 = *(undefined1 *)((int)&pAVar8[2].klass + 3);
  uVar13 = 0;
  if (uVar7 == 0) {
    srcOffset = uVar5 - 7;
  }
  else {
    srcOffset = uVar5 - 0xb;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice !=
        0) {
      pAVar8 = (Array *)func_?();
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)pBVar4,srcOffset,pAVar8,0,4,(MethodInfo *)0x0);
      if (pAVar8 == (Array *)0x0) goto code_?;
      if (((pAVar8[1].monitor == (MonitorData *)0x0) || (pAVar8[1].monitor < (MonitorData *)0x2)) ||
         ((pAVar8[1].monitor < (MonitorData *)0x3 || (pAVar8[1].monitor < (MonitorData *)0x4))))
      goto code_?;
      uVar13 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)&pAVar8[2].klass + 3),
                                          *(undefined1 *)((int)&pAVar8[2].klass + 2)),
                                 *(undefined1 *)((int)&pAVar8[2].klass + 1)),
                        *(undefined1 *)&pAVar8[2].klass);
    }
  }
  bytes = (Byte__Array *)func_?();
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,(Array *)bytes,0,srcOffset,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = mscorlib.dll::System::String::String_Concat_3
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  pBVar4 = ObscuredPrefs_EncryptDecryptBytes(bytes,srcOffset,key_00,(MethodInfo *)0x0);
  uVar14 = Utils::xxHash::xxHash_CalculateHash(pBVar4,srcOffset,0,(MethodInfo *)0x0);
  if (uVar14 != CONCAT31(CONCAT21(CONCAT11(uVar12,uVar11),uVar10),uVar9)) goto code_?;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 2
     ) {
    if (uVar13 != 0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode
        != 0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields;
  }
  else {
    if (uVar13 == 0) goto code_?;
code_?:
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode
        != 0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar14 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    if (uVar13 == uVar14) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
    pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields;
  }
  if (pOVar15->readForeignSaves == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return (Byte__Array *)0x0;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return pBVar4;
}


/* Decimal DecryptDecimalValue(String, String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptDecimalValue
                    (Decimal *__return_storage_ptr__,String *key,String *encryptedInput,
                    Decimal defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      register0x00000000 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (register0x00000000,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar2 != 0) goto code_?;
      if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pvVar3 = (void *)0x0;
      mscorlib.dll::System::Decimal::Decimal_TryParse
                (register0x00000000,(Decimal *)&stack0xffffffe8,(MethodInfo *)0x0);
      pcStack_4 = (char *)0x0;
      stack0xfffffff0 = (char *)0x0;
      stack0xfffffff4 = (String *)0x0;
      pcVar5 = pcStack_4;
      pcVar6 = stack0xfffffff0;
      pSStack_7 = stack0xfffffff4;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
        pcVar5 = pcStack_4;
        pcVar6 = stack0xffffffe0;
        pSStack_7 = stack0xffffffe4;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      stack0xfffffff0 = pcVar5;
      pcStack_4 = pvVar3;
      stack0xfffffff4 = (String *)pcVar6;
      stack0xfffffffc = 0;
      pIVar8 = (Il2CppImage *)&UNK_?;
      pIVar9 = mscorlib.dll::System::Decimal::Decimal_GetBits
                         ((Decimal)CONCAT420(unaff_retaddr,_pcStack_14),
                          (MethodInfo *)__return_storage_ptr__);
      pLVar10 = TypeInfo__System__Collections__Generic__List<unsigned_char>;
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
      uVar1 = 0;
      if (pIVar9 != (Int32__Array *)0x0) {
        piVar11 = pIVar9->vector;
        for (; (int)uVar1 < (int)pIVar9->max_length; uVar1 = uVar1 + 1) {
          if (pIVar9->max_length <= uVar1) goto code_?;
          pBVar12 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                             (*piVar11,(MethodInfo *)0x0);
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__AddRange
                    ((List_1_System_Byte_ *)this,(IEnumerable_1_System_Byte_ *)pBVar12,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
          piVar11 = piVar11 + 1;
        }
        if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
          cleanBytes = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this,
                                  MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                 );
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          }
          register0x00000000 =
               ObscuredPrefs_EncryptData
                         (key,(Byte__Array *)cleanBytes,ObscuredPrefs_DataType__Enum_Decimal,
                          (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                    (pSStack_7,register0x00000000,(MethodInfo *)0x0);
          (pLVar10->_0).image = pIVar8;
          (pLVar10->_0).gc_desc = pvVar3;
          (pLVar10->_0).name = pcVar5;
          (pLVar10->_0).namespaze = pcVar6;
          return (Decimal *)pLVar10;
        }
      }
    }
    else {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      pBVar12 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar12 == (Byte__Array *)0x0) {
code_?:
        __return_storage_ptr__->flags = in_stack_13;
        __return_storage_ptr__->hi = defaultValue.flags;
        __return_storage_ptr__->lo = defaultValue.hi;
        __return_storage_ptr__->mid = defaultValue.lo;
        return __return_storage_ptr__;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pBVar12->max_length != 0x10) goto code_?;
      pIVar9 = (Int32__Array *)func_?();
      startIndex = 0;
      while( true ) {
        uVar14 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                          (pBVar12,startIndex,(MethodInfo *)0x0);
        if (pIVar9 == (Int32__Array *)0x0) break;
        uVar1 = (int)(startIndex + (startIndex >> 0x1f & 3U)) >> 2;
        if (pIVar9->max_length <= uVar1) goto code_?;
        startIndex = startIndex + 4;
        pIVar9->vector[uVar1] = uVar14;
        if (0xf < startIndex) {
          iVar15 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          mscorlib.dll::System::Decimal::Decimal__ctor_6
                    ((Decimal *)&stack0xffffffd8,pIVar9,(MethodInfo *)0x0);
          __return_storage_ptr__->flags = iVar15;
          __return_storage_ptr__->hi = iVar16;
          __return_storage_ptr__->lo = iVar17;
          __return_storage_ptr__->mid = iVar18;
          return __return_storage_ptr__;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  this_00 = (Exception *)func_?();
  method_00 = (MethodInfo *)0x0;
  register0x00000000 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,register0x00000000,method_00);
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  pDVar20 = (Decimal *)(*pcVar19)();
  return pDVar20;
code_?:
  func_?();
  goto code_?;
}


/* Double DecryptDoubleValue(String, String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptDoubleValue
                 (String *key,String *encryptedInput,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (double)fVar3;
  }
  uVar4 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar4 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar5 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar5,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      value_00 = (double)CONCAT44(&UNK_?,uVar1);
      mscorlib.dll::System::Double::Double_TryParse
                (pSVar5,(double *)&stack0xfffffff4,(MethodInfo *)0x0);
      dVar7 = value_00;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar8 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_9
                         (value_00,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = ObscuredPrefs_EncryptData
                        ((String *)0x0,pBVar8,ObscuredPrefs_DataType__Enum_Double,(MethodInfo *)0x0)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar5,value,(MethodInfo *)0x0);
      return dVar7;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar8 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar8 != (Byte__Array *)0x0) {
      dVar7 = mscorlib.dll::System::BitConverter::BitConverter_ToDouble(pBVar8,0,(MethodInfo *)0x0);
      return dVar7;
    }
  }
  return defaultValue;
}


/* Single DecryptFloatValue(String, String, Single) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_DecryptFloatValue
                (String *key,String *encryptedInput,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    value_00 = ::StringLiteral__;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      mscorlib.dll::System::Single::Single_TryParse
                (pSVar4,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar4 = value_00;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ObscuredPrefs_SetFloat((String *)&UNK_?,(float)value_00,(MethodInfo *)0x0);
      return (float)pSVar4;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (value != (Byte__Array *)0x0) {
      fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(value,0,(MethodInfo *)0x0);
      return fVar6;
    }
  }
  return defaultValue;
}


/* Int32 DecryptIntValue(String, String, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptIntValue
                  (String *key,String *encryptedInput,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    value_00 = ::StringLiteral__;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      mscorlib.dll::System::Int32::Int32_TryParse
                (pSVar4,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar4 = value_00;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ObscuredPrefs_SetInt((String *)&UNK_?,(int32_t)value_00,(MethodInfo *)0x0);
      return (int32_t)pSVar4;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (value != (Byte__Array *)0x0) {
      uVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32(value,0,(MethodInfo *)0x0);
      return uVar6;
    }
  }
  return defaultValue;
}


/* Int64 DecryptLongValue(String, String, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptLongValue
                  (String *key,String *encryptedInput,int64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    pSVar5 = ::StringLiteral__;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      iVar2 = CONCAT44(&UNK_?,pSVar5);
      mscorlib.dll::System::Int64::Int64_TryParse
                (pSVar4,(int64_t *)&stack0xfffffff4,(MethodInfo *)0x0);
      uVar7 = (undefined4)iVar2;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar8 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4
                         (CONCAT44(&UNK_?,uVar7),(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = ObscuredPrefs_EncryptData
                         ((String *)0x0,pBVar8,ObscuredPrefs_DataType__Enum_Long,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar5,pSVar4,(MethodInfo *)0x0);
      return iVar2;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar8 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar8 != (Byte__Array *)0x0) {
      uVar9 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt64(pBVar8,0,(MethodInfo *)0x0);
      return uVar9;
    }
  }
  return defaultValue;
}


/* Quaternion DecryptQuaternionValue(String, String, Quaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptQuaternionValue
          (Quaternion *__return_storage_ptr__,String *key,String *encryptedInput,
          Quaternion defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  uVar2 = 0;
  uVar3 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar4 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (0x7fffffff < uVar4) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar2,uVar3);
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                          (pBVar5,0,(MethodInfo *)0x0);
        mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar5,4,(MethodInfo *)0x0);
        mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar5,8,(MethodInfo *)0x0);
        puVar7 = &UNK_?;
        fVar8 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                           (pBVar5,0xc,(MethodInfo *)0x0);
        __return_storage_ptr__->x = fVar6;
        __return_storage_ptr__->y = (float)puVar7;
        __return_storage_ptr__->z = (float)pBVar5;
        __return_storage_ptr__->w = fVar8;
        return __return_storage_ptr__;
      }
code_?:
      __return_storage_ptr__->x = defaultValue.x;
      __return_storage_ptr__->y = defaultValue.y;
      __return_storage_ptr__->z = defaultValue.z;
      __return_storage_ptr__->w = defaultValue.w;
      return __return_storage_ptr__;
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar2,uVar3);
    }
    pSVar9 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar10 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar9,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar10 != 0) goto code_?;
    if (::StringLiteral__ != (String *)0x0) {
      separator = mscorlib.dll::System::String::String_get_Chars
                            (::StringLiteral__,0,(MethodInfo *)0x0);
      fVar6 = (float)(uint)separator;
      if (pSVar9 != (String *)0x0) {
        fVar8 = 0.0;
        fVar11 = 0.0;
        pSVar12 = mscorlib.dll::System::String::String_Split
                           (pSVar9,separator,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if (pSVar12 != (String__Array *)0x0) {
          if (pSVar12->max_length != 0) {
            mscorlib.dll::System::Single::Single_TryParse
                      (pSVar12->vector[0],(float *)&puStack_1,(MethodInfo *)0x0);
            if (1 < pSVar12->max_length) {
              pSVar9 = pSVar12->vector[1];
              mscorlib.dll::System::Single::Single_TryParse
                        (pSVar9,(float *)&stack0xfffffff4,(MethodInfo *)0x0);
              if (2 < pSVar12->max_length) {
                mscorlib.dll::System::Single::Single_TryParse
                          (pSVar12->vector[2],(float *)&stack0xfffffff0,(MethodInfo *)0x0);
                if (3 < pSVar12->max_length) {
                  mscorlib.dll::System::Single::Single_TryParse
                            (pSVar12->vector[3],(float *)&stack0xffffffec,(MethodInfo *)0x0);
                  puVar7 = puStack_1;
                  puVar13 = puStack_1;
                  value = fVar6;
                  value_00 = fVar11;
                  value_01 = fVar8;
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  key_00 = ObscuredPrefs_EncryptKey(pSVar9,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  pBVar5 = (Byte__Array *)func_?();
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     ((float)puVar7,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,0,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value_01,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,4,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value_00,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,8,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,0xc,4,(MethodInfo *)0x0);
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar9 = ObscuredPrefs_EncryptData
                                     (pSVar9,pBVar5,ObscuredPrefs_DataType__Enum_Quaternion,
                                      (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                            (key_00,pSVar9,(MethodInfo *)0x0);
                  _UNK_? = puVar13;
                  _UNK_? = fVar8;
                  _UNK_? = fVar11;
                  _UNK_? = fVar6;
                  return (Quaternion *)&UNK_?;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pQVar16 = (Quaternion *)(*pcVar15)();
  return pQVar16;
}


/* Rect DecryptRectValue(String, String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptRectValue
                 (Rect *__return_storage_ptr__,String *key,String *encryptedInput,Rect defaultValue,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  uVar2 = 0;
  uVar3 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar4 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (0x7fffffff < uVar4) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar2,uVar3);
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                          (pBVar5,0,(MethodInfo *)0x0);
        mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar5,4,(MethodInfo *)0x0);
        mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar5,8,(MethodInfo *)0x0);
        puVar7 = &UNK_?;
        fVar8 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                           (pBVar5,0xc,(MethodInfo *)0x0);
        __return_storage_ptr__->m_XMin = fVar6;
        __return_storage_ptr__->m_YMin = (float)puVar7;
        __return_storage_ptr__->m_Width = (float)pBVar5;
        __return_storage_ptr__->m_Height = fVar8;
        return __return_storage_ptr__;
      }
code_?:
      __return_storage_ptr__->m_XMin = defaultValue.m_XMin;
      __return_storage_ptr__->m_YMin = defaultValue.m_YMin;
      __return_storage_ptr__->m_Width = defaultValue.m_Width;
      __return_storage_ptr__->m_Height = defaultValue.m_Height;
      return __return_storage_ptr__;
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar2,uVar3);
    }
    pSVar9 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar10 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar9,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar10 != 0) goto code_?;
    if (::StringLiteral__ != (String *)0x0) {
      separator = mscorlib.dll::System::String::String_get_Chars
                            (::StringLiteral__,0,(MethodInfo *)0x0);
      fVar6 = (float)(uint)separator;
      if (pSVar9 != (String *)0x0) {
        fVar8 = 0.0;
        fVar11 = 0.0;
        pSVar12 = mscorlib.dll::System::String::String_Split
                           (pSVar9,separator,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if (pSVar12 != (String__Array *)0x0) {
          if (pSVar12->max_length != 0) {
            mscorlib.dll::System::Single::Single_TryParse
                      (pSVar12->vector[0],(float *)&puStack_1,(MethodInfo *)0x0);
            if (1 < pSVar12->max_length) {
              pSVar9 = pSVar12->vector[1];
              mscorlib.dll::System::Single::Single_TryParse
                        (pSVar9,(float *)&stack0xfffffff4,(MethodInfo *)0x0);
              if (2 < pSVar12->max_length) {
                mscorlib.dll::System::Single::Single_TryParse
                          (pSVar12->vector[2],(float *)&stack0xfffffff0,(MethodInfo *)0x0);
                if (3 < pSVar12->max_length) {
                  mscorlib.dll::System::Single::Single_TryParse
                            (pSVar12->vector[3],(float *)&stack0xffffffec,(MethodInfo *)0x0);
                  puVar7 = puStack_1;
                  puVar13 = puStack_1;
                  value = fVar6;
                  value_00 = fVar11;
                  value_01 = fVar8;
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  key_00 = ObscuredPrefs_EncryptKey(pSVar9,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  pBVar5 = (Byte__Array *)func_?();
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     ((float)puVar7,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,0,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value_01,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,4,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value_00,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,8,4,(MethodInfo *)0x0);
                  pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                     (value,(MethodInfo *)0x0);
                  mscorlib.dll::System::Buffer::Buffer_BlockCopy
                            ((Array *)pBVar14,0,(Array *)pBVar5,0xc,4,(MethodInfo *)0x0);
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar9 = ObscuredPrefs_EncryptData
                                     (pSVar9,pBVar5,ObscuredPrefs_DataType__Enum_Rect,
                                      (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                            (key_00,pSVar9,(MethodInfo *)0x0);
                  _UNK_? = puVar13;
                  _UNK_? = fVar8;
                  _UNK_? = fVar11;
                  _UNK_? = fVar6;
                  return (Rect *)&UNK_?;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pRVar16 = (Rect *)(*pcVar15)();
  return pRVar16;
}


/* String DecryptStringValue(String, String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptStringValue
                   (String *key,String *encryptedInput,String *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ObscuredPrefs_SetString(key,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar5 != (Byte__Array *)0x0) {
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar6 != (Encoding *)0x0) {
        pSVar2 = (String *)(*(code *)(pEVar6->klass->vtable).GetString_1.method)();
        return pSVar2;
      }
      goto code_?;
    }
  }
  return defaultValue;
}


/* UInt32 DecryptUIntValue(String, String, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptUIntValue
                   (String *key,String *encryptedInput,uint32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    value_00 = (String__Class *)::StringLiteral__;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      mscorlib.dll::System::UInt32::UInt32_TryParse
                (pSVar4,(uint32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar6 = value_00;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = ObscuredPrefs_EncryptKey((String *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar7 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                         ((uint32_t)value_00,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = ObscuredPrefs_EncryptData
                        ((String *)&stack0xfffffff8,pBVar7,ObscuredPrefs_DataType__Enum_UInt,
                         (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar4,value,(MethodInfo *)0x0);
      return (uint32_t)pSVar6;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar7 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar7 != (Byte__Array *)0x0) {
      uVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32(pBVar7,0,(MethodInfo *)0x0);
      return uVar2;
    }
  }
  return defaultValue;
}


/* UInt64 DecryptULongValue(String, String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptULongValue
                   (String *key,String *encryptedInput,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    pSVar5 = ::StringLiteral__;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      uVar2 = CONCAT44(&UNK_?,pSVar5);
      mscorlib.dll::System::UInt64::UInt64_TryParse
                (pSVar4,(uint64_t *)&stack0xfffffff4,(MethodInfo *)0x0);
      uVar7 = (undefined4)uVar2;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar8 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                         (CONCAT44(&UNK_?,uVar7),(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = ObscuredPrefs_EncryptData
                         ((String *)0x0,pBVar8,ObscuredPrefs_DataType__Enum_ULong,(MethodInfo *)0x0)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar5,pSVar4,(MethodInfo *)0x0);
      return uVar2;
    }
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar8 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar8 != (Byte__Array *)0x0) {
      uVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt64(pBVar8,0,(MethodInfo *)0x0);
      return uVar2;
    }
  }
  return defaultValue;
}


/* Vector2 DecryptVector2Value(String, String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptVector2Value
                  (String *key,String *encryptedInput,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (0x7fffffff < uVar1) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      pBVar2 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar2 == (Byte__Array *)0x0) {
        return defaultValue;
      }
      fVar3 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar2,0,(MethodInfo *)0x0)
      ;
      fVar4 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar2,4,(MethodInfo *)0x0)
      ;
      VVar5.y = fVar4;
      VVar5.x = fVar3;
      return VVar5;
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar6 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar6,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      return defaultValue;
    }
    if ((::StringLiteral__ != (String *)0x0) &&
       (pSVar8 = ::StringLiteral__,
       separator = mscorlib.dll::System::String::String_get_Chars
                             (::StringLiteral__,0,(MethodInfo *)0x0), pSVar6 != (String *)0x0)) {
      value = &UNK_?;
      pSVar9 = mscorlib.dll::System::String::String_Split
                         (pSVar6,separator,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      if (pSVar9 != (String__Array *)0x0) {
        if ((pSVar9->max_length != 0) &&
           (mscorlib.dll::System::Single::Single_TryParse
                      (pSVar9->vector[0],(float *)&stack0xfffffff8,(MethodInfo *)0x0),
           1 < pSVar9->max_length)) {
          mscorlib.dll::System::Single::Single_TryParse
                    (pSVar9->vector[1],(float *)&stack0xfffffff4,(MethodInfo *)0x0);
          puVar10 = value;
          pSVar6 = pSVar8;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          key_00 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pBVar2 = (Byte__Array *)func_?();
          pBVar11 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                             ((float)value,(MethodInfo *)0x0);
          mscorlib.dll::System::Buffer::Buffer_BlockCopy
                    ((Array *)pBVar11,0,(Array *)pBVar2,0,4,(MethodInfo *)0x0);
          pBVar11 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                             ((float)pSVar6,(MethodInfo *)0x0);
          mscorlib.dll::System::Buffer::Buffer_BlockCopy
                    ((Array *)pBVar11,0,(Array *)pBVar2,4,4,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar6 = ObscuredPrefs_EncryptData
                             ((String *)0x0,pBVar2,ObscuredPrefs_DataType__Enum_Vector2,
                              (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                    (key_00,pSVar6,(MethodInfo *)0x0);
          VVar12.y = (float)pSVar8;
          VVar12.x = (float)puVar10;
          return VVar12;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar13)();
  return VVar5;
}


/* Vector3 DecryptVector3Value(String, String, Vector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptVector3Value
                    (Vector3 *__return_storage_ptr__,String *key,String *encryptedInput,
                    Vector3 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar2 = mscorlib.dll::System::String::String_IndexOf(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (0x7fffffff < uVar2) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar1);
      }
      pBVar3 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar3 != (Byte__Array *)0x0) {
        fVar4 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                          (pBVar3,0,(MethodInfo *)0x0);
        mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,4,(MethodInfo *)0x0);
        puVar5 = &UNK_?;
        fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                           (pBVar3,8,(MethodInfo *)0x0);
        __return_storage_ptr__->x = fVar4;
        __return_storage_ptr__->y = (float)puVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
code_?:
      __return_storage_ptr__->x = (float)(int)defaultValue._0_8_;
      __return_storage_ptr__->y = (float)(int)((ulonglong)defaultValue._0_8_ >> 0x20);
      __return_storage_ptr__->z = defaultValue.z;
      return __return_storage_ptr__;
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs,uVar1);
    }
    a = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    bVar7 = mscorlib.dll::System::String::String_op_Equality(a,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
    if (::StringLiteral__ != (String *)0x0) {
      separator = mscorlib.dll::System::String::String_get_Chars
                            (::StringLiteral__,0,(MethodInfo *)0x0);
      fVar4 = (float)(uint)separator;
      if (a != (String *)0x0) {
        puVar5 = &UNK_?;
        pSVar8 = mscorlib.dll::System::String::String_Split
                           (a,separator,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if (pSVar8 != (String__Array *)0x0) {
          if (pSVar8->max_length != 0) {
            pSVar9 = pSVar8->vector[0];
            mscorlib.dll::System::Single::Single_TryParse
                      (pSVar9,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (1 < pSVar8->max_length) {
              mscorlib.dll::System::Single::Single_TryParse
                        (pSVar8->vector[1],(float *)&stack0xfffffff4,(MethodInfo *)0x0);
              if (2 < pSVar8->max_length) {
                mscorlib.dll::System::Single::Single_TryParse
                          (pSVar8->vector[2],(float *)&stack0xfffffff0,(MethodInfo *)0x0);
                fVar6 = fVar4;
                value = puVar5;
                value_00 = a;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                key_00 = ObscuredPrefs_EncryptKey(pSVar9,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                pBVar3 = (Byte__Array *)func_?();
                pBVar10 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                   (fVar4,(MethodInfo *)0x0);
                mscorlib.dll::System::Buffer::Buffer_BlockCopy
                          ((Array *)pBVar10,0,(Array *)pBVar3,0,4,(MethodInfo *)0x0);
                pBVar10 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                   ((float)value_00,(MethodInfo *)0x0);
                mscorlib.dll::System::Buffer::Buffer_BlockCopy
                          ((Array *)pBVar10,0,(Array *)pBVar3,4,4,(MethodInfo *)0x0);
                pBVar10 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                                   ((float)value,(MethodInfo *)0x0);
                mscorlib.dll::System::Buffer::Buffer_BlockCopy
                          ((Array *)pBVar10,0,(Array *)pBVar3,8,4,(MethodInfo *)0x0);
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pSVar9 = ObscuredPrefs_EncryptData
                                   (pSVar9,pBVar3,ObscuredPrefs_DataType__Enum_Vector3,
                                    (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                          (key_00,pSVar9,(MethodInfo *)0x0);
                _UNK_? = CONCAT44(a,fVar6);
                _UNK_? = puVar5;
                return (Vector3 *)&UNK_?;
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar11)();
  return pVVar12;
}


/* Void DeleteAll() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DeleteAll(MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteAll((MethodInfo *)0x0);
  return;
}


/* Void DeleteKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DeleteKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (key_00,(MethodInfo *)0x0);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      preservePlayerPrefs == 0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  return;
}


/* String DeprecatedCalculateChecksum(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedCalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral_X2);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (input,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  if (pEVar2 != (Encoding *)0x0) {
    iVar4 = (*(code *)(pEVar2->klass->vtable).GetBytes_1.method)
                      (pEVar2,pSVar3,(pEVar2->klass->vtable).GetBytes_2.methodPtr);
    if ((iVar4 != 0) &&
       (pSVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                 cryptoKey, pSVar3 != (String *)0x0)) {
      uVar5 = 0;
      if (0 < *(int *)(iVar4 + 0xc)) {
        do {
          if (*(uint *)(iVar4 + 0xc) <= uVar5) goto code_?;
          iVar6 = uVar5 + ((pSVar3->fields)._stringLength ^ 0x40U);
          pbVar7 = (byte *)(iVar4 + 0x10 + uVar5);
          pbVar8 = (byte *)(iVar4 + 0x10 + uVar5);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 * (uint)*pbVar8;
          IStack_1.m_value = IStack_1.m_value + (uint)*pbVar7 + (iVar6 / 3) * -3 + iVar6;
        } while ((int)uVar5 < *(int *)(iVar4 + 0xc));
      }
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString_1
                         (&IStack_1,StringLiteral_X2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar9)();
  return pSVar3;
}


/* String DeprecatedDecryptValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedDecryptValue(String *value,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  puStack_2 = &stack0xffffffd4;
  puVar3 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar3 = puStack_2;
  }
  puStack_2 = puVar3;
  if ((value == (String *)0x0) ||
     (pSVar4 = mscorlib.dll::System::String::String_Split
                         (value,0x3a,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
     pSVar4 == (String__Array *)0x0)) {
code_?:
    func_?();
    pBStack_5 = unaff_EDI->klass;
    func_?(&pBStack_5,&UNK_?);
    goto code_?;
  }
  if ((int)pSVar4->max_length < 2) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
    pSVar6 = ::StringLiteral__;
    *unaff_FS_OFFSET = uVar1;
    return pSVar6;
  }
  if ((pSVar4->max_length == 0) || (pSVar6 = pSVar4->vector[0], pSVar4->max_length < 2))
  goto code_?;
  pSVar7 = pSVar4->vector[1];
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  unaff_EDI = mscorlib.dll::System::Convert::Convert_FromBase64String(pSVar6,(MethodInfo *)0x0);
  pEVar8 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((unaff_EDI == (Byte__Array *)0x0) || (pEVar8 == (Encoding *)0x0)) goto code_?;
  pSStack_9 = (String *)
               (*(code *)(pEVar8->klass->vtable).GetString_1.method)
                         (pEVar8,unaff_EDI,0,unaff_EDI->max_length,
                          (pEVar8->klass->vtable).GetBestFitUnicodeToBytesData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar10 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar10 = ObscuredString::ObscuredString_EncryptDecrypt_1(pSStack_9,pSVar10,(MethodInfo *)0x0);
  if (pSVar4->max_length == 3) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar11 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar11,(MethodInfo *)0x0);
    pSVar11 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar11,(MethodInfo *)0x0);
    bVar12 = mscorlib.dll::System::String::String_op_Inequality(pSVar7,pSVar11,(MethodInfo *)0x0);
code_?:
    if (bVar12 != 0) goto code_?;
  }
  else {
    if (pSVar4->max_length == 2) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar11 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar6,(MethodInfo *)0x0);
      bVar12 = mscorlib.dll::System::String::String_op_Inequality(pSVar7,pSVar11,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) goto code_?;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode !=
      0) goto code_?;
  if ((int)pSVar4->max_length < 3) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice !=
        2) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar6,(MethodInfo *)0x0);
      bVar12 = mscorlib.dll::System::String::String_op_Inequality(pSVar7,pSVar6,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    if (pSVar4->max_length < 3) {
code_?:
      func_?();
      pcVar13 = (code *)swi(3);
      pSVar6 = (String *)(*pcVar13)();
      return pSVar6;
    }
    pSVar6 = pSVar4->vector[2];
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar7 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
    bVar12 = mscorlib.dll::System::String::String_op_Inequality(pSVar6,pSVar7,(MethodInfo *)0x0);
code_?:
    if (bVar12 == 0) goto code_?;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->readForeignSaves
      == 0) {
    pSVar10 = ::StringLiteral__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  uVar1 = 0;
  ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
code_?:
  *unaff_FS_OFFSET = uVar1;
  return pSVar10;
}


/* String EncryptBoolValue(String, Boolean) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptBoolValue(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Bool,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptByteArrayValue(String, Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptByteArrayValue(String *key,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,value,ObscuredPrefs_DataType__Enum_ByteArray,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptColorValue(String, UInt32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptColorValue(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Color,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptData(String, Byte[], ObscuredPrefs+DataType) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptData
                   (String *key,Byte__Array *cleanBytes,ObscuredPrefs_DataType__Enum type,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cleanBytes != (Byte__Array *)0x0) {
    dataLength = cleanBytes->max_length;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
    src = ObscuredPrefs_EncryptDecryptBytes(cleanBytes,dataLength,pSVar1,(MethodInfo *)0x0);
    uVar2 = Utils::xxHash::xxHash_CalculateHash(cleanBytes,dataLength,0,(MethodInfo *)0x0);
    src_00 = (Array *)func_?(TypeInfo__System__Byte,4);
    if (src_00 != (Array *)0x0) {
      if (src_00[1].monitor == (MonitorData *)0x0) goto code_?;
      *(char *)&src_00[2].klass = (char)uVar2;
      if (((src_00[1].monitor < (MonitorData *)0x2) ||
          (*(char *)((int)&src_00[2].klass + 1) = (char)(uVar2 >> 8),
          src_00[1].monitor < (MonitorData *)0x3)) ||
         (*(char *)((int)&src_00[2].klass + 2) = (char)(uVar2 >> 0x10),
         src_00[1].monitor < (MonitorData *)0x4)) goto code_?;
      src_01 = (Array *)0x0;
      *(char *)((int)&src_00[2].klass + 3) = (char)(uVar2 >> 0x18);
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice
          == 0) {
        iVar3 = 7;
      }
      else {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
        }
        uVar2 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
        src_01 = (Array *)func_?(TypeInfo__System__Byte,4);
        if (src_01 == (Array *)0x0) goto code_?;
        if (src_01[1].monitor == (MonitorData *)0x0) goto code_?;
        *(char *)&src_01[2].klass = (char)uVar2;
        if (((src_01[1].monitor < (MonitorData *)0x2) ||
            (*(char *)((int)&src_01[2].klass + 1) = (char)(uVar2 >> 8),
            src_01[1].monitor < (MonitorData *)0x3)) ||
           (*(char *)((int)&src_01[2].klass + 2) = (char)(uVar2 >> 0x10),
           src_01[1].monitor < (MonitorData *)0x4)) goto code_?;
        iVar3 = 0xb;
        *(char *)((int)&src_01[2].klass + 3) = (char)(uVar2 >> 0x18);
      }
      inArray = (Byte__Array *)func_?(TypeInfo__System__Byte,iVar3 + dataLength);
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)inArray,0,dataLength,(MethodInfo *)0x0);
      if (src_01 != (Array *)0x0) {
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  (src_01,0,(Array *)inArray,dataLength,4,(MethodInfo *)0x0);
      }
      if (inArray != (Byte__Array *)0x0) {
        iVar3 = iVar3 + dataLength;
        if ((iVar3 - 7U < inArray->max_length) &&
           (inArray->vector[iVar3 + -7] = (undefined1)type, iVar3 - 6U < inArray->max_length)) {
          inArray->vector[iVar3 + -6] = 2;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          }
          if (iVar3 - 5U < inArray->max_length) {
            inArray->vector[iVar3 + -5] =
                 TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                 lockToDevice;
            mscorlib.dll::System::Buffer::Buffer_BlockCopy
                      (src_00,0,(Array *)inArray,iVar3 + -4,4,(MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            pSVar1 = mscorlib.dll::System::Convert::Convert_ToBase64String
                               (inArray,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* String EncryptDecimalValue(String, Decimal) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDecimalValue(String *key,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Decimal);
  }
  d.hi = value.flags;
  d.flags = (int32_t)in_stack_1;
  d.lo = value.hi;
  d.mid = value.lo;
  d.ulomidLE._0_4_ = 0;
  d.ulomidLE._4_4_ = unaff_EDI;
  pIVar2 = mscorlib.dll::System::Decimal::Decimal_GetBits(d,unaff_ESI);
  value.lo = func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)value.lo,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  uVar3 = 0;
  if (pIVar2 != (Int32__Array *)0x0) {
    piVar4 = pIVar2->vector;
    for (; (int)uVar3 < (int)pIVar2->max_length; uVar3 = uVar3 + 1) {
      if (pIVar2->max_length <= uVar3) goto code_?;
      in_stack_1 = &UNK_?;
      collection = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                             (*piVar4,(MethodInfo *)0x0);
      if (value.lo == 0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__AddRange
                ((List_1_System_Byte_ *)value.lo,(IEnumerable_1_System_Byte_ *)collection,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      piVar4 = piVar4 + 1;
      value.lo = (int32_t)collection;
    }
    if (value.lo != 0) {
      in_stack_1 = &UNK_?;
      cleanBytes = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                               *)value.lo,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                             );
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_1 = &UNK_?;
      pSVar5 = ObscuredPrefs_EncryptData
                         (key,(Byte__Array *)cleanBytes,ObscuredPrefs_DataType__Enum_Decimal,
                          (MethodInfo *)0x0);
      return pSVar5;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Byte[] EncryptDecryptBytes(Byte[], Int32, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_EncryptDecryptBytes
          (Byte__Array *bytes,int32_t dataLength,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  iVar3 = (key->fields)._stringLength;
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,dataLength);
  if (0 < dataLength) {
    uVar4 = 0;
    if (bytes == (Byte__Array *)0x0) goto code_?;
    do {
      if (bytes->max_length <= uVar4) goto code_?;
      bVar5 = bytes->vector[uVar4];
      uVar6 = mscorlib.dll::System::String::String_get_Chars
                        (key,(int)uVar4 % iVar3,(MethodInfo *)0x0);
      if (pBVar2 == (Byte__Array *)0x0) goto code_?;
      if (pBVar2->max_length <= uVar4) goto code_?;
      pBVar2->vector[uVar4] = (byte)uVar6 ^ bVar5;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < dataLength);
  }
  return pBVar2;
}


/* String EncryptDoubleValue(String, Double) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDoubleValue(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_9
                         ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Double,(MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptFloatValue(String, Single) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptFloatValue(String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Float,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptIntValue(String, Int32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptIntValue(String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Int,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptKey(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  ObscuredString::ObscuredString_EncryptDecrypt_1(key,pSVar1,(MethodInfo *)0x0);
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar2 != (Encoding *)0x0) {
    inArray = (Byte__Array *)(*(code *)(pEVar2->klass->vtable).GetBytes_1.method)(pEVar2);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::Convert::Convert_ToBase64String(inArray,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String EncryptLongValue(String, Int64) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptLongValue(String *key,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_Long,(MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptQuaternionValue(String, Quaternion) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptQuaternionValue(String *key,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(0.0,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Quaternion,
                      (MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptRectValue(String, Rect) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptRectValue(String *key,Rect value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (value.m_XMin,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (value.m_YMin,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(0.0,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Rect,(MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptStringValue(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptStringValue(String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    cleanBytes = (Byte__Array *)
                 (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                           (pEVar1,value,(pEVar1->klass->vtable).GetBytes_2.methodPtr);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar2 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_String,(MethodInfo *)0x0);
    return pSVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String EncryptUIntValue(String, UInt32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptUIntValue(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_UInt,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptULongValue(String, UInt64) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptULongValue(String *key,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     (key,cleanBytes,ObscuredPrefs_DataType__Enum_ULong,(MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptVector2Value(String, Vector2) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptVector2Value(String *key,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Vector2,
                      (MethodInfo *)0x0);
  return pSVar2;
}


/* String EncryptVector3Value(String, Vector3) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptVector3Value(String *key,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0xc);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar2 = ObscuredPrefs_EncryptData
                     ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Vector3,
                      (MethodInfo *)0x0);
  return pSVar2;
}


/* Void ForceLockToDeviceInit() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_ForceLockToDeviceInit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__ACTk__ObscuredPrefs_ForceLockTo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                     deviceId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral__ACTk__ObscuredPrefs_ForceLockTo,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
       ::StringLiteral__;
  func_?();
  uVar2 = ObscuredPrefs_CalculateChecksum
                    (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                     deviceId,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash = uVar2;
  return;
}


/* Boolean GetBool(String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_GetBool(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  bVar2 = ObscuredPrefs_DecryptBoolValue(key,pSVar1,0,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean GetBool(String, Boolean) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_GetBool_1(String *key,bool defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return defaultValue;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  bVar2 = ObscuredPrefs_DecryptBoolValue(key,pSVar1,defaultValue,(MethodInfo *)0x0);
  return bVar2;
}


/* Byte[] GetByteArray(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar3 = ObscuredPrefs_DecryptByteArrayValue(key,pSVar1,0,0,(MethodInfo *)0x0);
    return pBVar3;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar3 = (Byte__Array *)func_?();
  return pBVar3;
}


/* Byte[] GetByteArray(String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray_1
          (String *key,uint8_t defaultValue,int32_t defaultLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      defaultLength = (int32_t)&UNK_?;
      func_?();
    }
    pBVar3 = ObscuredPrefs_DecryptByteArrayValue
                       (key,pSVar1,defaultValue,defaultLength,(MethodInfo *)0x0);
    return pBVar3;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultLength = (int32_t)&UNK_?;
    func_?();
  }
  pBVar3 = ObscuredPrefs_ConstructByteArray(defaultValue,defaultLength,(MethodInfo *)0x0);
  return pBVar3;
}


/* Color32 GetColor(String) */

Color32 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetColor(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0x1000000,(MethodInfo *)0x0);
    key._0_2_ = CONCAT11((char)(uVar3 >> 8),(char)(uVar3 >> 0x10));
    CVar4.rgba._3_1_ = (char)(uVar3 >> 0x18);
    CVar4.rgba._0_3_ = (int3)CONCAT22((short)uVar3,key._0_2_);
    CVar4.r = (char)extraout_EDX_00;
    CVar4.g = (char)((uint)extraout_EDX_00 >> 8);
    CVar4.b = (char)((uint)extraout_EDX_00 >> 0x10);
    CVar4.a = (char)((uint)extraout_EDX_00 >> 0x18);
    return CVar4;
  }
  CVar5.r = (char)extraout_EDX;
  CVar5.g = (char)((uint)extraout_EDX >> 8);
  CVar5.b = (char)((uint)extraout_EDX >> 0x10);
  CVar5.a = (char)((uint)extraout_EDX >> 0x18);
  CVar5.rgba = 0x1000000;
  return CVar5;
}


/* Color32 GetColor(String, Color32) */

Color32 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetColor_1(String *key,Color32 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0x1000000,(MethodInfo *)0x0);
    key._0_2_ = CONCAT11((char)(uVar3 >> 8),(char)(uVar3 >> 0x10));
    CVar4.rgba._3_1_ = (char)(uVar3 >> 0x18);
    CVar4.rgba._0_3_ = (int3)CONCAT22((short)uVar3,key._0_2_);
    CVar4.r = (char)extraout_EDX_00;
    CVar4.g = (char)((uint)extraout_EDX_00 >> 8);
    CVar4.b = (char)((uint)extraout_EDX_00 >> 0x10);
    CVar4.a = (char)((uint)extraout_EDX_00 >> 0x18);
    return CVar4;
  }
  CVar5.r = (char)extraout_EDX;
  CVar5.g = (char)((uint)extraout_EDX >> 8);
  CVar5.b = (char)((uint)extraout_EDX >> 0x10);
  CVar5.a = (char)((uint)extraout_EDX >> 0x18);
  CVar5.rgba = defaultValue.rgba;
  return CVar5;
}


/* Decimal GetDecimal(String) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal(Decimal *__return_storage_ptr__,String *key,MethodInfo *method)

{
  key_00 = key;
  pDVar1 = __return_storage_ptr__;
  auVar2._4_4_ = key;
  auVar2._0_4_ = __return_storage_ptr__;
  auVar3._8_4_ = unaff_EBP;
  auVar3._0_8_ = in_stack_4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Decimal);
  }
  pDVar5 = TypeInfo__System__Decimal->static_fields;
  iVar6 = (pDVar5->Zero).flags;
  iVar7 = (pDVar5->Zero).hi;
  uVar8 = (pDVar5->Zero).lo;
  uVar9 = (pDVar5->Zero).mid;
  auVar10._4_4_ = uVar9;
  auVar10._0_4_ = uVar8;
  auVar10._8_4_ = auVar3._8_4_;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar11 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar11 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar11,(MethodInfo *)0x0);
  bVar12 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar11,StringLiteral__not_found_,(MethodInfo *)0x0);
  auVar13._0_8_ = auVar10._0_8_;
  if (bVar12 != 0) {
    __return_storage_ptr__->flags = iVar6;
    __return_storage_ptr__->hi = iVar7;
    __return_storage_ptr__->lo = auVar10._0_4_;
    __return_storage_ptr__->mid = auVar10._4_4_;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    auVar13._8_4_ = &UNK_?;
    func_?();
  }
  auVar2._8_4_ = 0;
  defaultValue._12_12_ = auVar2 << 0x20;
  defaultValue.hi = (int32_t)auVar13._0_8_;
  defaultValue.flags = iVar7;
  defaultValue.lo = SUB84(auVar13._0_8_,4);
  pDVar14 = ObscuredPrefs_DecryptDecimalValue
                      ((Decimal *)&stack0xffffffec,key_00,pSVar11,defaultValue,method);
  iVar6 = pDVar14->hi;
  iVar7 = pDVar14->lo;
  iVar15 = pDVar14->mid;
  pDVar1->flags = pDVar14->flags;
  pDVar1->hi = iVar6;
  pDVar1->lo = iVar7;
  pDVar1->mid = iVar15;
  return pDVar1;
}


/* Decimal GetDecimal(String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal_1
                    (Decimal *__return_storage_ptr__,String *key,Decimal defaultValue,
                    MethodInfo *method)

{
  key_00 = key;
  pDVar1 = __return_storage_ptr__;
  auVar2._4_4_ = key;
  auVar2._0_4_ = __return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    __return_storage_ptr__->flags = defaultValue.flags;
    __return_storage_ptr__->hi = defaultValue.hi;
    __return_storage_ptr__->lo = defaultValue.lo;
    __return_storage_ptr__->mid = defaultValue.mid;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  auVar2._8_4_ = 0;
  defaultValue_00._12_12_ = auVar2 << 0x20;
  defaultValue_00._0_12_ = defaultValue._4_12_;
  pDVar5 = ObscuredPrefs_DecryptDecimalValue
                     ((Decimal *)&stack0xffffffec,key_00,pSVar3,defaultValue_00,
                      (MethodInfo *)defaultValue.flags);
  iVar6 = pDVar5->hi;
  iVar7 = pDVar5->lo;
  iVar8 = pDVar5->mid;
  pDVar1->flags = pDVar5->flags;
  pDVar1->hi = iVar6;
  pDVar1->lo = iVar7;
  pDVar1->mid = iVar8;
  return pDVar1;
}


/* String GetDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* Double GetDouble(String) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0.0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  dVar3 = ObscuredPrefs_DecryptDoubleValue(key,pSVar1,0.0,(MethodInfo *)0x0);
  return dVar3;
}


/* Double GetDouble(String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble_1(String *key,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return (double)CONCAT44(defaultValue._0_4_,in_stack_3);
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultValue._0_4_ = &UNK_?;
    func_?();
  }
  dVar4 = ObscuredPrefs_DecryptDoubleValue
                    (key,pSVar1,(double)CONCAT44(defaultValue._0_4_,in_stack_3),
                     (MethodInfo *)0x0);
  return dVar4;
}


/* String GetEncryptedPrefsString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetEncryptedPrefsString(String *key,String *encryptedKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__ACTk__Are_you_trying_to_read_re);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  a = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                (encryptedKey,StringLiteral__not_found_,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (a,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (key,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral__ACTk__Are_you_trying_to_read_re,key,::StringLiteral___,
                           (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
    }
    return a;
  }
  return a;
}


/* Single GetFloat(String) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_GetFloat(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  fVar1 = ObscuredPrefs_GetFloat_1(key,0.0,(MethodInfo *)0x0);
  return fVar1;
}


/* Single GetFloat(String, Single) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_GetFloat_1(String *key,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = key;
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (key_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      key = (String *)0x0;
      key = (String *)
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetFloat
                      (key_00,defaultValue,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
          preservePlayerPrefs == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        pSVar1 = key;
        method = (MethodInfo *)key;
        defaultValue = (float)key_00;
        key = (String *)&UNK_?;
        ObscuredPrefs_SetFloat(key_00,(float)pSVar1,(MethodInfo *)0x0);
        method = (MethodInfo *)key_00;
        defaultValue = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                  (key_00,(MethodInfo *)0x0);
      }
      return (float)key;
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    key = (String *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
    func_?();
  }
  key = (String *)0x0;
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar1,(MethodInfo *)0x0);
  key = (String *)0x0;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return defaultValue;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  key = (String *)0x0;
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::String::String_IndexOf(pSVar1,0x3a,(MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        mscorlib.dll::System::Single::Single_TryParse(pSVar1,(float *)&key,(MethodInfo *)0x0);
        pSVar1 = key;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ObscuredPrefs_SetFloat(key_00,(float)pSVar1,(MethodInfo *)0x0);
        return (float)key;
      }
    }
    else {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = ObscuredPrefs_DecryptData(key_00,pSVar1,(MethodInfo *)0x0);
      if (value != (Byte__Array *)0x0) {
        fVar4 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(value,0,(MethodInfo *)0x0)
        ;
        return fVar4;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Int32 GetInt(String) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetInt(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  iVar1 = ObscuredPrefs_GetInt_1(key,0,(MethodInfo *)0x0);
  return iVar1;
}


/* Int32 GetInt(String, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetInt_1(String *key,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = key;
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (key_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      defaultValue = 0;
      key = (String *)0x0;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                        (key_00,0,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
          preservePlayerPrefs == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method = (MethodInfo *)key_00;
        defaultValue = (int32_t)&UNK_?;
        ObscuredPrefs_SetInt(key_00,iVar3,(MethodInfo *)0x0);
        method = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                  (key_00,(MethodInfo *)0x0);
      }
      return iVar3;
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultValue = (int32_t)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
    key = (String *)&UNK_?;
    func_?();
  }
  defaultValue = 0;
  key = pSVar1;
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar1,(MethodInfo *)0x0);
  defaultValue = 0;
  key = StringLiteral__not_found_;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    key = (String *)0x0;
    if (pSVar1 == (String *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      iVar3 = (*pcVar4)();
      return iVar3;
    }
    uVar5 = mscorlib.dll::System::String::String_IndexOf(pSVar1,0x3a,(MethodInfo *)0x0);
    if (uVar5 < 0x80000000) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar1,(int32_t *)&key,(MethodInfo *)0x0);
        pSVar1 = key;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ObscuredPrefs_SetInt(key_00,(int32_t)pSVar1,(MethodInfo *)0x0);
        return (int32_t)key;
      }
    }
    else {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = ObscuredPrefs_DecryptData(key_00,pSVar1,(MethodInfo *)0x0);
      if (value != (Byte__Array *)0x0) {
        uVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32(value,0,(MethodInfo *)0x0)
        ;
        return uVar6;
      }
    }
  }
  return defaultValue;
}


/* Int64 GetLong(String) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetLong(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  iVar3 = ObscuredPrefs_DecryptLongValue(key,pSVar1,0,(MethodInfo *)0x0);
  return iVar3;
}


/* Int64 GetLong(String, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetLong_1(String *key,int64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return CONCAT44((undefined *)defaultValue,in_stack_3);
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultValue._0_4_ = &UNK_?;
    func_?();
  }
  iVar4 = ObscuredPrefs_DecryptLongValue
                    (key,pSVar1,CONCAT44((undefined *)defaultValue,in_stack_3),
                     (MethodInfo *)0x0);
  return iVar4;
}


/* Quaternion GetQuaternion(String) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetQuaternion(Quaternion *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar6 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar6,(MethodInfo *)0x0);
  bVar7 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar6,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    __return_storage_ptr__->x = fVar2;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  defaultValue.y = fVar3;
  defaultValue.x = fVar2;
  defaultValue.z = fVar4;
  defaultValue.w = fVar5;
  pQVar8 = ObscuredPrefs_DecryptQuaternionValue
                     ((Quaternion *)&stack0xffffffec,key,pSVar6,defaultValue,(MethodInfo *)0x0);
  fVar2 = pQVar8->y;
  fVar3 = pQVar8->z;
  fVar4 = pQVar8->w;
  __return_storage_ptr__->x = pQVar8->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetQuaternion(String, Quaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetQuaternion_1
          (Quaternion *__return_storage_ptr__,String *key,Quaternion defaultValue,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    __return_storage_ptr__->x = defaultValue.x;
    __return_storage_ptr__->y = defaultValue.y;
    __return_storage_ptr__->z = defaultValue.z;
    __return_storage_ptr__->w = defaultValue.w;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pQVar3 = ObscuredPrefs_DecryptQuaternionValue
                     ((Quaternion *)&stack0xffffffec,key,pSVar1,defaultValue,(MethodInfo *)0x0);
  fVar4 = pQVar3->y;
  fVar5 = pQVar3->z;
  fVar6 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* String GetRawValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetRawValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  pSVar1 = (String *)(*pcRam_?)(in_stack_2,pSVar1);
  return pSVar1;
}


/* ObscuredPrefs+DataType GetRawValueType(String) */

ObscuredPrefs_DataType__Enum
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetRawValueType(String *value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  pBVar4 = mscorlib.dll::System::Convert::Convert_FromBase64String(value,(MethodInfo *)0x0);
  uStack_1 = 0xffffffff;
  if (pBVar4 != (Byte__Array *)0x0) {
    if ((int)pBVar4->max_length < 7) {
      *unaff_FS_OFFSET = uStack_3;
      return (uint)pBVar4 & 0xffffff00;
    }
    uVar5 = pBVar4->max_length;
    if ((uVar5 - 7 < uVar5) && (uVar5 - 6 < uVar5)) {
      OVar6 = ObscuredPrefs_DataType__Enum_Unknown;
      if (pBVar4->vector[uVar5 - 6] < 0xb) {
        OVar6 = (uint)pBVar4->vector[uVar5 - 7];
      }
      *unaff_FS_OFFSET = uStack_3;
      return OVar6;
    }
    func_?();
  }
  func_?();
  pcVar7 = (code *)swi(3);
  OVar6 = (*pcVar7)();
  return OVar6;
}


/* Rect GetRect(String) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect(Rect *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    __return_storage_ptr__->m_XMin = 0.0;
    __return_storage_ptr__->m_YMin = 0.0;
    __return_storage_ptr__->m_Width = 0.0;
    __return_storage_ptr__->m_Height = 0.0;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pRVar3 = ObscuredPrefs_DecryptRectValue
                     ((Rect *)&stack0xffffffec,key,pSVar1,(Rect)ZEXT816(0),(MethodInfo *)0x0);
  fVar4 = pRVar3->m_YMin;
  fVar5 = pRVar3->m_Width;
  fVar6 = pRVar3->m_Height;
  __return_storage_ptr__->m_XMin = pRVar3->m_XMin;
  __return_storage_ptr__->m_YMin = fVar4;
  __return_storage_ptr__->m_Width = fVar5;
  __return_storage_ptr__->m_Height = fVar6;
  return __return_storage_ptr__;
}


/* Rect GetRect(String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect_1
                 (Rect *__return_storage_ptr__,String *key,Rect defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    __return_storage_ptr__->m_XMin = defaultValue.m_XMin;
    __return_storage_ptr__->m_YMin = defaultValue.m_YMin;
    __return_storage_ptr__->m_Width = defaultValue.m_Width;
    __return_storage_ptr__->m_Height = defaultValue.m_Height;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pRVar3 = ObscuredPrefs_DecryptRectValue
                     ((Rect *)&stack0xffffffec,key,pSVar1,defaultValue,(MethodInfo *)0x0);
  fVar4 = pRVar3->m_YMin;
  fVar5 = pRVar3->m_Width;
  fVar6 = pRVar3->m_Height;
  __return_storage_ptr__->m_XMin = pRVar3->m_XMin;
  __return_storage_ptr__->m_YMin = fVar4;
  __return_storage_ptr__->m_Width = fVar5;
  __return_storage_ptr__->m_Height = fVar6;
  return __return_storage_ptr__;
}


/* String GetString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_GetString_1(key,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString_1(String *key,String *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (key,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                         (key,(String *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
          preservePlayerPrefs == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                  (key,(MethodInfo *)0x0);
      }
      return pSVar1;
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  defaultValue = (String *)0x0;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return (String *)0x0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::String::String_IndexOf(pSVar1,0x3a,(MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
    else {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      defaultValue = key;
      pBVar4 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar4 != (Byte__Array *)0x0) {
        pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar5 != (Encoding *)0x0) {
          pSVar1 = (String *)(*(code *)(pEVar5->klass->vtable).GetString_1.method)();
          return pSVar1;
        }
        goto code_?;
      }
    }
    return defaultValue;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* UInt32 GetUInt(String) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetUInt(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0,(MethodInfo *)0x0);
  return uVar3;
}


/* UInt32 GetUInt(String, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetUInt_1(String *key,uint32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return defaultValue;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,defaultValue,(MethodInfo *)0x0);
  return uVar3;
}


/* UInt64 GetULong(String) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  uVar3 = ObscuredPrefs_DecryptULongValue(key,pSVar1,0,(MethodInfo *)0x0);
  return uVar3;
}


/* UInt64 GetULong(String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong_1(String *key,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return CONCAT44((undefined *)defaultValue,in_stack_3);
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultValue._0_4_ = &UNK_?;
    func_?();
  }
  uVar4 = ObscuredPrefs_DecryptULongValue
                    (key,pSVar1,CONCAT44((undefined *)defaultValue,in_stack_3),
                     (MethodInfo *)0x0);
  return uVar4;
}


/* Vector2 GetVector2(String) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    VVar5.y = fVar2;
    VVar5.x = fVar1;
    return VVar5;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  VVar6.y = fVar2;
  VVar6.x = fVar1;
  VVar6 = ObscuredPrefs_DecryptVector2Value(key,pSVar3,VVar6,(MethodInfo *)0x0);
  return VVar6;
}


/* Vector2 GetVector2(String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2_1(String *key,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return defaultValue;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    defaultValue.y = (float)&UNK_?;
    func_?();
  }
  VVar3.y = defaultValue.y;
  VVar3.x = defaultValue.x;
  VVar3 = ObscuredPrefs_DecryptVector2Value(key,pSVar1,VVar3,(MethodInfo *)0x0);
  return VVar3;
}


/* Vector3 GetVector3(String) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetVector3(Vector3 *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar4 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar4 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar4,(MethodInfo *)0x0);
  bVar5 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar4,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    __return_storage_ptr__->x = (float)uVar2;
    __return_storage_ptr__->y = SUB84(uVar2,4);
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  defaultValue.z = fVar3;
  defaultValue.x = (float)uVar2;
  defaultValue.y = SUB84(uVar2,4);
  pVVar6 = ObscuredPrefs_DecryptVector3Value
                     ((Vector3 *)&stack0xfffffff0,key,pSVar4,defaultValue,(MethodInfo *)0x0);
  fVar3 = pVVar6->z;
  fVar7 = pVVar6->y;
  __return_storage_ptr__->x = pVVar6->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetVector3(String, Vector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetVector3_1
                    (Vector3 *__return_storage_ptr__,String *key,Vector3 defaultValue,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral__not_found_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    __return_storage_ptr__->x = defaultValue.x;
    __return_storage_ptr__->y = defaultValue.y;
    __return_storage_ptr__->z = defaultValue.z;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pVVar3 = ObscuredPrefs_DecryptVector3Value
                     ((Vector3 *)&stack0xfffffff0,key,pSVar1,defaultValue,(MethodInfo *)0x0);
  uRam_?._0_4_ = pVVar3->x;
  uRam_?._4_4_ = pVVar3->y;
  fRam00000008 = pVVar3->z;
  return (Vector3 *)0x0;
}


/* Boolean HasKey(String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_HasKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 1;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  bVar1 = (*pcRam_?)();
  return bVar1;
}


/* Void PossibleForeignSavesDetected() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_PossibleForeignSavesDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onPossibleForeignSavesDetected != (Action *)0x0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        foreignSavesReported == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      foreignSavesReported = 1;
      pAVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
               onPossibleForeignSavesDetected;
      if (pAVar1 == (Action *)0x0) {
        uVar2 = func_?(&puStack_3);
        func_?(uVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puStack_5 = (pAVar1->fields)._._.method_code;
      (*(pAVar1->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void Save() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_Save(MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_Save((MethodInfo *)0x0);
  return;
}


/* Void SavesTampered() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SavesTampered(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onAlterationDetected != (Action *)0x0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
             onAlterationDetected;
    if (pAVar1 == (Action *)0x0) {
      uVar2 = func_?(&puStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puStack_5 = (pAVar1->fields)._._.method_code;
    (*(pAVar1->fields)._._.invoke_impl)();
    puStack_3 = (undefined *)0x0;
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
    onAlterationDetected = (Action *)0x0;
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                     onAlterationDetected);
  }
  return;
}


/* Void SetBool(String, Boolean) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetBool(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_Bool,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetByteArray(String, Byte[]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetByteArray(String *key,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,value,ObscuredPrefs_DataType__Enum_ByteArray,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetColor(String, Color32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetColor(String *key,Color32 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                         (CONCAT31(CONCAT21(CONCAT11(value.rgba._3_1_,(undefined1)value.rgba),
                                            value.rgba._1_1_),value.rgba._2_1_),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_Color,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetDecimal(String, Decimal) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetDecimal(String *key,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  method_00 = (MethodInfo *)ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Decimal);
  }
  d.hi = value.flags;
  d.flags = in_stack_1;
  d.lo = value.hi;
  d.mid = value.lo;
  d.ulomidLE._0_4_ = 0;
  d.ulomidLE._4_4_ = unaff_EBX;
  pIVar2 = mscorlib.dll::System::Decimal::Decimal_GetBits(d,method_00);
  key_00 = TypeInfo__System__Collections__Generic__List<unsigned_char>;
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  if (pIVar2 != (Int32__Array *)0x0) {
    if ((int)pIVar2->max_length < 1) {
      if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
        cleanBytes = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                     Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                     List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                               (this,
                                MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                               );
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_00 = ObscuredPrefs_EncryptData
                             (key,(Byte__Array *)cleanBytes,ObscuredPrefs_DataType__Enum_Decimal,
                              (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  ((String *)key_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (pIVar2->max_length == 0) goto code_?;
      mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                (pIVar2->vector[0],(MethodInfo *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDouble(String, Double) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetDouble(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_9
                         ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Double,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetFloat(String, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetFloat(String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_Float,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetInt(String, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetInt(String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_Int,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetLong(String, Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetLong(String *key,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_Long,(MethodInfo *)0x0
                       );
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetNewCryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetNewCryptoKey(String *newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = newKey;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   cryptoKey,unaff_EBP);
  return;
}


/* Void SetQuaternion(String, Quaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetQuaternion(String *key,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)pBVar1,cleanBytes,ObscuredPrefs_DataType__Enum_Quaternion,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetRawValue(String, String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetRawValue(String *key,String *encryptedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  cVar1 = (*pcRam_?)(0,in_stack_2);
  if (cVar1 != '\0') {
    return;
  }
  uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  error = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,error,method_00);
  func_?(&MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_);
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRect(String, Rect) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetRect(String *key,Rect value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (value.m_XMin,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (value.m_YMin,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)pBVar1,cleanBytes,ObscuredPrefs_DataType__Enum_Rect,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetString(String, String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetString(String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    cleanBytes = (Byte__Array *)
                 (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                           (pEVar1,value,(pEVar1->klass->vtable).GetBytes_2.methodPtr);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    value_00 = ObscuredPrefs_EncryptData
                         (key,cleanBytes,ObscuredPrefs_DataType__Enum_String,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (key_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetUInt(String, UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetUInt(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_UInt,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetULong(String, UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetULong(String *key,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)0x0,cleanBytes,ObscuredPrefs_DataType__Enum_ULong,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetVector2(String, Vector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetVector2(String *key,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)pBVar1,cleanBytes,ObscuredPrefs_DataType__Enum_Vector2,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* Void SetVector3(String, Vector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetVector3(String *key,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0xc);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  src = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8(5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)src,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)pBVar1,cleanBytes,ObscuredPrefs_DataType__Enum_Vector3,
                        (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (key_00,value_00,(MethodInfo *)0x0);
  return;
}


/* ObscuredPrefs() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    func_?(&StringLiteral_e806f6);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey =
       StringLiteral_e806f6;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   cryptoKey,StringLiteral_e806f6);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->preservePlayerPrefs =
       0;
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
  onPossibleForeignSavesDetected = (Action *)0x0;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   onPossibleForeignSavesDetected,0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice = 0;
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->readForeignSaves = 0;
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode = 0;
  return;
}


/* String get_CryptoKey() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_CryptoKey(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
}


/* String get_DeprecatedDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeprecatedDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                     deprecatedDeviceId,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    pSVar2 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar2,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deprecatedDeviceId
         = pSVar2;
    func_?();
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
         deprecatedDeviceId;
}


/* String get_DeviceID() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
  return pSVar1;
}


/* String get_DeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                     deviceId,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
         ::StringLiteral__;
    func_?();
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
}


/* UInt32 get_DeviceIdHash() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceIdHash(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash == 0
     ) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    input = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    uVar1 = ObscuredPrefs_CalculateChecksum(input,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash =
         uVar1;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash
    ;
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash;
}


/* Void set_CryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_CryptoKey(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = value;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   cryptoKey,unaff_EBP);
  return;
}


/* Void set_DeviceID(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceID(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   deviceId,unaff_EBP);
  return;
}


/* Void set_DeviceId(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceId(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                   deviceId,unaff_EBP);
  return;
}

