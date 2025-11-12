
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_ApplyNewCryptoKey(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (lVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    dVar2 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
              cryptoKey;
    }
    this->hiddenValue = (ACTkByte8)((ulonglong)dVar2 ^ uVar3);
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
  }
  return;
}


/* Double Decrypt(Int64) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  return (double)(value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                          static_fields->cryptoKey);
}


/* Double Decrypt(Int64, Int64) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_Decrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  return (double)(value ^ key);
}


/* Int64 Encrypt(Double) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_Encrypt(double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  return (ulonglong)value ^
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
}


/* Int64 Encrypt(Double, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_Encrypt_1(double value,int64_t key,MethodInfo *method)

{
  return (ulonglong)value ^ key;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_Equals(ObscuredDouble *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDouble__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_0).element_class) {
        auStack_2._0_8_ = obj[1].klass;
        auStack_2._8_8_ = obj[1].monitor;
        auStack_2._16_8_ = obj[2].klass;
        auStack_2._24_8_ = obj[2].monitor;
        auStack_2._32_8_ = obj[3].klass;
        bVar3 = ObscuredDouble_Equals_1(this,(ObscuredDouble *)auStack_2,(MethodInfo *)0x0);
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


/* Boolean Equals(ObscuredDouble) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_Equals_1(ObscuredDouble *this,ObscuredDouble *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  dVar1 = ObscuredDouble_InternalDecrypt(obj,(MethodInfo *)0x0);
  dVar2 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (dVar2 != dVar1) {
    if (0x7ff0000000000000 < (ulonglong)ABS(dVar2)) {
      return 0x7ff0000000000000 < (ulonglong)ABS(dVar1);
    }
    return 0;
  }
  return 1;
}


/* Double GetDecrypted() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_GetDecrypted(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
    AVar1 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  dVar2 = (double)((ulonglong)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (dVar4 = this->fakeValue, dVar4 != 0.0)) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar4 = dVar2 - dVar4;
    if (_UNK_? <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                         SUB84(dVar4,0) & _UNK_?)) {
      plVar5 = (longlong *)FUN_?();
      if (plVar5 == (longlong *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        dVar2 = (double)(*pcVar6)();
        return dVar2;
      }
      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    }
  }
  return dVar2;
}


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetEncrypted(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredDouble_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return (int64_t)this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetHashCode(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  dVar1 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (0x7fefffffffffffff < ((longlong)dVar1 - 1U & 0x7fffffffffffffff)) {
    dVar1 = (double)((ulonglong)dVar1 & 0x7ff0000000000000);
  }
  return (uint)((ulonglong)dVar1 >> 0x20) ^ SUB84(dVar1,0);
}


/* Double InternalDecrypt() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_InternalDecrypt(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
    AVar1 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  dVar2 = (double)((ulonglong)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (dVar4 = this->fakeValue, dVar4 != 0.0)) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar4 = dVar2 - dVar4;
    if (_UNK_? <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                         SUB84(dVar4,0) & _UNK_?)) {
      plVar5 = (longlong *)FUN_?();
      if (plVar5 == (longlong *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        dVar2 = (double)(*pcVar6)();
        return dVar2;
      }
      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    }
  }
  return dVar2;
}


/* ACTkByte8 InternalEncrypt(Double) */

ACTkByte8 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
          ObscuredDouble_InternalEncrypt(double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  return (ACTkByte8)
         ((ulonglong)value ^
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey);
}


/* ACTkByte8 InternalEncrypt(Double, Int64) */

ACTkByte8 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
          ObscuredDouble_InternalEncrypt_1(double value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0
       ) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
  }
  return (ACTkByte8)((ulonglong)value ^ key);
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_RandomizeCryptoKey(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar1 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0))) {
    pcRam_? = pcVar1;
    iVar2 = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = (longlong)iVar2;
    if (iVar2 != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      AVar3 = ObscuredDouble_InternalEncrypt_1(value,(longlong)iVar2,(MethodInfo *)0x0);
      this->hiddenValue = AVar3;
      return;
    }
  }
  uVar4 = func_?(&UNK_?);
  FUN_?(uVar4,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetEncrypted(ObscuredDouble *this,int64_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->inited = 1;
  (this->hiddenValue).b1 = (char)encrypted;
  (this->hiddenValue).b2 = (char)((ulonglong)encrypted >> 8);
  (this->hiddenValue).b3 = (char)((ulonglong)encrypted >> 0x10);
  (this->hiddenValue).b4 = (char)((ulonglong)encrypted >> 0x18);
  (this->hiddenValue).b5 = (char)((ulonglong)encrypted >> 0x20);
  (this->hiddenValue).b6 = (char)((ulonglong)encrypted >> 0x28);
  (this->hiddenValue).b7 = (char)((ulonglong)encrypted >> 0x30);
  (this->hiddenValue).b8 = (char)((ulonglong)encrypted >> 0x38);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    dVar2 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = dVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,0,info,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<wchar_t>__Span_System__Void___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._28_4_ = 0;
  aVStack_1[0]._chars._pointer._value = &uStack_2;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0x20;
  RStack_10._12_4_ = 0;
  aVStack_1[0]._arrayToReturnToPool = (Char__Array *)0x0;
  aVStack_1[0]._chars._length = 0x20;
  aVStack_1[0]._chars._12_4_ = 0;
  aVStack_1[0]._pos = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0;
  RStack_10._12_4_ = 0;
  pSVar11 = mscorlib.dll::System::Number::Number_FormatDouble_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar11 == (String *)0x0) {
    pSVar11 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar11;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_1(ObscuredDouble *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,format,info,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<wchar_t>__Span_System__Void___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._28_4_ = 0;
  aVStack_1[0]._chars._pointer._value = &uStack_2;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  RStack_10._pointer._value = (uint16_t *)0x0;
  RStack_10._8_8_ = 0x20;
  aVStack_1[0]._arrayToReturnToPool = (Char__Array *)0x0;
  aVStack_1[0]._chars._length = 0x20;
  aVStack_1[0]._chars._12_4_ = 0;
  aVStack_1[0]._pos = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar11 = (uint16_t *)0x0;
    uVar12 = 0;
  }
  else {
    RStack_10._pointer._value = &(format->fields)._firstChar;
    uVar12 = (format->fields)._stringLength;
    RStack_10._12_4_ = 0;
    RStack_10._length = uVar12;
    puVar11 = RStack_10._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10._12_4_ = 0;
  RStack_10._length = uVar12;
  RStack_10._pointer._value = puVar11;
  pSVar13 = mscorlib.dll::System::Number::Number_FormatDouble_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar13 == (String *)0x0) {
    pSVar13 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar13;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_2
                   (ObscuredDouble *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_GetInstance
                   (provider,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,0,info,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<wchar_t>__Span_System__Void___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._28_4_ = 0;
  aVStack_1[0]._chars._pointer._value = &uStack_2;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0x20;
  RStack_10._12_4_ = 0;
  aVStack_1[0]._arrayToReturnToPool = (Char__Array *)0x0;
  aVStack_1[0]._chars._length = 0x20;
  aVStack_1[0]._chars._12_4_ = 0;
  aVStack_1[0]._pos = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0;
  RStack_10._12_4_ = 0;
  pSVar11 = mscorlib.dll::System::Number::Number_FormatDouble_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar11 == (String *)0x0) {
    pSVar11 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar11;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_3
                   (ObscuredDouble *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_GetInstance
                   (provider,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,format,info,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<wchar_t>__Span_System__Void___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._28_4_ = 0;
  aVStack_1[0]._chars._pointer._value = &uStack_2;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  RStack_10._pointer._value = (uint16_t *)0x0;
  RStack_10._8_8_ = 0x20;
  aVStack_1[0]._arrayToReturnToPool = (Char__Array *)0x0;
  aVStack_1[0]._chars._length = 0x20;
  aVStack_1[0]._chars._12_4_ = 0;
  aVStack_1[0]._pos = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar11 = (uint16_t *)0x0;
    uVar12 = 0;
  }
  else {
    RStack_10._pointer._value = &(format->fields)._firstChar;
    uVar12 = (format->fields)._stringLength;
    RStack_10._12_4_ = 0;
    RStack_10._length = uVar12;
    puVar11 = RStack_10._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10._12_4_ = 0;
  RStack_10._length = uVar12;
  RStack_10._pointer._value = puVar11;
  pSVar13 = mscorlib.dll::System::Number::Number_FormatDouble_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar13 == (String *)0x0) {
    pSVar13 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar13;
}


/* ObscuredDouble() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey =
       (longlong)iVar1;
  return;
}


/* ObscuredDouble(ACTkByte8) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__ctor(ObscuredDouble *this,ACTkByte8 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  bVar1 = iRam_? != 0;
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->hiddenValueOld = (Byte__Array *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->hiddenValueOld >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this->inited = 1;
  this->fakeValue = 0.0;
  return;
}


/* ObscuredDouble op_Decrement(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Decrement
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  dVar1 = ObscuredDouble_InternalDecrypt(input,(MethodInfo *)0x0);
  dVar1 = dVar1 - _UNK_?;
  AVar2 = ObscuredDouble_InternalEncrypt_1(dVar1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = AVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = dVar1;
  }
  AVar2 = input->hiddenValue;
  pBVar4 = input->hiddenValueOld;
  dVar1 = input->fakeValue;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  bVar3 = input->inited;
  uVar5 = *(undefined7 *)&input->field_0x21;
  __return_storage_ptr__->hiddenValueOld = pBVar4;
  __return_storage_ptr__->fakeValue = dVar1;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = uVar5;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(Double) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Implicit(ObscuredDouble *__return_storage_ptr__,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  (__return_storage_ptr__->hiddenValue).b5 = 0;
  (__return_storage_ptr__->hiddenValue).b6 = 0;
  (__return_storage_ptr__->hiddenValue).b7 = 0;
  (__return_storage_ptr__->hiddenValue).b8 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  __return_storage_ptr__->fakeValue = 0.0;
  *(undefined8 *)&__return_storage_ptr__->inited = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  value_00 = ObscuredDouble_InternalEncrypt(value,(MethodInfo *)0x0);
  ObscuredDouble__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Double op_Implicit(ObscuredDouble) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_op_Implicit_1(ObscuredDouble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  dVar1 = ObscuredDouble_InternalDecrypt(value,(MethodInfo *)0x0);
  return dVar1;
}


/* ObscuredDouble op_Increment(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Increment
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  dVar1 = ObscuredDouble_InternalDecrypt(input,(MethodInfo *)0x0);
  dVar1 = dVar1 + _UNK_?;
  AVar2 = ObscuredDouble_InternalEncrypt_1(dVar1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = AVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = dVar1;
  }
  AVar2 = input->hiddenValue;
  pBVar4 = input->hiddenValueOld;
  dVar1 = input->fakeValue;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  bVar3 = input->inited;
  uVar5 = *(undefined7 *)&input->field_0x21;
  __return_storage_ptr__->hiddenValueOld = pBVar4;
  __return_storage_ptr__->fakeValue = dVar1;
  __return_storage_ptr__->inited = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = uVar5;
  return __return_storage_ptr__;
}

