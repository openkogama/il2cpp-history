
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ApplyNewCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar3 = ObscuredString_InternalEncrypt_1
                       (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                               static_fields->cryptoKey,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar3;
    func_?();
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    (this->fields).currentCryptoKey = pSVar1;
    func_?(&this->fields,pSVar1);
  }
  return;
}


/* Boolean ArraysEquals(Byte[], Byte[]) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ArraysEquals(Byte__Array *a1,Byte__Array *a2,MethodInfo *method)

{
  if (a1 != a2) {
    if (((a1 == (Byte__Array *)0x0) || (a2 == (Byte__Array *)0x0)) ||
       (a1->max_length != a2->max_length)) {
      return 0;
    }
    for (uVar1 = 0; (int)uVar1 < (int)a1->max_length; uVar1 = uVar1 + 1) {
      if ((a1->max_length <= uVar1) || (a2->max_length <= uVar1)) {
        func_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (a1->vector[uVar1] != a2->vector[uVar1]) {
        return 0;
      }
    }
  }
  return 1;
}


/* String EncryptDecrypt(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar1 = ObscuredString_EncryptDecrypt_1(value,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptDecrypt(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return ::StringLiteral__;
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  }
  if ((key != (String *)0x0) && (value != (String *)0x0)) {
    iVar2 = (value->fields)._stringLength;
    iVar3 = iVar2;
    val = (Char__Array *)func_?(TypeInfo__System__Char);
    index = 0;
    if (0 < iVar2) {
      puVar4 = val->vector;
      do {
        uVar5 = mscorlib.dll::System::String::String_get_Chars(value,index,(MethodInfo *)0x0);
        uVar6 = mscorlib.dll::System::String::String_get_Chars
                          (key,(int)index % unaff_ESI,(MethodInfo *)0x0);
        if (val == (Char__Array *)0x0) goto code_?;
        if (val->max_length <= index) {
          func_?();
          goto code_?;
        }
        index = index + 1;
        *puVar4 = uVar6 ^ uVar5;
        puVar4 = puVar4 + 1;
      } while ((int)index < iVar3);
    }
    pSVar7 = mscorlib.dll::System::String::String_CreateString_4
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar7;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals(ObscuredString *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if (obj->klass == (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString
       ) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      this_00 = (ObscuredString *)0x0;
      if (obj->klass ==
          (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
        this_00 = (ObscuredString *)obj;
      }
      pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString;
      if (this_00 == (ObscuredString *)0x0) {
code_?:
        func_?(obj,pOVar2);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        cRam_? = '\x01';
      }
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        ((this->fields).currentCryptoKey,(this_00->fields).currentCryptoKey,
                         (MethodInfo *)0x0);
      if (bVar4 == 0) {
        a = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
        b = ObscuredString_InternalDecrypt(this_00,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
        return bVar4;
      }
      pBVar5 = (this->fields).hiddenValue;
      pBVar6 = (this_00->fields).hiddenValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      if (pBVar5 != pBVar6) {
        if (((pBVar5 == (Byte__Array *)0x0) || (pBVar6 == (Byte__Array *)0x0)) ||
           (pBVar5->max_length != pBVar6->max_length)) {
          return 0;
        }
        for (uVar7 = 0; (int)uVar7 < (int)pBVar5->max_length; uVar7 = uVar7 + 1) {
          if ((pBVar5->max_length <= uVar7) || (pBVar6->max_length <= uVar7)) {
            func_?();
            pOVar2 = extraout_ECX;
            obj = extraout_EDX;
            goto code_?;
          }
          if (*(uint8_t *)((int)pBVar6 + (int)pBVar5 + uVar7 + (0x10 - (int)pBVar6)) !=
              pBVar6->vector[uVar7]) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_1(ObscuredString *this,ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (value != (ObscuredString *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      ((this->fields).currentCryptoKey,(value->fields).currentCryptoKey,
                       (MethodInfo *)0x0);
    if (bVar1 == 0) {
      a = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
      b = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar1;
    }
    pBVar2 = (this->fields).hiddenValue;
    pBVar3 = (value->fields).hiddenValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    if (pBVar2 != pBVar3) {
      if (((pBVar2 == (Byte__Array *)0x0) || (pBVar3 == (Byte__Array *)0x0)) ||
         (pBVar2->max_length != pBVar3->max_length)) {
        return 0;
      }
      for (uVar4 = 0; (int)uVar4 < (int)pBVar2->max_length; uVar4 = uVar4 + 1) {
        if ((pBVar2->max_length <= uVar4) || (pBVar3->max_length <= uVar4)) {
          func_?();
          pcVar5 = (code *)swi(3);
          bVar1 = (*pcVar5)();
          return bVar1;
        }
        if (*(uint8_t *)((int)pBVar3 + (int)pBVar2 + uVar4 + (0x10 - (int)pBVar3)) !=
            pBVar3->vector[uVar4]) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}


/* Boolean Equals(ObscuredString, StringComparison) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_2
               (ObscuredString *this,ObscuredString *value,StringComparison__Enum comparisonType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (value != (ObscuredString *)0x0) {
    a = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    b = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_Equals_4(a,b,comparisonType,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


/* Byte[] GetBytes(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_GetBytes(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  if (str != (String *)0x0) {
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,(str->fields)._stringLength * 2);
    src = mscorlib.dll::System::String::String_ToCharArray(str,(MethodInfo *)0x0);
    if (pBVar1 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar1,0,pBVar1->max_length,(MethodInfo *)0x0);
      return pBVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* String GetEncrypted() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetEncrypted(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBVar3 = ObscuredString_InternalEncrypt_1
                       (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                               static_fields->cryptoKey,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar3;
    func_?();
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    (this->fields).currentCryptoKey = pSVar1;
    func_?(&this->fields,pSVar1);
  }
  pBVar3 = (this->fields).hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (pBVar3 != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)pBVar3->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)pBVar3,0,(Array *)val,0,pBVar3->max_length,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_CreateString_4
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_GetHashCode(ObscuredString *this,MethodInfo *method)

{
  pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable).GetHashCode.methodPtr)();
    return iVar2;
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* String GetString(Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetString(Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)bytes->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)bytes,0,(Array *)val,0,bytes->max_length,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_CreateString_4
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String InternalDecrypt() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_InternalDecrypt(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    (this->fields).currentCryptoKey = pSVar1;
    func_?(&this->fields,pSVar1);
    pSVar1 = ::StringLiteral__;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pBVar2 = ObscuredString_InternalEncrypt_1
                       (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                               static_fields->cryptoKey,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar2;
    func_?(&(this->fields).hiddenValue,pBVar2);
    (this->fields).fakeValue = ::StringLiteral__;
    func_?(&(this->fields).fakeValue,::StringLiteral__);
    (this->fields).inited = 1;
  }
  pSVar1 = (this->fields).currentCryptoKey;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar2 = (this->fields).hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (pBVar2 != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)pBVar2->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)pBVar2,0,(Array *)val,0,pBVar2->max_length,(MethodInfo *)0x0);
    value = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0)
    ;
    pSVar1 = ObscuredString_EncryptDecrypt_1(value,pSVar1,(MethodInfo *)0x0);
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((this->fields).fakeValue,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,(this->fields).fakeValue,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
            cRam_? = '\x01';
          }
          pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                   static_fields->_Instance_k__BackingField;
          if (pOVar4 == (ObscuredCheatingDetector *)0x0) goto code_?;
          (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
                    (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
        }
      }
    }
    return pSVar1;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Byte[] InternalEncrypt(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pBVar1 = ObscuredString_InternalEncrypt_1
                     (value,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  return pBVar1;
}


/* Byte[] InternalEncrypt(String, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  this = ObscuredString_EncryptDecrypt_1(value,key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  if (this != (String *)0x0) {
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,(this->fields)._stringLength * 2)
    ;
    src = mscorlib.dll::System::String::String_ToCharArray(this,(MethodInfo *)0x0);
    if (pBVar1 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar1,0,pBVar1->max_length,(MethodInfo *)0x0);
      return pBVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_RandomizeCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  value = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  IStack_1.m_value =
       UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                 (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  (this->fields).currentCryptoKey = pSVar2;
  func_?(&this->fields,pSVar2);
  pSVar2 = (this->fields).currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  IStack_1.m_value = (int32_t)&UNK_?;
  pBVar3 = ObscuredString_InternalEncrypt_1(value,pSVar2,(MethodInfo *)0x0);
  (this->fields).hiddenValue = pBVar3;
  func_?();
  return;
}


/* Void SetEncrypted(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetEncrypted(ObscuredString *this,String *encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  (this->fields).inited = 1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  if (encrypted != (String *)0x0) {
    dst = (Byte__Array *)
          func_?(TypeInfo__System__Byte,(encrypted->fields)._stringLength * 2);
    src = mscorlib.dll::System::String::String_ToCharArray(encrypted,(MethodInfo *)0x0);
    if (dst != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)dst,0,dst->max_length,(MethodInfo *)0x0);
      (this->fields).hiddenValue = dst;
      func_?(&(this->fields).hiddenValue,dst);
      bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                        ((MethodInfo *)0x0);
      if (bVar1 != 0) {
        pSVar2 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
        (this->fields).fakeValue = pSVar2;
        func_?();
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetNewCryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetNewCryptoKey(String *newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = newKey;
  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields,
                  newKey);
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_ToString(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    (this->fields).currentCryptoKey = pSVar1;
    func_?(&this->fields,pSVar1);
    pSVar1 = ::StringLiteral__;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pBVar2 = ObscuredString_InternalEncrypt_1
                       (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                               static_fields->cryptoKey,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar2;
    func_?(&(this->fields).hiddenValue,pBVar2);
    (this->fields).fakeValue = ::StringLiteral__;
    func_?(&(this->fields).fakeValue,::StringLiteral__);
    (this->fields).inited = 1;
  }
  pSVar1 = (this->fields).currentCryptoKey;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar2 = (this->fields).hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (pBVar2 != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)pBVar2->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)pBVar2,0,(Array *)val,0,pBVar2->max_length,(MethodInfo *)0x0);
    value = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0)
    ;
    pSVar1 = ObscuredString_EncryptDecrypt_1(value,pSVar1,(MethodInfo *)0x0);
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((this->fields).fakeValue,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,(this->fields).fakeValue,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
            cRam_? = '\x01';
          }
          pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                   static_fields->_Instance_k__BackingField;
          if (pOVar4 == (ObscuredCheatingDetector *)0x0) goto code_?;
          (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
                    (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
        }
      }
    }
    return pSVar1;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* ObscuredString() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  IStack_1.m_value =
       Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
       CryptoKeyGenerator_GenerateKey(0,9999,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = pSVar2;
  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields,
                  pSVar2);
  return;
}


/* ObscuredString(Byte[]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__ctor_1(ObscuredString *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  (this->fields).currentCryptoKey = pSVar1;
  func_?(&this->fields,pSVar1);
  (this->fields).hiddenValue = value;
  func_?(&(this->fields).hiddenValue,value);
  (this->fields).fakeValue = (String *)0x0;
  func_?(&(this->fields).fakeValue,0);
  (this->fields).inited = 1;
  return;
}


/* Int32 get_Length() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_get_Length(ObscuredString *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields).hiddenValue;
  if (pBVar2 != (Byte__Array *)0x0) {
    return (int)pBVar2->max_length / 2;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Boolean op_Equality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Equality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (a != b) {
    if ((a == (ObscuredString *)0x0) || (b == (ObscuredString *)0x0)) {
      return 0;
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      ((a->fields).currentCryptoKey,(b->fields).currentCryptoKey,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      a_00 = ObscuredString_InternalDecrypt(a,(MethodInfo *)0x0);
      b_00 = ObscuredString_InternalDecrypt(b,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a_00,b_00,(MethodInfo *)0x0);
      return bVar1;
    }
    pBVar2 = (a->fields).hiddenValue;
    pBVar3 = (b->fields).hiddenValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    if (pBVar2 != pBVar3) {
      if (((pBVar2 == (Byte__Array *)0x0) || (pBVar3 == (Byte__Array *)0x0)) ||
         (pBVar2->max_length != pBVar3->max_length)) {
        return 0;
      }
      for (uVar4 = 0; (int)uVar4 < (int)pBVar2->max_length; uVar4 = uVar4 + 1) {
        if ((pBVar2->max_length <= uVar4) || (pBVar3->max_length <= uVar4)) {
          func_?();
          pcVar5 = (code *)swi(3);
          bVar1 = (*pcVar5)();
          return bVar1;
        }
        if (pBVar2->vector[uVar4] !=
            *(uint8_t *)((int)pBVar2 + (int)pBVar3 + uVar4 + (0x10 - (int)pBVar2))) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 1;
}


/* ObscuredString op_Implicit(String) */

ObscuredString *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_op_Implicit(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (value == (String *)0x0) {
    return (ObscuredString *)0x0;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pBVar1 = ObscuredString_InternalEncrypt_1
                     (value,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                            static_fields->cryptoKey,(MethodInfo *)0x0);
  pOVar2 = (ObscuredString *)
           func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  if (pOVar2 != (ObscuredString *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pOVar2,ExceptionArgument__Enum_obj,unaff_EBP);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (pOVar2->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    func_?(&pOVar2->fields);
    (pOVar2->fields).hiddenValue = pBVar1;
    func_?(&(pOVar2->fields).hiddenValue,pBVar1);
    (pOVar2->fields).fakeValue = (String *)0x0;
    func_?(&(pOVar2->fields).fakeValue,0);
    (pOVar2->fields).inited = 1;
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      (pOVar2->fields).fakeValue = value;
      func_?();
    }
    return pOVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar2 = (ObscuredString *)(*pcVar4)();
  return pOVar2;
}


/* String op_Implicit(ObscuredString) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_op_Implicit_1(ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if (value == (ObscuredString *)0x0) {
    return (String *)0x0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString,unaff_EBP);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((value->fields).inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
    (value->fields).currentCryptoKey = pSVar1;
    func_?(&value->fields,pSVar1);
    pSVar1 = ::StringLiteral__;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pBVar2 = ObscuredString_InternalEncrypt_1
                       (pSVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->
                               static_fields->cryptoKey,(MethodInfo *)0x0);
    (value->fields).hiddenValue = pBVar2;
    func_?(&(value->fields).hiddenValue,pBVar2);
    (value->fields).fakeValue = ::StringLiteral__;
    func_?(&(value->fields).fakeValue,::StringLiteral__);
    (value->fields).inited = 1;
  }
  pSVar1 = (value->fields).currentCryptoKey;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar2 = (value->fields).hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (pBVar2 != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)pBVar2->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)pBVar2,0,(Array *)val,0,pBVar2->max_length,(MethodInfo *)0x0);
    value_00 = mscorlib.dll::System::String::String_CreateString_4
                         ((String *)0x0,val,(MethodInfo *)0x0);
    pSVar1 = ObscuredString_EncryptDecrypt_1(value_00,pSVar1,(MethodInfo *)0x0);
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((value->fields).fakeValue,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,(value->fields).fakeValue,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
            cRam_? = '\x01';
          }
          pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                   static_fields->_Instance_k__BackingField;
          if (pOVar4 == (ObscuredCheatingDetector *)0x0) goto code_?;
          (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
                    (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
        }
      }
    }
    return pSVar1;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Boolean op_Inequality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Inequality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  bVar1 = ObscuredString_op_Equality(a,b,(MethodInfo *)0x0);
  return bVar1 == 0;
}

