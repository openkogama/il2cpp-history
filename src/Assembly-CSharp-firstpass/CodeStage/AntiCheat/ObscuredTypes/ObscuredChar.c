
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_ApplyNewCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar1 ^ uVar2;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  return;
}


/* Char EncryptDecrypt(Char) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_EncryptDecrypt(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->
                 cryptoKey;
}


/* Char EncryptDecrypt(Char, Char) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_EncryptDecrypt_1(uint16_t value,uint16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  return value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->
                 cryptoKey;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_Equals(ObscuredChar *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredChar__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_0).element_class) {
        pOVar2 = obj[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar3 = this->hiddenValue;
        uVar4 = (uint16_t)pOVar2;
        uStackX_12 = (uint16_t)((ulonglong)pOVar2 >> 0x10);
        if (this->currentCryptoKey != uVar4) {
          key = this->currentCryptoKey;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          uVar3 = ObscuredChar_EncryptDecrypt_1(uVar3,key,(MethodInfo *)0x0);
          uVar4 = ObscuredChar_EncryptDecrypt_1(uStackX_12,uVar4,(MethodInfo *)0x0);
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


/* Boolean Equals(ObscuredChar) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_Equals_1(ObscuredChar *this,ObscuredChar obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  uStackX_12 = obj.hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    uVar2 = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredChar_EncryptDecrypt_1(uStackX_12,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar1 == uStackX_12;
}


/* Char GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetDecrypted(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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


/* Char GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetEncrypted(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredChar_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
        ObscuredChar_GetHashCode(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  return CONCAT22(uVar1,uVar1);
}


/* Char InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_InternalDecrypt(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar1 = this->hiddenValue;
  key = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_RandomizeCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
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
  key = (*pcRam_?)(1,0xffff);
  this->currentCryptoKey = key;
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_SetEncrypted(ObscuredChar *this,uint16_t encrypted,MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar2 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_SetNewCryptoKey(uint16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_ToString(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
  }
  pSVar2 = pSRam0000000182dc2f60;
  pSVar3 = (String *)FUN_?(0x1c,0);
  pSVar3->klass = pSVar2;
  pSVar3->monitor = (MonitorData *)0x0;
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
  bVar4 = bRam_? & 0x80;
  (pSVar3->fields)._stringLength = 1;
  *(undefined2 *)&(pSVar3->fields).field_0x6 = 0;
  if (bVar4 != 0) {
    FUN_?(pSVar3,pSRam0000000182dc2f60);
  }
  if (pSVar3 != (String *)0x0) {
    (pSVar3->fields)._firstChar = uVar1;
    return pSVar3;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_ToString_1(ObscuredChar *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
  }
  pSVar2 = pSRam0000000182dc2f60;
  pSVar3 = (String *)FUN_?(0x1c,0);
  pSVar3->klass = pSVar2;
  pSVar3->monitor = (MonitorData *)0x0;
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
  bVar4 = bRam_? & 0x80;
  (pSVar3->fields)._stringLength = 1;
  *(undefined2 *)&(pSVar3->fields).field_0x6 = 0;
  if (bVar4 != 0) {
    FUN_?(pSVar3,pSRam0000000182dc2f60);
  }
  if (pSVar3 != (String *)0x0) {
    (pSVar3->fields)._firstChar = uVar1;
    return pSVar3;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* ObscuredChar() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey = 0x2014;
  return;
}


/* ObscuredChar(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar__ctor(ObscuredChar *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  this->fakeValue = 0;
  this->currentCryptoKey = uVar1;
  this->hiddenValue = value;
  this->inited = 1;
  return;
}


/* ObscuredChar op_Decrement(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Decrement(ObscuredChar input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredChar_EncryptDecrypt_1(uVar1 - 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
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


/* ObscuredChar op_Implicit(Char) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Implicit(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  OStackX_18._0_6_ = (uint6)uVar1 << 0x10;
  OStackX_18.inited = 1;
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
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


/* Char op_Implicit(ObscuredChar) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_op_Implicit_1(ObscuredChar value,MethodInfo *method)

{
  aOStackX_8[0] = value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredChar op_Increment(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Increment(ObscuredChar input,MethodInfo *method)

{
  aOStackX_8[0] = input;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = ObscuredChar_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  uVar2 = ObscuredChar_EncryptDecrypt_1(uVar1 + 1,aOStackX_8[0].currentCryptoKey,(MethodInfo *)0x0);
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

