
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_ApplyNewCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  pOVar1 = this + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = pOVar1->currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (uVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey
     ) {
    uVar2 = func_?(pOVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    uVar2 = ObscuredChar_EncryptDecrypt_1
                      (uVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar2;
    pOVar1->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  }
  return;
}


/* Char EncryptDecrypt(Char) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_EncryptDecrypt(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredChar__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredChar__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 1,*puVar2,puVar2[1],0);
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
  bVar1 = func_?(this + 1,obj._0_4_,obj._4_4_,method);
  return bVar1;
}


/* Char GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetDecrypted(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  uVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this[1].fakeValue != 0)) && (uVar1 != this[1].fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar3 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      uVar1 = (*pcVar4)();
      return uVar1;
    }
    (*(code *)(pOVar3->klass->vtable).OnCheatingDetected.method)(pOVar3);
  }
  return uVar1;
}


/* Char GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_GetEncrypted(ObscuredChar *this,MethodInfo *method)

{
  func_?(this + 1,0);
  return this[1].hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
        ObscuredChar_GetHashCode(ObscuredChar *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* Char InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_InternalDecrypt(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
    uVar1 = ObscuredChar_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  uVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this[1].fakeValue != 0)) && (uVar1 != this[1].fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar3 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      uVar1 = (*pcVar4)();
      return uVar1;
    }
    (*(code *)(pOVar3->klass->vtable).OnCheatingDetected.method)(pOVar3);
  }
  return uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_RandomizeCryptoKey(ObscuredChar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(this + 1,0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0xffff,(MethodInfo *)0x0);
  this[1].currentCryptoKey = (uint16_t)iVar2;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar1 = ObscuredChar_EncryptDecrypt_1(uVar1,(uint16_t)iVar2,(MethodInfo *)0x0);
  this[1].hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_SetEncrypted(ObscuredChar *this,uint16_t encrypted,MethodInfo *method)

{
  this[1].inited = 1;
  this[1].hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?(this + 1,0);
    this[1].fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Char) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar_SetNewCryptoKey(uint16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
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
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_ToString_1(ObscuredChar *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* ObscuredChar() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
     ObscuredChar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  this[1].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->static_fields->cryptoKey;
  this[1].hiddenValue = value;
  this[1].fakeValue = 0;
  this[1].inited = 1;
  return;
}


/* ObscuredChar op_Decrement(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Decrement(ObscuredChar input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  input.hiddenValue =
       ObscuredChar_EncryptDecrypt_1(sVar1 - 1U,input.currentCryptoKey,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    input.fakeValue = sVar1 - 1U;
  }
  OVar3.hiddenValue = input.hiddenValue;
  OVar3.currentCryptoKey = input.currentCryptoKey;
  OVar3.fakeValue = input.fakeValue;
  OVar3.inited = input.inited;
  OVar3._7_1_ = input._7_1_;
  return OVar3;
}


/* ObscuredChar op_Implicit(Char) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Implicit(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue = 0;
  OStack_1.fakeValue = 0;
  OStack_1.inited = 0;
  OStack_1._7_1_ = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  uVar2 = ObscuredChar_EncryptDecrypt(value,(MethodInfo *)0x0);
  func_?(&OStack_1,uVar2,0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = OStack_1.fakeValue;
  if (bVar3 != 0) {
    uVar2 = value;
  }
  OStack_1.fakeValue = uVar2;
  return OStack_1;
}


/* Char op_Implicit(ObscuredChar) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
         ObscuredChar_op_Implicit_1(ObscuredChar value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  return uVar1;
}


/* ObscuredChar op_Increment(ObscuredChar) */

ObscuredChar
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredChar::
ObscuredChar_op_Increment(ObscuredChar input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredChar);
  }
  input.hiddenValue =
       ObscuredChar_EncryptDecrypt_1(sVar1 + 1U,input.currentCryptoKey,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    input.fakeValue = sVar1 + 1U;
  }
  OVar3.hiddenValue = input.hiddenValue;
  OVar3.currentCryptoKey = input.currentCryptoKey;
  OVar3.fakeValue = input.fakeValue;
  OVar3.inited = input.inited;
  OVar3._7_1_ = input._7_1_;
  return OVar3;
}

