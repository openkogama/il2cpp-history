
/* UInt32 CalculateChecksum(String) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_CalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  str1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(input,str1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,length);
  uVar2 = 0;
  if (0 < length) {
    do {
      if (pBVar1 == (Byte__Array *)0x0) {
        func_?(0);
code_?:
        uVar3 = func_?(0,0);
        func_?(uVar3);
        pcVar4 = (code *)swi(3);
        pBVar1 = (Byte__Array *)(*pcVar4)();
        return pBVar1;
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = (String__Class *)&UNK_?;
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        mscorlib.dll::System::Int32::Int32_TryParse
                  (pSVar2,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar5 = pSVar3;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey((String *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar6 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_1
                           (pSVar3 == (String__Class *)0x1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          ((String *)&stack0xfffffff8,pBVar6,ObscuredPrefs_DataType__Enum_Bool,
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        return pSVar5 == (String__Class *)0x1;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        bVar4 = mscorlib.dll::System::BitConverter::BitConverter_ToBoolean
                          (pBVar6,0,(MethodInfo *)0x0);
        return bVar4;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Byte[] DecryptByteArrayValue(String, String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptByteArrayValue
          (String *key,String *encryptedInput,uint8_t defaultValue,int32_t defaultLength,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar4 != (Encoding *)0x0) {
          pBVar5 = (Byte__Array *)(*(code *)(pEVar4->klass->vtable).GetBytes_1.method)();
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          pSVar2 = ObscuredPrefs_EncryptKey((String *)&UNK_?,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          value = ObscuredPrefs_EncryptData
                            ((String *)&UNK_?,pBVar5,ObscuredPrefs_DataType__Enum_ByteArray,
                             (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                    (pSVar2,value,(MethodInfo *)0x0);
          return pBVar5;
        }
        goto code_?;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        return pBVar5;
      }
    }
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultLength = (int32_t)&UNK_?;
      func_?();
    }
    pBVar5 = ObscuredPrefs_ConstructByteArray(defaultValue,defaultLength,(MethodInfo *)0x0);
    return pBVar5;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar6)();
  return pBVar5;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  pBVar4 = mscorlib.dll::System::Convert::Convert_FromBase64String
                      (encryptedInput,(MethodInfo *)0x0);
  uStack_1 = 0xffffffff;
  if (pBVar4 == (Byte__Array *)0x0) goto code_?;
  uVar5 = pBVar4->max_length;
  if (0 < (int)uVar5) {
    if (uVar5 - 6 < uVar5) {
      if (pBVar4->vector[uVar5 - 6] != 2) goto code_?;
      if (uVar5 <= uVar5 - 5) goto code_?;
      uVar6 = pBVar4->vector[uVar5 - 5];
      pAVar7 = (Array *)func_?();
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)pBVar4,uVar5 - 4,pAVar7,0,4,(MethodInfo *)0x0);
      if (pAVar7 == (Array *)0x0) goto code_?;
      pMVar8 = pAVar7[1].monitor;
      if (pMVar8 == (MonitorData *)0x0) goto code_?;
      uVar9 = *(undefined1 *)&pAVar7[2].klass;
      if (pMVar8 < (MonitorData *)0x2) goto code_?;
      uVar10 = *(undefined1 *)((int)&pAVar7[2].klass + 1);
      if (pMVar8 < (MonitorData *)0x3) goto code_?;
      uVar11 = *(undefined1 *)((int)&pAVar7[2].klass + 2);
      if ((MonitorData *)0x3 < pMVar8) {
        uVar12 = *(undefined1 *)((int)&pAVar7[2].klass + 3);
        uStack_13 = 0;
        if (uVar6 == 0) {
          srcOffset = uVar5 - 7;
        }
        else {
          srcOffset = uVar5 - 0xb;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
              lockToDevice != 0) {
            pAVar7 = (Array *)func_?();
            mscorlib.dll::System::Buffer::Buffer_BlockCopy
                      ((Array *)pBVar4,srcOffset,pAVar7,0,4,(MethodInfo *)0x0);
            if (pAVar7 == (Array *)0x0) goto code_?;
            bVar14 = func_?();
            bVar15 = func_?();
            bVar16 = func_?(2);
            uVar5 = func_?(3);
            uStack_13 = (((uVar5 & 0xff) << 8 | (uint)bVar16) << 8 | (uint)bVar15) << 8 |
                        (uint)bVar14;
          }
        }
        bytes = (Byte__Array *)func_?();
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar4,0,(Array *)bytes,0,srcOffset,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
        }
        pSVar17 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                  cryptoKey;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar17 = mscorlib.dll::System::String::String_Concat_2(key,pSVar17,(MethodInfo *)0x0);
        pBVar4 = ObscuredPrefs_EncryptDecryptBytes(bytes,srcOffset,pSVar17,(MethodInfo *)0x0);
        uVar18 = Utils::xxHash::xxHash_CalculateHash(pBVar4,srcOffset,0,(MethodInfo *)0x0);
        if (uVar18 == ((uint)CONCAT21(CONCAT11(uVar12,uVar11),uVar10) << 8 |
                      CONCAT11(uVar11,uVar9) & 0xff)) {
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
              lockToDevice == 2) {
            if (uStack_13 == 0) {
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started
                  == 0)) {
                func_?();
              }
              if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                  emergencyMode == 0) {
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started
                    == 0)) {
                  func_?();
                }
                if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    readForeignSaves == 0) {
                  *unaff_FS_OFFSET = uStack_3;
                  return (Byte__Array *)0x0;
                }
              }
              goto code_?;
            }
          }
          else if (uStack_13 == 0) goto code_?;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
              emergencyMode != 0) {
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return pBVar4;
          }
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          uVar18 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
          if (uStack_13 == uVar18) goto code_?;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
          if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
              readForeignSaves != 0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      uVar19 = func_?();
      func_?(uVar19);
code_?:
      uVar19 = func_?();
      func_?(uVar19);
code_?:
      uVar19 = func_?();
      func_?(uVar19);
code_?:
      uVar19 = func_?();
      func_?(uVar19);
code_?:
      uVar19 = func_?();
      func_?(uVar19);
    }
    uVar19 = func_?();
    func_?(uVar19);
code_?:
    func_?();
    pcVar20 = (code *)swi(3);
    pBVar4 = (Byte__Array *)(*pcVar20)();
    return pBVar4;
  }
code_?:
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return (Byte__Array *)0x0;
}


/* Decimal DecryptDecimalValue(String, String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptDecimalValue
                    (Decimal *__return_storage_ptr__,String *key,String *encryptedInput,
                    Decimal defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar4 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar4 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      a = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar5 = mscorlib.dll::System::String::String_op_Equality
                        (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
          func_?();
        }
        uVar6 = 0;
        mscorlib.dll::System::Decimal::Decimal_TryParse
                  (a,(Decimal *)&stack0xffffffec,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        uVar7 = 0;
        value.hi = uVar1;
        value.flags = uVar6;
        value.lo = uVar2;
        value.mid = uVar3;
        ObscuredPrefs_SetDecimal(key,value,(MethodInfo *)0x0);
        __return_storage_ptr__->flags = uVar1;
        __return_storage_ptr__->hi = uVar2;
        __return_storage_ptr__->lo = uVar3;
        __return_storage_ptr__->mid = uVar7;
        return __return_storage_ptr__;
      }
code_?:
      __return_storage_ptr__->flags = defaultValue.flags;
      __return_storage_ptr__->hi = defaultValue.hi;
      __return_storage_ptr__->lo = defaultValue.lo;
      __return_storage_ptr__->mid = defaultValue.mid;
      return __return_storage_ptr__;
    }
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    value_00 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (value_00 == (Byte__Array *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (value_00->max_length != 0x10) goto code_?;
    iVar8 = func_?();
    startIndex = 0;
    while( true ) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__BitConverter);
      }
      iVar9 = mscorlib.dll::System::BitConverter::BitConverter_ToInt32
                        (value_00,startIndex,(MethodInfo *)0x0);
      if (iVar8 == 0) break;
      func_?((int)(startIndex + (startIndex >> 0x1f & 3U)) >> 2,iVar9);
      startIndex = startIndex + 4;
      if (0xf < startIndex) {
        uVar1 = 0;
        uVar2 = 0;
        uVar3 = 0;
        uVar6 = 0;
        func_?(&stack0xffffffdc,iVar8,0);
        __return_storage_ptr__->flags = uVar1;
        __return_storage_ptr__->hi = uVar2;
        __return_storage_ptr__->lo = uVar3;
        __return_storage_ptr__->mid = uVar6;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
code_?:
  this = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this,StringLiteral__ACTk__A_decimal_must_be_created,(MethodInfo *)0x0);
  func_?();
  pcVar10 = (code *)swi(3);
  pDVar11 = (Decimal *)(*pcVar10)();
  return pDVar11;
}


/* Double DecryptDoubleValue(String, String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptDoubleValue
                 (String *key,String *encryptedInput,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
      bVar4 = mscorlib.dll::System::String::String_op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        value = (double)CONCAT44(&UNK_?,pSVar3);
        mscorlib.dll::System::Double::Double_TryParse_1
                  (pSVar2,(double *)&stack0xfffffff4,(MethodInfo *)0x0);
        dVar5 = value;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar6 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                           (value,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar3 = ObscuredPrefs_EncryptData
                           ((String *)0x0,pBVar6,ObscuredPrefs_DataType__Enum_Double,
                            (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,pSVar3,(MethodInfo *)0x0);
        return dVar5;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        dVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToDouble
                          (pBVar6,0,(MethodInfo *)0x0);
        return dVar5;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (double)fVar8;
}


/* Single DecryptFloatValue(String, String, Single) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_DecryptFloatValue
                (String *key,String *encryptedInput,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    a = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = &UNK_?;
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      mscorlib.dll::System::Single::Single_TryParse_1(a,(float *)&stack0xfffffff8,(MethodInfo *)0x0)
      ;
      puVar5 = value_00;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      ObscuredPrefs_SetFloat((String *)&UNK_?,(float)value_00,(MethodInfo *)0x0);
      return (float)puVar5;
    }
  }
  else {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    value = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (value != (Byte__Array *)0x0) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    a = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = &UNK_?;
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      mscorlib.dll::System::Int32::Int32_TryParse(a,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      puVar5 = value_00;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      ObscuredPrefs_SetInt((String *)&UNK_?,(int32_t)value_00,(MethodInfo *)0x0);
      return (int32_t)puVar5;
    }
  }
  else {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    value = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (value != (Byte__Array *)0x0) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      iVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToInt32(value,0,(MethodInfo *)0x0);
      return iVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      puVar3 = &UNK_?;
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        iVar5 = CONCAT44(&UNK_?,puVar3);
        mscorlib.dll::System::Int64::Int64_TryParse
                  (pSVar2,(int64_t *)&stack0xfffffff4,(MethodInfo *)0x0);
        uVar6 = (undefined4)iVar5;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar7 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                           (CONCAT44(&UNK_?,uVar6),(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          ((String *)0x0,pBVar7,ObscuredPrefs_DataType__Enum_Long,(MethodInfo *)0x0)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        return iVar5;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar7 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar7 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        iVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToInt64(pBVar7,0,(MethodInfo *)0x0)
        ;
        return iVar5;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  iVar5 = (*pcVar8)();
  return iVar5;
}


/* Quaternion DecryptQuaternionValue(String, String, Quaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptQuaternionValue
          (Quaternion *__return_storage_ptr__,String *key,String *encryptedInput,
          Quaternion defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if (encryptedInput == (String *)0x0) goto code_?;
  uVar2 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (0x7fffffff < uVar2) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pBVar3 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar3 != (Byte__Array *)0x0) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      fVar4 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0)
      ;
      fVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,4,(MethodInfo *)0x0)
      ;
      fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,8,(MethodInfo *)0x0)
      ;
      fVar7 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                         (pBVar3,0xc,(MethodInfo *)0x0);
      __return_storage_ptr__->x = fVar4;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      __return_storage_ptr__->w = fVar7;
      return __return_storage_ptr__;
    }
code_?:
    __return_storage_ptr__->x = defaultValue.x;
    __return_storage_ptr__->y = defaultValue.y;
    __return_storage_ptr__->z = defaultValue.z;
    __return_storage_ptr__->w = defaultValue.w;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar8 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar9 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar8,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar9 != 0) goto code_?;
  separator = (Char__Array *)func_?();
  if (::StringLiteral__ == (String *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar10 = 0;
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,uVar10);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
  }
  else {
    uVar12 = mscorlib.dll::System::String::String_get_Chars(::StringLiteral__,0,(MethodInfo *)0x0);
    if (separator == (Char__Array *)0x0) goto code_?;
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = uVar12;
    if (pSVar8 == (String *)0x0) goto code_?;
    pSVar13 = mscorlib.dll::System::String::String_Split(pSVar8,separator,(MethodInfo *)0x0);
    if (pSVar13 == (String__Array *)0x0) goto code_?;
    uVar10 = 0;
    if (pSVar13->max_length == 0) goto code_?;
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar13->vector[0],(float *)&stack0xffffffec,(MethodInfo *)0x0);
    if (pSVar13->max_length < 2) goto code_?;
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar13->vector[1],(float *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (2 < pSVar13->max_length) {
      result = (float *)&stack0xfffffff4;
      pSVar8 = pSVar13->vector[2];
      puVar14 = &UNK_?;
      mscorlib.dll::System::Single::Single_TryParse_1(pSVar8,result,(MethodInfo *)0x0);
      if (3 < pSVar13->max_length) {
        mscorlib.dll::System::Single::Single_TryParse_1
                  (pSVar13->vector[3],&fStack_1,(MethodInfo *)0x0);
        puVar15 = &UNK_?;
        func_?();
        value_00 = puVar14;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pBVar3 = (Byte__Array *)func_?();
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar16 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           ((float)value_00,(MethodInfo *)0x0);
        fVar4 = 0.0;
        pBVar17 = pBVar3;
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar16,0,(Array *)pBVar3,0,4,(MethodInfo *)0x0);
        pBVar16 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           ((float)pBVar16,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar16,0,(Array *)pBVar3,4,4,(MethodInfo *)0x0);
        pBVar16 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           (fVar4,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar16,0,(Array *)pBVar3,8,4,(MethodInfo *)0x0);
        pBVar17 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           ((float)pBVar17,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar17,0,(Array *)pBVar3,0xc,4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar3,ObscuredPrefs_DataType__Enum_Quaternion,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (key_00,value,(MethodInfo *)0x0);
        puRam_? = puVar14;
        pSRam00000004 = pSVar8;
        pfRam00000008 = result;
        puRam_? = puVar15;
        return (Quaternion *)0x0;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pQVar19 = (Quaternion *)(*pcVar18)();
  return pQVar19;
}


/* Rect DecryptRectValue(String, String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptRectValue
                 (Rect *__return_storage_ptr__,String *key,String *encryptedInput,Rect defaultValue,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  puStack_4 = (undefined *)0x0;
  if (encryptedInput == (String *)0x0) goto code_?;
  uVar5 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (0x7fffffff < uVar5) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    value_00._Time_k__BackingField =
         (float)ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if ((Byte__Array *)value_00._Time_k__BackingField != (Byte__Array *)0x0) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__BitConverter);
      }
      mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                ((Byte__Array *)value_00._Time_k__BackingField,0,(MethodInfo *)0x0);
      func_?();
      pSRam00000000 =
           (SystemTimer__Class *)
           mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                     ((Byte__Array *)value_00._Time_k__BackingField,4,(MethodInfo *)0x0);
      func_?();
      fVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                         ((Byte__Array *)value_00._Time_k__BackingField,8,(MethodInfo *)0x0);
      Assembly-CSharp.dll::ThemeTimers::SystemTimer::SystemTimer_set_Time
                ((SystemTimer *)&stack0xffffffdc,fVar1,(MethodInfo *)0x0);
      fVar6 = 1.68156e-44;
      pMVar7 = (MonitorData *)&UNK_?;
      fVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                         ((Byte__Array *)value_00._Time_k__BackingField,0xc,(MethodInfo *)0x0);
      Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
      CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_Update
                ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffdc,fVar1,(MethodInfo *)0x0)
      ;
      pMRam00000004 = pMVar7;
      pBRam00000008 = (Byte__Array *)value_00._Time_k__BackingField;
      fRam0000000c = fVar6;
      return (Rect *)0x0;
    }
code_?:
    __return_storage_ptr__->m_XMin = defaultValue.m_XMin;
    __return_storage_ptr__->m_YMin = defaultValue.m_YMin;
    __return_storage_ptr__->m_Width = defaultValue.m_Width;
    __return_storage_ptr__->m_Height = defaultValue.m_Height;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  a = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar8 = mscorlib.dll::System::String::String_op_Equality
                    (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar8 != 0) goto code_?;
  separator = (Char__Array *)func_?();
  if (::StringLiteral__ == (String *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar9 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,uVar9);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
  }
  else {
    uVar11 = mscorlib.dll::System::String::String_get_Chars(::StringLiteral__,0,(MethodInfo *)0x0);
    if (separator == (Char__Array *)0x0) goto code_?;
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = uVar11;
    if (a == (String *)0x0) goto code_?;
    pSVar12 = mscorlib.dll::System::String::String_Split(a,separator,(MethodInfo *)0x0);
    if (pSVar12 == (String__Array *)0x0) goto code_?;
    uVar9 = 0;
    if (pSVar12->max_length == 0) goto code_?;
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar12->vector[0],(float *)&stack0xffffffec,(MethodInfo *)0x0);
    if (pSVar12->max_length < 2) goto code_?;
    mscorlib.dll::System::Single::Single_TryParse_1(pSVar12->vector[1],&fStack_2,(MethodInfo *)0x0);
    if (2 < pSVar12->max_length) {
      mscorlib.dll::System::Single::Single_TryParse_1(pSVar12->vector[2],&fStack_3,(MethodInfo *)0x0)
      ;
      if (3 < pSVar12->max_length) {
        mscorlib.dll::System::Single::Single_TryParse_1
                  (pSVar12->vector[3],(float *)&puStack_4,(MethodInfo *)0x0);
        puVar13 = &stack0xffffffcc;
        fVar6 = fStack_2;
        fVar14 = fStack_3;
        func_?();
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value.m_YMin = fVar1;
        value.m_XMin = (float)puVar13;
        value.m_Width = fVar6;
        value.m_Height = fVar14;
        ObscuredPrefs_SetRect(key,value,(MethodInfo *)0x0);
        __return_storage_ptr__->m_XMin = (float)key;
        __return_storage_ptr__->m_YMin = (float)puVar13;
        __return_storage_ptr__->m_Width = fVar1;
        __return_storage_ptr__->m_Height = fVar6;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  uVar10 = func_?(0);
  func_?(uVar10);
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      b = TypeInfo__System__String->static_fields->Empty;
      bVar3 = mscorlib.dll::System::String::String_op_Equality(pSVar2,b,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        ObscuredPrefs_SetString(b,pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar4 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar4 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar5 != (Encoding *)0x0) {
          pSVar2 = (String *)(*(code *)(pEVar5->klass->vtable).GetString.method)();
          return pSVar2;
        }
        goto code_?;
      }
    }
    return defaultValue;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar6)();
  return pSVar2;
}


/* UInt32 DecryptUIntValue(String, String, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptUIntValue
                   (String *key,String *encryptedInput,uint32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      value_00 = (String__Class *)&UNK_?;
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        mscorlib.dll::System::UInt32::UInt32_TryParse
                  (pSVar2,(uint32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar4 = value_00;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey((String *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar5 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4
                           ((uint32_t)value_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          ((String *)&stack0xfffffff8,pBVar5,ObscuredPrefs_DataType__Enum_UInt,
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        return (uint32_t)pSVar4;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        uVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                          (pBVar5,0,(MethodInfo *)0x0);
        return uVar6;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  uVar6 = (*pcVar7)();
  return uVar6;
}


/* UInt64 DecryptULongValue(String, String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptULongValue
                   (String *key,String *encryptedInput,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      puVar3 = &UNK_?;
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        uVar5 = CONCAT44(&UNK_?,puVar3);
        mscorlib.dll::System::UInt64::UInt64_TryParse
                  (pSVar2,(uint64_t *)&stack0xfffffff4,(MethodInfo *)0x0);
        uVar6 = (undefined4)uVar5;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey((String *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar7 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_5
                           (CONCAT44(&UNK_?,uVar6),(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          ((String *)0x0,pBVar7,ObscuredPrefs_DataType__Enum_ULong,(MethodInfo *)0x0
                          );
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        return uVar5;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar7 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar7 != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        uVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt64
                          (pBVar7,0,(MethodInfo *)0x0);
        return uVar5;
      }
    }
    return defaultValue;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  uVar5 = (*pcVar8)();
  return uVar5;
}


/* Vector2 DecryptVector2Value(String, String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptVector2Value
                  (String *key,String *encryptedInput,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = 0;
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    uVar3 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
    if (0x7fffffff < uVar3) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar4 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar4 == (Byte__Array *)0x0) {
        return defaultValue;
      }
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      fVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar4,0,(MethodInfo *)0x0)
      ;
      fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar4,4,(MethodInfo *)0x0)
      ;
      VVar7.y = fVar6;
      VVar7.x = fVar5;
      return VVar7;
    }
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar8 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar8,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      return defaultValue;
    }
    separator = (Char__Array *)func_?();
    if ((::StringLiteral__ == (String *)0x0) ||
       (uVar10 = mscorlib.dll::System::String::String_get_Chars
                          (::StringLiteral__,0,(MethodInfo *)0x0), separator == (Char__Array *)0x0))
    goto code_?;
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = uVar10;
    if ((pSVar8 == (String *)0x0) ||
       (pSVar11 = mscorlib.dll::System::String::String_Split(pSVar8,separator,(MethodInfo *)0x0),
       pSVar11 == (String__Array *)0x0)) goto code_?;
    uVar1 = 0;
    if (pSVar11->max_length != 0) {
      mscorlib.dll::System::Single::Single_TryParse_1
                (pSVar11->vector[0],(float *)&stack0xfffffff4,(MethodInfo *)0x0);
      if (1 < pSVar11->max_length) {
        mscorlib.dll::System::Single::Single_TryParse_1
                  (pSVar11->vector[1],(float *)&stack0xfffffff8,(MethodInfo *)0x0);
        value_00 = &stack0xffffffe8;
        func_?();
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar8 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pBVar4 = (Byte__Array *)func_?();
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar12 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           ((float)value_00,(MethodInfo *)0x0);
        fVar5 = 0.0;
        VVar7 = (Vector2)(ZEXT48(pBVar4) << 0x20);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar12,0,(Array *)pBVar4,0,4,(MethodInfo *)0x0);
        pBVar12 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           (fVar5,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar12,0,(Array *)pBVar4,4,4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar4,ObscuredPrefs_DataType__Enum_Vector2,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar8,value,(MethodInfo *)0x0);
        return VVar7;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar1);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar13 = (code *)swi(3);
  VVar7 = (Vector2)(*pcVar13)();
  return VVar7;
}


/* Vector3 DecryptVector3Value(String, String, Vector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptVector3Value
                    (Vector3 *__return_storage_ptr__,String *key,String *encryptedInput,
                    Vector3 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if (encryptedInput == (String *)0x0) goto code_?;
  uVar2 = mscorlib.dll::System::String::String_IndexOf_2(encryptedInput,0x3a,(MethodInfo *)0x0);
  if (0x7fffffff < uVar2) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pBVar3 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar3 != (Byte__Array *)0x0) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
      mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,4,(MethodInfo *)0x0);
      uVar4 = CONCAT44(pBVar3,&UNK_?);
      fVar5 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,8,(MethodInfo *)0x0)
      ;
      __return_storage_ptr__->x = (float)(int)uVar4;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
code_?:
    __return_storage_ptr__->x = (float)(int)defaultValue._0_8_;
    __return_storage_ptr__->y = (float)(int)((ulonglong)defaultValue._0_8_ >> 0x20);
    __return_storage_ptr__->z = defaultValue.z;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar6 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar7 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar6,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar7 != 0) goto code_?;
  separator = (Char__Array *)func_?();
  if (::StringLiteral__ == (String *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,uVar8);
    func_?(uVar9);
  }
  else {
    uVar10 = mscorlib.dll::System::String::String_get_Chars(::StringLiteral__,0,(MethodInfo *)0x0);
    if (separator == (Char__Array *)0x0) goto code_?;
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = uVar10;
    if (pSVar6 == (String *)0x0) goto code_?;
    pSVar11 = mscorlib.dll::System::String::String_Split(pSVar6,separator,(MethodInfo *)0x0);
    if (pSVar11 == (String__Array *)0x0) goto code_?;
    uVar8 = 0;
    if (pSVar11->max_length == 0) goto code_?;
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar11->vector[0],(float *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (1 < pSVar11->max_length) {
      mscorlib.dll::System::Single::Single_TryParse_1
                (pSVar11->vector[1],(float *)&stack0xfffffff4,(MethodInfo *)0x0);
      if (2 < pSVar11->max_length) {
        mscorlib.dll::System::Single::Single_TryParse_1
                  (pSVar11->vector[2],&fStack_1,(MethodInfo *)0x0);
        fVar5 = 0.0;
        func_?(&stack0xffffffe4);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pBVar3 = (Byte__Array *)func_?();
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar12 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           (fVar5,(MethodInfo *)0x0);
        uVar9 = 0;
        lVar13 = ZEXT48(pBVar3) << 0x20;
        value_00 = &UNK_?;
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar12,0,(Array *)pBVar3,0,4,(MethodInfo *)0x0);
        src = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                        ((float)value_00,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)src,0,(Array *)pBVar3,4,4,(MethodInfo *)0x0);
        pBVar12 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                           ((float)pBVar12,(MethodInfo *)0x0);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar12,0,(Array *)pBVar3,8,4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar3,ObscuredPrefs_DataType__Enum_Vector3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar6,value,(MethodInfo *)0x0);
        lRam_? = lVar13;
        uRam_? = uVar9;
        return (Vector3 *)0x0;
      }
      goto code_?;
    }
  }
  uVar9 = func_?(0);
  func_?(uVar9);
code_?:
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar15 = (Vector3 *)(*pcVar14)();
  return pVVar15;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (key_00,(MethodInfo *)0x0);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      preservePlayerPrefs != 0) {
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    func_?();
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}


/* String DeprecatedCalculateChecksum(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedCalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_2(input,pSVar3,(MethodInfo *)0x0);
  if ((pEVar2 != (Encoding *)0x0) &&
     (iVar4 = (*(code *)(pEVar2->klass->vtable).GetBytes_1.method)
                        (pEVar2,pSVar3,(pEVar2->klass->vtable).GetBytes_2.methodPtr), iVar4 != 0)) {
    iVar5 = *(int *)(iVar4 + 0xc);
    this = (Collection_1_VoxelHit_ *)
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
    if (this != (Collection_1_VoxelHit_ *)0x0) {
      iVar6 = iVar5;
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
      uVar7 = 0;
      if (0 < iVar5) {
        do {
          if (*(uint *)(iVar4 + 0xc) <= uVar7) goto code_?;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar6);
      }
      uStack_1 = 0;
      pSVar3 = (String *)func_?(&uStack_1,StringLiteral_X2);
      return pSVar3;
    }
  }
  func_?(0);
code_?:
  uStack_1 = 0;
  uVar8 = func_?(0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar9)();
  return pSVar3;
}


/* String DeprecatedDecryptValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedDecryptValue(String *value,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  pSStack_2 = (String__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length == 0) {
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  separator->vector[0] = 0x3a;
  if ((value == (String *)0x0) ||
     (pSVar6 = mscorlib.dll::System::String::String_Split(value,separator,(MethodInfo *)0x0),
     pSVar6 == (String__Array *)0x0)) goto code_?;
  uVar7 = pSVar6->max_length;
  if ((int)uVar7 < 2) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = TypeInfo__System__String->static_fields->Empty;
    *unaff_FS_OFFSET = pSStack_2;
    return pSVar5;
  }
  if (uVar7 == 0) goto code_?;
  value = pSVar6->vector[0];
  if (uVar7 < 2) goto code_?;
  a = (ObscuredPrefs__Class *)pSVar6->vector[1];
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  pBVar8 = mscorlib.dll::System::Convert::Convert_FromBase64String(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?();
  }
  pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if ((pBVar8 == (Byte__Array *)0x0) || (pEVar9 == (Encoding *)0x0)) goto code_?;
  pSVar5 = (String *)(*(code *)(pEVar9->klass->vtable).GetString.method)(pEVar9,pBVar8);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar10 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar5 = ObscuredString::ObscuredString_EncryptDecrypt_1(pSVar5,pSVar10,(MethodInfo *)0x0);
  if (pSVar6->max_length == 3) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar10 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar10 = mscorlib.dll::System::String::String_Concat_2(value,pSVar10,(MethodInfo *)0x0);
    a = (ObscuredPrefs__Class *)ObscuredPrefs_DeprecatedCalculateChecksum(pSVar10,(MethodInfo *)0x0);
    bVar11 = mscorlib.dll::System::String::String_op_Inequality
                      ((String *)a,(String *)a,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
    }
  }
  else {
    if (pSVar6->max_length == 2) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      a = (ObscuredPrefs__Class *)0x0;
      pSVar10 = ObscuredPrefs_DeprecatedCalculateChecksum(value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        pSStack_2 = TypeInfo__System__String;
        func_?();
      }
      bVar11 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)a,pSVar10,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
    }
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      a = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
      func_?();
    }
    value = (String *)&UNK_?;
    ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
  }
code_?:
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) goto code_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode !=
      0) goto code_?;
  if ((int)pSVar6->max_length < 3) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice !=
        2) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar10 = ObscuredPrefs_DeprecatedCalculateChecksum(value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      goto code_?;
    }
  }
  else {
    a = (ObscuredPrefs__Class *)func_?();
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar10 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
code_?:
    bVar11 = mscorlib.dll::System::String::String_op_Inequality((String *)a,pSVar10,(MethodInfo *)0x0)
    ;
    if (bVar11 == 0) goto code_?;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->readForeignSaves
      == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = TypeInfo__System__String->static_fields->Empty;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
code_?:
  *unaff_FS_OFFSET = pSStack_2;
  return pSVar5;
}


/* String EncryptBoolValue(String, Boolean) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptBoolValue(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cleanBytes == (Byte__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    dataLength = cleanBytes->max_length;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2(key,pSVar2,(MethodInfo *)0x0);
    src = ObscuredPrefs_EncryptDecryptBytes(cleanBytes,dataLength,pSVar2,(MethodInfo *)0x0);
    uVar3 = Utils::xxHash::xxHash_CalculateHash(cleanBytes,dataLength,0,(MethodInfo *)0x0);
    src_00 = (Array *)func_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (src_00[1].monitor == (MonitorData *)0x0) goto code_?;
    *(char *)&src_00[2].klass = (char)uVar3;
    if (src_00[1].monitor < (MonitorData *)0x2) goto code_?;
    *(char *)((int)&src_00[2].klass + 1) = (char)(uVar3 >> 8);
    if (src_00[1].monitor < (MonitorData *)0x3) goto code_?;
    *(char *)((int)&src_00[2].klass + 2) = (char)(uVar3 >> 0x10);
    if (src_00[1].monitor < (MonitorData *)0x4) goto code_?;
    src_01 = (Array *)0x0;
    *(char *)((int)&src_00[2].klass + 3) = (char)(uVar3 >> 0x18);
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice !=
        0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      uVar3 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
      src_01 = (Array *)func_?(TypeInfo__System__Byte,4);
      if (src_01 == (Array *)0x0) goto code_?;
      if (src_01[1].monitor == (MonitorData *)0x0) goto code_?;
      *(char *)&src_01[2].klass = (char)uVar3;
      if (src_01[1].monitor < (MonitorData *)0x2) goto code_?;
      *(char *)((int)&src_01[2].klass + 1) = (char)(uVar3 >> 8);
      if (src_01[1].monitor < (MonitorData *)0x3) goto code_?;
      *(char *)((int)&src_01[2].klass + 2) = (char)(uVar3 >> 0x10);
      if ((MonitorData *)0x3 < src_01[1].monitor) {
        iVar4 = 0xb;
        *(char *)((int)&src_01[2].klass + 3) = (char)(uVar3 >> 0x18);
        goto code_?;
      }
      goto code_?;
    }
    iVar4 = 7;
code_?:
    inArray = (Byte__Array *)func_?(TypeInfo__System__Byte,iVar4 + dataLength);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)src,0,(Array *)inArray,0,dataLength,(MethodInfo *)0x0);
    if (src_01 != (Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                (src_01,0,(Array *)inArray,dataLength,4,(MethodInfo *)0x0);
    }
    if (inArray == (Byte__Array *)0x0) goto code_?;
    iVar4 = iVar4 + dataLength;
    if (inArray->max_length <= iVar4 - 7U) goto code_?;
    inArray->vector[iVar4 + -7] = (undefined1)type;
    if (iVar4 - 6U < inArray->max_length) {
      inArray->vector[iVar4 + -6] = 2;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      uVar5 = 0;
      if (iVar4 - 5U < inArray->max_length) {
        inArray->vector[iVar4 + -5] =
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
             lockToDevice;
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  (src_00,0,(Array *)inArray,iVar4 + -4,4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String(inArray,(MethodInfo *)0x0);
        return pSVar2;
      }
      goto code_?;
    }
  }
  uVar5 = 0;
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,uVar5);
  func_?(uVar1);
  pcVar6 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar6)();
  return pSVar2;
}


/* String EncryptDecimalValue(String, Decimal) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDecimalValue(String *key,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  pIVar1 = mscorlib.dll::System::Decimal::Decimal_GetBits(value,(MethodInfo *)0x0);
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  uVar2 = 0;
  if (pIVar1 != (Int32__Array *)0x0) {
    piVar3 = pIVar1->vector;
    while( true ) {
      if ((int)pIVar1->max_length <= (int)uVar2) break;
      if (pIVar1->max_length <= uVar2) goto code_?;
      value_00 = *piVar3;
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      collection = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_2
                             (value_00,(MethodInfo *)0x0);
      if (this == (List_1_VoxelHit_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                (this,(IEnumerable_1_VoxelHit_ *)collection,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if (this != (List_1_VoxelHit_ *)0x0) {
      cleanBytes = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                             );
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = ObscuredPrefs_EncryptData
                         ((String *)cleanBytes,(Byte__Array *)cleanBytes,
                          ObscuredPrefs_DataType__Enum_Decimal,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
code_?:
  func_?();
code_?:
  uVar5 = func_?();
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* Byte[] EncryptDecryptBytes(Byte[], Int32, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_EncryptDecryptBytes
          (Byte__Array *bytes,int32_t dataLength,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    pBVar3 = (Byte__Array *)(*pcVar2)();
    return pBVar3;
  }
  pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)key,(MethodInfo *)0x0);
  pBVar3 = (Byte__Array *)func_?(TypeInfo__System__Byte,dataLength);
  uVar5 = 0;
  if (0 < dataLength) {
    do {
      if (bytes == (Byte__Array *)0x0) goto code_?;
      if (bytes->max_length <= uVar5) goto code_?;
      bVar6 = bytes->vector[uVar5];
      uVar7 = mscorlib.dll::System::String::String_get_Chars
                        (key,(int)uVar5 % (int)pIVar4,(MethodInfo *)0x0);
      if (pBVar3 == (Byte__Array *)0x0) goto code_?;
      if (pBVar3->max_length <= uVar5) goto code_?;
      pBVar3->vector[uVar5] = (byte)uVar7 ^ bVar6;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < dataLength);
  }
  return pBVar3;
}


/* String EncryptDoubleValue(String, Double) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDoubleValue(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                         ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_2(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  ObscuredString::ObscuredString_EncryptDecrypt_1(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?();
  }
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar2 != (Encoding *)0x0) {
    inArray = (Byte__Array *)(*(code *)(pEVar2->klass->vtable).GetBytes_1.method)(pEVar2);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(0.0,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)func_?(TypeInfo__System__Byte,0x10);
  fVar2 = (float10)func_?(&value,0);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar3 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     ((float)fVar2,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar3,0,(Array *)pSVar1,0,4,(MethodInfo *)0x0);
  fVar2 = (float10)func_?(&value,0);
  value.m_YMin = (float)fVar2;
  value.m_Width = 0.0;
  value.m_XMin = (float)&UNK_?;
  pBVar3 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     (value.m_YMin,(MethodInfo *)0x0);
  value.m_Width = 0.0;
  value.m_YMin = 5.60519e-45;
  value.m_XMin = 5.60519e-45;
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar3,0,(Array *)pSVar1,4,4,(MethodInfo *)0x0);
  value.m_YMin = (float)&value;
  value.m_Width = 0.0;
  value.m_XMin = (float)&UNK_?;
  fVar4 = Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single__get_Value
                    ((SubscribableVariableBase_1_System_Single_ *)value.m_YMin,(MethodInfo *)0x0);
  pBVar3 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(fVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar3,0,(Array *)pSVar1,8,4,(MethodInfo *)0x0);
  fVar4 = Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
          CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                    ((CrossPlatformInputManager_VirtualAxis *)&value,(MethodInfo *)0x0);
  pBVar3 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(fVar4,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar3,0,(Array *)pSVar1,0xc,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = ObscuredPrefs_EncryptData
                     (pSVar1,(Byte__Array *)pSVar1,ObscuredPrefs_DataType__Enum_Rect,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptStringValue(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptStringValue(String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    cleanBytes = (Byte__Array *)
                 (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                           (pEVar1,value,(pEVar1->klass->vtable).GetBytes_2.methodPtr);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar2 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,ObscuredPrefs_DataType__Enum_String,(MethodInfo *)0x0);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String EncryptUIntValue(String, UInt32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptUIntValue(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_5
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0xc);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  value = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral__ACTk__ObscuredPrefs_ForceLockTo,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
       TypeInfo__System__String->static_fields->Empty;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = ObscuredPrefs_DecryptBoolValue(key,pSVar1,0,(MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


/* Boolean GetBool(String, Boolean) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_GetBool_1(String *key,bool defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = ObscuredPrefs_DecryptBoolValue(key,pSVar1,defaultValue,(MethodInfo *)0x0);
    return bVar2;
  }
  return defaultValue;
}


/* Byte[] GetByteArray(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pBVar3 = ObscuredPrefs_DecryptByteArrayValue(key,pSVar1,0,0,(MethodInfo *)0x0);
    return pBVar3;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  pBVar3 = ObscuredPrefs_ConstructByteArray(0,0,(MethodInfo *)0x0);
  return pBVar3;
}


/* Byte[] GetByteArray(String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray_1
          (String *key,uint8_t defaultValue,int32_t defaultLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultLength = (int32_t)&UNK_?;
      func_?();
    }
    pBVar3 = ObscuredPrefs_DecryptByteArrayValue
                       (key,pSVar1,defaultValue,defaultLength,(MethodInfo *)0x0);
    return pBVar3;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  func_?(&stack0xfffffff8,0,0,0,1,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = key;
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      method = (MethodInfo *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
      key = (String *)&UNK_?;
      func_?();
    }
    method = (MethodInfo *)0x0;
    key = (String *)0x1000000;
    uVar4 = ObscuredPrefs_DecryptUIntValue(key_00,pSVar2,0x1000000,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    key = (String *)(uVar4 >> 0x18);
    func_?(&key);
    CVar5.r = (char)extraout_EDX_00;
    CVar5.g = (char)((uint)extraout_EDX_00 >> 8);
    CVar5.b = (char)((uint)extraout_EDX_00 >> 0x10);
    CVar5.a = (char)((uint)extraout_EDX_00 >> 0x18);
    CVar5.rgba = (int32_t)key;
    return CVar5;
  }
  CVar6.r = (char)extraout_EDX;
  CVar6.g = (char)((uint)extraout_EDX >> 8);
  CVar6.b = (char)((uint)extraout_EDX >> 0x10);
  CVar6.a = (char)((uint)extraout_EDX >> 0x18);
  CVar6.rgba = iVar1;
  return CVar6;
}


/* Color32 GetColor(String, Color32) */

Color32 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetColor_1(String *key,Color32 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = key;
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    key = (String *)TypeInfo__System__String;
    func_?();
  }
  key = (String *)0x0;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultValue._4_4_ = &UNK_?;
      func_?();
    }
    defaultValue.r = 0;
    defaultValue.g = 0;
    defaultValue.b = 0;
    defaultValue.a = 1;
    key = key_00;
    defaultValue.rgba = (int32_t)pSVar1;
    defaultValue.rgba = ObscuredPrefs_DecryptUIntValue(key_00,pSVar1,0x1000000,(MethodInfo *)0x0);
    defaultValue._4_4_ = (uint)defaultValue.rgba >> 0x18;
    key = (String *)((uint)defaultValue.rgba >> 8);
    func_?(&key);
    CVar3.r = (char)extraout_EDX_00;
    CVar3.g = (char)((uint)extraout_EDX_00 >> 8);
    CVar3.b = (char)((uint)extraout_EDX_00 >> 0x10);
    CVar3.a = (char)((uint)extraout_EDX_00 >> 0x18);
    CVar3.rgba = (int32_t)key;
    return CVar3;
  }
  CVar4.r = (char)extraout_EDX;
  CVar4.g = (char)((uint)extraout_EDX >> 8);
  CVar4.b = (char)((uint)extraout_EDX >> 0x10);
  CVar4.a = (char)((uint)extraout_EDX >> 0x18);
  CVar4.rgba = defaultValue.rgba;
  return CVar4;
}


/* Decimal GetDecimal(String) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal(Decimal *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffec,0,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  uVar1 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  uVar3 = 0;
  pSVar4 = pSVar2;
  pSVar5 = StringLiteral__not_found_;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    defaultValue.hi = (uint32_t)pSVar5;
    defaultValue.flags = (uint32_t)pSVar4;
    defaultValue.lo = uVar3;
    defaultValue.mid = uVar1;
    pDVar7 = ObscuredPrefs_DecryptDecimalValue
                       ((Decimal *)&stack0xffffffdc,key,pSVar2,defaultValue,(MethodInfo *)0x0);
    uVar1 = pDVar7->hi;
    uVar3 = pDVar7->lo;
    uVar8 = pDVar7->mid;
    __return_storage_ptr__->flags = pDVar7->flags;
    __return_storage_ptr__->hi = uVar1;
    __return_storage_ptr__->lo = uVar3;
    __return_storage_ptr__->mid = uVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->flags = (uint32_t)pSVar4;
  __return_storage_ptr__->hi = (uint32_t)pSVar5;
  __return_storage_ptr__->lo = uVar3;
  __return_storage_ptr__->mid = uVar1;
  return __return_storage_ptr__;
}


/* Decimal GetDecimal(String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal_1
                    (Decimal *__return_storage_ptr__,String *key,Decimal defaultValue,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
  pIVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.methodPtr;
  __return_storage_ptr__->flags = 0;
  __return_storage_ptr__->hi = 0;
  __return_storage_ptr__->lo = 0;
  __return_storage_ptr__->mid = 0;
  if ((((uint)pIVar2 & 0x2000000) != 0) && ((pOVar1->_1).cctor_started == 0)) {
    func_?(pOVar1);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar5 = ObscuredPrefs_DecryptDecimalValue
                       ((Decimal *)&stack0xffffffec,key,pSVar3,defaultValue,(MethodInfo *)0x0);
    uVar6 = pDVar5->hi;
    uVar7 = pDVar5->lo;
    uVar8 = pDVar5->mid;
    __return_storage_ptr__->flags = pDVar5->flags;
    __return_storage_ptr__->hi = uVar6;
    __return_storage_ptr__->lo = uVar7;
    __return_storage_ptr__->mid = uVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->flags = defaultValue.flags;
  __return_storage_ptr__->hi = defaultValue.hi;
  __return_storage_ptr__->lo = defaultValue.lo;
  __return_storage_ptr__->mid = defaultValue.mid;
  return __return_storage_ptr__;
}


/* String GetDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  return TypeInfo__System__String->static_fields->Empty;
}


/* Double GetDouble(String) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    dVar3 = ObscuredPrefs_DecryptDoubleValue(key,pSVar1,0.0,(MethodInfo *)0x0);
    return dVar3;
  }
  return 0.0;
}


/* Double GetDouble(String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble_1(String *key,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      in_stack_3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
      func_?();
    }
    dVar4 = ObscuredPrefs_DecryptDoubleValue
                      (key,pSVar1,(double)CONCAT44(defaultValue._0_4_,in_stack_3),
                       (MethodInfo *)0x0);
    return dVar4;
  }
  return (double)CONCAT44(defaultValue._0_4_,in_stack_3);
}


/* String GetEncryptedPrefsString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetEncryptedPrefsString(String *key,String *encryptedKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                (encryptedKey,StringLiteral__not_found_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (a,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (key,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral__ACTk__Are_you_trying_to_read_re,key,::StringLiteral___,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = key;
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key_00,(MethodInfo *)0x0), bVar2 != 0)) {
    key = (String *)0x0;
    key = (String *)
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetFloat
                    (key_00,defaultValue,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs != 0) {
      return (float)key;
    }
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    return (float)key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    key = (String *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
    func_?();
  }
  key = (String *)0x0;
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)StringLiteral__not_found_;
  key = (String *)&UNK_?;
  defaultValue = (float)pSVar1;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    key = (String *)0x0;
    if (pSVar1 == (String *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
    uVar5 = mscorlib.dll::System::String::String_IndexOf_2(pSVar1,0x3a,(MethodInfo *)0x0);
    if (uVar5 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        mscorlib.dll::System::Single::Single_TryParse_1(pSVar1,(float *)&key,(MethodInfo *)0x0);
        pSVar1 = key;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        ObscuredPrefs_SetFloat(key_00,(float)pSVar1,(MethodInfo *)0x0);
        return (float)key;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      value = ObscuredPrefs_DecryptData(key_00,pSVar1,(MethodInfo *)0x0);
      if (value != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        fVar6 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(value,0,(MethodInfo *)0x0)
        ;
        return fVar6;
      }
    }
  }
  return defaultValue;
}


/* Int32 GetInt(String) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetInt(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
          preservePlayerPrefs == 0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    defaultValue = (int32_t)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
    key = (String *)&UNK_?;
    func_?();
  }
  defaultValue = 0;
  key = pSVar1;
  a = (MethodInfo *)ObscuredPrefs_GetEncryptedPrefsString(key_00,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  defaultValue = (int32_t)&UNK_?;
  method = a;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    ((String *)a,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    key = (String *)0x0;
    if (a == (MethodInfo *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      iVar3 = (*pcVar4)();
      return iVar3;
    }
    uVar5 = mscorlib.dll::System::String::String_IndexOf_2((String *)a,0x3a,(MethodInfo *)0x0);
    if (uVar5 < 0x80000000) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue((String *)a,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar1,(int32_t *)&key,(MethodInfo *)0x0);
        pSVar1 = key;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        ObscuredPrefs_SetInt(key_00,(int32_t)pSVar1,(MethodInfo *)0x0);
        return (int32_t)key;
      }
    }
    else {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      value = ObscuredPrefs_DecryptData(key_00,(String *)a,(MethodInfo *)0x0);
      if (value != (Byte__Array *)0x0) {
        if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
          func_?();
        }
        iVar3 = mscorlib.dll::System::BitConverter::BitConverter_ToInt32(value,0,(MethodInfo *)0x0);
        return iVar3;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    iVar3 = ObscuredPrefs_DecryptLongValue(key,pSVar1,0,(MethodInfo *)0x0);
    return iVar3;
  }
  return 0;
}


/* Int64 GetLong(String, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetLong_1(String *key,int64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultValue._0_4_ = &UNK_?;
      func_?();
    }
    iVar3 = ObscuredPrefs_DecryptLongValue
                      (key,pSVar1,CONCAT44((undefined *)defaultValue,in_stack_4),
                       (MethodInfo *)0x0);
    return iVar3;
  }
  return CONCAT44((undefined *)defaultValue,in_stack_4);
}


/* Quaternion GetQuaternion(String) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetQuaternion(Quaternion *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->x;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  puVar4 = &UNK_?;
  pSVar5 = pSVar3;
  pQVar1 = (Quaternion *)StringLiteral__not_found_;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    fVar7 = (float)puVar4;
    fVar8 = fVar2;
    uVar9 = CONCAT44(fVar7,fVar8);
    __return_storage_ptr__ = pQVar1;
    fVar10 = (float)pSVar5;
    defaultValue = (Quaternion)CONCAT88(uVar11,uVar9);
    pQVar12 = ObscuredPrefs_DecryptQuaternionValue
                       ((Quaternion *)&stack0xffffffec,key,pSVar3,defaultValue,(MethodInfo *)0x0);
    pMVar13 = (MonitorData *)pQVar12->y;
    fVar2 = pQVar12->z;
    fVar14 = pQVar12->w;
    pQVar1->x = (float)pQVar12->x;
    pQVar1->y = (float)pMVar13;
    ((String__Fields *)&pQVar1->z)->length = (int32_t)fVar2;
    pQVar1->w = fVar14;
    return pQVar1;
  }
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = (float)puVar4;
  __return_storage_ptr__->z = (float)pSVar5;
  __return_storage_ptr__->w = (float)pQVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
  pIVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.methodPtr;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if ((((uint)pIVar2 & 0x2000000) != 0) && ((pOVar1->_1).cctor_started == 0)) {
    func_?(pOVar1);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar5 = ObscuredPrefs_DecryptQuaternionValue
                       ((Quaternion *)&stack0xffffffec,key,pSVar3,defaultValue,(MethodInfo *)0x0);
    fVar6 = pQVar5->y;
    fVar7 = pQVar5->z;
    fVar8 = pQVar5->w;
    __return_storage_ptr__->x = pQVar5->x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    __return_storage_ptr__->w = fVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = defaultValue.x;
  __return_storage_ptr__->y = defaultValue.y;
  __return_storage_ptr__->z = defaultValue.z;
  __return_storage_ptr__->w = defaultValue.w;
  return __return_storage_ptr__;
}


/* String GetRawValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetRawValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar2)();
    return pSVar1;
  }
  pcRam_? = pcVar2;
  pSVar1 = (String *)(*pcRam_?)(in_stack_4,pSVar1);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  pBVar4 = mscorlib.dll::System::Convert::Convert_FromBase64String(value,(MethodInfo *)0x0);
  uStack_1 = 0xffffffff;
  if (pBVar4 != (Byte__Array *)0x0) {
    uVar5 = pBVar4->max_length;
    if ((int)uVar5 < 7) {
      *unaff_FS_OFFSET = uStack_3;
      return (uint)pBVar4 & 0xffffff00;
    }
    if (uVar5 - 7 < uVar5) {
      if (uVar5 - 6 < uVar5) {
        OVar6 = ObscuredPrefs_DataType__Enum_Unknown;
        if (pBVar4->vector[uVar5 - 6] < 0xb) {
          OVar6 = (uint)pBVar4->vector[uVar5 - 7];
        }
        *unaff_FS_OFFSET = uStack_3;
        return OVar6;
      }
    }
    else {
      uVar7 = func_?();
      func_?(uVar7);
    }
    uVar7 = func_?();
    func_?(uVar7);
  }
  func_?();
  pcVar8 = (code *)swi(3);
  OVar6 = (*pcVar8)();
  return OVar6;
}


/* Rect GetRect(String) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect(Rect *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffec,0,0,0,0,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  fVar1 = 0.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  fVar3 = 0.0;
  pSVar4 = pSVar2;
  pSVar5 = StringLiteral__not_found_;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    defaultValue.m_YMin = (float)pSVar5;
    defaultValue.m_XMin = (float)pSVar4;
    defaultValue.m_Width = fVar3;
    defaultValue.m_Height = fVar1;
    pRVar7 = ObscuredPrefs_DecryptRectValue
                       ((Rect *)&stack0xffffffdc,key,pSVar2,defaultValue,(MethodInfo *)0x0);
    fVar1 = pRVar7->m_YMin;
    fVar3 = pRVar7->m_Width;
    fVar8 = pRVar7->m_Height;
    __return_storage_ptr__->m_XMin = pRVar7->m_XMin;
    __return_storage_ptr__->m_YMin = fVar1;
    __return_storage_ptr__->m_Width = fVar3;
    __return_storage_ptr__->m_Height = fVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->m_XMin = (float)pSVar4;
  __return_storage_ptr__->m_YMin = (float)pSVar5;
  __return_storage_ptr__->m_Width = fVar3;
  __return_storage_ptr__->m_Height = fVar1;
  return __return_storage_ptr__;
}


/* Rect GetRect(String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect_1
                 (Rect *__return_storage_ptr__,String *key,Rect defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
  pIVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.methodPtr;
  __return_storage_ptr__->m_XMin = 0.0;
  __return_storage_ptr__->m_YMin = 0.0;
  __return_storage_ptr__->m_Width = 0.0;
  __return_storage_ptr__->m_Height = 0.0;
  if ((((uint)pIVar2 & 0x2000000) != 0) && ((pOVar1->_1).cctor_started == 0)) {
    func_?(pOVar1);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pRVar5 = ObscuredPrefs_DecryptRectValue
                       ((Rect *)&stack0xffffffec,key,pSVar3,defaultValue,(MethodInfo *)0x0);
    fVar6 = pRVar5->m_YMin;
    fVar7 = pRVar5->m_Width;
    fVar8 = pRVar5->m_Height;
    __return_storage_ptr__->m_XMin = pRVar5->m_XMin;
    __return_storage_ptr__->m_YMin = fVar6;
    __return_storage_ptr__->m_Width = fVar7;
    __return_storage_ptr__->m_Height = fVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->m_XMin = defaultValue.m_XMin;
  __return_storage_ptr__->m_YMin = defaultValue.m_YMin;
  __return_storage_ptr__->m_Width = defaultValue.m_Width;
  __return_storage_ptr__->m_Height = defaultValue.m_Height;
  return __return_storage_ptr__;
}


/* String GetString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_GetString_1(key,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString_1(String *key,String *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    defaultValue = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                             (key,(String *)0x0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      ObscuredPrefs_SetString(key,defaultValue,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
      return defaultValue;
    }
  }
  else {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    defaultValue = (String *)&UNK_?;
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar1 == (String *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar3)();
        return pSVar1;
      }
      uVar4 = mscorlib.dll::System::String::String_IndexOf_2(pSVar1,0x3a,(MethodInfo *)0x0);
      if (uVar4 < 0x80000000) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)
             ) {
            func_?();
          }
          ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
      else {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0))
        {
          func_?();
        }
        pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
        defaultValue = key;
        if (pBVar5 != (Byte__Array *)0x0) {
          if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
            func_?();
          }
          pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
          if (pEVar6 != (Encoding *)0x0) {
            pSVar1 = (String *)(*(code *)(pEVar6->klass->vtable).GetString.method)();
            return pSVar1;
          }
          goto code_?;
        }
      }
    }
  }
  return defaultValue;
}


/* UInt32 GetUInt(String) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetUInt(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0,(MethodInfo *)0x0);
    return uVar3;
  }
  return 0;
}


/* UInt32 GetUInt(String, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetUInt_1(String *key,uint32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,defaultValue,(MethodInfo *)0x0);
    return uVar3;
  }
  return defaultValue;
}


/* UInt64 GetULong(String) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptULongValue(key,pSVar1,0,(MethodInfo *)0x0);
    return uVar3;
  }
  return 0;
}


/* UInt64 GetULong(String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong_1(String *key,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultValue._0_4_ = &UNK_?;
      func_?();
    }
    uVar3 = ObscuredPrefs_DecryptULongValue
                      (key,pSVar1,CONCAT44((undefined *)defaultValue,in_stack_4),
                       (MethodInfo *)0x0);
    return uVar3;
  }
  return CONCAT44((undefined *)defaultValue,in_stack_4);
}


/* Vector2 GetVector2(String) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar3 = pSVar2;
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    defaultValue.y = (float)pSVar3;
    defaultValue.x = VVar1.x;
    VVar1 = ObscuredPrefs_DecryptVector2Value(key,pSVar2,defaultValue,(MethodInfo *)0x0);
    return VVar1;
  }
  VVar1.y = (float)pSVar3;
  return VVar1;
}


/* Vector2 GetVector2(String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2_1(String *key,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      defaultValue.y = (float)&UNK_?;
      func_?();
    }
    VVar3.y = defaultValue.y;
    VVar3.x = defaultValue.x;
    VVar3 = ObscuredPrefs_DecryptVector2Value(key,pSVar1,VVar3,(MethodInfo *)0x0);
    return VVar3;
  }
  return defaultValue;
}


/* Vector3 GetVector3(String) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetVector3(Vector3 *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar4 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar4 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  uVar5 = 0;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar4,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    defaultValue.y = (float)uVar2;
    defaultValue.x = (float)uVar5;
    defaultValue.z = fVar3;
    pVVar1 = ObscuredPrefs_DecryptVector3Value
                       ((Vector3 *)&stack0xffffffe8,key,pSVar4,defaultValue,(MethodInfo *)0x0);
    fVar7 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (float)uVar5;
  __return_storage_ptr__->y = (float)uVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  pIVar2 = (pOVar1->vtable).Equals.methodPtr;
  __return_storage_ptr__->z = 0.0;
  if ((((uint)pIVar2 & 0x2000000) != 0) && ((pOVar1->_1).cctor_started == 0)) {
    func_?(pOVar1);
  }
  pSVar3 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar3 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar3,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar5 = ObscuredPrefs_DecryptVector3Value
                       ((Vector3 *)&stack0xfffffff0,key,pSVar3,defaultValue,(MethodInfo *)0x0);
    fVar6 = pVVar5->y;
    fVar7 = pVVar5->z;
    __return_storage_ptr__->x = pVVar5->x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = defaultValue.x;
  __return_storage_ptr__->y = defaultValue.y;
  __return_storage_ptr__->z = defaultValue.z;
  return __return_storage_ptr__;
}


/* Boolean HasKey(String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_HasKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (key,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    pcRam_? = pcVar2;
    bVar1 = (*pcRam_?)();
    return bVar1;
  }
  return 1;
}


/* Void PossibleForeignSavesDetected() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_PossibleForeignSavesDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onPossibleForeignSavesDetected != (Action *)0x0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        foreignSavesReported == 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      foreignSavesReported = 1;
      this = (JumpState_OnWallJumpDelegate *)
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
             onPossibleForeignSavesDetected;
      if (this == (JumpState_OnWallJumpDelegate *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      Assembly-CSharp.dll::JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                (this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onAlterationDetected != (Action *)0x0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    this = (JumpState_OnWallJumpDelegate *)
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
           onAlterationDetected;
    if (this == (JumpState_OnWallJumpDelegate *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Assembly-CSharp.dll::JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
              (this,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
    onAlterationDetected = (Action *)0x0;
  }
  return;
}


/* Void SetBool(String, Boolean) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetBool(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4
                         ((((uint)value.rgba._3_1_ << 8 | value.rgba & 0xffU) << 8 |
                          (uint)value.rgba >> 8 & 0xff) << 8 | (uint)value.rgba._2_1_,
                          (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  pIVar1 = mscorlib.dll::System::Decimal::Decimal_GetBits(value,(MethodInfo *)0x0);
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  uVar2 = 0;
  if (pIVar1 != (Int32__Array *)0x0) {
    piVar3 = pIVar1->vector;
    while( true ) {
      if ((int)pIVar1->max_length <= (int)uVar2) break;
      if (pIVar1->max_length <= uVar2) goto code_?;
      value_00 = *piVar3;
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      collection = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_2
                             (value_00,(MethodInfo *)0x0);
      if (this == (List_1_VoxelHit_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                (this,(IEnumerable_1_VoxelHit_ *)collection,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if (this != (List_1_VoxelHit_ *)0x0) {
      cleanBytes = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this,
                              MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                             );
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
        func_?();
      }
      value_01 = ObscuredPrefs_EncryptData
                           ((String *)this,(Byte__Array *)cleanBytes,
                            ObscuredPrefs_DataType__Enum_Decimal,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (key_00,value_01,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDouble(String, Double) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetDouble(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_7
                         ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_2(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = newKey;
  return;
}


/* Void SetQuaternion(String, Quaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetQuaternion(String *key,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  pBVar2 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     (5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar2,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
  }
  else {
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0,in_stack_4);
    if (cVar3 != '\0') {
      return;
    }
  }
  this = (JsonSchemaException *)func_?(TypeInfo__UnityEngine__PlayerPrefsException);
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this,StringLiteral_Could_not_store_preference_value,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRect(String, Rect) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetRect(String *key,Rect value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSStack_1 = (String__Class *)value.m_XMin;
  pMStack_2 = (MonitorData *)value.m_YMin;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0x10);
  fVar3 = (float10)func_?(&pSStack_1,0);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar4 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     ((float)fVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  fVar3 = (float10)func_?(&pSStack_1,0);
  pBVar4 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6
                     ((float)fVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  fVar5 = Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single__get_Value
                    ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,(MethodInfo *)0x0);
  pBVar4 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(fVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  fVar5 = Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
          CrossPlatformInputManager+VirtualAxis::
          CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                    ((CrossPlatformInputManager_VirtualAxis *)&pSStack_1,(MethodInfo *)0x0);
  pBVar4 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(fVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,(Array *)cleanBytes,0xc,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       ((String *)&pSStack_1,cleanBytes,ObscuredPrefs_DataType__Enum_Rect,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    cleanBytes = (Byte__Array *)
                 (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                           (pEVar1,value,(pEVar1->klass->vtable).GetBytes_2.methodPtr);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    value_00 = ObscuredPrefs_EncryptData
                         (key,cleanBytes,ObscuredPrefs_DataType__Enum_String,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (key_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetUInt(String, UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetUInt(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_4(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  cleanBytes = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_5
                         (CONCAT44((undefined4)value,in_stack_1),(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)func_?(TypeInfo__System__Byte,0xc);
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.x,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,0,4,(MethodInfo *)0x0);
  pBVar1 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(value.y,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,0,(Array *)cleanBytes,4,4,(MethodInfo *)0x0);
  src = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_6(5.60519e-45,(MethodInfo *)0x0);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)src,0,(Array *)cleanBytes,8,4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey =
       StringLiteral_e806f6;
  return;
}


/* String get_CryptoKey() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_CryptoKey(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
}


/* String get_DeprecatedDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeprecatedDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
           deprecatedDeviceId;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    pSVar1 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar1,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deprecatedDeviceId
         = pSVar1;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  value = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
         TypeInfo__System__String->static_fields->Empty;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?();
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
}


/* UInt32 get_DeviceIdHash() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceIdHash(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash == 0
     ) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    input = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    uVar1 = ObscuredPrefs_CalculateChecksum(input,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash =
         uVar1;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = value;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = value;
  return;
}


/* Void set_DeviceID(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceID(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  return;
}


/* Void set_DeviceId(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceId(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  return;
}

