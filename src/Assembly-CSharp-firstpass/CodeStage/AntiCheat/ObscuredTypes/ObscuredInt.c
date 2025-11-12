
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_ApplyNewCryptoKey(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey)
  {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar3 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  }
  return;
}


/* Int32 Decrypt(Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->
                 cryptoKey;
}


/* Int32 Decrypt(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Decrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->
                 cryptoKey;
}


/* Int32 Encrypt(Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->
                 cryptoKey;
}


/* Int32 Encrypt(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_Equals(ObscuredInt *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        key = *(int *)&obj[1].klass;
        value_00 = *(int *)((longlong)&obj[1].klass + 4);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = this->hiddenValue;
        if (this->currentCryptoKey != key) {
          iVar2 = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar2 = ObscuredInt_Decrypt_1(value,iVar2,(MethodInfo *)0x0);
          iVar3 = ObscuredInt_Decrypt_1(value_00,key,(MethodInfo *)0x0);
          return iVar2 == iVar3;
        }
        return value == value_00;
      }
      FUN_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredInt) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_Equals_1(ObscuredInt *this,ObscuredInt *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = this->hiddenValue;
  if (this->currentCryptoKey != obj->currentCryptoKey) {
    iVar1 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = ObscuredInt_Decrypt_1(value,iVar1,(MethodInfo *)0x0);
    iVar2 = ObscuredInt_Decrypt_1(obj->hiddenValue,obj->currentCryptoKey,(MethodInfo *)0x0);
    return iVar1 == iVar2;
  }
  return value == obj->hiddenValue;
}


/* Int32 GetDecrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetDecrypted(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_Decrypt_1(iVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (iVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return iVar1;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetEncrypted(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredInt_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetHashCode(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_Decrypt_1(iVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (iVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return iVar1;
}


/* Int32 InternalDecrypt() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_InternalDecrypt(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_Decrypt_1(iVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (iVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return iVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_RandomizeCryptoKey(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  this->hiddenValue = iVar1;
  while ((pcVar2 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0))) {
    pcRam_? = pcVar2;
    key = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = key;
    if (key != 0) {
      iVar1 = this->hiddenValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar1 = ObscuredInt_Encrypt_1(iVar1,key,(MethodInfo *)0x0);
      this->hiddenValue = iVar1;
      return;
    }
  }
  uVar3 = func_?(&UNK_?);
  FUN_?(uVar3,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetEncrypted(ObscuredInt *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar2 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_1(ObscuredInt *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar1 = (uint16_t *)0x0;
    iVar2 = 0;
  }
  else {
    aRStack_3[0]._pointer._value = &(format->fields)._firstChar;
    aRStack_3[0]._12_4_ = 0;
    iVar2 = (format->fields)._stringLength;
    aRStack_3[0]._length = iVar2;
    puVar1 = aRStack_3[0]._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._12_4_ = 0;
  aRStack_3[0]._pointer._value = puVar1;
  aRStack_3[0]._length = iVar2;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar4;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_2(ObscuredInt *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
                     (value,aRStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_3
                   (ObscuredInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar1 = (uint16_t *)0x0;
    iVar2 = 0;
  }
  else {
    aRStack_3[0]._pointer._value = &(format->fields)._firstChar;
    aRStack_3[0]._12_4_ = 0;
    iVar2 = (format->fields)._stringLength;
    aRStack_3[0]._length = iVar2;
    puVar1 = aRStack_3[0]._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._12_4_ = 0;
  aRStack_3[0]._pointer._value = puVar1;
  aRStack_3[0]._length = iVar2;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_3,provider,(MethodInfo *)0x0);
  return pSVar4;
}


/* ObscuredInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey = iVar1;
  return;
}


/* ObscuredInt(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt__ctor(ObscuredInt *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredInt op_Decrement(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Decrement(ObscuredInt *__return_storage_ptr__,ObscuredInt *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(input,(MethodInfo *)0x0);
  iVar2 = ObscuredInt_Encrypt_1(iVar1 + -1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = iVar1 + -1;
  }
  iVar1 = input->hiddenValue;
  iVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined3 *)&input->field_0xd;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = iVar1;
  __return_storage_ptr__->fakeValue = iVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar4;
  return __return_storage_ptr__;
}


/* ObscuredUInt op_Explicit(ObscuredInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Explicit(ObscuredUInt *__return_storage_ptr__,ObscuredInt *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredInt_InternalDecrypt(value,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt::ObscuredUInt_Encrypt(value_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar4 = 0;
  if (bVar3 != 0) {
    uVar4 = value_00;
  }
  uStack_5 = (ulonglong)CONCAT14(1,uVar4);
  __return_storage_ptr__->currentCryptoKey = uVar2;
  __return_storage_ptr__->hiddenValue = uVar1;
  __return_storage_ptr__->fakeValue = (undefined4)uStack_5;
  __return_storage_ptr__->inited = uStack_5._4_1_;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uStack_5._5_3_;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Implicit(Int32) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit(ObscuredInt *__return_storage_ptr__,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  __return_storage_ptr__->inited = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  ObscuredInt__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Int32 op_Implicit(ObscuredInt) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_op_Implicit_1(ObscuredInt *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(value,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredFloat op_Implicit(ObscuredInt) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_2
          (ObscuredFloat *__return_storage_ptr__,ObscuredInt *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(value,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_2[0].fakeValue = 0.0;
  aOStack_2[0].inited = 0;
  aOStack_2[0]._21_3_ = 0;
  aOStack_2[0].currentCryptoKey = 0;
  aOStack_2[0].hiddenValue.b1 = 0;
  aOStack_2[0].hiddenValue.b2 = 0;
  aOStack_2[0].hiddenValue.b3 = 0;
  aOStack_2[0].hiddenValue.b4 = 0;
  aOStack_2[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredFloat::ObscuredFloat_InternalEncrypt((float)iVar1,(MethodInfo *)0x0);
  ObscuredFloat::ObscuredFloat__ctor(aOStack_2,value_00,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    aOStack_2[0].fakeValue = (float)iVar1;
  }
  __return_storage_ptr__->currentCryptoKey = aOStack_2[0].currentCryptoKey;
  __return_storage_ptr__->hiddenValue = aOStack_2[0].hiddenValue;
  __return_storage_ptr__->hiddenValueOld = aOStack_2[0].hiddenValueOld;
  __return_storage_ptr__->fakeValue = aOStack_2[0].fakeValue;
  __return_storage_ptr__->inited = aOStack_2[0].inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = aOStack_2[0]._21_3_;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(ObscuredInt) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_3
          (ObscuredDouble *__return_storage_ptr__,ObscuredInt *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(value,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_2.currentCryptoKey = 0;
  OStack_2.hiddenValue.b1 = 0;
  OStack_2.hiddenValue.b2 = 0;
  OStack_2.hiddenValue.b3 = 0;
  OStack_2.hiddenValue.b4 = 0;
  OStack_2.hiddenValue.b5 = 0;
  OStack_2.hiddenValue.b6 = 0;
  OStack_2.hiddenValue.b7 = 0;
  OStack_2.hiddenValue.b8 = 0;
  OStack_2.inited = 0;
  OStack_2._33_7_ = 0;
  OStack_2.hiddenValueOld = (Byte__Array *)0x0;
  OStack_2.fakeValue = 0.0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  value_00 = ObscuredDouble::ObscuredDouble_InternalEncrypt((double)iVar1,(MethodInfo *)0x0);
  ObscuredDouble::ObscuredDouble__ctor(&OStack_2,value_00,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    OStack_2.fakeValue = (double)iVar1;
  }
  __return_storage_ptr__->currentCryptoKey = OStack_2.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = OStack_2.hiddenValue;
  __return_storage_ptr__->hiddenValueOld = OStack_2.hiddenValueOld;
  __return_storage_ptr__->fakeValue = OStack_2.fakeValue;
  __return_storage_ptr__->inited = OStack_2.inited;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = OStack_2._33_7_;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Increment(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Increment(ObscuredInt *__return_storage_ptr__,ObscuredInt *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(input,(MethodInfo *)0x0);
  iVar2 = ObscuredInt_Encrypt_1(iVar1 + 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = iVar1 + 1;
  }
  iVar1 = input->hiddenValue;
  iVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined3 *)&input->field_0xd;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = iVar1;
  __return_storage_ptr__->fakeValue = iVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar4;
  return __return_storage_ptr__;
}

