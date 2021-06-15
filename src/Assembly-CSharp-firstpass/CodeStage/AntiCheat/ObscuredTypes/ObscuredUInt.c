
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_ApplyNewCryptoKey(ObscuredUInt *this,MethodInfo *method)

{
  puVar1 = &this->fakeValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = *puVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (uVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey
     ) {
    uVar2 = func_?(puVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = ObscuredUInt_Encrypt_1
                      (uVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    *(uint32_t *)&this->inited = uVar2;
    *puVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  return;
}


/* UInt32 Decrypt(UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Decrypt(uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey ^
         value;
}


/* UInt32 Decrypt(UInt32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Decrypt_1(uint32_t value,uint32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey ^
         value;
}


/* UInt32 Encrypt(UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Encrypt(uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey ^
         value;
}


/* UInt32 Encrypt(UInt32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Encrypt_1(uint32_t value,uint32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_Equals(ObscuredUInt *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredUInt__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(&this->fakeValue,*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredUInt) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_Equals_1(ObscuredUInt *this,ObscuredUInt obj,MethodInfo *method)

{
  bVar1 = func_?(&this->fakeValue,obj.currentCryptoKey,obj.hiddenValue,obj.fakeValue,
                          obj._12_4_,method);
  return bVar1;
}


/* UInt32 GetDecrypted() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_GetDecrypted(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    *(uint32_t *)&this->inited = uVar1;
    this[1].currentCryptoKey = 0;
    *(undefined1 *)&this[1].hiddenValue = 1;
  }
  uVar2 = *(uint *)&this->inited;
  uVar3 = this->fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this[1].currentCryptoKey != 0)) && (uVar2 != this[1].currentCryptoKey)) {
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
  return uVar2;
}


/* UInt32 GetEncrypted() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_GetEncrypted(ObscuredUInt *this,MethodInfo *method)

{
  func_?(&this->fakeValue,0);
  return *(uint32_t *)&this->inited;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
        ObscuredUInt_GetHashCode(ObscuredUInt *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* UInt32 InternalDecrypt() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_InternalDecrypt(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    *(uint32_t *)&this->inited = uVar1;
    this[1].currentCryptoKey = 0;
    *(undefined1 *)&this[1].hiddenValue = 1;
  }
  uVar2 = *(uint *)&this->inited;
  uVar3 = this->fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this[1].currentCryptoKey != 0)) && (uVar2 != this[1].currentCryptoKey)) {
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
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_RandomizeCryptoKey(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(&this->fakeValue,0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fffffff,(MethodInfo *)0x0);
  this->fakeValue = uVar2;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  *(uint32_t *)&this->inited = uVar2 ^ uVar1;
  return;
}


/* Void SetEncrypted(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetEncrypted(ObscuredUInt *this,uint32_t encrypted,MethodInfo *method)

{
  *(undefined1 *)&this[1].hiddenValue = 1;
  *(uint32_t *)&this->inited = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?(&this->fakeValue,0);
    this[1].currentCryptoKey = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetNewCryptoKey(uint32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString(ObscuredUInt *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_1(ObscuredUInt *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_2(ObscuredUInt *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_3
                   (ObscuredUInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredUInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt__cctor(MethodInfo *method)

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
  uVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey = uVar1;
  return;
}


/* ObscuredUInt(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt__ctor(ObscuredUInt *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  this->fakeValue =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  *(uint32_t *)&this->inited = value;
  this[1].currentCryptoKey = 0;
  *(undefined1 *)&this[1].hiddenValue = 1;
  return;
}


/* ObscuredUInt op_Decrement(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Decrement
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ iVar1 - 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = iVar1 - 1U;
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = input._13_3_;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Explicit(ObscuredUInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Explicit(ObscuredInt *__return_storage_ptr__,ObscuredUInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = func_?(&value,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar5 = ObscuredInt::ObscuredInt_Encrypt(value_00,(MethodInfo *)0x0);
  func_?(&iStack_1,iVar5,0);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    iStack_3 = value_00;
  }
  __return_storage_ptr__->currentCryptoKey = iStack_1;
  __return_storage_ptr__->hiddenValue = iStack_2;
  __return_storage_ptr__->fakeValue = iStack_3;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_4;
  return __return_storage_ptr__;
}


/* ObscuredUInt op_Implicit(UInt32) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Implicit(ObscuredUInt *__return_storage_ptr__,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar5 = ObscuredUInt_Encrypt(value,(MethodInfo *)0x0);
  func_?(&uStack_1,uVar5,0);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uStack_3 = value;
  }
  __return_storage_ptr__->currentCryptoKey = uStack_1;
  __return_storage_ptr__->hiddenValue = uStack_2;
  __return_storage_ptr__->fakeValue = uStack_3;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_4;
  return __return_storage_ptr__;
}


/* UInt32 op_Implicit(ObscuredUInt) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_op_Implicit_1(ObscuredUInt value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  return uVar1;
}


/* ObscuredUInt op_Increment(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Increment
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ iVar1 + 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = iVar1 + 1U;
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = input._13_3_;
  return __return_storage_ptr__;
}

