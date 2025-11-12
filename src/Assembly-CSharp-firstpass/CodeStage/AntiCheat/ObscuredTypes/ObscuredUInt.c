
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_ApplyNewCryptoKey(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar1 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  return;
}


/* UInt32 Decrypt(UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Decrypt(uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->
                 cryptoKey;
}


/* UInt32 Decrypt(UInt32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Decrypt_1(uint32_t value,uint32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->
                 cryptoKey;
}


/* UInt32 Encrypt(UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Encrypt(uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->
                 cryptoKey;
}


/* UInt32 Encrypt(UInt32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Encrypt_1(uint32_t value,uint32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_Equals(ObscuredUInt *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_0).element_class) {
        uVar2 = *(uint32_t *)&obj[1].klass;
        value = *(uint32_t *)((longlong)&obj[1].klass + 4);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this->currentCryptoKey != uVar2) {
          uVar3 = this->hiddenValue;
          key = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          uVar3 = ObscuredUInt_Decrypt_1(uVar3,key,(MethodInfo *)0x0);
          uVar2 = ObscuredUInt_Decrypt_1(value,uVar2,(MethodInfo *)0x0);
          return uVar3 == uVar2;
        }
        return this->hiddenValue == value;
      }
      FUN_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredUInt) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_Equals_1(ObscuredUInt *this,ObscuredUInt *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  if (this->currentCryptoKey != obj->currentCryptoKey) {
    uVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar1 = ObscuredUInt_Decrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredUInt_Decrypt_1(obj->hiddenValue,obj->currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar1 == obj->hiddenValue;
}


/* UInt32 GetDecrypted() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_GetDecrypted(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_Decrypt_1(uVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (uVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      uVar1 = (*pcVar4)();
      return uVar1;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return uVar1;
}


/* UInt32 GetEncrypted() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_GetEncrypted(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredUInt_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
        ObscuredUInt_GetHashCode(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_Decrypt_1(uVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (uVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return uVar1;
}


/* UInt32 InternalDecrypt() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_InternalDecrypt(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_Decrypt_1(uVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this->fakeValue != 0)) && (uVar1 != this->fakeValue)) {
    plVar3 = (longlong *)FUN_?();
    if (plVar3 == (longlong *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      uVar1 = (*pcVar4)();
      return uVar1;
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  return uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_RandomizeCryptoKey(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  key = (*pcRam_?)(1,0x7fffffff);
  this->currentCryptoKey = key;
  uVar1 = ObscuredUInt_Encrypt_1(uVar1,key,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetEncrypted(ObscuredUInt *this,uint32_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetNewCryptoKey(uint32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatUInt32
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_1(ObscuredUInt *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatUInt32
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar4;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_2(ObscuredUInt *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatUInt32
                     (value,aRStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_3
                   (ObscuredUInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatUInt32
                     (value,aRStack_3,provider,(MethodInfo *)0x0);
  return pSVar4;
}


/* ObscuredUInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey = uVar1;
  return;
}


/* ObscuredUInt(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt__ctor(ObscuredUInt *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredUInt op_Decrement(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Decrement
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_InternalDecrypt(input,(MethodInfo *)0x0);
  uVar2 = ObscuredUInt_Encrypt_1(uVar1 - 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = uVar1 - 1;
  }
  uVar1 = input->hiddenValue;
  uVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined3 *)&input->field_0xd;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = uVar1;
  __return_storage_ptr__->fakeValue = uVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar4;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Explicit(ObscuredUInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Explicit(ObscuredInt *__return_storage_ptr__,ObscuredUInt *value,MethodInfo *method)

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
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredUInt_InternalDecrypt(value,(MethodInfo *)0x0);
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
  iVar1 = ObscuredInt::ObscuredInt_Encrypt(value_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar4 = 0;
  if (bVar3 != 0) {
    uVar4 = value_00;
  }
  uStack_5 = (ulonglong)CONCAT14(1,uVar4);
  __return_storage_ptr__->currentCryptoKey = iVar2;
  __return_storage_ptr__->hiddenValue = iVar1;
  __return_storage_ptr__->fakeValue = (undefined4)uStack_5;
  __return_storage_ptr__->inited = uStack_5._4_1_;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uStack_5._5_3_;
  return __return_storage_ptr__;
}


/* ObscuredUInt op_Implicit(UInt32) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Implicit(ObscuredUInt *__return_storage_ptr__,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  __return_storage_ptr__->inited = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredUInt_Encrypt(value,(MethodInfo *)0x0);
  ObscuredUInt__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* UInt32 op_Implicit(ObscuredUInt) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_op_Implicit_1(ObscuredUInt *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_InternalDecrypt(value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredUInt op_Increment(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Increment
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredUInt_InternalDecrypt(input,(MethodInfo *)0x0);
  uVar2 = ObscuredUInt_Encrypt_1(uVar1 + 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = uVar1 + 1;
  }
  uVar1 = input->hiddenValue;
  uVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined3 *)&input->field_0xd;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = uVar1;
  __return_storage_ptr__->fakeValue = uVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar4;
  return __return_storage_ptr__;
}

