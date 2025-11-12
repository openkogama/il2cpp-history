
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_ApplyNewCryptoKey(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar2 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = (ACTkByte4)((uint)fVar2 ^ uVar3);
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  return;
}


/* Single Decrypt(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (float)(value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields
                         ->cryptoKey);
}


/* Single Decrypt(Int32, Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_Decrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  return (float)(value ^ key);
}


/* Int32 Encrypt(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_Encrypt(float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (uint)value ^
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
}


/* Int32 Encrypt(Single, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_Encrypt_1(float value,int32_t key,MethodInfo *method)

{
  return (uint)value ^ key;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_Equals(ObscuredFloat *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredFloat__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        pOStack_2 = obj[1].klass;
        pBStack_3 = (Byte__Array *)obj[1].monitor;
        pOStack_4 = obj[2].klass;
        bVar5 = ObscuredFloat_Equals_1(this,(ObscuredFloat *)&pOStack_2,(MethodInfo *)0x0);
        return bVar5;
      }
      FUN_?(obj);
      pcVar6 = (code *)swi(3);
      bVar5 = (*pcVar6)();
      return bVar5;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredFloat) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_Equals_1(ObscuredFloat *this,ObscuredFloat *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = ObscuredFloat_InternalDecrypt(obj,(MethodInfo *)0x0);
  fVar2 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  if ((double)fVar2 != (double)fVar1) {
    if (0x7ff0000000000000 < (ulonglong)ABS((double)fVar2)) {
      return 0x7ff0000000000000 < (ulonglong)ABS((double)fVar1);
    }
    return 0;
  }
  return 1;
}


/* Single GetDecrypted() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_GetDecrypted(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  fVar2 = (float)((uint)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (fVar4 = this->fakeValue, fVar4 != 0.0)) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar4 = (float)((uint)(fVar2 - fVar4) & _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      fVar2 = (float)(*pcVar6)();
      return fVar2;
    }
    pfVar7 = &(pOVar5->fields).floatEpsilon;
    if (*pfVar7 <= fVar4 && fVar4 != *pfVar7) {
      plVar8 = (longlong *)FUN_?();
      if (plVar8 == (longlong *)0x0) goto code_?;
      (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    }
  }
  return fVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetEncrypted(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredFloat_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1._0_1_ = (this->hiddenValue).b1;
  iVar1._1_1_ = (this->hiddenValue).b2;
  iVar1._2_1_ = (this->hiddenValue).b3;
  iVar1._3_1_ = (this->hiddenValue).b4;
  return iVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetHashCode(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  if (0x7f7fffff < ((int)fVar1 - 1U & 0x7fffffff)) {
    fVar1 = (float)((uint)fVar1 & 0x7f800000);
  }
  return (int32_t)fVar1;
}


/* Single InternalDecrypt() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_InternalDecrypt(ObscuredFloat *this,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  fVar2 = (float)((uint)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (fVar4 = this->fakeValue, fVar4 != 0.0)) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar4 = (float)((uint)(fVar2 - fVar4) & _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      fVar2 = (float)(*pcVar6)();
      return fVar2;
    }
    pfVar7 = &(pOVar5->fields).floatEpsilon;
    if (*pfVar7 <= fVar4 && fVar4 != *pfVar7) {
      plVar8 = (longlong *)FUN_?();
      if (plVar8 == (longlong *)0x0) goto code_?;
      (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    }
  }
  return fVar2;
}


/* ACTkByte4 InternalEncrypt(Single) */

ACTkByte4 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (ACTkByte4)
         ((uint)value ^
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey);
}


/* ACTkByte4 InternalEncrypt(Single, Int32) */

ACTkByte4 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt_1(float value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  return (ACTkByte4)((uint)value ^ key);
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_RandomizeCryptoKey(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar1 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0))) {
    pcRam_? = pcVar1;
    key = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      AVar2 = ObscuredFloat_InternalEncrypt_1(value,key,(MethodInfo *)0x0);
      this->hiddenValue = AVar2;
      return;
    }
  }
  uVar3 = func_?(&UNK_?);
  FUN_?(uVar3,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetEncrypted(ObscuredFloat *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->inited = 1;
  (this->hiddenValue).b1 = (char)encrypted;
  (this->hiddenValue).b2 = (char)((uint)encrypted >> 8);
  (this->hiddenValue).b3 = (char)((uint)encrypted >> 0x10);
  (this->hiddenValue).b4 = (char)((uint)encrypted >> 0x18);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar2 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = fVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar11 = mscorlib.dll::System::Number::Number_FormatSingle_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar11 == (String *)0x0) {
    pSVar11 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar11;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_1(ObscuredFloat *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar13 = mscorlib.dll::System::Number::Number_FormatSingle_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar13 == (String *)0x0) {
    pSVar13 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar13;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_2(ObscuredFloat *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar11 = mscorlib.dll::System::Number::Number_FormatSingle_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar11 == (String *)0x0) {
    pSVar11 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar11;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_3
                   (ObscuredFloat *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
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
  pSVar13 = mscorlib.dll::System::Number::Number_FormatSingle_1
                     (aVStack_1,value,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar13 == (String *)0x0) {
    pSVar13 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar13;
}


/* ObscuredFloat() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = iVar1;
  return;
}


/* ObscuredFloat(ACTkByte4) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__ctor(ObscuredFloat *this,ACTkByte4 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  bVar1 = iRam_? != 0;
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
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


/* ObscuredFloat op_Decrement(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Decrement
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = ObscuredFloat_InternalDecrypt(input,(MethodInfo *)0x0);
  fVar1 = fVar1 - _UNK_?;
  AVar2 = ObscuredFloat_InternalEncrypt_1(fVar1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = AVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = fVar1;
  }
  AVar2 = input->hiddenValue;
  pBVar4 = input->hiddenValueOld;
  fVar1 = input->fakeValue;
  bVar3 = input->inited;
  uVar5 = *(undefined3 *)&input->field_0x15;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  __return_storage_ptr__->hiddenValueOld = pBVar4;
  __return_storage_ptr__->fakeValue = fVar1;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar5;
  return __return_storage_ptr__;
}


/* ObscuredFloat op_Implicit(Single) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Implicit(ObscuredFloat *__return_storage_ptr__,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  __return_storage_ptr__->fakeValue = 0.0;
  __return_storage_ptr__->inited = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  ObscuredFloat__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Single op_Implicit(ObscuredFloat) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1(ObscuredFloat *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = ObscuredFloat_InternalDecrypt(value,(MethodInfo *)0x0);
  return fVar1;
}


/* ObscuredFloat op_Increment(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Increment
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = ObscuredFloat_InternalDecrypt(input,(MethodInfo *)0x0);
  fVar1 = fVar1 + _UNK_?;
  AVar2 = ObscuredFloat_InternalEncrypt_1(fVar1,input->currentCryptoKey,(MethodInfo *)0x0);
  input->hiddenValue = AVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input->fakeValue = fVar1;
  }
  AVar2 = input->hiddenValue;
  pBVar4 = input->hiddenValueOld;
  fVar1 = input->fakeValue;
  bVar3 = input->inited;
  uVar5 = *(undefined3 *)&input->field_0x15;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  __return_storage_ptr__->hiddenValueOld = pBVar4;
  __return_storage_ptr__->fakeValue = fVar1;
  __return_storage_ptr__->inited = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar5;
  return __return_storage_ptr__;
}

