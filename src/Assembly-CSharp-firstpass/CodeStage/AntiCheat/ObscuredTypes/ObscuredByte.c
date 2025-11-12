
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_ApplyNewCryptoKey(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar1 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  return;
}


/* Byte EncryptDecrypt(Byte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_EncryptDecrypt(uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->
                 cryptoKey;
}


/* Byte EncryptDecrypt(Byte, Byte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_EncryptDecrypt_1(uint8_t value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_Equals(ObscuredByte *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredByte__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_0).element_class) {
        uVar2 = *(undefined4 *)&obj[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar3 = this->hiddenValue;
        uVar4 = (uint8_t)uVar2;
        uStackX_11 = (uint8_t)((uint)uVar2 >> 8);
        if (this->currentCryptoKey != uVar4) {
          key = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          uVar3 = ObscuredByte_EncryptDecrypt_1(uVar3,key,(MethodInfo *)0x0);
          uVar4 = ObscuredByte_EncryptDecrypt_1(uStackX_11,uVar4,(MethodInfo *)0x0);
          return uVar3 == uVar4;
        }
        return uVar3 == uStackX_11;
      }
      FUN_?(obj);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredByte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_Equals_1(ObscuredByte *this,ObscuredByte obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  uStackX_11 = obj.hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    uVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar1 = ObscuredByte_EncryptDecrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredByte_EncryptDecrypt_1(uStackX_11,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar1 == uStackX_11;
}


/* Byte GetDecrypted() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetDecrypted(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    uVar1 = ObscuredByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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


/* Byte GetEncrypted() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetEncrypted(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredByte_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetHashCode(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
  return (int32_t)uVar1;
}


/* Byte InternalDecrypt() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_InternalDecrypt(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    uVar1 = ObscuredByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_RandomizeCryptoKey(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
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
  key = (*pcRam_?)(1,0xff);
  this->currentCryptoKey = key;
  uVar1 = ObscuredByte_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_SetEncrypted(ObscuredByte *this,uint8_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_SetNewCryptoKey(uint8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((uint)uVar1,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_1(ObscuredByte *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((uint)uVar1,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar5;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_2(ObscuredByte *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((uint)uVar1,aRStack_2,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_3
                   (ObscuredByte *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((uint)uVar1,aRStack_4,provider,(MethodInfo *)0x0);
  return pSVar5;
}


/* ObscuredByte() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
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
          CryptoKeyGenerator_GenerateKey(0,0xff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey =
       (uint8_t)iVar1;
  return;
}


/* ObscuredByte(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte__ctor(ObscuredByte *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredByte op_Decrement(ObscuredByte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Decrement(ObscuredByte input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredByte_EncryptDecrypt_1(uVar1 - 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
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


/* ObscuredByte op_Implicit(Byte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Implicit(uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OStackX_8._0_3_ = (uint3)uVar1 << 8;
  OStackX_8.inited = 1;
  OStackX_8.currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar1 = 0;
  if (bVar2 != 0) {
    uVar1 = value;
  }
  OStackX_8.fakeValue = uVar1;
  OStackX_8.inited = 1;
  return OStackX_8;
}


/* Byte op_Implicit(ObscuredByte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_op_Implicit_1(ObscuredByte value,MethodInfo *method)

{
  aOStackX_8[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredByte op_Increment(ObscuredByte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Increment(ObscuredByte input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredByte_EncryptDecrypt_1(uVar1 + 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
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

