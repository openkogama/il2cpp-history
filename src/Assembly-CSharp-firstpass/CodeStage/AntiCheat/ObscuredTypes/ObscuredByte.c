
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_ApplyNewCryptoKey(ObscuredByte *this,MethodInfo *method)

{
  pOVar1 = this + 2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = pOVar1->currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (uVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey
     ) {
    uVar2 = func_?(pOVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    uVar2 = ObscuredByte_EncryptDecrypt_1
                      (uVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this[2].hiddenValue = uVar2;
    pOVar1->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  return;
}


/* Byte EncryptDecrypt(Byte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_EncryptDecrypt(uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey ^
         value;
}


/* Byte EncryptDecrypt(Byte, Byte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_EncryptDecrypt_1(uint8_t value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_Equals(ObscuredByte *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredByte__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredByte__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 2,*puVar2,0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredByte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_Equals_1(ObscuredByte *this,ObscuredByte obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = this[2].currentCryptoKey;
  uVar2 = this[2].hiddenValue;
  if (uVar1 != obj.currentCryptoKey) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    uVar1 = ObscuredByte_EncryptDecrypt_1(uVar2,uVar1,(MethodInfo *)0x0);
    uVar2 = ObscuredByte_EncryptDecrypt_1(obj.hiddenValue,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar2 == obj.hiddenValue;
}


/* Byte GetDecrypted() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetDecrypted(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    this[2].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    uVar1 = ObscuredByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[2].hiddenValue = uVar1;
    this[2].fakeValue = 0;
    this[2].inited = 1;
  }
  bVar2 = this[2].hiddenValue;
  bVar3 = this[2].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  bVar2 = bVar2 ^ bVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this[2].fakeValue != 0)) && (bVar2 != this[2].fakeValue)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar6 = (code *)swi(3);
      uVar1 = (*pcVar6)();
      return uVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* Byte GetEncrypted() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetEncrypted(ObscuredByte *this,MethodInfo *method)

{
  func_?(this + 2,0);
  return this[2].hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_GetHashCode(ObscuredByte *this,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  iVar1 = func_?(&stack0xfffffffb,0);
  return iVar1;
}


/* Byte InternalDecrypt() */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_InternalDecrypt(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    this[2].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
    uVar1 = ObscuredByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[2].hiddenValue = uVar1;
    this[2].fakeValue = 0;
    this[2].inited = 1;
  }
  bVar2 = this[2].hiddenValue;
  bVar3 = this[2].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  bVar2 = bVar2 ^ bVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this[2].fakeValue != 0)) && (bVar2 != this[2].fakeValue)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar6 = (code *)swi(3);
      uVar1 = (*pcVar6)();
      return uVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_RandomizeCryptoKey(ObscuredByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = func_?(this + 2,0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0xff,(MethodInfo *)0x0);
  uVar3 = (uint8_t)iVar2;
  this[2].currentCryptoKey = uVar3;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  this[2].hiddenValue = uVar3 ^ bVar1;
  return;
}


/* Void SetEncrypted(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_SetEncrypted(ObscuredByte *this,uint8_t encrypted,MethodInfo *method)

{
  this[2].inited = 1;
  this[2].hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?(this + 2,0);
    this[2].fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte_SetNewCryptoKey(uint8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString(ObscuredByte *this,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,0);
  return pSVar1;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_1(ObscuredByte *this,String *format,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,format,0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_2(ObscuredByte *this,IFormatProvider *provider,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,provider,0);
  return pSVar1;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
         ObscuredByte_ToString_3
                   (ObscuredByte *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,format,provider,0);
  return pSVar1;
}


/* ObscuredByte() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte__cctor(MethodInfo *method)

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
          CryptoKeyGenerator_GenerateKey(0,0xff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey =
       (uint8_t)iVar1;
  return;
}


/* ObscuredByte(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
     ObscuredByte__ctor(ObscuredByte *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  this[2].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  this[2].hiddenValue = value;
  this[2].fakeValue = 0;
  this[2].inited = 1;
  return;
}


/* ObscuredByte op_Decrement(ObscuredByte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Decrement(ObscuredByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ cVar1 - 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = input.fakeValue;
  if (bVar3 != 0) {
    uVar2 = cVar1 - 1U;
  }
  input.fakeValue = uVar2;
  return input;
}


/* ObscuredByte op_Implicit(Byte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Implicit(uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  uVar1 = ObscuredByte_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  method_00 = (MethodInfo *)
              CONCAT22(0x100,CONCAT11(uVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte
                                            ->static_fields->cryptoKey));
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning(method_00);
  uStack3 = 0;
  if (bVar2 != 0) {
    uStack3 = value;
  }
  OVar4.inited = (bool)((uint)method_00 >> 0x18);
  OVar4._0_2_ = SUB42(method_00,0);
  OVar4.fakeValue = uStack3;
  return OVar4;
}


/* Byte op_Implicit(ObscuredByte) */

uint8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
        ObscuredByte_op_Implicit_1(ObscuredByte value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  return uVar1;
}


/* ObscuredByte op_Increment(ObscuredByte) */

ObscuredByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
ObscuredByte_op_Increment(ObscuredByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ cVar1 + 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = input.fakeValue;
  if (bVar3 != 0) {
    uVar2 = cVar1 + 1U;
  }
  input.fakeValue = uVar2;
  return input;
}

