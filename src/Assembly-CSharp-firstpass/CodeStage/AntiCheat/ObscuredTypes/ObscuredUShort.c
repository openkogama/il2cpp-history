
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_ApplyNewCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  pOVar1 = this + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = pOVar1->currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (uVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
               cryptoKey) {
    uVar2 = func_?(pOVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar2 = ObscuredUShort_EncryptDecrypt_1
                      (uVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar2;
    pOVar1->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  return;
}


/* UInt16 EncryptDecrypt(UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey ^
         value;
}


/* UInt16 EncryptDecrypt(UInt16, UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt_1(uint16_t value,uint16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals(ObscuredUShort *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUShort__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredUShort__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 1,*puVar2,puVar2[1],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredUShort) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals_1(ObscuredUShort *this,ObscuredUShort obj,MethodInfo *method)

{
  bVar1 = func_?(this + 1,obj._0_4_,obj._4_4_,method);
  return bVar1;
}


/* UInt16 GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetDecrypted(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  uVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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


/* UInt16 GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetEncrypted(ObscuredUShort *this,MethodInfo *method)

{
  func_?(this + 1,0);
  return this[1].hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
        ObscuredUShort_GetHashCode(ObscuredUShort *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* UInt16 InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_InternalDecrypt(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = uVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  uVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,key,(MethodInfo *)0x0);
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_RandomizeCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(this + 1,0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fff,(MethodInfo *)0x0);
  this[1].currentCryptoKey = (uint16_t)iVar2;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,(uint16_t)iVar2,(MethodInfo *)0x0);
  this[1].hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetEncrypted(ObscuredUShort *this,uint16_t encrypted,MethodInfo *method)

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


/* Void SetNewCryptoKey(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetNewCryptoKey(uint16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey = newKey
    ;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString(ObscuredUShort *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_1(ObscuredUShort *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_2
                   (ObscuredUShort *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_3
                   (ObscuredUShort *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredUShort() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_started == 0)) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  iVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,0x7fff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey =
       (uint16_t)iVar1;
  return;
}


/* ObscuredUShort(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__ctor(ObscuredUShort *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  this[1].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  this[1].hiddenValue = value;
  this[1].fakeValue = 0;
  this[1].inited = 1;
  return;
}


/* ObscuredUShort op_Decrement(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Decrement(ObscuredUShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  input.hiddenValue =
       ObscuredUShort_EncryptDecrypt_1(sVar1 - 1U,input.currentCryptoKey,(MethodInfo *)0x0);
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


/* ObscuredUShort op_Implicit(UInt16) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Implicit(uint16_t value,MethodInfo *method)

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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  uVar2 = ObscuredUShort_EncryptDecrypt(value,(MethodInfo *)0x0);
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


/* UInt16 op_Implicit(ObscuredUShort) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_op_Implicit_1(ObscuredUShort value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  return uVar1;
}


/* ObscuredUShort op_Increment(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Increment(ObscuredUShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  input.hiddenValue =
       ObscuredUShort_EncryptDecrypt_1(sVar1 + 1U,input.currentCryptoKey,(MethodInfo *)0x0);
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

