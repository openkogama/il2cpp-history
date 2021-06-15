
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_ApplyNewCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  pOVar1 = this + 2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = pOVar1->currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (iVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->
               cryptoKey) {
    iVar2 = func_?(pOVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    iVar2 = ObscuredSByte_EncryptDecrypt_1
                      (iVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this[2].hiddenValue = iVar2;
    pOVar1->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  return;
}


/* SByte EncryptDecrypt(SByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_EncryptDecrypt(int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey ^
         value;
}


/* SByte EncryptDecrypt(SByte, SByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_EncryptDecrypt_1(int8_t value,int8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_Equals(ObscuredSByte *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredSByte__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredSByte__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 2,*puVar2,0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredSByte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_Equals_1(ObscuredSByte *this,ObscuredSByte obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = this[2].currentCryptoKey;
  iVar2 = this[2].hiddenValue;
  if (iVar1 != obj.currentCryptoKey) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    iVar1 = ObscuredSByte_EncryptDecrypt_1(iVar2,iVar1,(MethodInfo *)0x0);
    iVar2 = ObscuredSByte_EncryptDecrypt_1(obj.hiddenValue,obj.currentCryptoKey,(MethodInfo *)0x0);
    return iVar1 == iVar2;
  }
  return iVar2 == obj.hiddenValue;
}


/* SByte GetDecrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetDecrypted(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this[2].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[2].hiddenValue = iVar1;
    this[2].fakeValue = 0;
    this[2].inited = 1;
  }
  bVar2 = this[2].hiddenValue;
  bVar3 = this[2].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
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
      iVar1 = (*pcVar6)();
      return iVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* SByte GetEncrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetEncrypted(ObscuredSByte *this,MethodInfo *method)

{
  func_?(this + 2,0);
  return this[2].hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
        ObscuredSByte_GetHashCode(ObscuredSByte *this,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  iVar1 = func_?(&stack0xfffffffb,0);
  return iVar1;
}


/* SByte InternalDecrypt() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_InternalDecrypt(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this[2].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[2].hiddenValue = iVar1;
    this[2].fakeValue = 0;
    this[2].inited = 1;
  }
  bVar2 = this[2].hiddenValue;
  bVar3 = this[2].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
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
      iVar1 = (*pcVar6)();
      return iVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_RandomizeCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = func_?(this + 2,0);
  do {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80,0x7f,(MethodInfo *)0x0);
    bVar3 = (byte)iVar2;
    this[2].currentCryptoKey = bVar3;
  } while (bVar3 == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this[2].hiddenValue = bVar3 ^ bVar1;
  return;
}


/* Void SetEncrypted(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetEncrypted(ObscuredSByte *this,int8_t encrypted,MethodInfo *method)

{
  this[2].inited = 1;
  this[2].hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = func_?(this + 2,0);
    this[2].fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetNewCryptoKey(int8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString(ObscuredSByte *this,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,0);
  return pSVar1;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_1(ObscuredSByte *this,String *format,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,format,0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_2(ObscuredSByte *this,IFormatProvider *provider,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,provider,0);
  return pSVar1;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_3
                   (ObscuredSByte *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  func_?(this + 2,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,format,provider,0);
  return pSVar1;
}


/* ObscuredSByte() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte__cctor(MethodInfo *method)

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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  this[2].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  this[2].hiddenValue = value;
  this[2].fakeValue = 0;
  this[2].inited = 1;
  return;
}


/* ObscuredSByte op_Decrement(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Decrement(ObscuredSByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  input.hiddenValue = bVar2 ^ cVar1 - 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  bVar2 = input.fakeValue;
  if (bVar3 != 0) {
    bVar2 = cVar1 - 1U;
  }
  input.fakeValue = bVar2;
  return input;
}


/* ObscuredSByte op_Implicit(SByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Implicit(int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  method_00 = (MethodInfo *)
              CONCAT22(0x100,CONCAT11(iVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte
                                            ->static_fields->cryptoKey));
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning(method_00);
  iStack3 = 0;
  if (bVar2 != 0) {
    iStack3 = value;
  }
  OVar4.inited = (bool)((uint)method_00 >> 0x18);
  OVar4._0_2_ = SUB42(method_00,0);
  OVar4.fakeValue = iStack3;
  return OVar4;
}


/* SByte op_Implicit(ObscuredSByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_op_Implicit_1(ObscuredSByte value,MethodInfo *method)

{
  iVar1 = func_?(&value,0);
  return iVar1;
}


/* ObscuredSByte op_Increment(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Increment(ObscuredSByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  input.hiddenValue = bVar2 ^ cVar1 + 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  bVar2 = input.fakeValue;
  if (bVar3 != 0) {
    bVar2 = cVar1 + 1U;
  }
  input.fakeValue = bVar2;
  return input;
}

