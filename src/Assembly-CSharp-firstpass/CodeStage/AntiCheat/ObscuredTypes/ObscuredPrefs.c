
/* UInt32 CalculateChecksum(String) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_CalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (input,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    lVar3 = (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)(pEVar1,pSVar2);
    if (lVar3 != 0) {
      iVar4 = *(int *)(lVar3 + 0x18);
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = uVar5;
      if (iVar4 < 0x10) {
        iVar8 = 0x165667b1;
      }
      else {
        uVar9 = 0x24234428;
        uVar10 = 0x85ebca77;
        uVar11 = 0x61c8864f;
        if (lVar3 == 0) {
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          uVar13 = (*pcVar12)();
          return uVar13;
        }
        do {
          uVar14 = (uint)uVar7;
          if ((((*(uint *)(lVar3 + 0x18) <= uVar14) || (*(uint *)(lVar3 + 0x18) <= uVar14 + 1)) ||
              (*(uint *)(lVar3 + 0x18) <= uVar14 + 2)) || (*(uint *)(lVar3 + 0x18) <= uVar14 + 3))
          goto code_?;
          uVar9 = uVar9 + CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                        ((longlong)(int)(uVar14 + 2) + 0x21 + lVar3)
                                                       ,*(undefined1 *)
                                                         ((longlong)(int)(uVar14 + 2) + 0x20 + lVar3
                                                         )),*(undefined1 *)(uVar5 + 0x21 + lVar3))
                                     ,*(undefined1 *)(uVar5 + 0x20 + lVar3)) * -0x7a143589;
          uVar15 = uVar9 >> 0x13 | uVar9 * 0x2000;
          uVar9 = uVar15 * -0x61c8864f;
          if (((*(uint *)(lVar3 + 0x18) <= uVar14 + 4) || (*(uint *)(lVar3 + 0x18) <= uVar14 + 5))
             || ((*(uint *)(lVar3 + 0x18) <= uVar14 + 6 || (*(uint *)(lVar3 + 0x18) <= uVar14 + 7)))
             ) goto code_?;
          uVar10 = uVar10 + CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                        ((longlong)(int)(uVar14 + 6) + 0x21 + lVar3)
                                                       ,*(undefined1 *)
                                                         ((longlong)(int)(uVar14 + 6) + 0x20 + lVar3
                                                         )),
                                              *(undefined1 *)
                                               ((longlong)(int)(uVar14 + 4) + 0x21 + lVar3)),
                                     *(undefined1 *)((longlong)(int)(uVar14 + 4) + 0x20 + lVar3)) *
                            -0x7a143589;
          uVar16 = uVar10 >> 0x13 | uVar10 * 0x2000;
          uVar10 = uVar16 * -0x61c8864f;
          if (*(uint *)(lVar3 + 0x18) <= uVar14 + 8) goto code_?;
          if (((*(uint *)(lVar3 + 0x18) <= uVar14 + 9) || (*(uint *)(lVar3 + 0x18) <= uVar14 + 10))
             || (*(uint *)(lVar3 + 0x18) <= uVar14 + 0xb)) goto code_?;
          uVar6 = uVar6 + CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar5 + 0x2b + lVar3),
                                                       *(undefined1 *)(uVar5 + 0x2a + lVar3)),
                                              *(undefined1 *)
                                               ((longlong)(int)(uVar14 + 8) + 0x21 + lVar3)),
                                     *(undefined1 *)((longlong)(int)(uVar14 + 8) + 0x20 + lVar3)) *
                            -0x7a143589;
          uVar17 = uVar6 >> 0x13 | uVar6 * 0x2000;
          uVar6 = uVar17 * -0x61c8864f;
          if (((*(uint *)(lVar3 + 0x18) <= uVar14 + 0xc) ||
              (*(uint *)(lVar3 + 0x18) <= uVar14 + 0xd)) ||
             (*(uint *)(lVar3 + 0x18) <= uVar14 + 0xe)) goto code_?;
          uVar5 = uVar5 + 0x10;
          if (*(uint *)(lVar3 + 0x18) <= uVar14 + 0xf) goto code_?;
          uVar7 = (ulonglong)(uVar14 + 0x10);
          uVar11 = uVar11 + CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                        ((longlong)(int)(uVar14 + 0xf) + 0x20 +
                                                        lVar3),*(undefined1 *)
                                                                 ((longlong)(int)(uVar14 + 0xe) +
                                                                  0x20 + lVar3)),
                                              *(undefined1 *)
                                               ((longlong)(int)(uVar14 + 0xc) + 0x21 + lVar3)),
                                     *(undefined1 *)((longlong)(int)(uVar14 + 0xc) + 0x20 + lVar3))
                            * -0x7a143589;
          uVar14 = uVar11 >> 0x13 | uVar11 * 0x2000;
          uVar11 = uVar14 * -0x61c8864f;
        } while ((longlong)uVar5 <= (longlong)iVar4 + -0x10);
        iVar8 = (uVar11 >> 0xe | uVar14 * -0x193c0000) + (uVar6 >> 0x14 | uVar17 * 0x779b1000) +
                 (uVar10 >> 0x19 | uVar16 * 0x1bbcd880) + (uVar9 >> 0x1f | uVar15 * 0x3c6ef362);
      }
      uVar5 = (ulonglong)(uint)(iVar8 + iVar4);
      iVar8 = (int)uVar7;
      if (iVar8 <= iVar4 + -4) {
        uVar6 = iVar8 + 2;
        lVar18 = (longlong)iVar8;
        do {
          if (lVar3 == 0) goto code_?;
          if (((*(uint *)(lVar3 + 0x18) <= (uint)uVar7) ||
              (*(uint *)(lVar3 + 0x18) <= uVar6 - 1)) ||
             (lVar19 = (longlong)(int)uVar6, *(uint *)(lVar3 + 0x18) <= uVar6))
          goto code_?;
          uVar11 = uVar6 + 1;
          uVar10 = (uint)uVar7 + 4;
          uVar7 = (ulonglong)uVar10;
          uVar6 = uVar6 + 4;
          if (*(uint *)(lVar3 + 0x18) <= uVar11) goto code_?;
          uVar11 = (int)uVar5 +
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar18 + 0x23 + lVar3),
                                              *(undefined1 *)(lVar19 + 0x20 + lVar3)),
                                     *(undefined1 *)(lVar3 + lVar18 + 0x21)),
                            *(undefined1 *)(lVar3 + 0x20 + lVar18)) * -0x3d4d51c3;
          uVar5 = (ulonglong)((uVar11 >> 0xf | uVar11 * 0x20000) * 0x27d4eb2f);
          lVar18 = lVar18 + 4;
        } while ((int)uVar10 <= iVar4 + -4);
      }
      if ((int)uVar7 < iVar4) {
        lVar18 = (longlong)(int)uVar7;
        do {
          if (lVar3 == 0) goto code_?;
          if (*(uint *)(lVar3 + 0x18) <= (uint)uVar7) {
code_?:
            FUN_?();
            pcVar12 = (code *)swi(3);
            uVar13 = (*pcVar12)();
            return uVar13;
          }
          lVar19 = lVar18 + 0x20;
          uVar7 = (ulonglong)((uint)uVar7 + 1);
          lVar18 = lVar18 + 1;
          uVar6 = (uint)*(byte *)(lVar19 + lVar3) * 0x165667b1 + (int)uVar5;
          uVar5 = (ulonglong)((uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f);
        } while (lVar18 < iVar4);
      }
      uVar6 = ((uint)(uVar5 >> 0xf) ^ (uint)uVar5) * -0x7a143589;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51c3;
      return uVar6 >> 0x10 ^ uVar6;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  uVar13 = (*pcVar12)();
  return uVar13;
}


/* Byte[] ConstructByteArray(Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_ConstructByteArray(uint8_t value,int32_t length,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < length) {
    do {
      if (pBVar1 == (Byte__Array *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pBVar1 = (Byte__Array *)(*pcVar4)();
        return pBVar1;
      }
      if ((uint)pBVar1->max_length <= (uint)uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pBVar1 = (Byte__Array *)(*pcVar4)();
        return pBVar1;
      }
      pBVar1->vector[uVar2] = value;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)((uint)uVar3 + 1);
    } while ((longlong)uVar2 < (longlong)length);
  }
  return pBVar1;
}


/* Boolean DecryptBoolValue(String, String, Boolean) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DecryptBoolValue
               (String *key,String *encryptedInput,bool defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = 0;
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(encryptedInput->fields)._firstChar,0x3a,
                       (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((pSVar2 != ::StringLiteral__) &&
         ((((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
           ((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 == 0)))) {
        uVar4 = 0;
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar2,aiStackX_10,(MethodInfo *)0x0);
        iVar5 = aiStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) goto code_?;
        pBVar6->vector[0] = iVar5 == 1;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x23),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        defaultValue = aiStackX_10[0] == 1;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        iVar7 = (int)pBVar6->max_length;
        if (iVar7 + -1 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar3 = (*pcVar8)();
          return bVar3;
        }
        if (iVar7 == 0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar3 = (*pcVar8)();
          return bVar3;
        }
        defaultValue = pBVar6->vector[0] != 0;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Byte[] DecryptByteArrayValue(String, String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptByteArrayValue
          (String *key,String *encryptedInput,uint8_t defaultValue,int32_t defaultLength,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar4 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((pSVar4 != ::StringLiteral__) &&
       ((((pSVar4 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar4->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar4->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar5 == 0)))) {
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar6 != (Encoding *)0x0) {
        pMVar7 = (pEVar6->klass->vtable).GetBytes_1.method;
        pBVar2 = (Byte__Array *)
                 (*(pEVar6->klass->vtable).GetBytes_1.methodPtr)(pEVar6,pSVar4,pMVar7);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar4 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar2,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x28),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar4,value,(MethodInfo *)0x0);
        return pBVar2;
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar2 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      return pBVar2;
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar2 = ObscuredPrefs_ConstructByteArray(defaultValue,defaultLength,(MethodInfo *)0x0);
  return pBVar2;
}


/* Byte[] DecryptData(String, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptData(String *key,String *encryptedInput,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) goto code_?;
  inputLength = (encryptedInput->fields)._stringLength;
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar1 = mscorlib.dll::System::Convert::Convert_FromBase64CharPtr
                     (&(encryptedInput->fields)._firstChar,inputLength,(MethodInfo *)0x0);
  if (pBVar1 == (Byte__Array *)0x0) goto code_?;
  if (pBVar1->max_length == 0) goto code_?;
  iVar2 = (int)pBVar1->max_length;
  if ((uint)pBVar1->max_length <= iVar2 - 6U) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pBVar1 = (Byte__Array *)(*pcVar3)();
    return pBVar1;
  }
  if (pBVar1->vector[(longlong)iVar2 + -6] != 2) goto code_?;
  if ((uint)pBVar1->max_length <= iVar2 - 5U) goto code_?;
  uVar4 = pBVar1->vector[(longlong)iVar2 + -5];
  pAVar5 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar1,iVar2 + -4,pAVar5,0,4,(MethodInfo *)0x0);
  if (pAVar5 != (Array *)0x0) {
    if ((((*(int *)&pAVar5[1].monitor == 0) || (*(uint *)&pAVar5[1].monitor < 2)) ||
        (*(uint *)&pAVar5[1].monitor < 3)) || (*(uint *)&pAVar5[1].monitor < 4))
    goto code_?;
    uVar6 = *(uint32_t *)&pAVar5[2].klass;
    uVar7 = 0;
    if (uVar4 == 0) {
      iVar2 = iVar2 + -7;
      uVar7 = 0;
    }
    else {
      iVar2 = iVar2 + -0xb;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice
          != 0) {
        pAVar5 = (Array *)FUN_?(TypeInfo__System__Byte,4);
        mscorlib.dll::System::Buffer::Buffer_BlockCopy
                  ((Array *)pBVar1,iVar2,pAVar5,0,4,(MethodInfo *)0x0);
        if (pAVar5 == (Array *)0x0) goto code_?;
        if (((*(int *)&pAVar5[1].monitor == 0) || (*(uint *)&pAVar5[1].monitor < 2)) ||
           ((*(uint *)&pAVar5[1].monitor < 3 || (*(uint *)&pAVar5[1].monitor < 4))))
        goto code_?;
        uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)&pAVar5[2].klass + 3),
                                            *(undefined1 *)((longlong)&pAVar5[2].klass + 2)),
                                   *(undefined1 *)((longlong)&pAVar5[2].klass + 1)),
                          *(undefined1 *)&pAVar5[2].klass);
      }
    }
    pAVar5 = (Array *)FUN_?(TypeInfo__System__Byte);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)pBVar1,0,pAVar5,0,iVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    }
    pSVar8 = mscorlib.dll::System::String::String_Concat_4
                       (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Byte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar8 != (String *)0x0) {
      iVar9 = (pSVar8->fields)._stringLength;
      pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,iVar2);
      uVar10 = 0;
      if (0 < iVar2) {
        puVar11 = pBVar1->vector;
        do {
          if (pAVar5 == (Array *)0x0) goto code_?;
          if (*(uint *)&pAVar5[1].monitor <= uVar10) goto code_?;
          uVar12 = (longlong)(int)uVar10 % (longlong)iVar9;
          if ((longlong)(pSVar8->fields)._stringLength <= (longlong)(uVar12 & 0xffffffff)) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            pBVar1 = (Byte__Array *)(*pcVar3)();
            return pBVar1;
          }
          if (pBVar1 == (Byte__Array *)0x0) goto code_?;
          if ((uint)pBVar1->max_length <= uVar10) goto code_?;
          *puVar11 = (byte)(&(pSVar8->fields)._firstChar)[(int)uVar12] ^
                     puVar11[(longlong)pAVar5 - (longlong)pBVar1];
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 1;
        } while ((longlong)(puVar11 + (-0x20 - (longlong)pBVar1)) < (longlong)iVar2);
      }
      uVar13 = Utils::xxHash::xxHash_CalculateHash(pBVar1,iVar2,0,(MethodInfo *)0x0);
      if (uVar13 == uVar6) {
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
            lockToDevice == 2) {
          if (uVar7 == 0) {
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                emergencyMode != 0) {
              return pBVar1;
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                readForeignSaves == 0) {
              return (Byte__Array *)0x0;
            }
            return pBVar1;
          }
        }
        else if (uVar7 == 0) {
          return pBVar1;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
            emergencyMode != 0) {
          return pBVar1;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        uVar6 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
        if (uVar7 != uVar6) {
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
          if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
              readForeignSaves == 0) {
            return (Byte__Array *)0x0;
          }
          return pBVar1;
        }
        return pBVar1;
      }
code_?:
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
      return (Byte__Array *)0x0;
    }
  }
code_?:
  FUN_?();
code_?:
  uVar14 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar14);
  pSVar8 = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,pSVar8,(MethodInfo *)0x0);
  uVar14 = func_?(&MethodInfo__System__Convert__FromBase64String_System__String_);
  FUN_?(this,uVar14);
  pcVar3 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar3)();
  return pBVar1;
}


/* Decimal DecryptDecimalValue(String, String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptDecimalValue
                    (Decimal *__return_storage_ptr__,String *key,String *encryptedInput,
                    Decimal *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.flags = 0;
  DStack_1.hi = 0;
  DStack_1.lo = 0;
  DStack_1.mid = 0;
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Decimal *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = (encryptedInput->fields)._stringLength;
  info = (NumberFormatInfo *)(ulonglong)uVar4;
  uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,uVar4,(MethodInfo *)0x0);
  if (uVar4 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar5 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if (pSVar5 != ::StringLiteral__) {
      if (((pSVar5 == (String *)0x0) || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar5->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) {
code_?:
        if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar6 = 0;
        iVar7 = 0;
        iVar8 = 0;
        iVar9 = 0;
        if (pSVar5 != (String *)0x0) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          RStack_10._pointer._value = &(pSVar5->fields)._firstChar;
          RStack_10._12_4_ = 0;
          RStack_10._length = (pSVar5->fields)._stringLength;
          info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                 NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          mscorlib.dll::System::Number::Number_TryParseDecimal
                    (&RStack_10,NumberStyles__Enum_Number,info,&DStack_1,(MethodInfo *)0x0);
          iVar6 = DStack_1.flags;
          iVar7 = DStack_1.hi;
          iVar8 = DStack_1.lo;
          iVar9 = DStack_1.mid;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar5 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        DStack_1.hi = iVar7;
        DStack_1.flags = iVar6;
        DStack_1.mid = iVar9;
        DStack_1.lo = iVar8;
        pBVar11 = BitconverterExt::BitconverterExt_GetBytes(&DStack_1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar11,
                           (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)info >> 8),0x1b)
                           ,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar5,value,(MethodInfo *)0x0);
        __return_storage_ptr__->flags = iVar6;
        __return_storage_ptr__->hi = iVar7;
        __return_storage_ptr__->lo = iVar8;
        __return_storage_ptr__->mid = iVar9;
        return __return_storage_ptr__;
      }
      info = (NumberFormatInfo *)((longlong)(pSVar5->fields)._stringLength * 2);
      bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar5->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,(uint64_t)info,
                         (MethodInfo *)0x0);
      if (bVar12 == 0) goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar11 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar11 != (Byte__Array *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((int)pBVar11->max_length != 0x10) {
        uVar13 = func_?(&TypeInfo__System__Exception);
        this_00 = (Exception *)func_?(uVar13);
        pSVar5 = (String *)func_?(&StringLiteral__ACTk__A_decimal_must_be_created);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar5,(MethodInfo *)0x0);
        uVar13 = func_?(&
                                    MethodInfo__CodeStage__AntiCheat__ObscuredTypes__BitconverterExt__ToDecimal_System__Byte____
                                   );
        FUN_?(this_00,uVar13);
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      lVar14 = FUN_?(TypeInfo__System__Int32,4);
      puVar15 = pBVar11->vector;
      uVar4 = 0;
      do {
        if ((uint)pBVar11->max_length <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          pDVar3 = (Decimal *)(*pcVar2)();
          return pDVar3;
        }
        if ((int)pBVar11->max_length + -4 < (int)uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          pDVar3 = (Decimal *)(*pcVar2)();
          return pDVar3;
        }
        if (lVar14 == 0) goto code_?;
        uVar16 = uVar4 >> 2;
        if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_?;
        uVar4 = uVar4 + 4;
        uVar17 = *(undefined4 *)puVar15;
        puVar15 = puVar15 + 4;
        *(undefined4 *)(lVar14 + 0x20 + (ulonglong)uVar16 * 4) = uVar17;
      } while ((int)uVar4 < 0x10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Decimal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)(lVar14 + 0x18) != 4) {
code_?:
        uVar13 = func_?(&TypeInfo__System__ArgumentException);
        this = (InvalidEnumArgumentException *)func_?(uVar13);
        pSVar5 = (String *)func_?(&StringLiteral_Decimal_byte_array_constructor_r);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this,pSVar5,(MethodInfo *)0x0);
        uVar13 = func_?(&MethodInfo__System__Decimal__Decimal_System__Int32____);
        FUN_?(this,uVar13);
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      uVar4 = *(uint *)(lVar14 + 0x2c);
      if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((uVar4 & 0x7f00ffff) != 0) || (0x1c0000 < (uVar4 & 0xff0000))) goto code_?;
      if (*(int *)(lVar14 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      iVar6 = *(int32_t *)(lVar14 + 0x20);
      RStack_10._length = iVar6;
      if (*(uint *)(lVar14 + 0x18) < 2) goto code_?;
      RStack_10._12_4_ = *(int32_t *)(lVar14 + 0x24);
      if (*(uint *)(lVar14 + 0x18) < 3) goto code_?;
      iVar7 = *(int32_t *)(lVar14 + 0x28);
      goto code_?;
    }
  }
  uVar4 = defaultValue->flags;
  iVar7 = defaultValue->hi;
  iVar6 = defaultValue->lo;
  RStack_10._12_4_ = defaultValue->mid;
code_?:
  __return_storage_ptr__->flags = uVar4;
  __return_storage_ptr__->hi = iVar7;
  __return_storage_ptr__->lo = iVar6;
  __return_storage_ptr__->mid = RStack_10._12_4_;
  return __return_storage_ptr__;
}


/* Double DecryptDoubleValue(String, String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptDoubleValue
                 (String *key,String *encryptedInput,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  dStackX_10 = 0.0;
  if (encryptedInput == (String *)0x0) goto code_?;
  uVar3 = (encryptedInput->fields)._stringLength;
  info = (NumberFormatInfo *)(ulonglong)uVar3;
  uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,uVar3,(MethodInfo *)0x0);
  if (0x7fffffff < uVar3) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar4 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar4 == (Byte__Array *)0x0) {
      return defaultValue;
    }
    if ((int)pBVar4->max_length == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      dVar6 = (double)(*pcVar5)();
      return dVar6;
    }
    if (-1 < (int)pBVar4->max_length + -8) {
      return *(double *)pBVar4->vector;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
              (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
               (MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    dVar6 = (double)(*pcVar5)();
    return dVar6;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
  if (pSVar7 == ::StringLiteral__) {
    return defaultValue;
  }
  if (pSVar7 != (String *)0x0) {
    if ((::StringLiteral__ != (String *)0x0) &&
       ((pSVar7->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      info = (NumberFormatInfo *)((longlong)(pSVar7->fields)._stringLength * 2);
      bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar7->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,(uint64_t)info,
                         (MethodInfo *)0x0);
      if (bVar8 != 0) {
        return defaultValue;
      }
      if (pSVar7 == (String *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_9[0]._pointer._value = &(pSVar7->fields)._firstChar;
    aRStack_9[0]._12_4_ = 0;
    aRStack_9[0]._length = (pSVar7->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    mscorlib.dll::System::Double::Double_TryParse_2
              (aRStack_9,
               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,&dStackX_10,
               (MethodInfo *)0x0);
    uVar1 = SUB84(dStackX_10,0);
    uVar2 = (undefined4)((ulonglong)dStackX_10 >> 0x20);
  }
code_?:
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (pBVar4 != (Byte__Array *)0x0) {
    if ((int)pBVar4->max_length != 0) {
      *(ulonglong *)pBVar4->vector = CONCAT44(uVar2,uVar1);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value = ObscuredPrefs_EncryptData
                        (key,pBVar4,
                         (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)info >> 8),0x19),
                         (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar7,value,(MethodInfo *)0x0);
      return (double)CONCAT44(uVar2,uVar1);
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    dVar6 = (double)(*pcVar5)();
    return dVar6;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  dVar6 = (double)(*pcVar5)();
  return dVar6;
}


/* Single DecryptFloatValue(String, String, Single) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_DecryptFloatValue
                (String *key,String *encryptedInput,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  if (encryptedInput == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (0x7fffffff < uVar3) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar4 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar4 == (Byte__Array *)0x0) {
      return defaultValue;
    }
    if ((int)pBVar4->max_length == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    if (-1 < (int)pBVar4->max_length + -4) {
      return *(float *)pBVar4->vector;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
              (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
               (MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
  if (pSVar5 == ::StringLiteral__) {
    return defaultValue;
  }
  fVar2 = 0.0;
  if (pSVar5 != (String *)0x0) {
    if ((::StringLiteral__ != (String *)0x0) &&
       ((pSVar5->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar5->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                         (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return defaultValue;
      }
      if (pSVar5 == (String *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_7[0]._pointer._value = &(pSVar5->fields)._firstChar;
    aRStack_7[0]._12_4_ = 0;
    aRStack_7[0]._length = (pSVar5->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_2
              (aRStack_7,
               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_10,
               (MethodInfo *)0x0);
    fVar2 = afStackX_10[0];
  }
code_?:
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredPrefs_SetFloat(key,fVar2,(MethodInfo *)0x0);
  return fVar2;
}


/* Int32 DecryptIntValue(String, String, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptIntValue
                  (String *key,String *encryptedInput,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = 0;
  if (encryptedInput == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    s = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if (s != ::StringLiteral__) {
      if ((((s != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
          ((s->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
         (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(s->fields)._firstChar,
                             (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                             (longlong)(s->fields)._stringLength * 2,(MethodInfo *)0x0), bVar4 != 0)
         ) {
        return defaultValue;
      }
      mscorlib.dll::System::Int32::Int32_TryParse(s,aiStackX_10,(MethodInfo *)0x0);
      iVar2 = aiStackX_10[0];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetInt(key,iVar2,(MethodInfo *)0x0);
      return aiStackX_10[0];
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar5 != (Byte__Array *)0x0) {
      if ((int)pBVar5->max_length == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      if ((int)pBVar5->max_length + -4 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      return *(int32_t *)pBVar5->vector;
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStackX_10 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(encryptedInput->fields)._firstChar,0x3a,
                       (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((pSVar2 != ::StringLiteral__) &&
         ((((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
           ((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 == 0)))) {
        uVar4 = 0;
        mscorlib.dll::System::Int64::Int64_TryParse(pSVar2,&iStackX_10,(MethodInfo *)0x0);
        iVar5 = iStackX_10;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar5 = (*pcVar7)();
          return iVar5;
        }
        *(int64_t *)pBVar6->vector = iVar5;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x1e),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        defaultValue = iStackX_10;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          iVar5 = (*pcVar7)();
          return iVar5;
        }
        if ((int)pBVar6->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          iVar5 = (*pcVar7)();
          return iVar5;
        }
        defaultValue = *(int64_t *)pBVar6->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar5 = (*pcVar7)();
  return iVar5;
}


/* Quaternion DecryptQuaternionValue(String, String, Quaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_DecryptQuaternionValue
          (Quaternion *__return_storage_ptr__,String *key,String *encryptedInput,
          Quaternion *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = 0.0;
  afStackX_18[0] = 0.0;
  fStack_1 = 0.0;
  afStack_2[0] = 0.0;
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar3)();
    return pQVar4;
  }
  uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar5 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar6 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((pSVar6 != ::StringLiteral__) &&
       ((((pSVar6 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar6->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar6->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar7 == 0)))) {
      if (::StringLiteral__ != (String *)0x0) {
        if ((::StringLiteral__->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pQVar4 = (Quaternion *)(*pcVar3)();
          return pQVar4;
        }
        if ((pSVar6 != (String *)0x0) &&
           (pSVar8 = mscorlib.dll::System::String::String_Split
                               (pSVar6,(::StringLiteral__->fields)._firstChar,
                                StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar8 != (String__Array *)0x0)) {
          if ((int)pSVar8->max_length != 0) {
            pSVar6 = pSVar8->vector[0];
            fVar9 = 0.0;
            if (pSVar6 != (String *)0x0) {
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
              uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
              pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              mscorlib.dll::System::Single::Single_TryParse_2
                        ((ReadOnlySpan_1_Char_ *)auStack_10,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                         afStackX_8,(MethodInfo *)0x0);
              fVar9 = afStackX_8[0];
            }
            if (1 < (uint)pSVar8->max_length) {
              pSVar6 = pSVar8->vector[1];
              fVar13 = 0.0;
              if (pSVar6 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                         NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                mscorlib.dll::System::Single::Single_TryParse_2
                          ((ReadOnlySpan_1_Char_ *)auStack_10,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                           afStackX_18,(MethodInfo *)0x0);
                fVar13 = afStackX_18[0];
              }
              if (2 < (uint)pSVar8->max_length) {
                pSVar6 = pSVar8->vector[2];
                fVar14 = 0.0;
                if (pSVar6 != (String *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                  uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                  pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                           NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                  mscorlib.dll::System::Single::Single_TryParse_2
                            ((ReadOnlySpan_1_Char_ *)auStack_10,
                             NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                             NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                             &fStack_1,(MethodInfo *)0x0);
                  fVar14 = fStack_1;
                }
                if (3 < (uint)pSVar8->max_length) {
                  pSVar6 = pSVar8->vector[3];
                  QStack_15.w = 0.0;
                  if (pSVar6 != (String *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                    uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                    pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                             NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                    mscorlib.dll::System::Single::Single_TryParse_2
                              ((ReadOnlySpan_1_Char_ *)auStack_10,
                               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                               pNVar12,afStack_2,(MethodInfo *)0x0);
                    QStack_15.w = afStack_2[0];
                  }
                  auStack_10._4_4_ = fVar13;
                  auStack_10._0_4_ = fVar9;
                  uStack_11._4_4_ = QStack_15.w;
                  uStack_11._0_4_ = (int32_t)fVar14;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  QStack_15.y = fVar13;
                  QStack_15.x = fVar9;
                  QStack_15.z = fVar14;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
                  value = ObscuredPrefs_EncryptQuaternionValue(key,&QStack_15,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                            (pSVar6,value,(MethodInfo *)0x0);
                  __return_storage_ptr__->x = (float)auStack_10._0_4_;
                  __return_storage_ptr__->y = (float)auStack_10._4_4_;
                  __return_storage_ptr__->z = (float)(int32_t)uStack_11;
                  __return_storage_ptr__->w = (float)uStack_11._4_4_;
                  return __return_storage_ptr__;
                }
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          pQVar4 = (Quaternion *)(*pcVar3)();
          return pQVar4;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar16 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar16 != (Byte__Array *)0x0) {
      if ((int)pBVar16->max_length != 0) {
        uVar5 = (uint)pBVar16->max_length;
        if (-1 < (int)(uVar5 - 4)) {
          fVar9 = *(float *)pBVar16->vector;
          QStack_15.x = fVar9;
          if (uVar5 < 5) goto code_?;
          if (3 < (int)pBVar16->max_length + -4) {
            QStack_15.y = *(float *)(pBVar16->vector + 4);
            if ((uint)pBVar16->max_length < 9) goto code_?;
            if (7 < (int)pBVar16->max_length + -4) {
              fVar13 = *(float *)(pBVar16->vector + 8);
              QStack_15.z = fVar13;
              if ((uint)pBVar16->max_length < 0xd) goto code_?;
              if (0xb < (int)pBVar16->max_length + -4) {
                fVar14 = *(float *)(pBVar16->vector + 0xc);
                __return_storage_ptr__->x = fVar9;
                __return_storage_ptr__->y = QStack_15.y;
                __return_storage_ptr__->z = fVar13;
                __return_storage_ptr__->w = fVar14;
                return __return_storage_ptr__;
              }
            }
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pQVar4 = (Quaternion *)(*pcVar3)();
        return pQVar4;
      }
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pQVar4 = (Quaternion *)(*pcVar3)();
      return pQVar4;
    }
  }
  fVar9 = defaultValue->y;
  fVar13 = defaultValue->z;
  fVar14 = defaultValue->w;
  __return_storage_ptr__->x = defaultValue->x;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar13;
  __return_storage_ptr__->w = fVar14;
  return __return_storage_ptr__;
}


/* Rect DecryptRectValue(String, String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_DecryptRectValue
                 (Rect *__return_storage_ptr__,String *key,String *encryptedInput,Rect *defaultValue
                 ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = 0.0;
  afStackX_18[0] = 0.0;
  fStack_1 = 0.0;
  afStack_2[0] = 0.0;
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pRVar4 = (Rect *)(*pcVar3)();
    return pRVar4;
  }
  uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar5 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar6 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((pSVar6 != ::StringLiteral__) &&
       ((((pSVar6 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar6->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar6->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar7 == 0)))) {
      if (::StringLiteral__ != (String *)0x0) {
        if ((::StringLiteral__->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pRVar4 = (Rect *)(*pcVar3)();
          return pRVar4;
        }
        if ((pSVar6 != (String *)0x0) &&
           (pSVar8 = mscorlib.dll::System::String::String_Split
                               (pSVar6,(::StringLiteral__->fields)._firstChar,
                                StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar8 != (String__Array *)0x0)) {
          if ((int)pSVar8->max_length != 0) {
            pSVar6 = pSVar8->vector[0];
            fVar9 = 0.0;
            if (pSVar6 != (String *)0x0) {
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
              uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
              pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              mscorlib.dll::System::Single::Single_TryParse_2
                        ((ReadOnlySpan_1_Char_ *)auStack_10,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                         afStackX_8,(MethodInfo *)0x0);
              fVar9 = afStackX_8[0];
            }
            if (1 < (uint)pSVar8->max_length) {
              pSVar6 = pSVar8->vector[1];
              fVar13 = 0.0;
              if (pSVar6 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                         NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                mscorlib.dll::System::Single::Single_TryParse_2
                          ((ReadOnlySpan_1_Char_ *)auStack_10,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                           afStackX_18,(MethodInfo *)0x0);
                fVar13 = afStackX_18[0];
              }
              if (2 < (uint)pSVar8->max_length) {
                pSVar6 = pSVar8->vector[2];
                fVar14 = 0.0;
                if (pSVar6 != (String *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                  uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                  pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                           NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                  mscorlib.dll::System::Single::Single_TryParse_2
                            ((ReadOnlySpan_1_Char_ *)auStack_10,
                             NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                             NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar12,
                             &fStack_1,(MethodInfo *)0x0);
                  fVar14 = fStack_1;
                }
                if (3 < (uint)pSVar8->max_length) {
                  pSVar6 = pSVar8->vector[3];
                  RStack_15.m_Height = 0.0;
                  if (pSVar6 != (String *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    auStack_10 = (undefined1  [8])&(pSVar6->fields)._firstChar;
                    uStack_11 = (ulonglong)(uint)(pSVar6->fields)._stringLength;
                    pNVar12 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                             NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                    mscorlib.dll::System::Single::Single_TryParse_2
                              ((ReadOnlySpan_1_Char_ *)auStack_10,
                               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                               pNVar12,afStack_2,(MethodInfo *)0x0);
                    RStack_15.m_Height = afStack_2[0];
                  }
                  auStack_10._4_4_ = fVar13;
                  auStack_10._0_4_ = fVar9;
                  uStack_11._4_4_ = RStack_15.m_Height;
                  uStack_11._0_4_ = (int32_t)fVar14;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  RStack_15.m_YMin = fVar13;
                  RStack_15.m_XMin = fVar9;
                  RStack_15.m_Width = fVar14;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
                  value = ObscuredPrefs_EncryptRectValue(key,&RStack_15,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                            (pSVar6,value,(MethodInfo *)0x0);
                  __return_storage_ptr__->m_XMin = (float)auStack_10._0_4_;
                  __return_storage_ptr__->m_YMin = (float)auStack_10._4_4_;
                  __return_storage_ptr__->m_Width = (float)(int32_t)uStack_11;
                  __return_storage_ptr__->m_Height = (float)uStack_11._4_4_;
                  return __return_storage_ptr__;
                }
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          pRVar4 = (Rect *)(*pcVar3)();
          return pRVar4;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar16 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar16 != (Byte__Array *)0x0) {
      if ((int)pBVar16->max_length != 0) {
        uVar5 = (uint)pBVar16->max_length;
        if (-1 < (int)(uVar5 - 4)) {
          fVar9 = *(float *)pBVar16->vector;
          RStack_15.m_XMin = fVar9;
          if (uVar5 < 5) goto code_?;
          if (3 < (int)pBVar16->max_length + -4) {
            RStack_15.m_YMin = *(float *)(pBVar16->vector + 4);
            if ((uint)pBVar16->max_length < 9) goto code_?;
            if (7 < (int)pBVar16->max_length + -4) {
              fVar13 = *(float *)(pBVar16->vector + 8);
              RStack_15.m_Width = fVar13;
              if ((uint)pBVar16->max_length < 0xd) goto code_?;
              if (0xb < (int)pBVar16->max_length + -4) {
                fVar14 = *(float *)(pBVar16->vector + 0xc);
                __return_storage_ptr__->m_XMin = fVar9;
                __return_storage_ptr__->m_YMin = RStack_15.m_YMin;
                __return_storage_ptr__->m_Width = fVar13;
                __return_storage_ptr__->m_Height = fVar14;
                return __return_storage_ptr__;
              }
            }
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pRVar4 = (Rect *)(*pcVar3)();
        return pRVar4;
      }
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pRVar4 = (Rect *)(*pcVar3)();
      return pRVar4;
    }
  }
  fVar9 = defaultValue->m_YMin;
  fVar13 = defaultValue->m_Width;
  fVar14 = defaultValue->m_Height;
  __return_storage_ptr__->m_XMin = defaultValue->m_XMin;
  __return_storage_ptr__->m_YMin = fVar9;
  __return_storage_ptr__->m_Width = fVar13;
  __return_storage_ptr__->m_Height = fVar14;
  return __return_storage_ptr__;
}


/* String DecryptStringValue(String, String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptStringValue
                   (String *key,String *encryptedInput,String *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar3 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if (pSVar2 != ::StringLiteral__) {
      if ((((pSVar2 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
          ((pSVar2->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
         (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar4 != 0)) {
        return defaultValue;
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetString(key,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar5 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar5 != (Byte__Array *)0x0) {
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar6 != (Encoding *)0x0) {
        pSVar2 = (String *)
                 (*(pEVar6->klass->vtable).GetString_1.methodPtr)
                           (pEVar6,pBVar5,0,(ulonglong)(uint)pBVar5->max_length,
                            (pEVar6->klass->vtable).GetString_1.method);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 0;
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(encryptedInput->fields)._firstChar,0x3a,
                       (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((pSVar2 != ::StringLiteral__) &&
         ((((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
           ((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 == 0)))) {
        uVar4 = 0;
        mscorlib.dll::System::UInt32::UInt32_TryParse(pSVar2,auStackX_10,(MethodInfo *)0x0);
        uVar5 = auStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        *(uint32_t *)pBVar6->vector = uVar5;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),10),
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        defaultValue = auStackX_10[0];
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        if ((int)pBVar6->max_length + -4 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        defaultValue = *(uint32_t *)pBVar6->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar5 = (*pcVar7)();
  return uVar5;
}


/* UInt64 DecryptULongValue(String, String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DecryptULongValue
                   (String *key,String *encryptedInput,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = 0;
  if (encryptedInput != (String *)0x0) {
    uVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(encryptedInput->fields)._firstChar,0x3a,
                       (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
    if (uVar1 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
      if ((pSVar2 != ::StringLiteral__) &&
         ((((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
           ((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 == 0)))) {
        uVar4 = 0;
        mscorlib.dll::System::UInt64::UInt64_TryParse(pSVar2,&uStackX_10,(MethodInfo *)0x0);
        uVar5 = uStackX_10;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        *(uint64_t *)pBVar6->vector = uVar5;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x20),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,value,(MethodInfo *)0x0);
        defaultValue = uStackX_10;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        if ((int)pBVar6->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        defaultValue = *(uint64_t *)pBVar6->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar5 = (*pcVar7)();
  return uVar5;
}


/* Vector2 DecryptVector2Value(String, String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_DecryptVector2Value
                  (String *key,String *encryptedInput,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  afStack_1[0] = 0.0;
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar4 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar5 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((pSVar5 != ::StringLiteral__) &&
       ((((pSVar5 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar5->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar5->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar6 == 0)))) {
      if (::StringLiteral__ != (String *)0x0) {
        if ((::StringLiteral__->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          VVar3 = (Vector2)(*pcVar2)();
          return VVar3;
        }
        if ((pSVar5 != (String *)0x0) &&
           (pSVar7 = mscorlib.dll::System::String::String_Split
                               (pSVar5,(::StringLiteral__->fields)._firstChar,
                                StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar7 != (String__Array *)0x0)) {
          if ((int)pSVar7->max_length != 0) {
            pSVar5 = pSVar7->vector[0];
            fVar8 = 0.0;
            if (pSVar5 != (String *)0x0) {
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aRStack_9[0]._pointer._value = &(pSVar5->fields)._firstChar;
              aRStack_9[0]._12_4_ = 0;
              aRStack_9[0]._length = (pSVar5->fields)._stringLength;
              pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              mscorlib.dll::System::Single::Single_TryParse_2
                        (aRStack_9,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                         afStackX_10,(MethodInfo *)0x0);
              fVar8 = afStackX_10[0];
            }
            if (1 < (uint)pSVar7->max_length) {
              pSVar5 = pSVar7->vector[1];
              fVar11 = 0.0;
              if (pSVar5 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                aRStack_9[0]._pointer._value = &(pSVar5->fields)._firstChar;
                aRStack_9[0]._12_4_ = 0;
                aRStack_9[0]._length = (pSVar5->fields)._stringLength;
                pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                         NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                mscorlib.dll::System::Single::Single_TryParse_2
                          (aRStack_9,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                           afStack_1,(MethodInfo *)0x0);
                fVar11 = afStack_1[0];
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              pSVar5 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
              VVar3.y = fVar11;
              VVar3.x = fVar8;
              value = ObscuredPrefs_EncryptVector2Value(key,VVar3,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                        (pSVar5,value,(MethodInfo *)0x0);
              VVar12.y = fVar11;
              VVar12.x = fVar8;
              return VVar12;
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          VVar3 = (Vector2)(*pcVar2)();
          return VVar3;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar13 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar13 != (Byte__Array *)0x0) {
      if ((int)pBVar13->max_length == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        VVar3 = (Vector2)(*pcVar2)();
        return VVar3;
      }
      uVar4 = (uint)pBVar13->max_length;
      if (-1 < (int)(uVar4 - 4)) {
        if (uVar4 < 5) goto code_?;
        if (3 < (int)(uVar4 - 4)) {
          return *(Vector2 *)pBVar13->vector;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                 (MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      VVar3 = (Vector2)(*pcVar2)();
      return VVar3;
    }
  }
  return defaultValue;
}


/* Vector3 DecryptVector3Value(String, String, Vector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_DecryptVector3Value
                    (Vector3 *__return_storage_ptr__,String *key,String *encryptedInput,
                    Vector3 *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aRStack_1[0]._pointer._value = (uint16_t *)0x0;
  afStackX_8[0] = 0.0;
  afStackX_18[0] = 0.0;
  afStack_2[0] = 0.0;
  aRStack_1[0]._8_8_ = (ulonglong)(uint)aRStack_1[0]._12_4_ << 0x20;
  if (encryptedInput == (String *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(encryptedInput->fields)._firstChar,0x3a,
                     (encryptedInput->fields)._stringLength,(MethodInfo *)0x0);
  if (uVar5 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar6 = ObscuredPrefs_DeprecatedDecryptValue(encryptedInput,(MethodInfo *)0x0);
    if ((pSVar6 != ::StringLiteral__) &&
       ((((pSVar6 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar6->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar6->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar7 == 0)))) {
      if (::StringLiteral__ != (String *)0x0) {
        if ((::StringLiteral__->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pVVar4 = (Vector3 *)(*pcVar3)();
          return pVVar4;
        }
        if ((pSVar6 != (String *)0x0) &&
           (pSVar8 = mscorlib.dll::System::String::String_Split
                               (pSVar6,(::StringLiteral__->fields)._firstChar,
                                StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar8 != (String__Array *)0x0)) {
          if ((int)pSVar8->max_length != 0) {
            pSVar6 = pSVar8->vector[0];
            fVar9 = 0.0;
            if (pSVar6 != (String *)0x0) {
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aRStack_1[0]._pointer._value = &(pSVar6->fields)._firstChar;
              aRStack_1[0]._12_4_ = 0;
              aRStack_1[0]._length = (pSVar6->fields)._stringLength;
              pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              mscorlib.dll::System::Single::Single_TryParse_2
                        (aRStack_1,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                         afStackX_8,(MethodInfo *)0x0);
              fVar9 = afStackX_8[0];
            }
            if (1 < (uint)pSVar8->max_length) {
              pSVar6 = pSVar8->vector[1];
              fVar11 = 0.0;
              if (pSVar6 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                aRStack_1[0]._pointer._value = &(pSVar6->fields)._firstChar;
                aRStack_1[0]._12_4_ = 0;
                aRStack_1[0]._length = (pSVar6->fields)._stringLength;
                pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                         NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                mscorlib.dll::System::Single::Single_TryParse_2
                          (aRStack_1,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                           afStackX_18,(MethodInfo *)0x0);
                fVar11 = afStackX_18[0];
              }
              if (2 < (uint)pSVar8->max_length) {
                pSVar6 = pSVar8->vector[2];
                fVar12 = 0.0;
                if (pSVar6 != (String *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  aRStack_1[0]._pointer._value = &(pSVar6->fields)._firstChar;
                  aRStack_1[0]._12_4_ = 0;
                  aRStack_1[0]._length = (pSVar6->fields)._stringLength;
                  pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                           NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                  mscorlib.dll::System::Single::Single_TryParse_2
                            (aRStack_1,
                             NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                             NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                             afStack_2,(MethodInfo *)0x0);
                  fVar12 = afStack_2[0];
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
                aRStack_1[0]._length = (int32_t)fVar12;
                aRStack_1[0]._pointer._value = (void *)CONCAT44(fVar11,fVar9);
                value = ObscuredPrefs_EncryptVector3Value
                                  (key,(Vector3 *)aRStack_1,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                          (pSVar6,value,(MethodInfo *)0x0);
                __return_storage_ptr__->x = fVar9;
                __return_storage_ptr__->y = fVar11;
                __return_storage_ptr__->z = fVar12;
                return __return_storage_ptr__;
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          pVVar4 = (Vector3 *)(*pcVar3)();
          return pVVar4;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar13 = ObscuredPrefs_DecryptData(key,encryptedInput,(MethodInfo *)0x0);
    if (pBVar13 != (Byte__Array *)0x0) {
      if ((int)pBVar13->max_length != 0) {
        uVar5 = (uint)pBVar13->max_length;
        if (-1 < (int)(uVar5 - 4)) {
          aRStack_1[0]._pointer._value._0_4_ = *(undefined4 *)pBVar13->vector;
          if (uVar5 < 5) goto code_?;
          if (3 < (int)pBVar13->max_length + -4) {
            aRStack_1[0]._pointer._value._4_4_ = *(undefined4 *)(pBVar13->vector + 4);
            if ((uint)pBVar13->max_length < 9) goto code_?;
            if (7 < (int)pBVar13->max_length + -4) {
              fVar9 = *(float *)(pBVar13->vector + 8);
              *(void **)__return_storage_ptr__ = aRStack_1[0]._pointer._value;
              __return_storage_ptr__->z = fVar9;
              return __return_storage_ptr__;
            }
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar3)();
        return pVVar4;
      }
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
  }
  fVar9 = defaultValue->z;
  fVar11 = defaultValue->y;
  __return_storage_ptr__->x = defaultValue->x;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fVar9;
  return __return_storage_ptr__;
}


/* Void DeleteAll() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DeleteAll(MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void DeleteKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_DeleteKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  key_00 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (key_00,(MethodInfo *)0x0);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      preservePlayerPrefs != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_1 = (uint16_t *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  ppuStack_4 = apuStackX_8;
  if (key != (String *)0x0) {
    if ((key->fields)._stringLength == 0) {
      puStack_1 = (uint16_t *)0x1;
      uStack_2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar5 = (key->fields)._stringLength;
      apuStackX_8[0] = &(key->fields)._firstChar;
      if (iVar5 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
      puStack_1 = apuStackX_8[0];
    }
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&puStack_1);
  return;
}


/* String DeprecatedCalculateChecksum(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedCalculateChecksum(String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = 0;
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (input,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    lVar3 = (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)(pEVar1,pSVar2);
    pSVar2 = StringLiteral_X2;
    if (lVar3 != 0) {
      pSVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
               cryptoKey;
      if (pSVar4 != (String *)0x0) {
        uVar5 = 0;
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar6) {
          lVar7 = 0;
          do {
            if (uVar6 <= uVar5) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              pSVar2 = (String *)(*pcVar8)();
              return pSVar2;
            }
            uVar9 = (uint)*(byte *)(lVar3 + 0x20 + lVar7);
            iVar10 = (uVar5 + ((pSVar4->fields)._stringLength ^ 0x40U)) * uVar9;
            uVar5 = uVar5 + 1;
            lVar7 = lVar7 + 1;
            value = value + uVar9 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                    (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                          0xffffffffU) >> 0x1f)) * -3 + iVar10;
          } while (lVar7 < (int)uVar6);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar2 == (String *)0x0) {
          puVar11 = (uint16_t *)0x0;
          iVar12 = 0;
        }
        else {
          aRStack_13[0]._pointer._value = &(pSVar2->fields)._firstChar;
          aRStack_13[0]._12_4_ = 0;
          iVar12 = (pSVar2->fields)._stringLength;
          aRStack_13[0]._length = iVar12;
          puVar11 = aRStack_13[0]._pointer._value;
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_13[0]._12_4_ = 0;
        aRStack_13[0]._pointer._value = puVar11;
        aRStack_13[0]._length = iVar12;
        pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar8)();
  return pSVar2;
}


/* String DeprecatedDecryptValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_DeprecatedDecryptValue(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (String *)0x0) {
code_?:
    FUN_?();
  }
  else {
    auStackX_8[0] = 0x3a;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_1._pointer._value = auStackX_8;
    RStack_1._length = 1;
    RStack_1._12_4_ = 0;
    pSVar2 = mscorlib.dll::System::String::String_SplitInternal
                       (value,&RStack_1,0x7fffffff,StringSplitOptions__Enum_None,(MethodInfo *)0x0)
    ;
    if (pSVar2 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar2->max_length < 2) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    if (((int)pSVar2->max_length == 0) || (pSVar3 = pSVar2->vector[0], (uint)pSVar2->max_length < 2)
       ) goto code_?;
    pSVar4 = pSVar2->vector[1];
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Convert);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar3 != (String *)0x0) {
      inputLength = (pSVar3->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pBVar5 = mscorlib.dll::System::Convert::Convert_FromBase64CharPtr
                         (&(pSVar3->fields)._firstChar,inputLength,(MethodInfo *)0x0);
      pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if ((pBVar5 == (Byte__Array *)0x0) || (pEVar6 == (Encoding *)0x0)) goto code_?;
      pSVar7 = (String *)
               (*(pEVar6->klass->vtable).GetString_1.methodPtr)
                         (pEVar6,pBVar5,0,(ulonglong)(uint)pBVar5->max_length,
                          (pEVar6->klass->vtable).GetString_1.method);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
               cryptoKey;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar7 = ObscuredString::ObscuredString_EncryptDecrypt_1(pSVar7,pSVar8,(MethodInfo *)0x0);
      if ((int)pSVar2->max_length == 3) {
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar8 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar8,(MethodInfo *)0x0);
code_?:
        pSVar8 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar8,(MethodInfo *)0x0);
        if ((pSVar4 != pSVar8) &&
           ((((pSVar4 == (String *)0x0 || (pSVar8 == (String *)0x0)) ||
             ((pSVar4->fields)._stringLength != (pSVar8->fields)._stringLength)) ||
            (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar4->fields)._firstChar,
                                (uint8_t *)&(pSVar8->fields)._firstChar,
                                (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar9 == 0)))) goto code_?;
      }
      else {
        if ((int)pSVar2->max_length == 2) {
          pSVar8 = pSVar3;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          goto code_?;
        }
code_?:
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        ObscuredPrefs_SavesTampered((MethodInfo *)0x0);
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice
          == 0) {
        return pSVar7;
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->emergencyMode
          != 0) {
        return pSVar7;
      }
      if ((int)pSVar2->max_length < 3) {
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
            lockToDevice == 2) goto code_?;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar3 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar3,(MethodInfo *)0x0);
      }
      else {
        if ((uint)pSVar2->max_length < 3) goto code_?;
        pSVar4 = pSVar2->vector[2];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar3 = ObscuredPrefs_get_DeprecatedDeviceId((MethodInfo *)0x0);
      }
      if (pSVar4 == pSVar3) {
        return pSVar7;
      }
      if (((pSVar4 != (String *)0x0) && (pSVar3 != (String *)0x0)) &&
         (((pSVar4->fields)._stringLength == (pSVar3->fields)._stringLength &&
          (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar4->fields)._firstChar,
                              (uint8_t *)&(pSVar3->fields)._firstChar,
                              (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar9 != 0)))) {
        return pSVar7;
      }
code_?:
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
          readForeignSaves == 0) {
        pSVar7 = ::StringLiteral__;
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_PossibleForeignSavesDetected((MethodInfo *)0x0);
      return pSVar7;
    }
  }
  uVar10 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar10);
  pSVar3 = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,pSVar3,(MethodInfo *)0x0);
  uVar10 = func_?(&MethodInfo__System__Convert__FromBase64String_System__String_);
  FUN_?(this,uVar10);
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar11)();
  return pSVar3;
}


/* String EncryptBoolValue(String, Boolean) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptBoolValue(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  buf->vector[0] = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x23;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptByteArrayValue(String, Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptByteArrayValue(String *key,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)value->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)value->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)value - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(value,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x28;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptColorValue(String, UInt32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptColorValue(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(uint32_t *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x3c;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptData(String, Byte[], ObscuredPrefs+DataType) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptData
                   (String *key,Byte__Array *cleanBytes,ObscuredPrefs_DataType__Enum type,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cleanBytes == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)cleanBytes->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)cleanBytes->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)cleanBytes - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(cleanBytes,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(char *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = (char)type;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptDecimalValue(String, Decimal) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDecimalValue(String *key,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = BitconverterExt::BitconverterExt_GetBytes
                  ((Decimal *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x1b;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* Byte[] EncryptDecryptBytes(Byte[], Int32, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_EncryptDecryptBytes
          (Byte__Array *bytes,int32_t dataLength,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != (String *)0x0) {
    iVar1 = (key->fields)._stringLength;
    pBVar2 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,dataLength);
    uVar3 = 0;
    if (0 < dataLength) {
      puVar4 = pBVar2->vector;
      do {
        if (bytes == (Byte__Array *)0x0) goto code_?;
        if ((uint)bytes->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          pBVar2 = (Byte__Array *)(*pcVar5)();
          return pBVar2;
        }
        uVar6 = (longlong)(int)uVar3 % (longlong)iVar1;
        if ((longlong)(key->fields)._stringLength <= (longlong)(uVar6 & 0xffffffff)) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pBVar2 = (Byte__Array *)(*pcVar5)();
          return pBVar2;
        }
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        if ((uint)pBVar2->max_length <= uVar3) goto code_?;
        uVar3 = uVar3 + 1;
        *puVar4 = (byte)(&(key->fields)._firstChar)[(int)uVar6] ^
                  puVar4[(longlong)bytes - (longlong)pBVar2];
        puVar4 = puVar4 + 1;
      } while ((int)uVar3 < dataLength);
    }
    return pBVar2;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar5)();
  return pBVar2;
}


/* String EncryptDoubleValue(String, Double) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptDoubleValue(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(double *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x19;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptFloatValue(String, Single) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptFloatValue(String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(float *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x14;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptIntValue(String, Int32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptIntValue(String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(int32_t *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 5;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptKey(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredString::ObscuredString_EncryptDecrypt_1(key,pSVar1,(MethodInfo *)0x0);
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar2 != (Encoding *)0x0) {
    lVar3 = (*(pEVar2->klass->vtable).GetBytes_1.methodPtr)(pEVar2);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Convert);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____)
      ;
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (lVar3 != 0) {
      RStack_4._pointer._value = (void *)(lVar3 + 0x20);
      RStack_4._12_4_ = 0;
      RStack_4._length = *(uint *)(lVar3 + 0x18);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_4,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar1;
    }
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar5);
    pSVar1 = (String *)func_?(&StringLiteral_inArray);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Convert__ToBase64String_System__Byte____);
    FUN_?(this,uVar5);
    pcVar6 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar6)();
    return pSVar1;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* String EncryptLongValue(String, Int64) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptLongValue(String *key,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(int64_t *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x1e;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptQuaternionValue(String, Quaternion) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptQuaternionValue(String *key,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x10);
  fVar1 = value->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  if (buf == (Byte__Array *)0x0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_dst);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 0) goto code_?;
    *(undefined4 *)buf->vector = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 4) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 4) goto code_?;
    *(undefined4 *)(buf->vector + 4) = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 8) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 8) goto code_?;
    *(undefined4 *)(buf->vector + 8) = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  if (*(int *)&pAVar2[1].monitor == 0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0xc) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 0xc) goto code_?;
    *(undefined4 *)(buf->vector + 0xc) = *(undefined4 *)&pAVar2[2].klass;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar4 == (String *)0x0) goto code_?;
  iVar9 = (pSVar4->fields)._stringLength;
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,iVar6);
  uVar10 = 0;
  if (0 < iVar6) {
    pAVar11 = pAVar2 + 2;
    do {
      if ((uint)buf->max_length <= uVar10) goto code_?;
      uVar12 = (longlong)(int)uVar10 % (longlong)iVar9;
      if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(uVar12 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar5)();
        return pSVar4;
      }
      if (pAVar2 == (Array *)0x0) goto code_?;
      if (*(uint *)&pAVar2[1].monitor <= uVar10) goto code_?;
      uVar10 = uVar10 + 1;
      *(byte *)&pAVar11->klass =
           (byte)(&(pSVar4->fields)._firstChar)[(int)uVar12] ^
           *(byte *)(((longlong)buf - (longlong)pAVar2) + (longlong)pAVar11);
      pAVar11 = (Array *)((longlong)&pAVar11->klass + 1);
    } while ((longlong)((-0x20 - (longlong)pAVar2) + (longlong)pAVar11) < (longlong)iVar6);
  }
  uVar13 = Utils::xxHash::xxHash_CalculateHash(buf,iVar6,0,(MethodInfo *)0x0);
  pAVar11 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar11 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar11[1].monitor == 0) ||
       (*(char *)&pAVar11[2].klass = (char)uVar13, *(uint *)&pAVar11[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar11[2].klass + 1) = (char)(uVar13 >> 8),
      *(uint *)&pAVar11[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar11[2].klass + 2) = (char)(uVar13 >> 0x10),
     *(uint *)&pAVar11[1].monitor < 4)) goto code_?;
  src = (Array *)0x0;
  *(char *)((longlong)&pAVar11[2].klass + 3) = (char)(uVar13 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar9 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar13 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src == (Array *)0x0) goto code_?;
    if (((*(int *)&src[1].monitor == 0) ||
        (*(char *)&src[2].klass = (char)uVar13, *(uint *)&src[1].monitor < 2)) ||
       ((*(char *)((longlong)&src[2].klass + 1) = (char)(uVar13 >> 8), *(uint *)&src[1].monitor < 3
        || (*(char *)((longlong)&src[2].klass + 2) = (char)(uVar13 >> 0x10),
           *(uint *)&src[1].monitor < 4)))) goto code_?;
    iVar9 = 0xb;
    *(char *)((longlong)&src[2].klass + 3) = (char)(uVar13 >> 0x18);
  }
  iVar9 = iVar9 + iVar6;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(pAVar2,0,dst,0,iVar6,(MethodInfo *)0x0);
  if (src != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,iVar6,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar9 - 7U) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 1) = 0x37;
  if (*(uint *)&dst[1].monitor <= iVar9 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar9 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar9 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar6 = iVar9 + -4;
  if (iVar6 < 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this_00,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar14 = func_?(pAVar11);
  if (-1 < iVar14 + -4) {
    iVar14 = func_?(dst);
    if (iVar6 <= iVar14 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 4) =
           *(undefined4 *)&pAVar11[2].klass;
      goto code_?;
    }
  }
  iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar11,(MethodInfo *)0x0);
  if (-1 < iVar7 + -4) {
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar6 <= iVar7 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_15._pointer._value = dst + 2;
      RStack_15._12_4_ = 0;
      RStack_15._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_15,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentException);
  pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
  pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
  uVar3 = func_?(&
                               MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                              );
  FUN_?(pIVar8,uVar3);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String EncryptRectValue(String, Rect) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptRectValue(String *key,Rect *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x10);
  fVar1 = value->m_XMin;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  if (buf == (Byte__Array *)0x0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_dst);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 0) goto code_?;
    *(undefined4 *)buf->vector = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->m_YMin;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 4) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 4) goto code_?;
    *(undefined4 *)(buf->vector + 4) = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->m_Width;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 8) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 8) goto code_?;
    *(undefined4 *)(buf->vector + 8) = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->m_Height;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  if (*(int *)&pAVar2[1].monitor == 0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0xc) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 0xc) goto code_?;
    *(undefined4 *)(buf->vector + 0xc) = *(undefined4 *)&pAVar2[2].klass;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar4 == (String *)0x0) goto code_?;
  iVar9 = (pSVar4->fields)._stringLength;
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,iVar6);
  uVar10 = 0;
  if (0 < iVar6) {
    pAVar11 = pAVar2 + 2;
    do {
      if ((uint)buf->max_length <= uVar10) goto code_?;
      uVar12 = (longlong)(int)uVar10 % (longlong)iVar9;
      if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(uVar12 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar5)();
        return pSVar4;
      }
      if (pAVar2 == (Array *)0x0) goto code_?;
      if (*(uint *)&pAVar2[1].monitor <= uVar10) goto code_?;
      uVar10 = uVar10 + 1;
      *(byte *)&pAVar11->klass =
           (byte)(&(pSVar4->fields)._firstChar)[(int)uVar12] ^
           *(byte *)(((longlong)buf - (longlong)pAVar2) + (longlong)pAVar11);
      pAVar11 = (Array *)((longlong)&pAVar11->klass + 1);
    } while ((longlong)((-0x20 - (longlong)pAVar2) + (longlong)pAVar11) < (longlong)iVar6);
  }
  uVar13 = Utils::xxHash::xxHash_CalculateHash(buf,iVar6,0,(MethodInfo *)0x0);
  pAVar11 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar11 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar11[1].monitor == 0) ||
       (*(char *)&pAVar11[2].klass = (char)uVar13, *(uint *)&pAVar11[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar11[2].klass + 1) = (char)(uVar13 >> 8),
      *(uint *)&pAVar11[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar11[2].klass + 2) = (char)(uVar13 >> 0x10),
     *(uint *)&pAVar11[1].monitor < 4)) goto code_?;
  src = (Array *)0x0;
  *(char *)((longlong)&pAVar11[2].klass + 3) = (char)(uVar13 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar9 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar13 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src == (Array *)0x0) goto code_?;
    if (((*(int *)&src[1].monitor == 0) ||
        (*(char *)&src[2].klass = (char)uVar13, *(uint *)&src[1].monitor < 2)) ||
       ((*(char *)((longlong)&src[2].klass + 1) = (char)(uVar13 >> 8), *(uint *)&src[1].monitor < 3
        || (*(char *)((longlong)&src[2].klass + 2) = (char)(uVar13 >> 0x10),
           *(uint *)&src[1].monitor < 4)))) goto code_?;
    iVar9 = 0xb;
    *(char *)((longlong)&src[2].klass + 3) = (char)(uVar13 >> 0x18);
  }
  iVar9 = iVar9 + iVar6;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(pAVar2,0,dst,0,iVar6,(MethodInfo *)0x0);
  if (src != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,iVar6,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar9 - 7U) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 1) = 0x41;
  if (*(uint *)&dst[1].monitor <= iVar9 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar9 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar9 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar6 = iVar9 + -4;
  if (iVar6 < 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this_00,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar14 = func_?(pAVar11);
  if (-1 < iVar14 + -4) {
    iVar14 = func_?(dst);
    if (iVar6 <= iVar14 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 4) =
           *(undefined4 *)&pAVar11[2].klass;
      goto code_?;
    }
  }
  iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar11,(MethodInfo *)0x0);
  if (-1 < iVar7 + -4) {
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar6 <= iVar7 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_15._pointer._value = dst + 2;
      RStack_15._12_4_ = 0;
      RStack_15._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_15,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentException);
  pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
  pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
  uVar3 = func_?(&
                               MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                              );
  FUN_?(pIVar8,uVar3);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String EncryptStringValue(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptStringValue(String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar1 == (Encoding *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  buf = (Byte__Array *)
        (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                  (pEVar1,value,(pEVar1->klass->vtable).GetBytes_1.method);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  iVar4 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) goto code_?;
  iVar5 = (pSVar3->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar4);
  uVar6 = 0;
  if (0 < iVar4) {
    pAVar7 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar6) goto code_?;
      uVar8 = (longlong)(int)uVar6 % (longlong)iVar5;
      if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(uVar8 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar6) goto code_?;
      uVar6 = uVar6 + 1;
      *(byte *)&pAVar7->klass =
           (byte)(&(pSVar3->fields)._firstChar)[(int)uVar8] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar7);
      pAVar7 = (Array *)((longlong)&pAVar7->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar7) < (longlong)iVar4);
  }
  uVar9 = Utils::xxHash::xxHash_CalculateHash(buf,iVar4,0,(MethodInfo *)0x0);
  pAVar7 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar7 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar7[1].monitor == 0) ||
       (*(char *)&pAVar7[2].klass = (char)uVar9, *(uint *)&pAVar7[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar7[2].klass + 1) = (char)(uVar9 >> 8),
      *(uint *)&pAVar7[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar7[2].klass + 2) = (char)(uVar9 >> 0x10),
     *(uint *)&pAVar7[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar7[2].klass + 3) = (char)(uVar9 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar5 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar9 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar9, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar9 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar9 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar5 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar9 >> 0x18);
  }
  iVar5 = iVar5 + iVar4;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar4,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar4,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar5 - 7U) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar5 + 1) = 0xf;
  if (*(uint *)&dst[1].monitor <= iVar5 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar5 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar5 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar5 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar4 = iVar5 + -4;
  if (iVar4 < 0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar10);
    pSVar3 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar3,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this_00,uVar10);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  iVar11 = func_?(pAVar7);
  if (-1 < iVar11 + -4) {
    iVar11 = func_?(dst);
    if (iVar4 <= iVar11 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar5 + 4) =
           *(undefined4 *)&pAVar7[2].klass;
      goto code_?;
    }
  }
  iVar12 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar7,(MethodInfo *)0x0);
  if (-1 < iVar12 + -4) {
    iVar12 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar4 <= iVar12 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_13._pointer._value = dst + 2;
      RStack_13._12_4_ = 0;
      RStack_13._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_13,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  uVar10 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar10);
  pSVar3 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar3,(MethodInfo *)0x0);
  uVar10 = func_?(&
                               MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                              );
  FUN_?(this,uVar10);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String EncryptUIntValue(String, UInt32) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptUIntValue(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(uint32_t *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 10;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptULongValue(String, UInt64) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptULongValue(String *key,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (buf == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((int)buf->max_length == 0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(uint64_t *)buf->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar3 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) goto code_?;
  iVar4 = (pSVar2->fields)._stringLength;
  src = (Array *)FUN_?(TypeInfo__System__Byte,iVar3);
  uVar5 = 0;
  if (0 < iVar3) {
    pAVar6 = src + 2;
    do {
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar7 = (longlong)(int)uVar5 % (longlong)iVar4;
      if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(uVar7 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar1)();
        return pSVar2;
      }
      if (src == (Array *)0x0) goto code_?;
      if (*(uint *)&src[1].monitor <= uVar5) goto code_?;
      uVar5 = uVar5 + 1;
      *(byte *)&pAVar6->klass =
           (byte)(&(pSVar2->fields)._firstChar)[(int)uVar7] ^
           *(byte *)(((longlong)buf - (longlong)src) + (longlong)pAVar6);
      pAVar6 = (Array *)((longlong)&pAVar6->klass + 1);
    } while ((longlong)((-0x20 - (longlong)src) + (longlong)pAVar6) < (longlong)iVar3);
  }
  uVar8 = Utils::xxHash::xxHash_CalculateHash(buf,iVar3,0,(MethodInfo *)0x0);
  pAVar6 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar6 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar6[1].monitor == 0) ||
       (*(char *)&pAVar6[2].klass = (char)uVar8, *(uint *)&pAVar6[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar6[2].klass + 1) = (char)(uVar8 >> 8),
      *(uint *)&pAVar6[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar6[2].klass + 2) = (char)(uVar8 >> 0x10),
     *(uint *)&pAVar6[1].monitor < 4)) goto code_?;
  src_00 = (Array *)0x0;
  *(char *)((longlong)&pAVar6[2].klass + 3) = (char)(uVar8 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar4 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar8 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src_00 = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src_00 == (Array *)0x0) goto code_?;
    if (((*(int *)&src_00[1].monitor == 0) ||
        (*(char *)&src_00[2].klass = (char)uVar8, *(uint *)&src_00[1].monitor < 2)) ||
       ((*(char *)((longlong)&src_00[2].klass + 1) = (char)(uVar8 >> 8),
        *(uint *)&src_00[1].monitor < 3 ||
        (*(char *)((longlong)&src_00[2].klass + 2) = (char)(uVar8 >> 0x10),
        *(uint *)&src_00[1].monitor < 4)))) goto code_?;
    iVar4 = 0xb;
    *(char *)((longlong)&src_00[2].klass + 3) = (char)(uVar8 >> 0x18);
  }
  iVar4 = iVar4 + iVar3;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,0,iVar3,(MethodInfo *)0x0);
  if (src_00 != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src_00,0,dst,iVar3,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar4 - 7U) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 1) = 0x20;
  if (*(uint *)&dst[1].monitor <= iVar4 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar4 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar4 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar3 = iVar4 + -4;
  if (iVar3 < 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar9);
    pSVar2 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar2,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  iVar10 = func_?(pAVar6);
  if (-1 < iVar10 + -4) {
    iVar10 = func_?(dst);
    if (iVar3 <= iVar10 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar4 + 4) =
           *(undefined4 *)&pAVar6[2].klass;
      goto code_?;
    }
  }
  iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar6,(MethodInfo *)0x0);
  if (-1 < iVar11 + -4) {
    iVar11 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar3 <= iVar11 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_12._pointer._value = dst + 2;
      RStack_12._12_4_ = 0;
      RStack_12._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_12,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar9 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar9);
  pSVar2 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                             );
  FUN_?(this,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* String EncryptVector2Value(String, Vector2) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptVector2Value(String *key,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar1 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar1[1].monitor == 0) goto code_?;
  *(float *)&pAVar1[2].klass = value.x;
  if (buf == (Byte__Array *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_dst);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this,uVar2);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  iVar5 = func_?(pAVar1);
  if (iVar5 + -4 < 0) {
code_?:
    iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar1,(MethodInfo *)0x0);
    if (iVar6 + -4 < 0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      pIVar7 = (InvalidEnumArgumentException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar7,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar7,uVar2);
      pcVar4 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar4)();
      return pSVar3;
    }
    iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar6 + -4 < 0) goto code_?;
  }
  else {
    iVar5 = func_?(buf);
    if (iVar5 + -4 < 0) goto code_?;
    *(undefined4 *)buf->vector = *(undefined4 *)&pAVar1[2].klass;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar1 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  if (*(int *)&pAVar1[1].monitor == 0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  *(float *)&pAVar1[2].klass = value.y;
  iVar5 = func_?(pAVar1);
  if (iVar5 + -4 < 0) {
code_?:
    iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar1,(MethodInfo *)0x0);
    if (iVar6 + -4 < 0) {
code_?:
      uVar2 = func_?(&TypeInfo__System__ArgumentException);
      pIVar7 = (InvalidEnumArgumentException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar7,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar7,uVar2);
      pcVar4 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar4)();
      return pSVar3;
    }
    iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar6 + -4 < 4) goto code_?;
  }
  else {
    iVar5 = func_?(buf);
    if (iVar5 + -4 < 4) goto code_?;
    *(undefined4 *)(buf->vector + 4) = *(undefined4 *)&pAVar1[2].klass;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  iVar5 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) goto code_?;
  iVar8 = (pSVar3->fields)._stringLength;
  pAVar1 = (Array *)FUN_?(TypeInfo__System__Byte,iVar5);
  uVar9 = 0;
  if (0 < iVar5) {
    pAVar10 = pAVar1 + 2;
    do {
      if ((uint)buf->max_length <= uVar9) goto code_?;
      uVar11 = (longlong)(int)uVar9 % (longlong)iVar8;
      if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(uVar11 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar4)();
        return pSVar3;
      }
      if (pAVar1 == (Array *)0x0) goto code_?;
      if (*(uint *)&pAVar1[1].monitor <= uVar9) goto code_?;
      uVar9 = uVar9 + 1;
      *(byte *)&pAVar10->klass =
           (byte)(&(pSVar3->fields)._firstChar)[(int)uVar11] ^
           *(byte *)(((longlong)buf - (longlong)pAVar1) + (longlong)pAVar10);
      pAVar10 = (Array *)((longlong)&pAVar10->klass + 1);
    } while ((longlong)((-0x20 - (longlong)pAVar1) + (longlong)pAVar10) < (longlong)iVar5);
  }
  uVar12 = Utils::xxHash::xxHash_CalculateHash(buf,iVar5,0,(MethodInfo *)0x0);
  pAVar10 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar10 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar10[1].monitor == 0) ||
       (*(char *)&pAVar10[2].klass = (char)uVar12, *(uint *)&pAVar10[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar10[2].klass + 1) = (char)(uVar12 >> 8),
      *(uint *)&pAVar10[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar10[2].klass + 2) = (char)(uVar12 >> 0x10),
     *(uint *)&pAVar10[1].monitor < 4)) goto code_?;
  src = (Array *)0x0;
  *(char *)((longlong)&pAVar10[2].klass + 3) = (char)(uVar12 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar8 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar12 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src == (Array *)0x0) goto code_?;
    if (((*(int *)&src[1].monitor == 0) ||
        (*(char *)&src[2].klass = (char)uVar12, *(uint *)&src[1].monitor < 2)) ||
       ((*(char *)((longlong)&src[2].klass + 1) = (char)(uVar12 >> 8), *(uint *)&src[1].monitor < 3
        || (*(char *)((longlong)&src[2].klass + 2) = (char)(uVar12 >> 0x10),
           *(uint *)&src[1].monitor < 4)))) goto code_?;
    iVar8 = 0xb;
    *(char *)((longlong)&src[2].klass + 3) = (char)(uVar12 >> 0x18);
  }
  iVar8 = iVar8 + iVar5;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(pAVar1,0,dst,0,iVar5,(MethodInfo *)0x0);
  if (src != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,iVar5,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar8 - 7U) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar8 + 1) = 0x2d;
  if (*(uint *)&dst[1].monitor <= iVar8 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar8 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar8 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar8 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar5 = iVar8 + -4;
  if (iVar5 < 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  iVar13 = func_?(pAVar10);
  if (-1 < iVar13 + -4) {
    iVar13 = func_?(dst);
    if (iVar5 <= iVar13 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar8 + 4) =
           *(undefined4 *)&pAVar10[2].klass;
      goto code_?;
    }
  }
  iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar10,(MethodInfo *)0x0);
  if (-1 < iVar6 + -4) {
    iVar6 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar5 <= iVar6 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_14._pointer._value = dst + 2;
      RStack_14._12_4_ = 0;
      RStack_14._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_14,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  pIVar7 = (InvalidEnumArgumentException *)func_?(uVar2);
  pSVar3 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar7,pSVar3,(MethodInfo *)0x0);
  uVar2 = func_?(&
                               MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                              );
  FUN_?(pIVar7,uVar2);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String EncryptVector3Value(String, Vector3) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_EncryptVector3Value(String *key,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  buf = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0xc);
  fVar1 = value->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  if (buf == (Byte__Array *)0x0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_dst);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 0) goto code_?;
    *(undefined4 *)buf->vector = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar2[1].monitor == 0) goto code_?;
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 4) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 4) goto code_?;
    *(undefined4 *)(buf->vector + 4) = *(undefined4 *)&pAVar2[2].klass;
  }
  fVar1 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte);
  if (pAVar2 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  if (*(int *)&pAVar2[1].monitor == 0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(float *)&pAVar2[2].klass = fVar1;
  iVar6 = func_?(pAVar2);
  if (iVar6 + -4 < 0) {
code_?:
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar2,(MethodInfo *)0x0);
    if (iVar7 + -4 < 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
      pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                  );
      FUN_?(pIVar8,uVar3);
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength((Array *)buf,(MethodInfo *)0x0);
    if (iVar7 + -4 < 8) goto code_?;
  }
  else {
    iVar6 = func_?(buf);
    if (iVar6 + -4 < 8) goto code_?;
    *(undefined4 *)(buf->vector + 8) = *(undefined4 *)&pAVar2[2].klass;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (buf == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar6 = (int)buf->max_length;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (key,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->
                          static_fields->cryptoKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar4 == (String *)0x0) goto code_?;
  iVar9 = (pSVar4->fields)._stringLength;
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,iVar6);
  uVar10 = 0;
  if (0 < iVar6) {
    pAVar11 = pAVar2 + 2;
    do {
      if ((uint)buf->max_length <= uVar10) goto code_?;
      uVar12 = (longlong)(int)uVar10 % (longlong)iVar9;
      if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(uVar12 & 0xffffffff)) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar5)();
        return pSVar4;
      }
      if (pAVar2 == (Array *)0x0) goto code_?;
      if (*(uint *)&pAVar2[1].monitor <= uVar10) goto code_?;
      uVar10 = uVar10 + 1;
      *(byte *)&pAVar11->klass =
           (byte)(&(pSVar4->fields)._firstChar)[(int)uVar12] ^
           *(byte *)(((longlong)buf - (longlong)pAVar2) + (longlong)pAVar11);
      pAVar11 = (Array *)((longlong)&pAVar11->klass + 1);
    } while ((longlong)((-0x20 - (longlong)pAVar2) + (longlong)pAVar11) < (longlong)iVar6);
  }
  uVar13 = Utils::xxHash::xxHash_CalculateHash(buf,iVar6,0,(MethodInfo *)0x0);
  pAVar11 = (Array *)FUN_?(TypeInfo__System__Byte,4);
  if (pAVar11 == (Array *)0x0) goto code_?;
  if ((((*(int *)&pAVar11[1].monitor == 0) ||
       (*(char *)&pAVar11[2].klass = (char)uVar13, *(uint *)&pAVar11[1].monitor < 2)) ||
      (*(char *)((longlong)&pAVar11[2].klass + 1) = (char)(uVar13 >> 8),
      *(uint *)&pAVar11[1].monitor < 3)) ||
     (*(char *)((longlong)&pAVar11[2].klass + 2) = (char)(uVar13 >> 0x10),
     *(uint *)&pAVar11[1].monitor < 4)) goto code_?;
  src = (Array *)0x0;
  *(char *)((longlong)&pAVar11[2].klass + 3) = (char)(uVar13 >> 0x18);
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice == 0
     ) {
    iVar9 = 7;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar13 = ObscuredPrefs_get_DeviceIdHash((MethodInfo *)0x0);
    src = (Array *)FUN_?(TypeInfo__System__Byte,4);
    if (src == (Array *)0x0) goto code_?;
    if (((*(int *)&src[1].monitor == 0) ||
        (*(char *)&src[2].klass = (char)uVar13, *(uint *)&src[1].monitor < 2)) ||
       ((*(char *)((longlong)&src[2].klass + 1) = (char)(uVar13 >> 8), *(uint *)&src[1].monitor < 3
        || (*(char *)((longlong)&src[2].klass + 2) = (char)(uVar13 >> 0x10),
           *(uint *)&src[1].monitor < 4)))) goto code_?;
    iVar9 = 0xb;
    *(char *)((longlong)&src[2].klass + 3) = (char)(uVar13 >> 0x18);
  }
  iVar9 = iVar9 + iVar6;
  dst = (Array *)FUN_?(TypeInfo__System__Byte);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy(pAVar2,0,dst,0,iVar6,(MethodInfo *)0x0);
  if (src != (Array *)0x0) {
    mscorlib.dll::System::Buffer::Buffer_BlockCopy(src,0,dst,iVar6,4,(MethodInfo *)0x0);
  }
  if (dst == (Array *)0x0) goto code_?;
  if (*(uint *)&dst[1].monitor <= iVar9 - 7U) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 1) = 0x32;
  if (*(uint *)&dst[1].monitor <= iVar9 - 6U) goto code_?;
  *(undefined1 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 2) = 2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  if (*(uint *)&dst[1].monitor <= iVar9 - 5U) goto code_?;
  *(uint8_t *)((longlong)&dst[1].monitor + (longlong)iVar9 + 3) =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->lockToDevice;
  iVar6 = iVar9 + -4;
  if (iVar6 < 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_dstOffset);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,paramName,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                                );
    FUN_?(this_00,uVar3);
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  iVar14 = func_?(pAVar11);
  if (-1 < iVar14 + -4) {
    iVar14 = func_?(dst);
    if (iVar6 <= iVar14 + -4) {
      *(undefined4 *)((longlong)&dst[1].monitor + (longlong)iVar9 + 4) =
           *(undefined4 *)&pAVar11[2].klass;
      goto code_?;
    }
  }
  iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(pAVar11,(MethodInfo *)0x0);
  if (-1 < iVar7 + -4) {
    iVar7 = mscorlib.dll::System::Buffer::Buffer_ByteLength(dst,(MethodInfo *)0x0);
    if (iVar6 <= iVar7 + -4) {
code_?:
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_15._pointer._value = dst + 2;
      RStack_15._12_4_ = 0;
      RStack_15._length = *(uint *)&dst[1].monitor;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                         (&RStack_15,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentException);
  pIVar8 = (InvalidEnumArgumentException *)func_?(uVar3);
  pSVar4 = (String *)func_?(&StringLiteral_Offset_and_length_were_out_of_bo);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar8,pSVar4,(MethodInfo *)0x0);
  uVar3 = func_?(&
                               MethodInfo__System__Buffer__BlockCopy_System__Array__int__System__Array__int__int_
                              );
  FUN_?(pIVar8,uVar3);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void ForceLockToDeviceInit() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_ForceLockToDeviceInit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__ObscuredPrefs_ForceLockTo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
         ::StringLiteral__;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                      deviceId >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    uVar6 = ObscuredPrefs_CalculateChecksum
                      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                       deviceId,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash =
         uVar6;
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral__ACTk__ObscuredPrefs_ForceLockTo;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar7 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,2,pSVar1);
  return;
}


/* Boolean GetBool(String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_GetBool(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return 0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = false;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = 0;
  if (pSVar1 != (String *)0x0) {
    uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar4 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar5 = 0;
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar1,aiStackX_10,(MethodInfo *)0x0);
        iVar6 = aiStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar7 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
        if (pBVar7 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar7->max_length == 0) goto code_?;
        pBVar7->vector[0] = iVar6 == 1;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar7,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar5 >> 8),0x23),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        bVar3 = aiStackX_10[0] == 1;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar7 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar7 != (Byte__Array *)0x0) {
        iVar8 = (int)pBVar7->max_length;
        if (iVar8 + -1 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar2 = (*pcVar9)();
          return bVar2;
        }
        if (iVar8 == 0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          bVar2 = (*pcVar9)();
          return bVar2;
        }
        bVar3 = pBVar7->vector[0] != 0;
      }
    }
    return bVar3;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar2 = (*pcVar9)();
  return bVar2;
}


/* Boolean GetBool(String, Boolean) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_GetBool_1(String *key,bool defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar4 = 0;
        mscorlib.dll::System::Int32::Int32_TryParse
                  (pSVar1,(int32_t *)&stack0x00000010,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar5 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
        if (pBVar5 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar5->max_length == 0) goto code_?;
        pBVar5->vector[0] = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar5,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x23),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        defaultValue = 0;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        iVar6 = (int)pBVar5->max_length;
        if (iVar6 + -1 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar2 = (*pcVar7)();
          return bVar2;
        }
        if (iVar6 == 0) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          bVar2 = (*pcVar7)();
          return bVar2;
        }
        defaultValue = pBVar5->vector[0] != 0;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Byte[] GetByteArray(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 != StringLiteral__not_found_) &&
     ((((pSVar1 == (String *)0x0 || (StringLiteral__not_found_ == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (StringLiteral__not_found_->fields)._stringLength)) ||
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 == 0)))) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar3 = ObscuredPrefs_DecryptByteArrayValue(key,pSVar1,0,0,(MethodInfo *)0x0);
    return pBVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar4 = TypeInfo__System__Byte;
  FUN_?();
  if (((pBVar4->_1).field_0x6d & 0x20) == 0) {
    pBVar3 = (Byte__Array *)FUN_?(0x20,0);
    pBVar3->klass = pBVar4;
    pBVar3->monitor = (MonitorData *)0x0;
    LOCK();
    lRam_? = lRam_? + 1;
    UNLOCK();
    pBVar3->bounds = (Il2CppArrayBounds *)0x0;
    FUN_?(&pBVar3->bounds,0,0x10);
  }
  else {
    pIVar5 = (pBVar4->_0).element_class;
    iVar6._0_2_ = (pIVar5->byval_arg).attrs;
    iVar6._2_1_ = (pIVar5->byval_arg).type;
    iVar6._3_1_ = (pIVar5->byval_arg).field_0xb;
    if ((iVar6 < 0) && (((ulonglong)pIVar5->gc_desc & 3) == 1)) {
      if (iRam_? != 0) {
        EnterCriticalSection(0xADDR);
      }
      lVar7 = lRam_?;
      pBVar3 = *(Byte__Array **)(lRam_? + lRam_? * 8);
      if (pBVar3 == (Byte__Array *)0x0) {
        FUN_?();
        uVar8 = FUN_?(0x20,uRam_?);
        pBVar3 = (Byte__Array *)FUN_?(uVar8);
        if (pBVar3 == (Byte__Array *)0x0) {
          if (iRam_? != 0) {
            LeaveCriticalSection(0xADDR);
          }
          pBVar3 = (Byte__Array *)0x0;
          goto code_?;
        }
      }
      else {
        *(Byte__Array__Class **)(lRam_? + lRam_? * 8) = pBVar3->klass;
        lRam_? = lRam_? + lVar7 * 0x10;
      }
      bVar9 = iRam_? != 0;
      pBVar3->klass = pBVar4;
      if (bVar9) {
        LeaveCriticalSection(0xADDR);
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)pBVar3 >> 0xc);
        lVar7 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar12 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar9 = uVar11 == *puVar12;
          if (bVar9) {
            *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    else if ((pBVar4->_0).gc_desc == (void *)0x0) {
      pBVar3 = (Byte__Array *)FUN_?(0x20,1);
      pBVar3->klass = pBVar4;
      LOCK();
      lRam_? = lRam_? + 1;
      UNLOCK();
    }
    else {
      pBVar3 = (Byte__Array *)FUN_?(0x20,pBVar4);
    }
  }
code_?:
  bVar13 = bRam_? & 0x80;
  pBVar3->max_length = 0;
  if (bVar13 != 0) {
    FUN_?(pBVar3,pBVar4);
  }
  return pBVar3;
}


/* Byte[] GetByteArray(String, Byte, Int32) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetByteArray_1
          (String *key,uint8_t defaultValue,int32_t defaultLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
code_?:
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar2 = ObscuredPrefs_ConstructByteArray(defaultValue,defaultLength,(MethodInfo *)0x0);
  }
  else {
    if (((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar2 = ObscuredPrefs_DecryptByteArrayValue
                       (key,pSVar1,defaultValue,defaultLength,(MethodInfo *)0x0);
  }
  return pBVar2;
}


/* Color32 GetColor(String) */

Color32 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetColor(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
    CVar2.rgba = 0x1000000;
    CVar2.r = 0;
    CVar2.g = 0;
    CVar2.b = 0;
    CVar2.a = 0;
    return CVar2;
  }
  if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
      ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
     (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0), bVar3 != 0
     )) {
    CVar4.rgba = 0x1000000;
    CVar4.r = 0;
    CVar4.g = 0;
    CVar4.b = 0;
    CVar4.a = 0;
    return CVar4;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar5 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0x1000000,(MethodInfo *)0x0);
  uStackX_8 = (uVar5 & 0xff) << 0x10;
  uVar6 = (undefined1)(uVar5 >> 0x10);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,uVar6);
  uStackX_8 = CONCAT13((char)(uVar5 >> 0x18),(undefined3)uStackX_8);
  uStackX_8._0_2_ = CONCAT11((char)(uVar5 >> 8),uVar6);
  CVar7.r = 0;
  CVar7.g = 0;
  CVar7.b = 0;
  CVar7.a = 0;
  CVar7.rgba = uStackX_8;
  return CVar7;
}


/* Color32 GetColor(String, Color32) */

Color32 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetColor_1(String *key,Color32 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
    return (Color32)((ulonglong)defaultValue & 0xffffffff);
  }
  if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
      ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
     (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0
     )) {
    return (Color32)((ulonglong)defaultValue & 0xffffffff);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = ObscuredPrefs_DecryptUIntValue(key,pSVar1,0x1000000,(MethodInfo *)0x0);
  uStackX_8 = (uVar3 & 0xff) << 0x10;
  uVar4 = (undefined1)(uVar3 >> 0x10);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,uVar4);
  uStackX_8 = CONCAT13((char)(uVar3 >> 0x18),(undefined3)uStackX_8);
  uStackX_8._0_2_ = CONCAT11((char)(uVar3 >> 8),uVar4);
  CVar5.r = 0;
  CVar5.g = 0;
  CVar5.b = 0;
  CVar5.a = 0;
  CVar5.rgba = uStackX_8;
  return CVar5;
}


/* Decimal GetDecimal(String) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal(Decimal *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__Decimal);
  }
  pDVar1 = TypeInfo__System__Decimal->static_fields;
  iVar2 = (pDVar1->Zero).flags;
  iVar3 = (pDVar1->Zero).hi;
  iVar4 = (pDVar1->Zero).lo;
  iVar5 = (pDVar1->Zero).mid;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar6 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar6,(MethodInfo *)0x0);
  if (pSVar6 != StringLiteral__not_found_) {
    if (((pSVar6 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar6->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar6->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    auStack_8._0_4_ = iVar2;
    auStack_8._4_4_ = iVar3;
    auStack_8._8_4_ = iVar4;
    auStack_8._12_4_ = iVar5;
    pDVar9 = ObscuredPrefs_DecryptDecimalValue
                       ((Decimal *)(auStack_8 + 0x10),key,pSVar6,(Decimal *)auStack_8,
                        (MethodInfo *)0x0);
    iVar2 = pDVar9->flags;
    iVar3 = pDVar9->hi;
    iVar4 = pDVar9->lo;
    iVar5 = pDVar9->mid;
  }
code_?:
  __return_storage_ptr__->flags = iVar2;
  __return_storage_ptr__->hi = iVar3;
  __return_storage_ptr__->lo = iVar4;
  __return_storage_ptr__->mid = iVar5;
  return __return_storage_ptr__;
}


/* Decimal GetDecimal(String, Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetDecimal_1
                    (Decimal *__return_storage_ptr__,String *key,Decimal *defaultValue,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
code_?:
    iVar2 = defaultValue->flags;
    iVar3 = defaultValue->hi;
    iVar4 = defaultValue->lo;
    iVar5 = defaultValue->mid;
  }
  else {
    if (((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    DStack_7.flags = defaultValue->flags;
    DStack_7.hi = defaultValue->hi;
    DStack_7.lo = defaultValue->lo;
    DStack_7.mid = defaultValue->mid;
    pDVar8 = ObscuredPrefs_DecryptDecimalValue
                       ((Decimal *)&DStack_7.ulomidLE,key,pSVar1,&DStack_7,(MethodInfo *)0x0);
    iVar2 = pDVar8->flags;
    iVar3 = pDVar8->hi;
    iVar4 = pDVar8->lo;
    iVar5 = pDVar8->mid;
  }
  __return_storage_ptr__->flags = iVar2;
  __return_storage_ptr__->hi = iVar3;
  __return_storage_ptr__->lo = iVar4;
  __return_storage_ptr__->mid = iVar5;
  return __return_storage_ptr__;
}


/* String GetDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* Double GetDouble(String) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._8_8_ = &UNK_?;
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == StringLiteral__not_found_) {
    return 0.0;
  }
  if (((pSVar2 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
     ((pSVar2->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
    auStack_1._8_8_ = &UNK_?;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(pSVar2->fields)._firstChar,
                       (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                       (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 0.0;
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  uVar4 = 0;
  uVar5 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  adStackX_10[0] = 0.0;
  if (pSVar2 == (String *)0x0) goto code_?;
  uVar6 = (pSVar2->fields)._stringLength;
  info = (NumberFormatInfo *)(ulonglong)uVar6;
  uVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(pSVar2->fields)._firstChar,0x3a,uVar6,(MethodInfo *)0x0);
  if (0x7fffffff < uVar6) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar7 = ObscuredPrefs_DecryptData(key,pSVar2,(MethodInfo *)0x0);
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((int)pBVar7->max_length == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        dVar9 = (double)(*pcVar8)();
        return dVar9;
      }
      if ((int)pBVar7->max_length + -8 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        dVar9 = (double)(*pcVar8)();
        return dVar9;
      }
      uVar4 = (undefined4)*(undefined8 *)pBVar7->vector;
      uVar5 = (undefined4)((ulonglong)*(undefined8 *)pBVar7->vector >> 0x20);
    }
    goto code_?;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == ::StringLiteral__) goto code_?;
  uVar10 = 0;
  uVar11 = 0;
  if (pSVar2 != (String *)0x0) {
    if ((::StringLiteral__ != (String *)0x0) &&
       ((pSVar2->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      info = (NumberFormatInfo *)((longlong)(pSVar2->fields)._stringLength * 2);
      bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar2->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,(uint64_t)info,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
      if (pSVar2 == (String *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_1._0_8_ = &(pSVar2->fields)._firstChar;
    auStack_1._12_4_ = 0;
    auStack_1._8_4_ = (pSVar2->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    mscorlib.dll::System::Double::Double_TryParse_2
              ((ReadOnlySpan_1_Char_ *)auStack_1,
               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,adStackX_10,
               (MethodInfo *)0x0);
    uVar10 = SUB84(adStackX_10[0],0);
    uVar11 = (int)((ulonglong)adStackX_10[0] >> 0x20);
  }
code_?:
  uVar5 = uVar11;
  uVar4 = uVar10;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar7 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (pBVar7 != (Byte__Array *)0x0) {
    if ((int)pBVar7->max_length == 0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      dVar9 = (double)(*pcVar8)();
      return dVar9;
    }
    *(ulonglong *)pBVar7->vector = CONCAT44(uVar5,uVar4);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value = ObscuredPrefs_EncryptData
                      (key,pBVar7,
                       (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)info >> 8),0x19),
                       (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (pSVar2,value,(MethodInfo *)0x0);
code_?:
    return (double)CONCAT44(uVar5,uVar4);
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  dVar9 = (double)(*pcVar8)();
  return dVar9;
}


/* Double GetDouble(String, Double) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetDouble_1(String *key,double defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3 = 0;
  uVar4 = 0;
  adStackX_10[0] = 0.0;
  if (pSVar1 == (String *)0x0) goto code_?;
  uVar5 = (pSVar1->fields)._stringLength;
  info = (NumberFormatInfo *)(ulonglong)uVar5;
  uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(pSVar1->fields)._firstChar,0x3a,uVar5,(MethodInfo *)0x0);
  if (0x7fffffff < uVar5) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
    if (pBVar6 == (Byte__Array *)0x0) {
      return defaultValue;
    }
    if ((int)pBVar6->max_length == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      dVar8 = (double)(*pcVar7)();
      return dVar8;
    }
    if (-1 < (int)pBVar6->max_length + -8) {
      return *(double *)pBVar6->vector;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
              (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
               (MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    dVar8 = (double)(*pcVar7)();
    return dVar8;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == ::StringLiteral__) {
    return defaultValue;
  }
  if (pSVar1 != (String *)0x0) {
    if ((::StringLiteral__ != (String *)0x0) &&
       ((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      info = (NumberFormatInfo *)((longlong)(pSVar1->fields)._stringLength * 2);
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,(uint64_t)info,
                         (MethodInfo *)0x0);
      if (bVar2 != 0) {
        return defaultValue;
      }
      if (pSVar1 == (String *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_9[0]._pointer._value = &(pSVar1->fields)._firstChar;
    aRStack_9[0]._12_4_ = 0;
    aRStack_9[0]._length = (pSVar1->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    mscorlib.dll::System::Double::Double_TryParse_2
              (aRStack_9,
               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,adStackX_10,
               (MethodInfo *)0x0);
    uVar3 = SUB84(adStackX_10[0],0);
    uVar4 = (undefined4)((ulonglong)adStackX_10[0] >> 0x20);
  }
code_?:
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (pBVar6 != (Byte__Array *)0x0) {
    if ((int)pBVar6->max_length != 0) {
      *(ulonglong *)pBVar6->vector = CONCAT44(uVar4,uVar3);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value = ObscuredPrefs_EncryptData
                        (key,pBVar6,
                         (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)info >> 8),0x19),
                         (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar1,value,(MethodInfo *)0x0);
      return (double)CONCAT44(uVar4,uVar3);
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    dVar8 = (double)(*pcVar7)();
    return dVar8;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  dVar8 = (double)(*pcVar7)();
  return dVar8;
}


/* String GetEncryptedPrefsString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetEncryptedPrefsString(String *key,String *encryptedKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Are_you_trying_to_read_re);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                     (encryptedKey,StringLiteral__not_found_,(MethodInfo *)0x0);
  if (((pSVar1 == StringLiteral__not_found_) ||
      ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)))) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    message = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral__ACTk__Are_you_trying_to_read_re,key,::StringLiteral___,
                         (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* Single GetFloat(String) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_GetFloat(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar2,(MethodInfo *)0x0);
  if ((bVar3 == 0) &&
     (bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar3 != 0)) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetFloat
                      (key,0.0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetFloat(key,fVar4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
      return fVar4;
    }
    return fVar4;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == StringLiteral__not_found_) {
    return 0.0;
  }
  if ((((pSVar2 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
      ((pSVar2->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
     (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar2->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0), bVar3 != 0
     )) {
    return 0.0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  if (pSVar2 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    fVar4 = (float)(*pcVar5)();
    return fVar4;
  }
  uVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(pSVar2->fields)._firstChar,0x3a,(pSVar2->fields)._stringLength,
                     (MethodInfo *)0x0);
  if (uVar6 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != ::StringLiteral__) {
      fVar4 = 0.0;
      if (pSVar2 != (String *)0x0) {
        if ((::StringLiteral__ != (String *)0x0) &&
           ((pSVar2->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
          bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 0.0;
          }
          if (pSVar2 == (String *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_1._0_8_ = &(pSVar2->fields)._firstChar;
        auStack_1._12_4_ = 0;
        auStack_1._8_4_ = (pSVar2->fields)._stringLength;
        info = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
        mscorlib.dll::System::Single::Single_TryParse_2
                  ((ReadOnlySpan_1_Char_ *)auStack_1,
                   NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                   NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_10,
                   (MethodInfo *)0x0);
        fVar4 = afStackX_10[0];
      }
code_?:
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetFloat(key,fVar4,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar7 = ObscuredPrefs_DecryptData(key,pSVar2,(MethodInfo *)0x0);
    if (pBVar7 != (Byte__Array *)0x0) {
      if ((int)pBVar7->max_length == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar4 = (float)(*pcVar5)();
        return fVar4;
      }
      if ((int)pBVar7->max_length + -4 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar4 = (float)(*pcVar5)();
        return fVar4;
      }
      return *(float *)pBVar7->vector;
    }
  }
  return 0.0;
}


/* Single GetFloat(String, Single) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
      ObscuredPrefs_GetFloat_1(String *key,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetFloat
                      (key,defaultValue,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetFloat(key,fVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
    }
    return fVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
    return defaultValue;
  }
  if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
      ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
     (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0
     )) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  if (pSVar1 == (String *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    fVar3 = (float)(*pcVar4)();
    return fVar3;
  }
  uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                     (MethodInfo *)0x0);
  if (0x7fffffff < uVar5) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
    if (pBVar6 == (Byte__Array *)0x0) {
      return defaultValue;
    }
    if ((int)pBVar6->max_length == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_startIndex,ExceptionResource__Enum_ArgumentOutOfRange_Index
                 ,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      fVar3 = (float)(*pcVar4)();
      return fVar3;
    }
    if (-1 < (int)pBVar6->max_length + -4) {
      return *(float *)pBVar6->vector;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
              (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
               (MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    fVar3 = (float)(*pcVar4)();
    return fVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == ::StringLiteral__) {
    return defaultValue;
  }
  fVar3 = 0.0;
  if (pSVar1 != (String *)0x0) {
    if ((::StringLiteral__ != (String *)0x0) &&
       ((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return defaultValue;
      }
      if (pSVar1 == (String *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_7[0]._pointer._value = &(pSVar1->fields)._firstChar;
    aRStack_7[0]._12_4_ = 0;
    aRStack_7[0]._length = (pSVar1->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_2
              (aRStack_7,
               NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_10,
               (MethodInfo *)0x0);
    fVar3 = afStackX_10[0];
  }
code_?:
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredPrefs_SetFloat(key,fVar3,(MethodInfo *)0x0);
  return fVar3;
}


/* Int32 GetInt(String) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetInt(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                      (key,0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetInt(key,iVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
    }
    return iVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  iVar3 = 0;
  if (pSVar1 != StringLiteral__not_found_) {
    if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return 0;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aiStackX_8[0] = 0;
    if (pSVar1 == (String *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar3 = (*pcVar4)();
      return iVar3;
    }
    uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    iVar3 = 0;
    if (uVar5 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != ::StringLiteral__) {
        if (((pSVar1 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
           (((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength &&
            (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar1->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar2 != 0)))) {
          return 0;
        }
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar1,aiStackX_8,(MethodInfo *)0x0);
        iVar3 = aiStackX_8[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        ObscuredPrefs_SetInt(key,iVar3,(MethodInfo *)0x0);
        return aiStackX_8[0];
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          iVar3 = (*pcVar4)();
          return iVar3;
        }
        if ((int)pBVar6->max_length + -4 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          iVar3 = (*pcVar4)();
          return iVar3;
        }
        iVar3 = *(int32_t *)pBVar6->vector;
      }
    }
  }
  return iVar3;
}


/* Int32 GetInt(String, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetInt_1(String *key,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                      (key,defaultValue,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetInt(key,iVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
    }
    return iVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != StringLiteral__not_found_) {
    if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return defaultValue;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aiStackX_8[0] = 0;
    if (pSVar1 == (String *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar3 = (*pcVar4)();
      return iVar3;
    }
    uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar5 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != ::StringLiteral__) {
        if (((pSVar1 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
           (((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength &&
            (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar1->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar2 != 0)))) {
          return defaultValue;
        }
        mscorlib.dll::System::Int32::Int32_TryParse(pSVar1,aiStackX_8,(MethodInfo *)0x0);
        iVar3 = aiStackX_8[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        ObscuredPrefs_SetInt(key,iVar3,(MethodInfo *)0x0);
        return aiStackX_8[0];
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          iVar3 = (*pcVar4)();
          return iVar3;
        }
        if ((int)pBVar6->max_length + -4 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          iVar3 = (*pcVar4)();
          return iVar3;
        }
        defaultValue = *(int32_t *)pBVar6->vector;
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return 0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = 0;
  if (pSVar1 != (String *)0x0) {
    uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar4 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar5 = 0;
        mscorlib.dll::System::Int64::Int64_TryParse(pSVar1,aiStackX_10,(MethodInfo *)0x0);
        iVar3 = aiStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar3 = (*pcVar7)();
          return iVar3;
        }
        *(int64_t *)pBVar6->vector = iVar3;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar5 >> 8),0x1e),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        iVar3 = aiStackX_10[0];
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          iVar3 = (*pcVar7)();
          return iVar3;
        }
        if ((int)pBVar6->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          iVar3 = (*pcVar7)();
          return iVar3;
        }
        iVar3 = *(int64_t *)pBVar6->vector;
      }
    }
    return iVar3;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar3 = (*pcVar7)();
  return iVar3;
}


/* Int64 GetLong(String, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetLong_1(String *key,int64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar4 = 0;
        mscorlib.dll::System::Int64::Int64_TryParse
                  (pSVar1,(int64_t *)&stack0x00000010,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar5 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar5 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar5->max_length == 0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          iVar7 = (*pcVar6)();
          return iVar7;
        }
        pBVar5->vector[0] = 0;
        pBVar5->vector[1] = 0;
        pBVar5->vector[2] = 0;
        pBVar5->vector[3] = 0;
        pBVar5->vector[4] = 0;
        pBVar5->vector[5] = 0;
        pBVar5->vector[6] = 0;
        pBVar5->vector[7] = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar5,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x1e),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        defaultValue = 0;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        if ((int)pBVar5->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          iVar7 = (*pcVar6)();
          return iVar7;
        }
        if ((int)pBVar5->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          iVar7 = (*pcVar6)();
          return iVar7;
        }
        defaultValue = *(int64_t *)pBVar5->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Quaternion GetQuaternion(String) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetQuaternion(Quaternion *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar6 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar6,(MethodInfo *)0x0);
  if (pSVar6 != StringLiteral__not_found_) {
    if (((pSVar6 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar6->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar6->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    QStack_8.x = fVar2;
    QStack_8.y = fVar3;
    QStack_8.z = fVar4;
    QStack_8.w = fVar5;
    pQVar9 = ObscuredPrefs_DecryptQuaternionValue
                       (aQStack_10,key,pSVar6,&QStack_8,(MethodInfo *)0x0);
    fVar2 = pQVar9->x;
    fVar3 = pQVar9->y;
    fVar4 = pQVar9->z;
    fVar5 = pQVar9->w;
  }
code_?:
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Quaternion GetQuaternion(String, Quaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetQuaternion_1
          (Quaternion *__return_storage_ptr__,String *key,Quaternion *defaultValue,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
code_?:
    fVar2 = defaultValue->x;
    fVar3 = defaultValue->y;
    fVar4 = defaultValue->z;
    fVar5 = defaultValue->w;
  }
  else {
    if (((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    QStack_7.x = defaultValue->x;
    QStack_7.y = defaultValue->y;
    QStack_7.z = defaultValue->z;
    QStack_7.w = defaultValue->w;
    pQVar8 = ObscuredPrefs_DecryptQuaternionValue
                       (&QStack_9,key,pSVar1,&QStack_7,(MethodInfo *)0x0);
    fVar2 = pQVar8->x;
    fVar3 = pQVar8->y;
    fVar4 = pQVar8->z;
    fVar5 = pQVar8->w;
  }
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* String GetRawValue(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetRawValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = ::StringLiteral__;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,
                  ::StringLiteral__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_3 = (uint16_t *)0x0;
  uStack_4 = 0;
  puStackX_20 = (uint16_t *)0x0;
  puStack_5 = (uint16_t *)0x0;
  uStack_6 = 0;
  pVStack_7 = (Void *)0x0;
  uStack_8._0_4_ = 0;
  uStack_8._4_4_ = 0;
  auStack_9[0] = 0;
  uStack_10 = 0;
  ppuStack_11 = apuStackX_8;
  ppuStack_12 = &puStackX_20;
  ppVStack_13 = &pVStack_7;
  puStack_14 = auStack_9;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_3 = (uint16_t *)0x1;
      uStack_4 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar15 = (pSVar1->fields)._stringLength;
      apuStackX_8[0] = &(pSVar1->fields)._firstChar;
      if (iVar15 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_4 = CONCAT44(uStack_4._4_4_,iVar15);
      puStack_3 = apuStackX_8[0];
    }
  }
  if (pSVar2 != (String *)0x0) {
    if ((pSVar2->fields)._stringLength == 0) {
      puStack_5 = (uint16_t *)0x1;
      uStack_6 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar15 = (pSVar2->fields)._stringLength;
      puStackX_20 = &(pSVar2->fields)._firstChar;
      if (iVar15 == 0) {
        puStackX_20 = (uint16_t *)0x0;
      }
      uStack_6 = CONCAT44(uStack_6._4_4_,iVar15);
      puStack_5 = puStackX_20;
    }
  }
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    FUN_?();
    pcVar16 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar16)();
    return pSVar1;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&puStack_3,&puStack_5,&pVStack_7);
  apuStackX_8[0] = (uint16_t *)0x0;
  puStackX_20 = (uint16_t *)0x0;
  MStack_18.begin = pVStack_7;
  MStack_18.length = (int32_t)uStack_8;
  MStack_18._12_4_ = uStack_8._4_4_;
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::OutStringMarshaller::
           OutStringMarshaller_GetStringAndDispose(&MStack_18,(MethodInfo *)0x0);
  return pSVar1;
}


/* ObscuredPrefs+DataType GetRawValueType(String) */

ObscuredPrefs_DataType__Enum
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
ObscuredPrefs_GetRawValueType(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    inputLength = (value->fields)._stringLength;
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar1 = mscorlib.dll::System::Convert::Convert_FromBase64CharPtr
                       (&(value->fields)._firstChar,inputLength,(MethodInfo *)0x0);
    if (pBVar1 != (Byte__Array *)0x0) {
      if ((int)pBVar1->max_length < 7) {
        return (ObscuredPrefs_DataType__Enum)pBVar1 & 0xffffff00;
      }
      uVar2 = (uint)pBVar1->max_length;
      if ((uVar2 - 7 < (uint)pBVar1->max_length) && (uVar2 - 6 < (uint)pBVar1->max_length)) {
        OVar3 = ObscuredPrefs_DataType__Enum_Unknown;
        if (pBVar1->vector[(ulonglong)uVar2 - 6] < 0xb) {
          OVar3 = (uint)pBVar1->vector[(ulonglong)uVar2 - 7];
        }
        return OVar3;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      OVar3 = (*pcVar4)();
      return OVar3;
    }
    FUN_?();
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar5);
  paramName = (String *)func_?(&StringLiteral_s);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar5 = func_?(&MethodInfo__System__Convert__FromBase64String_System__String_);
  FUN_?(this,uVar5);
  pcVar4 = (code *)swi(3);
  OVar3 = (*pcVar4)();
  return OVar3;
}


/* Rect GetRect(String) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect(Rect *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar5 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar5,(MethodInfo *)0x0);
  if (pSVar5 != StringLiteral__not_found_) {
    if (((pSVar5 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar5->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar5->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    RStack_7.m_XMin = 0.0;
    RStack_7.m_YMin = 0.0;
    RStack_7.m_Width = 0.0;
    RStack_7.m_Height = 0.0;
    pRVar8 = ObscuredPrefs_DecryptRectValue(aRStack_9,key,pSVar5,&RStack_7,(MethodInfo *)0x0);
    fVar1 = pRVar8->m_XMin;
    fVar2 = pRVar8->m_YMin;
    fVar3 = pRVar8->m_Width;
    fVar4 = pRVar8->m_Height;
  }
code_?:
  __return_storage_ptr__->m_XMin = fVar1;
  __return_storage_ptr__->m_YMin = fVar2;
  __return_storage_ptr__->m_Width = fVar3;
  __return_storage_ptr__->m_Height = fVar4;
  return __return_storage_ptr__;
}


/* Rect GetRect(String, Rect) */

Rect * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
       ObscuredPrefs_GetRect_1
                 (Rect *__return_storage_ptr__,String *key,Rect *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
code_?:
    fVar2 = defaultValue->m_XMin;
    fVar3 = defaultValue->m_YMin;
    fVar4 = defaultValue->m_Width;
    fVar5 = defaultValue->m_Height;
  }
  else {
    if (((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    RStack_7.m_XMin = defaultValue->m_XMin;
    RStack_7.m_YMin = defaultValue->m_YMin;
    RStack_7.m_Width = defaultValue->m_Width;
    RStack_7.m_Height = defaultValue->m_Height;
    pRVar8 = ObscuredPrefs_DecryptRectValue(&RStack_9,key,pSVar1,&RStack_7,(MethodInfo *)0x0);
    fVar2 = pRVar8->m_XMin;
    fVar3 = pRVar8->m_YMin;
    fVar4 = pRVar8->m_Width;
    fVar5 = pRVar8->m_Height;
  }
  __return_storage_ptr__->m_XMin = fVar2;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* String GetString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ::StringLiteral__;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar2,(MethodInfo *)0x0);
  if ((bVar3 == 0) &&
     (bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar3 != 0)) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                       (key,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
    }
    return pSVar1;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if (pSVar2 != StringLiteral__not_found_) {
    if ((((pSVar2 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
        ((pSVar2->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
       (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar2->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                           (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar3 != 0)) {
      return pSVar1;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar2 == (String *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar4)();
      return pSVar1;
    }
    uVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar2->fields)._firstChar,0x3a,(pSVar2->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar5 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != ::StringLiteral__) {
        if (((pSVar2 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
           (((pSVar2->fields)._stringLength == (::StringLiteral__->fields)._stringLength &&
            (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar2->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar3 != 0)))) {
          return pSVar1;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        ObscuredPrefs_SetString(key,pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar2,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        pEVar7 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar7 == (Encoding *)0x0) goto code_?;
        pSVar1 = (String *)
                 (*(pEVar7->klass->vtable).GetString_1.methodPtr)
                           (pEVar7,pBVar6,0,(ulonglong)(uint)pBVar6->max_length,
                            (pEVar7->klass->vtable).GetString_1.method);
      }
    }
  }
  return pSVar1;
}


/* String GetString(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetString_1(String *key,String *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (pSVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                        (key,(MethodInfo *)0x0), bVar2 != 0)) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                       (key,defaultValue,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        preservePlayerPrefs == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
                (key,(MethodInfo *)0x0);
    }
    return pSVar1;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != StringLiteral__not_found_) {
    if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return defaultValue;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar1 == (String *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar4 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != ::StringLiteral__) {
        if (((pSVar1 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
           (((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength &&
            (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar1->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar2 != 0)))) {
          return defaultValue;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        ObscuredPrefs_SetString(key,pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar6 == (Encoding *)0x0) goto code_?;
        defaultValue = (String *)
                       (*(pEVar6->klass->vtable).GetString_1.methodPtr)
                                 (pEVar6,pBVar5,0,(ulonglong)(uint)pBVar5->max_length,
                                  (pEVar6->klass->vtable).GetString_1.method);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
    return 0;
  }
  if ((((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
      ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
     (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0
     )) {
    return 0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 0;
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar4 = 0;
        mscorlib.dll::System::UInt32::UInt32_TryParse(pSVar1,auStackX_10,(MethodInfo *)0x0);
        uVar5 = auStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
        if (pBVar6 != (Byte__Array *)0x0) {
          if ((int)pBVar6->max_length != 0) {
            *(uint32_t *)pBVar6->vector = uVar5;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            value = ObscuredPrefs_EncryptData
                              (key,pBVar6,
                               (ObscuredPrefs_DataType__Enum)
                               CONCAT71((int7)((ulonglong)uVar4 >> 8),10),(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                      (pSVar1,value,(MethodInfo *)0x0);
            return auStackX_10[0];
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        goto code_?;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar5 = (*pcVar7)();
          return uVar5;
        }
        if (-1 < (int)pBVar6->max_length + -4) {
          return *(uint32_t *)pBVar6->vector;
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        uVar5 = (*pcVar7)();
        return uVar5;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar5 = (*pcVar7)();
  return uVar5;
}


/* UInt32 GetUInt(String, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetUInt_1(String *key,uint32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar4 = 0;
        mscorlib.dll::System::UInt32::UInt32_TryParse
                  (pSVar1,(uint32_t *)&stack0x00000010,(MethodInfo *)0x0);
        defaultValue = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar5 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
        if (pBVar5 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar5->max_length == 0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        pBVar5->vector[0] = 0;
        pBVar5->vector[1] = 0;
        pBVar5->vector[2] = 0;
        pBVar5->vector[3] = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar5,
                           (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),10),
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        if ((int)pBVar5->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        if ((int)pBVar5->max_length + -4 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        defaultValue = *(uint32_t *)pBVar5->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return uVar7;
}


/* UInt64 GetULong(String) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return 0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 0;
  if (pSVar1 != (String *)0x0) {
    uVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar4 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar5 = 0;
        mscorlib.dll::System::UInt64::UInt64_TryParse(pSVar1,auStackX_10,(MethodInfo *)0x0);
        uVar3 = auStackX_10[0];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar6 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar6->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          uVar3 = (*pcVar7)();
          return uVar3;
        }
        *(uint64_t *)pBVar6->vector = uVar3;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar6,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar5 >> 8),0x20),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        uVar3 = auStackX_10[0];
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar6 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar6 != (Byte__Array *)0x0) {
        if ((int)pBVar6->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar3 = (*pcVar7)();
          return uVar3;
        }
        if ((int)pBVar6->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          uVar3 = (*pcVar7)();
          return uVar3;
        }
        uVar3 = *(uint64_t *)pBVar6->vector;
      }
    }
    return uVar3;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar3 = (*pcVar7)();
  return uVar3;
}


/* UInt64 GetULong(String, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_GetULong_1(String *key,uint64_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if ((pSVar1 == StringLiteral__not_found_) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return defaultValue;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    uVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    if (uVar3 < 0x80000000) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pSVar1 = ObscuredPrefs_DeprecatedDecryptValue(pSVar1,(MethodInfo *)0x0);
      if ((pSVar1 != ::StringLiteral__) &&
         (((pSVar1 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
          (((pSVar1->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar1->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        uVar4 = 0;
        mscorlib.dll::System::UInt64::UInt64_TryParse
                  (pSVar1,(uint64_t *)&stack0x00000010,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Byte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar5 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
        if (pBVar5 == (Byte__Array *)0x0) goto code_?;
        if ((int)pBVar5->max_length == 0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        pBVar5->vector[0] = 0;
        pBVar5->vector[1] = 0;
        pBVar5->vector[2] = 0;
        pBVar5->vector[3] = 0;
        pBVar5->vector[4] = 0;
        pBVar5->vector[5] = 0;
        pBVar5->vector[6] = 0;
        pBVar5->vector[7] = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        value = ObscuredPrefs_EncryptData
                          (key,pBVar5,
                           (ObscuredPrefs_DataType__Enum)
                           CONCAT71((int7)((ulonglong)uVar4 >> 8),0x20),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar1,value,(MethodInfo *)0x0);
        defaultValue = 0;
      }
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pBVar5 = ObscuredPrefs_DecryptData(key,pSVar1,(MethodInfo *)0x0);
      if (pBVar5 != (Byte__Array *)0x0) {
        if ((int)pBVar5->max_length == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_startIndex,
                     ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        if ((int)pBVar5->max_length + -8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                    (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                     (MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
        defaultValue = *(uint64_t *)pBVar5->vector;
      }
    }
    return defaultValue;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return uVar7;
}


/* Vector2 GetVector2(String) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VVar1 = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  defaultValue = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if ((pSVar2 != StringLiteral__not_found_) &&
     ((((pSVar2 == (String *)0x0 || (StringLiteral__not_found_ == (String *)0x0)) ||
       ((pSVar2->fields)._stringLength != (StringLiteral__not_found_->fields)._stringLength)) ||
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar2->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 == 0)))) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    VVar1 = ObscuredPrefs_DecryptVector2Value(key,pSVar2,defaultValue,(MethodInfo *)0x0);
  }
  return VVar1;
}


/* Vector2 GetVector2(String, Vector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
        ObscuredPrefs_GetVector2_1(String *key,Vector2 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._8_8_ = &UNK_?;
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  pSVar2 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == StringLiteral__not_found_) {
    return defaultValue;
  }
  if (((pSVar2 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
     ((pSVar2->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
    auStack_1._8_8_ = &UNK_?;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(pSVar2->fields)._firstChar,
                       (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                       (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return defaultValue;
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  afStack_4[0] = 0.0;
  if (pSVar2 == (String *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    VVar6 = (Vector2)(*pcVar5)();
    return VVar6;
  }
  uVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                    (&(pSVar2->fields)._firstChar,0x3a,(pSVar2->fields)._stringLength,
                     (MethodInfo *)0x0);
  if (uVar7 < 0x80000000) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar2 = ObscuredPrefs_DeprecatedDecryptValue(pSVar2,(MethodInfo *)0x0);
    if ((pSVar2 != ::StringLiteral__) &&
       (((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
        (((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
         (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar3 == 0)))))) {
      if (::StringLiteral__ != (String *)0x0) {
        if ((::StringLiteral__->fields)._stringLength < 1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          VVar6 = (Vector2)(*pcVar5)();
          return VVar6;
        }
        if ((pSVar2 != (String *)0x0) &&
           (pSVar8 = mscorlib.dll::System::String::String_Split
                               (pSVar2,(::StringLiteral__->fields)._firstChar,
                                StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar8 != (String__Array *)0x0)) {
          if ((int)pSVar8->max_length != 0) {
            pSVar2 = pSVar8->vector[0];
            fVar9 = 0.0;
            if (pSVar2 != (String *)0x0) {
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_1._0_8_ = &(pSVar2->fields)._firstChar;
              auStack_1._12_4_ = 0;
              auStack_1._8_4_ = (pSVar2->fields)._stringLength;
              pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                       NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              mscorlib.dll::System::Single::Single_TryParse_2
                        ((ReadOnlySpan_1_Char_ *)auStack_1,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                         afStackX_10,(MethodInfo *)0x0);
              fVar9 = afStackX_10[0];
            }
            if (1 < (uint)pSVar8->max_length) {
              pSVar2 = pSVar8->vector[1];
              fVar11 = 0.0;
              if (pSVar2 != (String *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_1._0_8_ = &(pSVar2->fields)._firstChar;
                auStack_1._12_4_ = 0;
                auStack_1._8_4_ = (pSVar2->fields)._stringLength;
                pNVar10 = mscorlib.dll::System::Globalization::NumberFormatInfo::
                         NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                mscorlib.dll::System::Single::Single_TryParse_2
                          ((ReadOnlySpan_1_Char_ *)auStack_1,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,pNVar10,
                           afStack_4,(MethodInfo *)0x0);
                fVar11 = afStack_4[0];
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
              VVar6.y = fVar11;
              VVar6.x = fVar9;
              value = ObscuredPrefs_EncryptVector2Value(key,VVar6,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                        (pSVar2,value,(MethodInfo *)0x0);
              VVar12.y = fVar11;
              VVar12.x = fVar9;
              return VVar12;
            }
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          VVar6 = (Vector2)(*pcVar5)();
          return VVar6;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pBVar13 = ObscuredPrefs_DecryptData(key,pSVar2,(MethodInfo *)0x0);
    if (pBVar13 != (Byte__Array *)0x0) {
      if ((int)pBVar13->max_length == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        VVar6 = (Vector2)(*pcVar5)();
        return VVar6;
      }
      uVar7 = (uint)pBVar13->max_length;
      if (-1 < (int)(uVar7 - 4)) {
        if (uVar7 < 5) goto code_?;
        if (3 < (int)(uVar7 - 4)) {
          return *(Vector2 *)pBVar13->vector;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                 (MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      VVar6 = (Vector2)(*pcVar5)();
      return VVar6;
    }
  }
  return defaultValue;
}


/* Vector3 GetVector3(String) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetVector3(Vector3 *__return_storage_ptr__,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar4 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar4,(MethodInfo *)0x0);
  if ((pSVar4 != StringLiteral__not_found_) &&
     ((((pSVar4 == (String *)0x0 || (StringLiteral__not_found_ == (String *)0x0)) ||
       ((pSVar4->fields)._stringLength != (StringLiteral__not_found_->fields)._stringLength)) ||
      (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar4->fields)._firstChar,
                          (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                          (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar5 == 0)))) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    VStack_6._0_8_ = uVar2;
    VStack_6.z = fVar3;
    pVVar7 = ObscuredPrefs_DecryptVector3Value(&VStack_8,key,pSVar4,&VStack_6,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar7->x;
    uVar2._4_4_ = pVVar7->y;
    fVar3 = pVVar7->z;
  }
  __return_storage_ptr__->x = (float)uVar2;
  __return_storage_ptr__->y = SUB84(uVar2,4);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetVector3(String, Vector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
          ObscuredPrefs_GetVector3_1
                    (Vector3 *__return_storage_ptr__,String *key,Vector3 *defaultValue,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  pSVar1 = ObscuredPrefs_GetEncryptedPrefsString(key,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == StringLiteral__not_found_) {
code_?:
    uVar2._0_4_ = defaultValue->x;
    uVar2._4_4_ = defaultValue->y;
    fVar3 = defaultValue->z;
  }
  else {
    if (((pSVar1 != (String *)0x0) && (StringLiteral__not_found_ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral__not_found_->fields)._stringLength)) {
      bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral__not_found_->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar4 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    VStack_5.x = defaultValue->x;
    VStack_5.y = defaultValue->y;
    VStack_5.z = defaultValue->z;
    pVVar6 = ObscuredPrefs_DecryptVector3Value(&VStack_7,key,pSVar1,&VStack_5,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar6->x;
    uVar2._4_4_ = pVVar6->y;
    fVar3 = pVVar6->z;
  }
  __return_storage_ptr__->x = (float)(int)uVar2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Boolean HasKey(String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_HasKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 1;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_3 = (uint16_t *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  ppuStack_6 = apuStackX_18;
  if (pSVar2 != (String *)0x0) {
    if ((pSVar2->fields)._stringLength == 0) {
      puStack_3 = (uint16_t *)0x1;
      uStack_4 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar7 = (pSVar2->fields)._stringLength;
      apuStackX_18[0] = &(pSVar2->fields)._firstChar;
      if (iVar7 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_4 = CONCAT44(uStack_4._4_4_,iVar7);
      puStack_3 = apuStackX_18[0];
    }
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    FUN_?();
    pcVar8 = (code *)swi(3);
    bVar1 = (*pcVar8)();
    return bVar1;
  }
  pcRam_? = pcVar8;
  bVar1 = (*pcRam_?)(&puStack_3);
  return bVar1;
}


/* Void PossibleForeignSavesDetected() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_PossibleForeignSavesDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onPossibleForeignSavesDetected != (Action *)0x0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
        foreignSavesReported == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      foreignSavesReported = 1;
      pAVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
               onPossibleForeignSavesDetected;
      if (pAVar1 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Save() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_Save(MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void SavesTampered() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SavesTampered(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
      onAlterationDetected != (Action *)0x0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pAVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
             onAlterationDetected;
    if (pAVar1 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
    onAlterationDetected = (Action *)0x0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)
                     &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                      onAlterationDetected >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  return;
}


/* Void SetBool(String, Boolean) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetBool(String *key,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cleanBytes->vector[0] = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x23),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetByteArray(String, Byte[]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetByteArray(String *key,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,value,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x28),
                        (MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar3);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetColor(String, Color32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetColor(String *key,Color32 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bStackX_11 = value.rgba._1_1_;
  bStackX_12 = value.rgba._2_1_;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)cleanBytes->vector =
       ((((uint)value.rgba >> 0x18) << 8 | value.rgba & 0xffU) << 8 | (uint)bStackX_11) << 8 |
       (uint)bStackX_12;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x3c),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDecimal(String, Decimal) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetDecimal(String *key,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2._0_4_ = value->flags;
  uStack_2._4_4_ = value->hi;
  uStack_3._0_4_ = value->lo;
  uStack_3._4_4_ = value->mid;
  cleanBytes = BitconverterExt::BitconverterExt_GetBytes((Decimal *)&uStack_2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x1b),
                        (MethodInfo *)0x0);
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    return;
  }
  uVar5 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar5);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetDouble(String, Double) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetDouble(String *key,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(double *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x19),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFloat(String, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetFloat(String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x14),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetInt(String, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetInt(String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int32_t *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),5),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLong(String, Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetLong(String *key,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int64_t *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x1e),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetNewCryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetNewCryptoKey(String *newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = newKey;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    cryptoKey >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void SetQuaternion(String, Quaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetQuaternion(String *key,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  QStack_2.x = value->x;
  QStack_2.y = value->y;
  QStack_2.z = value->z;
  QStack_2.w = value->w;
  value_00 = ObscuredPrefs_EncryptQuaternionValue(key,&QStack_2,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRawValue(String, String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetRawValue(String *key,String *encryptedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,encryptedValue,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar3);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRect(String, Rect) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetRect(String *key,Rect *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  RStack_2.m_XMin = value->m_XMin;
  RStack_2.m_YMin = value->m_YMin;
  RStack_2.m_Width = value->m_Width;
  RStack_2.m_Height = value->m_Height;
  value_00 = ObscuredPrefs_EncryptRectValue(key,&RStack_2,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetString(String, String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetString(String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar2 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  if (pEVar2 != (Encoding *)0x0) {
    pMVar3 = (pEVar2->klass->vtable).GetBytes_1.method;
    cleanBytes = (Byte__Array *)(*(pEVar2->klass->vtable).GetBytes_1.methodPtr)(pEVar2,value,pMVar3)
    ;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value_00 = ObscuredPrefs_EncryptData
                         (key,cleanBytes,
                          (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)pMVar3 >> 8),0xf)
                          ,(MethodInfo *)0x0);
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                      (pSVar1,value_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    uVar5 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
    this = (PlayerPrefsException *)func_?(uVar5);
    pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
              (this,pSVar1,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                               );
    FUN_?(this,uVar5);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUInt(String, UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetUInt(String *key,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint32_t *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),10),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetULong(String, UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetULong(String *key,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cleanBytes = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  if (cleanBytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)cleanBytes->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint64_t *)cleanBytes->vector = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredPrefs_EncryptData
                       (key,cleanBytes,
                        (ObscuredPrefs_DataType__Enum)CONCAT71((int7)((ulonglong)method >> 8),0x20),
                        (MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVector2(String, Vector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetVector2(String *key,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  value_00 = ObscuredPrefs_EncryptVector2Value(key,value,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar3);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVector3(String, Vector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_SetVector3(String *key,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = ObscuredPrefs_EncryptKey(key,(MethodInfo *)0x0);
  VStack_2.z = value->z;
  VStack_2.x = value->x;
  VStack_2.y = value->y;
  value_00 = ObscuredPrefs_EncryptVector3Value(key,&VStack_2,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                    (pSVar1,value_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  uVar4 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar4);
  pSVar1 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                             );
  FUN_?(this,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ObscuredPrefs() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_e806f6);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey =
       StringLiteral_e806f6;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    cryptoKey >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->preservePlayerPrefs =
       0;
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
  onPossibleForeignSavesDetected = (Action *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    onPossibleForeignSavesDetected >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey;
}


/* String get_DeprecatedDeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeprecatedDeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
           deprecatedDeviceId;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pSVar1 = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    pSVar1 = ObscuredPrefs_DeprecatedCalculateChecksum(pSVar1,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deprecatedDeviceId
         = pSVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                      deprecatedDeviceId >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c != 0) {
    return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
           deprecatedDeviceId;
  }
  FUN_?();
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
         deprecatedDeviceId;
}


/* String get_DeviceID() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceID(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
         ::StringLiteral__;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                      deviceId >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c != 0) {
    return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  }
  FUN_?();
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
}


/* String get_DeviceId() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId =
         ::StringLiteral__;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                      deviceId >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c != 0) {
    return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
  }
  FUN_?();
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId;
}


/* UInt32 get_DeviceIdHash() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
         ObscuredPrefs_get_DeviceIdHash(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash == 0
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    input = ObscuredPrefs_get_DeviceId((MethodInfo *)0x0);
    uVar1 = ObscuredPrefs_CalculateChecksum(input,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceIdHash =
         uVar1;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->cryptoKey = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    cryptoKey >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void set_DeviceID(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceID(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    deviceId >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void set_DeviceId(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredPrefs::
     ObscuredPrefs_set_DeviceId(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->deviceId = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredPrefs->static_fields->
                    deviceId >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

