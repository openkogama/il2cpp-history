
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_ApplyNewCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey
     ) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = ObscuredChar_EncryptDecrypt_1
                      (uVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey ^
         value;
}


/* Char EncryptDecrypt(Char, Char) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_EncryptDecrypt_1(uint16_t value,uint16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_Equals(ObscuredChar *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredChar__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_0).element_class) {
        pOVar2 = (ObscuredChar *)func_?(obj);
        bVar3 = ObscuredChar_Equals_1(this,*pOVar2,(MethodInfo *)0x0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredChar) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_Equals_1(ObscuredChar *this,ObscuredChar obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  if (uVar1 != obj.currentCryptoKey) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar1 = ObscuredChar_EncryptDecrypt_1(uVar2,uVar1,(MethodInfo *)0x0);
    uVar2 = ObscuredChar_EncryptDecrypt_1(obj.hiddenValue,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar2 == obj.hiddenValue;
}


/* Char GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetDecrypted(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->inited = 1;
    this->fakeValue = 0;
  }
  uVar1 = this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if (uVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      uVar1 = (*pcVar5)();
      return uVar1;
    }
    (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)
              (pOVar4,(pOVar4->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return uVar2;
}


/* Char GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetEncrypted(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  ObscuredChar_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
        ObscuredChar_GetHashCode(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar1 = mscorlib.dll::System::Char::Char_GetHashCode((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
  return iVar1;
}


/* Char InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_InternalDecrypt(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->inited = 1;
    this->fakeValue = 0;
  }
  uVar1 = this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if (uVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      uVar1 = (*pcVar5)();
      return uVar1;
    }
    (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)
              (pOVar4,(pOVar4->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_RandomizeCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0xffff,(MethodInfo *)0x0);
  bVar3 = cRam_? == '\0';
  uVar4 = (ushort)iVar2;
  this->currentCryptoKey = uVar4;
  if (bVar3) {
    func_?();
    cRam_? = '\x01';
  }
  if (uVar4 != 0) {
    this->hiddenValue = uVar4 ^ uVar1;
    return;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  this->hiddenValue =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey ^ uVar1
  ;
  return;
}


/* Void SetEncrypted(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_SetEncrypted(ObscuredChar *this,uint16_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_ToString(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_ToString_1(ObscuredChar *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  ObscuredChar_InternalDecrypt(this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Char::Char_ToString_1
                     ((Char *)&stack0xfffffff8,provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* ObscuredChar() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredChar op_Decrement(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Decrement(ObscuredChar input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 - 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 - 1;
  }
  OVar4.hiddenValue = input.hiddenValue;
  OVar4.currentCryptoKey = input.currentCryptoKey;
  OVar4.fakeValue = input.fakeValue;
  OVar4.inited = input.inited;
  OVar4._7_1_ = input._7_1_;
  return OVar4;
}


/* ObscuredChar op_Implicit(Char) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Implicit(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar,0);
  }
  uVar2 = ObscuredChar_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar,uVar1);
  }
  uVar1 = CONCAT62((int6)(CONCAT17((char)((ulonglong)uVar1 >> 0x38),CONCAT16(1,(uint6)uVar2 << 0x10)
                                  ) >> 0x10),
                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->
                   cryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = value;
  }
  OVar4._6_2_ = (undefined2)((ulonglong)uVar1 >> 0x30);
  OVar4._0_4_ = (undefined4)uVar1;
  OVar4.fakeValue = uVar2;
  return OVar4;
}


/* Char op_Implicit(ObscuredChar) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_op_Implicit_1(ObscuredChar value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_InternalDecrypt(&value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredChar op_Increment(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Increment(ObscuredChar input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 + 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 + 1;
  }
  OVar4.hiddenValue = input.hiddenValue;
  OVar4.currentCryptoKey = input.currentCryptoKey;
  OVar4.fakeValue = input.fakeValue;
  OVar4.inited = input.inited;
  OVar4._7_1_ = input._7_1_;
  return OVar4;
}

