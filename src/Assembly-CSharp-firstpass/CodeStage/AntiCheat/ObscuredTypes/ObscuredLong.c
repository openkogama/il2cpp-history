
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_ApplyNewCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (lVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar3 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
  }
  return;
}


/* Int64 Decrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                 cryptoKey;
}


/* Int64 Decrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                 cryptoKey;
}


/* Int64 Encrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                 cryptoKey;
}


/* Int64 Encrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals(ObscuredLong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredLong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
        auStack_2._0_8_ = obj[1].klass;
        auStack_2._8_8_ = obj[1].monitor;
        auStack_2._16_8_ = obj[2].klass;
        auStack_2._24_8_ = obj[2].monitor;
        bVar3 = ObscuredLong_Equals_1(this,(ObscuredLong *)auStack_2,(MethodInfo *)0x0);
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


/* Boolean Equals(ObscuredLong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals_1(ObscuredLong *this,ObscuredLong *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->hiddenValue;
  if (this->currentCryptoKey != obj->currentCryptoKey) {
    iVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar1 = ObscuredLong_Decrypt_1(iVar1,iVar2,(MethodInfo *)0x0);
    iVar2 = ObscuredLong_Decrypt_1(obj->hiddenValue,obj->currentCryptoKey,(MethodInfo *)0x0);
    return iVar1 == iVar2;
  }
  return iVar1 == obj->hiddenValue;
}


/* Int64 GetDecrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetDecrypted(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    iVar1 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_Decrypt_1(iVar1,key,(MethodInfo *)0x0);
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


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetEncrypted(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredLong_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetHashCode(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  return (uint)iVar1 ^ (uint)((ulonglong)iVar1 >> 0x20);
}


/* Int64 InternalDecrypt() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_InternalDecrypt(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    iVar1 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_Decrypt_1(iVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_RandomizeCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar2 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0))) {
    pcRam_? = pcVar2;
    iVar3 = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = (longlong)iVar3;
    if (iVar3 != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      iVar1 = ObscuredLong_Encrypt_1(iVar1,(longlong)iVar3,(MethodInfo *)0x0);
      this->hiddenValue = iVar1;
      return;
    }
  }
  uVar4 = func_?(&UNK_?);
  FUN_?(uVar4,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetEncrypted(ObscuredLong *this,int64_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar2 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt64
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_1(ObscuredLong *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt64
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar4;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_2(ObscuredLong *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt64
                     (value,aRStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_3
                   (ObscuredLong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt64
                     (value,aRStack_3,provider,(MethodInfo *)0x0);
  return pSVar4;
}


/* ObscuredLong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey =
       (longlong)iVar1;
  return;
}


/* ObscuredLong(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__ctor(ObscuredLong *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredLong op_Decrement(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Decrement
          (ObscuredLong *__return_storage_ptr__,ObscuredLong *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_InternalDecrypt(input,(MethodInfo *)0x0);
  iVar2 = ObscuredLong_Encrypt_1(iVar1 + -1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = iVar1 + -1;
  }
  iVar1 = input->hiddenValue;
  iVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined7 *)&input->field_0x19;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = iVar1;
  __return_storage_ptr__->fakeValue = iVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
  return __return_storage_ptr__;
}


/* ObscuredLong op_Implicit(Int64) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Implicit(ObscuredLong *__return_storage_ptr__,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  *(undefined8 *)&__return_storage_ptr__->inited = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredLong_Encrypt(value,(MethodInfo *)0x0);
  ObscuredLong__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Int64 op_Implicit(ObscuredLong) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_op_Implicit_1(ObscuredLong *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_InternalDecrypt(value,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredLong op_Increment(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Increment
          (ObscuredLong *__return_storage_ptr__,ObscuredLong *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredLong_InternalDecrypt(input,(MethodInfo *)0x0);
  iVar2 = ObscuredLong_Encrypt_1(iVar1 + 1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = iVar1 + 1;
  }
  iVar1 = input->hiddenValue;
  iVar2 = input->fakeValue;
  bVar3 = input->inited;
  uVar4 = *(undefined7 *)&input->field_0x19;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = iVar1;
  __return_storage_ptr__->fakeValue = iVar2;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
  return __return_storage_ptr__;
}

