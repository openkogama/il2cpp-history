
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_ApplyNewCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar2 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      }
      bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = bVar3 ^ bVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  return;
}


/* SByte EncryptDecrypt(SByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_EncryptDecrypt(int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->
                 cryptoKey;
}


/* SByte EncryptDecrypt(SByte, SByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_EncryptDecrypt_1(int8_t value,int8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_Equals(ObscuredSByte *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredSByte__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_0).element_class) {
        uVar2 = *(undefined4 *)&obj[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar3 = this->hiddenValue;
        iVar4 = (int8_t)uVar2;
        iStackX_11 = (int8_t)((uint)uVar2 >> 8);
        if (this->currentCryptoKey != iVar4) {
          key = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar3 = ObscuredSByte_EncryptDecrypt_1(iVar3,key,(MethodInfo *)0x0);
          iVar4 = ObscuredSByte_EncryptDecrypt_1(iStackX_11,iVar4,(MethodInfo *)0x0);
          return iVar3 == iVar4;
        }
        return iVar3 == iStackX_11;
      }
      FUN_?(obj);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredSByte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_Equals_1(ObscuredSByte *this,ObscuredSByte obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->hiddenValue;
  iStackX_11 = obj.hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    iVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar1 = ObscuredSByte_EncryptDecrypt_1(iVar1,iVar2,(MethodInfo *)0x0);
    iVar2 = ObscuredSByte_EncryptDecrypt_1(iStackX_11,obj.currentCryptoKey,(MethodInfo *)0x0);
    return iVar1 == iVar2;
  }
  return iVar1 == iStackX_11;
}


/* SByte GetDecrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetDecrypted(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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


/* SByte GetEncrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetEncrypted(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredSByte_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
        ObscuredSByte_GetHashCode(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  return (int)iVar1 << 8 ^ (int)iVar1;
}


/* SByte InternalDecrypt() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_InternalDecrypt(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  iVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_RandomizeCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar2 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0))) {
    pcRam_? = pcVar2;
    key = (*pcRam_?)(0xffffff80);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar1 = ObscuredSByte_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
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


/* Void SetEncrypted(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetEncrypted(ObscuredSByte *this,int8_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar2 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetNewCryptoKey(int8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
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

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_1(ObscuredSByte *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  aSStackX_10[0].m_value = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::SByte::SByte_ToString_3
                     (aSStackX_10,format,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_2(ObscuredSByte *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
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

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_3
                   (ObscuredSByte *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  aSStackX_10[0].m_value = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::SByte::SByte_ToString_3
                     (aSStackX_10,format,provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* ObscuredSByte() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
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
          CryptoKeyGenerator_GenerateKey(-0x80,0x7f,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey =
       (int8_t)iVar1;
  return;
}


/* ObscuredSByte(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte__ctor(ObscuredSByte *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredSByte op_Decrement(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Decrement(ObscuredSByte input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  iVar2 = ObscuredSByte_EncryptDecrypt_1
                    (iVar1 + -1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
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


/* ObscuredSByte op_Implicit(SByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Implicit(int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = ObscuredSByte_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  OStackX_8._0_3_ = (uint3)bVar1 << 8;
  OStackX_8.inited = 1;
  OStackX_8.currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  iVar3 = 0;
  if (bVar2 != 0) {
    iVar3 = value;
  }
  OStackX_8.fakeValue = iVar3;
  OStackX_8.inited = 1;
  return OStackX_8;
}


/* SByte op_Implicit(ObscuredSByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_op_Implicit_1(ObscuredSByte value,MethodInfo *method)

{
  aOStackX_8[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredSByte op_Increment(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Increment(ObscuredSByte input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = ObscuredSByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  iVar2 = ObscuredSByte_EncryptDecrypt_1(iVar1 + 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0)
  ;
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

