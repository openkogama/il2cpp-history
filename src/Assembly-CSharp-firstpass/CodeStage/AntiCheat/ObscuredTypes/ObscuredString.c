
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ApplyNewCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if ((pSVar1 != pSVar2) &&
     ((((pSVar1 == (String *)0x0 || (pSVar2 == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (pSVar2->fields)._stringLength)) ||
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(pSVar2->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 == 0)))) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    pBVar4 = ObscuredString_InternalEncrypt(pSVar1,(MethodInfo *)0x0);
    iVar5 = iRam_?;
    (this->fields).hiddenValue = pBVar4;
    if (iVar5 != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
        iVar5 = iRam_?;
      } while (!bVar10);
    }
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (iVar5 != 0) {
      uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  return;
}


/* Boolean ArraysEquals(Byte[], Byte[]) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ArraysEquals(Byte__Array *a1,Byte__Array *a2,MethodInfo *method)

{
  if (a1 != a2) {
    if (((a1 == (Byte__Array *)0x0) || (a2 == (Byte__Array *)0x0)) ||
       ((int)a1->max_length != (int)a2->max_length)) {
      return 0;
    }
    uVar1 = (uint)a1->max_length;
    puVar2 = a2->vector;
    for (uVar3 = 0; (int)uVar3 < (int)uVar1; uVar3 = uVar3 + 1) {
      if ((uVar1 <= uVar3) || ((uint)a2->max_length <= uVar3)) {
        FUN_?(uVar3);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      if (puVar2[(longlong)a1 - (longlong)a2] != *puVar2) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    }
  }
  return 1;
}


/* String EncryptDecrypt(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pSVar1 = ::StringLiteral__;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char,::StringLiteral__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((value == (String *)0x0) || ((value->fields)._stringLength == 0)) {
    return ::StringLiteral__;
  }
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    if (pSVar1 == (String *)0x0) goto code_?;
  }
  iVar2 = (value->fields)._stringLength;
  iVar3 = (pSVar1->fields)._stringLength;
  lVar4 = FUN_?(TypeInfo__System__Char,iVar2);
  src = (uint8_t *)0x0;
  if (iVar2 < 1) {
    if (lVar4 == 0) goto code_?;
  }
  else {
    puVar5 = (ushort *)(lVar4 + 0x20);
    puVar6 = src;
    puVar7 = src;
    do {
      uVar8 = (uint)puVar6;
      if (((longlong)(value->fields)._stringLength <= (longlong)puVar6) ||
         (uVar9 = (longlong)(int)uVar8 % (longlong)iVar3,
         (longlong)(pSVar1->fields)._stringLength <= (longlong)(uVar9 & 0xffffffff))) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar10)();
        return pSVar1;
      }
      if (lVar4 == 0) goto code_?;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_?;
      puVar6 = (uint8_t *)(ulonglong)(uVar8 + 1);
      puVar7 = puVar7 + 1;
      *puVar5 = (&(pSVar1->fields)._firstChar)[(int)uVar9] ^
                *(ushort *)((longlong)value + (-0xc - lVar4) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
    } while ((longlong)puVar7 < (longlong)iVar2);
  }
  if (*(longlong *)(lVar4 + 0x18) != 0) {
    pSVar1 = (String *)FUN_?(*(undefined4 *)(lVar4 + 0x18));
    if (pSVar1 != (String *)0x0) {
      dest = &(pSVar1->fields)._firstChar;
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar10)();
          return pSVar1;
        }
        src = (uint8_t *)(lVar4 + 0x20);
      }
      uVar8 = *(int *)(lVar4 + 0x18) * 2;
      if (((ulonglong)uVar8 <= (ulonglong)((longlong)dest - (longlong)src)) &&
         ((ulonglong)uVar8 <= (ulonglong)((longlong)src - (longlong)dest))) {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1((uint8_t *)dest,src,uVar8,(MethodInfo *)0x0);
        return pSVar1;
      }
      FUN_?(dest,src);
      return pSVar1;
    }
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar10)();
    return pSVar1;
  }
code_?:
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* String EncryptDecrypt(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((value == (String *)0x0) || ((value->fields)._stringLength == 0)) {
    return ::StringLiteral__;
  }
  if ((key == (String *)0x0) || ((key->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (key == (String *)0x0) goto code_?;
  }
  iVar1 = (value->fields)._stringLength;
  iVar2 = (key->fields)._stringLength;
  lVar3 = FUN_?(TypeInfo__System__Char,iVar1);
  src = (uint8_t *)0x0;
  if (iVar1 < 1) {
    if (lVar3 == 0) goto code_?;
  }
  else {
    puVar4 = (ushort *)(lVar3 + 0x20);
    puVar5 = src;
    puVar6 = src;
    do {
      uVar7 = (uint)puVar5;
      if (((longlong)(value->fields)._stringLength <= (longlong)puVar5) ||
         (uVar8 = (longlong)(int)uVar7 % (longlong)iVar2,
         (longlong)(key->fields)._stringLength <= (longlong)(uVar8 & 0xffffffff))) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pSVar10 = (String *)(*pcVar9)();
        return pSVar10;
      }
      if (lVar3 == 0) goto code_?;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto code_?;
      puVar5 = (uint8_t *)(ulonglong)(uVar7 + 1);
      puVar6 = puVar6 + 1;
      *puVar4 = (&(key->fields)._firstChar)[(int)uVar8] ^
                *(ushort *)((longlong)value + (-0xc - lVar3) + (longlong)puVar4);
      puVar4 = puVar4 + 1;
    } while ((longlong)puVar6 < (longlong)iVar1);
  }
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    pSVar10 = (String *)FUN_?(*(undefined4 *)(lVar3 + 0x18));
    if (pSVar10 != (String *)0x0) {
      dest = &(pSVar10->fields)._firstChar;
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          pSVar10 = (String *)(*pcVar9)();
          return pSVar10;
        }
        src = (uint8_t *)(lVar3 + 0x20);
      }
      uVar7 = *(int *)(lVar3 + 0x18) * 2;
      if (((ulonglong)uVar7 <= (ulonglong)((longlong)dest - (longlong)src)) &&
         ((ulonglong)uVar7 <= (ulonglong)((longlong)src - (longlong)dest))) {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1((uint8_t *)dest,src,uVar7,(MethodInfo *)0x0);
        return pSVar10;
      }
      FUN_?(dest,src);
      return pSVar10;
    }
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pSVar10 = (String *)(*pcVar9)();
    return pSVar10;
  }
code_?:
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals(ObscuredString *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  pOVar1 = (ObscuredString *)0x0;
  if (obj->klass == (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString)
  {
    pOVar1 = (ObscuredString *)obj;
  }
  if (pOVar1 == (ObscuredString *)0x0) {
    return 0;
  }
  pOVar1 = (ObscuredString *)0x0;
  if (obj->klass == (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString)
  {
    pOVar1 = (ObscuredString *)obj;
  }
  if (pOVar1 == (ObscuredString *)0x0) {
    FUN_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString,pOVar1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar1 != (ObscuredString *)0x0) {
    pSVar4 = (this->fields).currentCryptoKey;
    pSVar5 = (pOVar1->fields).currentCryptoKey;
    if ((pSVar4 == pSVar5) ||
       ((((pSVar4 != (String *)0x0 && (pSVar5 != (String *)0x0)) &&
         ((pSVar4->fields)._stringLength == (pSVar5->fields)._stringLength)) &&
        (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar4->fields)._firstChar,
                            (uint8_t *)&(pSVar5->fields)._firstChar,
                            (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar3 != 0)))) {
      pBVar6 = (this->fields).hiddenValue;
      pBVar7 = (pOVar1->fields).hiddenValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (pBVar6 != pBVar7) {
        if (pBVar6 == (Byte__Array *)0x0) {
          return 0;
        }
        if (pBVar7 == (Byte__Array *)0x0) {
          return 0;
        }
        uVar8 = (uint)pBVar7->max_length;
        if ((uint)pBVar6->max_length != uVar8) {
          return 0;
        }
        uVar9 = (uint)pBVar6->max_length;
        puVar10 = pBVar7->vector;
        for (uVar11 = 0; (int)uVar11 < (int)uVar9; uVar11 = uVar11 + 1) {
          if ((uVar9 <= uVar11) || (uVar8 <= uVar11)) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          if (puVar10[(longlong)pBVar6 - (longlong)pBVar7] != *puVar10) {
            return 0;
          }
          puVar10 = puVar10 + 1;
        }
      }
    }
    else {
      pSVar4 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
      pSVar5 = ObscuredString_InternalDecrypt(pOVar1,(MethodInfo *)0x0);
      if (pSVar4 != pSVar5) {
        if (((pSVar4 != (String *)0x0) && (pSVar5 != (String *)0x0)) &&
           ((pSVar4->fields)._stringLength == (pSVar5->fields)._stringLength)) {
          lVar12 = (longlong)(pSVar4->fields)._stringLength;
          puVar13 = &(pSVar5->fields)._firstChar;
          uVar14 = lVar12 * 2;
          puVar15 = &(pSVar4->fields)._firstChar;
          if (puVar15 != puVar13) {
            if (7 < uVar14) {
              if (uVar14 != 8) {
                puVar16 = puVar13;
                do {
                  if (*(longlong *)((longlong)puVar16 + ((longlong)puVar15 - (longlong)puVar13)) !=
                      *(longlong *)puVar16) {
                    return 0;
                  }
                  puVar16 = puVar16 + 4;
                } while ((ulonglong)((longlong)puVar16 - (longlong)puVar13) < uVar14 - 8);
              }
              return *(longlong *)(puVar15 + lVar12 + -4) == *(longlong *)(puVar13 + lVar12 + -4);
            }
            if (uVar14 != 0) {
              puVar16 = puVar13;
              do {
                if (*(char *)((longlong)puVar16 + ((longlong)puVar15 - (longlong)puVar13)) !=
                    (char)*puVar16) {
                  return 0;
                }
                puVar16 = (uint16_t *)((longlong)puVar16 + 1);
              } while ((ulonglong)((longlong)puVar16 - (longlong)puVar13) < uVar14);
            }
          }
          return 1;
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* Boolean Equals(ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_1(ObscuredString *this,ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (ObscuredString *)0x0) {
    return 0;
  }
  pSVar1 = (this->fields).currentCryptoKey;
  pSVar2 = (value->fields).currentCryptoKey;
  if ((pSVar1 == pSVar2) ||
     ((((pSVar1 != (String *)0x0 && (pSVar2 != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(pSVar2->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 != 0)))) {
    pBVar4 = (this->fields).hiddenValue;
    pBVar5 = (value->fields).hiddenValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    if (pBVar4 != pBVar5) {
      if (pBVar4 == (Byte__Array *)0x0) {
        return 0;
      }
      if (pBVar5 == (Byte__Array *)0x0) {
        return 0;
      }
      uVar6 = (uint)pBVar5->max_length;
      if ((uint)pBVar4->max_length != uVar6) {
        return 0;
      }
      uVar7 = (uint)pBVar4->max_length;
      puVar8 = pBVar5->vector;
      for (uVar9 = 0; (int)uVar9 < (int)uVar7; uVar9 = uVar9 + 1) {
        if ((uVar7 <= uVar9) || (uVar6 <= uVar9)) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          bVar3 = (*pcVar10)();
          return bVar3;
        }
        if (puVar8[(longlong)pBVar4 - (longlong)pBVar5] != *puVar8) {
          return 0;
        }
        puVar8 = puVar8 + 1;
      }
    }
  }
  else {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    pSVar2 = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
    if (pSVar1 != pSVar2) {
      if (((pSVar1 != (String *)0x0) && (pSVar2 != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) {
        lVar11 = (longlong)(pSVar1->fields)._stringLength;
        puVar12 = &(pSVar2->fields)._firstChar;
        uVar13 = lVar11 * 2;
        puVar14 = &(pSVar1->fields)._firstChar;
        if (puVar14 != puVar12) {
          if (7 < uVar13) {
            if (uVar13 != 8) {
              puVar15 = puVar12;
              do {
                if (*(longlong *)((longlong)puVar15 + ((longlong)puVar14 - (longlong)puVar12)) !=
                    *(longlong *)puVar15) {
                  return 0;
                }
                puVar15 = puVar15 + 4;
              } while ((ulonglong)((longlong)puVar15 - (longlong)puVar12) < uVar13 - 8);
            }
            return *(longlong *)(puVar14 + lVar11 + -4) == *(longlong *)(puVar12 + lVar11 + -4);
          }
          if (uVar13 != 0) {
            puVar15 = puVar12;
            do {
              if (*(char *)((longlong)puVar15 + ((longlong)puVar14 - (longlong)puVar12)) !=
                  (char)*puVar15) {
                return 0;
              }
              puVar15 = (uint16_t *)((longlong)puVar15 + 1);
            } while ((ulonglong)((longlong)puVar15 - (longlong)puVar12) < uVar13);
          }
        }
        return 1;
      }
      return 0;
    }
  }
  return 1;
}


/* Boolean Equals(ObscuredString, StringComparison) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_2
               (ObscuredString *this,ObscuredString *value,StringComparison__Enum comparisonType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (ObscuredString *)0x0) {
    return 0;
  }
  pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CompareInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == pSVar2) {
    if (comparisonType < (StringComparison__Enum_Ordinal|StringComparison__Enum_InvariantCulture)) {
      return 1;
    }
  }
  else {
    if ((pSVar1 != (String *)0x0) && (pSVar2 != (String *)0x0)) {
      switch(comparisonType) {
      case StringComparison__Enum_CurrentCulture:
        if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                            ((MethodInfo *)0x0);
        if ((pCVar3 == (CultureInfo *)0x0) ||
           (pCVar4 = (CompareInfo *)(*(pCVar3->klass->vtable).get_CompareInfo.methodPtr)(pCVar3),
           pCVar4 == (CompareInfo *)0x0)) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        uVar7 = 0;
        break;
      case StringComparison__Enum_CurrentCultureIgnoreCase:
        if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                            ((MethodInfo *)0x0);
        if ((pCVar3 == (CultureInfo *)0x0) ||
           (pCVar4 = (CompareInfo *)
                      (*(pCVar3->klass->vtable).get_CompareInfo.methodPtr)
                                (pCVar3,(pCVar3->klass->vtable).get_CompareInfo.method),
           pCVar4 == (CompareInfo *)0x0)) goto code_?;
        uVar7 = 1;
        break;
      case StringComparison__Enum_InvariantCulture:
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__Globalization__CompareInfo);
        }
        pCVar4 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
        if (pCVar4 == (CompareInfo *)0x0) goto code_?;
        uVar7 = 0;
        break;
      case StringComparison__Enum_InvariantCultureIgnoreCase:
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__Globalization__CompareInfo);
        }
        pCVar4 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
        if (pCVar4 == (CompareInfo *)0x0) goto code_?;
        uVar7 = 1;
        break;
      case StringComparison__Enum_Ordinal:
        if ((pSVar1->fields)._stringLength != (pSVar2->fields)._stringLength) {
          return 0;
        }
        lVar8 = (longlong)(pSVar1->fields)._stringLength;
        puVar9 = &(pSVar2->fields)._firstChar;
        uVar10 = lVar8 * 2;
        puVar11 = &(pSVar1->fields)._firstChar;
        if (puVar11 != puVar9) {
          if (7 < uVar10) {
            if (uVar10 != 8) {
              puVar12 = puVar9;
              do {
                if (*(longlong *)((longlong)puVar12 + ((longlong)puVar11 - (longlong)puVar9)) !=
                    *(longlong *)puVar12) {
                  return 0;
                }
                puVar12 = puVar12 + 4;
              } while ((ulonglong)((longlong)puVar12 - (longlong)puVar9) < uVar10 - 8);
            }
            return *(longlong *)(puVar11 + lVar8 + -4) == *(longlong *)(puVar9 + lVar8 + -4);
          }
          if (uVar10 != 0) {
            puVar12 = puVar9;
            do {
              if (*(char *)((longlong)puVar12 + ((longlong)puVar11 - (longlong)puVar9)) !=
                  (char)*puVar12) {
                return 0;
              }
              puVar12 = (uint16_t *)((longlong)puVar12 + 1);
            } while ((ulonglong)((longlong)puVar12 - (longlong)puVar9) < uVar10);
          }
        }
        return 1;
      case StringComparison__Enum_OrdinalIgnoreCase:
        iVar13 = (pSVar2->fields)._stringLength;
        if ((pSVar1->fields)._stringLength != iVar13) {
          return 0;
        }
        iVar14 = (pSVar1->fields)._stringLength;
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar14 = mscorlib.dll::System::Globalization::CompareInfo::
                CompareInfo_CompareOrdinalIgnoreCase
                          (pSVar1,0,iVar14,pSVar2,0,iVar13,(MethodInfo *)0x0);
        return iVar14 == 0;
      default:
        uVar15 = func_?(&TypeInfo__System__ArgumentException);
        this_00 = (ArgumentException *)func_?(uVar15);
        pSVar1 = (String *)func_?(&StringLiteral_comparisonType);
        pSVar2 = (String *)func_?(&StringLiteral_The_string_comparison_type_passe);
        mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
                  (this_00,pSVar2,pSVar1,(MethodInfo *)0x0);
        uVar15 = func_?(&
                                     MethodInfo__System__String__Equals_MethodInfo__System__String__MethodInfo__System__String__System__StringComparison_
                                    );
        FUN_?(this_00,uVar15);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      iVar13 = FUN_?(7,pCVar4,pSVar1,pSVar2,uVar7);
      return iVar13 == 0;
    }
    if (comparisonType < (StringComparison__Enum_Ordinal|StringComparison__Enum_InvariantCulture)) {
      return 0;
    }
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
            (ExceptionResource__Enum_NotSupported_StringComparison,
             ExceptionArgument__Enum_comparisonType,(MethodInfo *)0x0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Byte[] GetBytes(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_GetBytes(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (str != (String *)0x0) {
    pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
    src = mscorlib.dll::System::String::String_ToCharArray(str,(MethodInfo *)0x0);
    if (pBVar1 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar1,0,(int32_t)pBVar1->max_length,(MethodInfo *)0x0);
      return pBVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* String GetEncrypted() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetEncrypted(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if ((pSVar1 != pSVar2) &&
     ((((pSVar1 == (String *)0x0 || (pSVar2 == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (pSVar2->fields)._stringLength)) ||
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(pSVar2->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar3 == 0)))) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    pBVar4 = ObscuredString_InternalEncrypt(pSVar1,(MethodInfo *)0x0);
    iVar5 = iRam_?;
    (this->fields).hiddenValue = pBVar4;
    if (iVar5 != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
        iVar5 = iRam_?;
      } while (!bVar10);
    }
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (iVar5 != 0) {
      uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  pBVar4 = (this->fields).hiddenValue;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar4 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar11)();
    return pSVar1;
  }
  dst = (Array *)FUN_?(TypeInfo__System__Char,(int)pBVar4->max_length / 2);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar4,0,dst,0,(int32_t)pBVar4->max_length,(MethodInfo *)0x0);
  if ((dst == (Array *)0x0) || (dst[1].monitor == (MonitorData *)0x0)) {
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  pSVar1 = (String *)FUN_?(*(undefined4 *)&dst[1].monitor,dst,0);
  if (pSVar1 == (String *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar11)();
    return pSVar1;
  }
  dest = &(pSVar1->fields)._firstChar;
  if (*(int *)&dst[1].monitor == 0) {
    src = (Array *)0x0;
  }
  else {
    src = dst + 2;
  }
  uVar6 = *(int *)&dst[1].monitor * 2;
  if (((ulonglong)uVar6 <= (ulonglong)((longlong)dest - (longlong)src)) &&
     ((ulonglong)uVar6 <= (ulonglong)((longlong)src - (longlong)dest))) {
    mscorlib.dll::System::Buffer::Buffer_Memcpy_1
              ((uint8_t *)dest,(uint8_t *)src,uVar6,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  return pSVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_GetHashCode(ObscuredString *this,MethodInfo *method)

{
  pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    UNRECOVERED_JUMPTABLE = (pSVar1->klass->vtable).GetHashCode.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)
                      (pSVar1,(pSVar1->klass->vtable).GetHashCode.method,UNRECOVERED_JUMPTABLE);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* String GetString(Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetString(Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bytes == (Byte__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  dst = (Array *)FUN_?(TypeInfo__System__Char);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)bytes,0,dst,0,(int32_t)bytes->max_length,(MethodInfo *)0x0);
  if ((dst == (Array *)0x0) || (dst[1].monitor == (MonitorData *)0x0)) {
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  pSVar2 = (String *)FUN_?(*(undefined4 *)&dst[1].monitor,dst,0);
  if (pSVar2 == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  dest = &(pSVar2->fields)._firstChar;
  if (*(int *)&dst[1].monitor == 0) {
    src = (Array *)0x0;
  }
  else {
    src = dst + 2;
  }
  len = *(int *)&dst[1].monitor * 2;
  if (((ulonglong)len <= (ulonglong)((longlong)dest - (longlong)src)) &&
     ((ulonglong)len <= (ulonglong)((longlong)src - (longlong)dest))) {
    mscorlib.dll::System::Buffer::Buffer_Memcpy_1
              ((uint8_t *)dest,(uint8_t *)src,len,(MethodInfo *)0x0);
    return pSVar2;
  }
  FUN_?();
  return pSVar2;
}


/* String InternalDecrypt() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_InternalDecrypt(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    bVar1 = iRam_? != 0;
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
    pBVar6 = ObscuredString_InternalEncrypt(::StringLiteral__,(MethodInfo *)0x0);
    iVar7 = iRam_?;
    (this->fields).hiddenValue = pBVar6;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
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
        iVar7 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).fakeValue = ::StringLiteral__;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).fakeValue >> 0xc);
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
    (this->fields).inited = 1;
  }
  pSVar8 = (this->fields).currentCryptoKey;
  if ((pSVar8 == (String *)0x0) || ((pSVar8->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    pSVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar6 = (this->fields).hiddenValue;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar6 == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar9)();
    return pSVar8;
  }
  val = (Char__Array *)FUN_?(TypeInfo__System__Char);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar6,0,(Array *)val,0,(int32_t)pBVar6->max_length,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0);
  pSVar8 = ObscuredString_EncryptDecrypt_1(pSVar10,pSVar8,(MethodInfo *)0x0);
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((((bVar11 != 0) && (pSVar10 = (this->fields).fakeValue, pSVar10 != (String *)0x0)) &&
      ((pSVar10->fields)._stringLength != 0)) &&
     ((pSVar8 != pSVar10 &&
      (((pSVar8 == (String *)0x0 ||
        ((pSVar8->fields)._stringLength != (pSVar10->fields)._stringLength)) ||
       (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar8->fields)._firstChar,
                           (uint8_t *)&(pSVar10->fields)._firstChar,
                           (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar11 == 0)))))) {
    plVar12 = (longlong *)FUN_?();
    if (plVar12 == (longlong *)0x0) goto code_?;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
  }
  return pSVar8;
}


/* Byte[] InternalEncrypt(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pSVar1 = ObscuredString_EncryptDecrypt_1(value,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    pBVar2 = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
    src = mscorlib.dll::System::String::String_ToCharArray(pSVar1,(MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar2,0,(int32_t)pBVar2->max_length,(MethodInfo *)0x0);
      return pBVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* Byte[] InternalEncrypt(String, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  this = ObscuredString_EncryptDecrypt_1(value,key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (String *)0x0) {
    pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
    src = mscorlib.dll::System::String::String_ToCharArray(this,(MethodInfo *)0x0);
    if (pBVar1 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar1,0,(int32_t)pBVar1->max_length,(MethodInfo *)0x0);
      return pBVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_RandomizeCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_00 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
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
  value = (*pcRam_?)(0x80000000,0x7fffffff);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).currentCryptoKey = pSVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pSVar4 = (this->fields).currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pBVar10 = ObscuredString_InternalEncrypt_1(value_00,pSVar4,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).hiddenValue = pBVar10;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void SetEncrypted(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetEncrypted(ObscuredString *this,String *encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).inited = 1;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (encrypted != (String *)0x0) {
    dst = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
    src = mscorlib.dll::System::String::String_ToCharArray(encrypted,(MethodInfo *)0x0);
    if (dst != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)dst,0,(int32_t)dst->max_length,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields).hiddenValue = dst;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
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
      bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                        ((MethodInfo *)0x0);
      if (bVar6 != 0) {
        pSVar7 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields).fakeValue = pSVar7;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).fakeValue >> 0xc);
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
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetNewCryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetNewCryptoKey(String *newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = newKey;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields >>
                  0xc);
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


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_ToString(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    bVar1 = iRam_? != 0;
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
    pBVar6 = ObscuredString_InternalEncrypt(::StringLiteral__,(MethodInfo *)0x0);
    iVar7 = iRam_?;
    (this->fields).hiddenValue = pBVar6;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
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
        iVar7 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).fakeValue = ::StringLiteral__;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).fakeValue >> 0xc);
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
    (this->fields).inited = 1;
  }
  pSVar8 = (this->fields).currentCryptoKey;
  if ((pSVar8 == (String *)0x0) || ((pSVar8->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    pSVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar6 = (this->fields).hiddenValue;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar6 == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar9)();
    return pSVar8;
  }
  val = (Char__Array *)FUN_?(TypeInfo__System__Char);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar6,0,(Array *)val,0,(int32_t)pBVar6->max_length,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0);
  pSVar8 = ObscuredString_EncryptDecrypt_1(pSVar10,pSVar8,(MethodInfo *)0x0);
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((((bVar11 != 0) && (pSVar10 = (this->fields).fakeValue, pSVar10 != (String *)0x0)) &&
      ((pSVar10->fields)._stringLength != 0)) &&
     ((pSVar8 != pSVar10 &&
      (((pSVar8 == (String *)0x0 ||
        ((pSVar8->fields)._stringLength != (pSVar10->fields)._stringLength)) ||
       (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar8->fields)._firstChar,
                           (uint8_t *)&(pSVar10->fields)._firstChar,
                           (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar11 == 0)))))) {
    plVar12 = (longlong *)FUN_?();
    if (plVar12 == (longlong *)0x0) goto code_?;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
  }
  return pSVar8;
}


/* ObscuredString() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,9999,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0]._pointer._value = (void *)0x0;
  aRStack_1[0]._length = 0;
  aRStack_1[0]._12_4_ = 0;
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = pSVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields >>
                  0xc);
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
  return;
}


/* ObscuredString(Byte[]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__ctor_1(ObscuredString *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  iVar1 = iRam_?;
  (this->fields).currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).hiddenValue = value;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).hiddenValue >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).fakeValue = (String *)0x0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).fakeValue >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).inited = 1;
  return;
}


/* Int32 get_Length() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_get_Length(ObscuredString *this,MethodInfo *method)

{
  pBVar1 = (this->fields).hiddenValue;
  if (pBVar1 != (Byte__Array *)0x0) {
    return (int)pBVar1->max_length / 2;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean op_Equality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Equality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (a == b) {
    return 1;
  }
  if (a == (ObscuredString *)0x0) {
    return 0;
  }
  if (b != (ObscuredString *)0x0) {
    pSVar1 = (a->fields).currentCryptoKey;
    pSVar2 = (b->fields).currentCryptoKey;
    if ((pSVar1 == pSVar2) ||
       ((((pSVar1 != (String *)0x0 && (pSVar2 != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
        (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar1->fields)._firstChar,
                            (uint8_t *)&(pSVar2->fields)._firstChar,
                            (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar3 != 0)))) {
      pBVar4 = (a->fields).hiddenValue;
      pBVar5 = (b->fields).hiddenValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (pBVar4 != pBVar5) {
        if (pBVar4 == (Byte__Array *)0x0) {
          return 0;
        }
        if (pBVar5 == (Byte__Array *)0x0) {
          return 0;
        }
        uVar6 = (uint)pBVar5->max_length;
        if ((uint)pBVar4->max_length != uVar6) {
          return 0;
        }
        uVar7 = (uint)pBVar4->max_length;
        puVar8 = pBVar5->vector;
        for (uVar9 = 0; (int)uVar9 < (int)uVar7; uVar9 = uVar9 + 1) {
          if ((uVar7 <= uVar9) || (uVar6 <= uVar9)) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            bVar3 = (*pcVar10)();
            return bVar3;
          }
          if (puVar8[(longlong)pBVar4 - (longlong)pBVar5] != *puVar8) {
            return 0;
          }
          puVar8 = puVar8 + 1;
        }
      }
    }
    else {
      pSVar1 = ObscuredString_InternalDecrypt(a,(MethodInfo *)0x0);
      pSVar2 = ObscuredString_InternalDecrypt(b,(MethodInfo *)0x0);
      if (pSVar1 != pSVar2) {
        if (((pSVar1 != (String *)0x0) && (pSVar2 != (String *)0x0)) &&
           ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) {
          lVar11 = (longlong)(pSVar1->fields)._stringLength;
          puVar12 = &(pSVar2->fields)._firstChar;
          uVar13 = lVar11 * 2;
          puVar14 = &(pSVar1->fields)._firstChar;
          if (puVar14 != puVar12) {
            if (7 < uVar13) {
              if (uVar13 != 8) {
                puVar15 = puVar12;
                do {
                  if (*(longlong *)((longlong)puVar15 + ((longlong)puVar14 - (longlong)puVar12)) !=
                      *(longlong *)puVar15) {
                    return 0;
                  }
                  puVar15 = puVar15 + 4;
                } while ((ulonglong)((longlong)puVar15 - (longlong)puVar12) < uVar13 - 8);
              }
              return *(longlong *)(puVar14 + lVar11 + -4) == *(longlong *)(puVar12 + lVar11 + -4);
            }
            if (uVar13 != 0) {
              puVar15 = puVar12;
              do {
                if (*(char *)((longlong)puVar15 + ((longlong)puVar14 - (longlong)puVar12)) !=
                    (char)*puVar15) {
                  return 0;
                }
                puVar15 = (uint16_t *)((longlong)puVar15 + 1);
              } while ((ulonglong)((longlong)puVar15 - (longlong)puVar12) < uVar13);
            }
          }
          return 1;
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* ObscuredString op_Implicit(String) */

ObscuredString *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_op_Implicit(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (String *)0x0) {
    return (ObscuredString *)0x0;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pBVar1 = ObscuredString_InternalEncrypt(value,(MethodInfo *)0x0);
  pOVar2 = (ObscuredString *)
           FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  iVar3 = iRam_?;
  (pOVar2->fields).currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pOVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pOVar2->fields).hiddenValue = pBVar1;
  iVar9 = 0;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(pOVar2->fields).hiddenValue >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar8);
  }
  (pOVar2->fields).fakeValue = (String *)0x0;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(pOVar2->fields).fakeValue >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  (pOVar2->fields).inited = 1;
  bVar10 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar10 != 0) &&
     (bVar8 = iRam_? != 0, (pOVar2->fields).fakeValue = value, bVar8)) {
    uVar4 = (uint)((ulonglong)&(pOVar2->fields).fakeValue >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return pOVar2;
}


/* String op_Implicit(ObscuredString) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_op_Implicit_1(ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (ObscuredString *)0x0) {
    return (String *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((value->fields).inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    bVar1 = iRam_? != 0;
    (value->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&value->fields >> 0xc);
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
    pBVar6 = ObscuredString_InternalEncrypt(::StringLiteral__,(MethodInfo *)0x0);
    iVar7 = iRam_?;
    (value->fields).hiddenValue = pBVar6;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(value->fields).hiddenValue >> 0xc);
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
        iVar7 = iRam_?;
      } while (!bVar1);
    }
    (value->fields).fakeValue = ::StringLiteral__;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(value->fields).fakeValue >> 0xc);
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
    (value->fields).inited = 1;
  }
  pSVar8 = (value->fields).currentCryptoKey;
  if ((pSVar8 == (String *)0x0) || ((pSVar8->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    pSVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar6 = (value->fields).hiddenValue;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar6 == (Byte__Array *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar9)();
    return pSVar8;
  }
  val = (Char__Array *)FUN_?(TypeInfo__System__Char);
  mscorlib.dll::System::Buffer::Buffer_BlockCopy
            ((Array *)pBVar6,0,(Array *)val,0,(int32_t)pBVar6->max_length,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0);
  pSVar8 = ObscuredString_EncryptDecrypt_1(pSVar10,pSVar8,(MethodInfo *)0x0);
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((((bVar11 != 0) && (pSVar10 = (value->fields).fakeValue, pSVar10 != (String *)0x0)) &&
      ((pSVar10->fields)._stringLength != 0)) &&
     ((pSVar8 != pSVar10 &&
      (((pSVar8 == (String *)0x0 ||
        ((pSVar8->fields)._stringLength != (pSVar10->fields)._stringLength)) ||
       (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar8->fields)._firstChar,
                           (uint8_t *)&(pSVar10->fields)._firstChar,
                           (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar11 == 0)))))) {
    plVar12 = (longlong *)FUN_?();
    if (plVar12 == (longlong *)0x0) goto code_?;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
  }
  return pSVar8;
}


/* Boolean op_Inequality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Inequality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  bVar1 = ObscuredString_op_Equality(a,b,(MethodInfo *)0x0);
  return bVar1 ^ 1;
}

