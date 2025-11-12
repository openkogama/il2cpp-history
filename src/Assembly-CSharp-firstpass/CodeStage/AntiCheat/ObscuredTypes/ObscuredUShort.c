
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_ApplyNewCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    uVar2 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
              cryptoKey;
    }
    this->hiddenValue = uVar1 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  return;
}


/* UInt16 EncryptDecrypt(UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
                 cryptoKey;
}


/* UInt16 EncryptDecrypt(UInt16, UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt_1(uint16_t value,uint16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals(ObscuredUShort *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUShort__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_0).element_class) {
        pOVar2 = obj[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar3 = this->hiddenValue;
        uVar4 = (uint16_t)pOVar2;
        uStackX_12 = (uint16_t)((ulonglong)pOVar2 >> 0x10);
        if (this->currentCryptoKey != uVar4) {
          key = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
                       field_0x1c == 0) {
            FUN_?();
          }
          uVar3 = ObscuredUShort_EncryptDecrypt_1(uVar3,key,(MethodInfo *)0x0);
          uVar4 = ObscuredUShort_EncryptDecrypt_1(uStackX_12,uVar4,(MethodInfo *)0x0);
          return uVar3 == uVar4;
        }
        return uVar3 == uStackX_12;
      }
      FUN_?(obj);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredUShort) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals_1(ObscuredUShort *this,ObscuredUShort obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  uStackX_12 = obj.hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    uVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredUShort_EncryptDecrypt_1(uStackX_12,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar1 == uStackX_12;
}


/* UInt16 GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetDecrypted(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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


/* UInt16 GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetEncrypted(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredUShort_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
        ObscuredUShort_GetHashCode(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  return (int32_t)uVar1;
}


/* UInt16 InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_InternalDecrypt(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_RandomizeCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
  key = (*pcRam_?)(1,0x7fff);
  this->currentCryptoKey = key;
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetEncrypted(ObscuredUShort *this,uint16_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    uVar2 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetNewCryptoKey(uint16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatUInt32
                     ((uint)uVar1,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_1(ObscuredUShort *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
    puVar2 = (uint16_t *)0x0;
    iVar3 = 0;
  }
  else {
    aRStack_4[0]._pointer._value = &(format->fields)._firstChar;
    aRStack_4[0]._12_4_ = 0;
    iVar3 = (format->fields)._stringLength;
    aRStack_4[0]._length = iVar3;
    puVar2 = aRStack_4[0]._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_4[0]._12_4_ = 0;
  aRStack_4[0]._pointer._value = puVar2;
  aRStack_4[0]._length = iVar3;
  pSVar5 = mscorlib.dll::System::Number::Number_FormatUInt32
                     ((uint)uVar1,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar5;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_2
                   (ObscuredUShort *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatUInt32
                     ((uint)uVar1,aRStack_2,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_3
                   (ObscuredUShort *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
    puVar2 = (uint16_t *)0x0;
    iVar3 = 0;
  }
  else {
    aRStack_4[0]._pointer._value = &(format->fields)._firstChar;
    aRStack_4[0]._12_4_ = 0;
    iVar3 = (format->fields)._stringLength;
    aRStack_4[0]._length = iVar3;
    puVar2 = aRStack_4[0]._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_4[0]._12_4_ = 0;
  aRStack_4[0]._pointer._value = puVar2;
  aRStack_4[0]._length = iVar3;
  pSVar5 = mscorlib.dll::System::Number::Number_FormatUInt32
                     ((uint)uVar1,aRStack_4,provider,(MethodInfo *)0x0);
  return pSVar5;
}


/* ObscuredUShort() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
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
          CryptoKeyGenerator_GenerateKey(0,0x7fff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey =
       (uint16_t)iVar1;
  return;
}


/* ObscuredUShort(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__ctor(ObscuredUShort *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  this->fakeValue = 0;
  this->currentCryptoKey = uVar1;
  this->hiddenValue = value;
  this->inited = 1;
  return;
}


/* ObscuredUShort op_Decrement(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Decrement(ObscuredUShort input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredUShort_EncryptDecrypt_1
                    (uVar1 - 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
  aOStackX_8[0].hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = aOStackX_8[0].fakeValue;
  if (bVar3 != 0) {
    uVar2 = uVar1 - 1;
  }
  aOStackX_8[0].fakeValue = uVar2;
  return aOStackX_8[0];
}


/* ObscuredUShort op_Implicit(UInt16) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Implicit(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  OStackX_18._0_6_ = (uint6)uVar1 << 0x10;
  OStackX_18.inited = 1;
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar3 = 0;
  if (bVar2 != 0) {
    uVar3 = value;
  }
  OStackX_18._0_4_ = SUB74(CONCAT52(OStackX_18._2_5_,uVar1),0);
  OStackX_18.fakeValue = uVar3;
  OStackX_18.inited = 1;
  OStackX_18._7_1_ = 0;
  return OStackX_18;
}


/* UInt16 op_Implicit(ObscuredUShort) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_op_Implicit_1(ObscuredUShort value,MethodInfo *method)

{
  aOStackX_8[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredUShort op_Increment(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Increment(ObscuredUShort input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = ObscuredUShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredUShort_EncryptDecrypt_1
                    (uVar1 + 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
  aOStackX_8[0].hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = aOStackX_8[0].fakeValue;
  if (bVar3 != 0) {
    uVar2 = uVar1 + 1;
  }
  aOStackX_8[0].fakeValue = uVar2;
  return aOStackX_8[0];
}

