
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_ApplyNewCryptoKey(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  sVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (sVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = uVar3 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
  }
  return;
}


/* Int16 EncryptDecrypt(Int16) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_EncryptDecrypt(int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->
                 cryptoKey;
}


/* Int16 EncryptDecrypt(Int16, Int16) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_EncryptDecrypt_1(int16_t value,int16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_Equals(ObscuredShort *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredShort__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_0).element_class) {
        pOVar2 = obj[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = this->hiddenValue;
        key = (short)pOVar2;
        iStackX_12 = (int16_t)((ulonglong)pOVar2 >> 0x10);
        if (this->currentCryptoKey != key) {
          iVar3 = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar3 = ObscuredShort_EncryptDecrypt_1(value,iVar3,(MethodInfo *)0x0);
          iVar4 = ObscuredShort_EncryptDecrypt_1(iStackX_12,key,(MethodInfo *)0x0);
          return iVar3 == iVar4;
        }
        return value == iStackX_12;
      }
      FUN_?(obj);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredShort) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_Equals_1(ObscuredShort *this,ObscuredShort obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = this->hiddenValue;
  iStackX_12 = obj.hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    iVar1 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar1 = ObscuredShort_EncryptDecrypt_1(value,iVar1,(MethodInfo *)0x0);
    iVar2 = ObscuredShort_EncryptDecrypt_1(iStackX_12,obj.currentCryptoKey,(MethodInfo *)0x0);
    return iVar1 == iVar2;
  }
  return value == iStackX_12;
}


/* Int16 GetDecrypted() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetDecrypted(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
    iVar1 = ObscuredShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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


/* Int16 GetEncrypted() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetEncrypted(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredShort_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetHashCode(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
  return CONCAT22(iVar1,iVar1);
}


/* Int16 InternalDecrypt() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_InternalDecrypt(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
    iVar1 = ObscuredShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_RandomizeCryptoKey(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar2 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0))) {
    pcRam_? = pcVar2;
    key = (*pcRam_?)(0xffff8000);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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


/* Void SetEncrypted(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_SetEncrypted(ObscuredShort *this,int16_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar2 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_SetNewCryptoKey(int16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
                     ((int)iVar1,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_1(ObscuredShort *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  aIStackX_10[0].m_value = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int16::Int16_ToString_3
                     (aIStackX_10,format,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_2(ObscuredShort *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
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
                     ((int)iVar1,aRStack_2,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_3
                   (ObscuredShort *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  aIStackX_10[0].m_value = ObscuredShort_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int16::Int16_ToString_3
                     (aIStackX_10,format,provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* ObscuredShort() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
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
          CryptoKeyGenerator_GenerateKey(-0x8000,0x7fff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey =
       (int16_t)iVar1;
  return;
}


/* ObscuredShort(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort__ctor(ObscuredShort *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
  this->fakeValue = 0;
  this->currentCryptoKey = iVar1;
  this->hiddenValue = value;
  this->inited = 1;
  return;
}


/* ObscuredShort op_Decrement(ObscuredShort) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Decrement(ObscuredShort input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  iVar2 = ObscuredShort_EncryptDecrypt(iVar1 + -1,(MethodInfo *)0x0);
  aOStackX_8[0].hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  iVar2 = aOStackX_8[0].fakeValue;
  if (bVar3 != 0) {
    iVar2 = iVar1 + -1;
  }
  aOStackX_8[0].fakeValue = iVar2;
  return aOStackX_8[0];
}


/* ObscuredShort op_Implicit(Int16) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Implicit(int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredShort_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OStackX_18._0_6_ = (uint6)uVar1 << 0x10;
  OStackX_18.inited = 1;
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar3 != 0) {
    iVar4 = value;
  }
  OStackX_18._0_4_ = SUB74(CONCAT52(OStackX_18._2_5_,iVar2),0);
  OStackX_18.fakeValue = iVar4;
  OStackX_18.inited = 1;
  OStackX_18._7_1_ = 0;
  return OStackX_18;
}


/* Int16 op_Implicit(ObscuredShort) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_op_Implicit_1(ObscuredShort value,MethodInfo *method)

{
  aOStackX_8[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredShort op_Increment(ObscuredShort) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Increment(ObscuredShort input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredShort_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  iVar2 = ObscuredShort_EncryptDecrypt(iVar1 + 1,(MethodInfo *)0x0);
  aOStackX_8[0].hiddenValue = iVar2;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  iVar2 = aOStackX_8[0].fakeValue;
  if (bVar3 != 0) {
    iVar2 = iVar1 + 1;
  }
  aOStackX_8[0].fakeValue = iVar2;
  return aOStackX_8[0];
}

