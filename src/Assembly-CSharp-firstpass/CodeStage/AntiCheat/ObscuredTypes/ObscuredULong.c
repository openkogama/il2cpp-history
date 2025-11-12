
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_ApplyNewCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = uVar1 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
  }
  return;
}


/* UInt64 Decrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                 cryptoKey;
}


/* UInt64 Decrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                 cryptoKey;
}


/* UInt64 Encrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                 cryptoKey;
}


/* UInt64 Encrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals(ObscuredULong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredULong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_0).element_class) {
        auStack_2._0_8_ = obj[1].klass;
        auStack_2._8_8_ = obj[1].monitor;
        auStack_2._16_8_ = obj[2].klass;
        auStack_2._24_8_ = obj[2].monitor;
        bVar3 = ObscuredULong_Equals_1(this,(ObscuredULong *)auStack_2,(MethodInfo *)0x0);
        return bVar3;
      }
      FUN_?(obj);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredULong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals_1(ObscuredULong *this,ObscuredULong *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->currentCryptoKey != obj->currentCryptoKey) {
    uVar1 = this->hiddenValue;
    uVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar1 = ObscuredULong_Decrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredULong_Decrypt_1(obj->hiddenValue,obj->currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return this->hiddenValue == obj->hiddenValue;
}


/* UInt64 GetDecrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetDecrypted(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
    uVar1 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_Decrypt_1(uVar1,key,(MethodInfo *)0x0);
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


/* UInt64 GetEncrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetEncrypted(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredULong_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
        ObscuredULong_GetHashCode(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  return (uint)uVar1 ^ (uint)(uVar1 >> 0x20);
}


/* UInt64 InternalDecrypt() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_InternalDecrypt(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
    uVar1 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_Decrypt_1(uVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_RandomizeCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  iVar4 = (*pcRam_?)(1,0x7fffffff);
  this->currentCryptoKey = (longlong)iVar4;
  uVar1 = ObscuredULong_Encrypt_1(uVar1,(longlong)iVar4,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetEncrypted(ObscuredULong *this,uint64_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetNewCryptoKey(uint64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatUInt64
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_1(ObscuredULong *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatUInt64
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar4;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_2(ObscuredULong *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatUInt64
                     (value,aRStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_3
                   (ObscuredULong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatUInt64
                     (value,aRStack_3,provider,(MethodInfo *)0x0);
  return pSVar4;
}


/* ObscuredULong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
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
          CryptoKeyGenerator_GenerateKey(0,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey =
       (longlong)iVar1;
  return;
}


/* ObscuredULong(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__ctor(ObscuredULong *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredULong op_Decrement(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Decrement
          (ObscuredULong *__return_storage_ptr__,ObscuredULong *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_InternalDecrypt(input,(MethodInfo *)0x0);
  uVar2 = ObscuredULong_Encrypt_1(uVar1 - 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = uVar1 - 1;
  }
  uVar1 = input->hiddenValue;
  uVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined7 *)&input->field_0x19;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = uVar1;
  __return_storage_ptr__->fakeValue = uVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
  return __return_storage_ptr__;
}


/* ObscuredULong op_Implicit(UInt64) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Implicit(ObscuredULong *__return_storage_ptr__,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  *(undefined8 *)&__return_storage_ptr__->inited = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredULong_Encrypt(value,(MethodInfo *)0x0);
  ObscuredULong__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* UInt64 op_Implicit(ObscuredULong) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_op_Implicit_1(ObscuredULong *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_InternalDecrypt(value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredULong op_Increment(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Increment
          (ObscuredULong *__return_storage_ptr__,ObscuredULong *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredULong_InternalDecrypt(input,(MethodInfo *)0x0);
  uVar2 = ObscuredULong_Encrypt_1(uVar1 + 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = uVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = uVar1 + 1;
  }
  uVar1 = input->hiddenValue;
  uVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined7 *)&input->field_0x19;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = uVar1;
  __return_storage_ptr__->fakeValue = uVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
  return __return_storage_ptr__;
}

