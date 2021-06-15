
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_ApplyNewCryptoKey(ObscuredInt *this,MethodInfo *method)

{
  piVar1 = &this->fakeValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = *piVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (iVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey)
  {
    iVar3 = func_?(piVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    iVar3 = ObscuredInt_Encrypt_1
                      (iVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    *(int32_t *)&this->inited = iVar3;
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  }
  return;
}


/* Int32 Decrypt(Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey ^
         value;
}


/* Int32 Decrypt(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Decrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey ^
         value;
}


/* Int32 Encrypt(Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey ^
         value;
}


/* Int32 Encrypt(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_Equals(ObscuredInt *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredInt__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(&this->fakeValue,*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredInt) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_Equals_1(ObscuredInt *this,ObscuredInt obj,MethodInfo *method)

{
  bVar1 = func_?(&this->fakeValue,obj.currentCryptoKey,obj.hiddenValue,obj.fakeValue,
                          obj._12_4_,method);
  return bVar1;
}


/* Int32 GetDecrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetDecrypted(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    *(int32_t *)&this->inited = iVar1;
    this[1].currentCryptoKey = 0;
    *(undefined1 *)&this[1].hiddenValue = 1;
  }
  uVar2 = *(uint *)&this->inited;
  uVar3 = this->fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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
      iVar1 = (*pcVar6)();
      return iVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return uVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetEncrypted(ObscuredInt *this,MethodInfo *method)

{
  func_?(&this->fakeValue,0);
  return *(int32_t *)&this->inited;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetHashCode(ObscuredInt *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* Int32 InternalDecrypt() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_InternalDecrypt(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    *(int32_t *)&this->inited = iVar1;
    this[1].currentCryptoKey = 0;
    *(undefined1 *)&this[1].hiddenValue = 1;
  }
  uVar2 = *(uint *)&this->inited;
  uVar3 = this->fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (uVar3 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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
      iVar1 = (*pcVar6)();
      return iVar1;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)
              (pOVar5,(pOVar5->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_RandomizeCryptoKey(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(&this->fakeValue,0);
  *(undefined4 *)&this->inited = uVar1;
  do {
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  } while (uVar2 == 0);
  uVar3 = *(uint *)&this->inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *(uint *)&this->inited = uVar3 ^ uVar2;
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetEncrypted(ObscuredInt *this,int32_t encrypted,MethodInfo *method)

{
  *(undefined1 *)&this[1].hiddenValue = 1;
  *(int32_t *)&this->inited = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = func_?(&this->fakeValue,0);
    this[1].currentCryptoKey = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString(ObscuredInt *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_1(ObscuredInt *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_2(ObscuredInt *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_3
                   (ObscuredInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->fakeValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt__cctor(MethodInfo *method)

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
          CryptoKeyGenerator_GenerateKey(-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey = iVar1;
  return;
}


/* ObscuredInt(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt__ctor(ObscuredInt *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  this->fakeValue =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  *(int32_t *)&this->inited = value;
  this[1].currentCryptoKey = 0;
  *(undefined1 *)&this[1].hiddenValue = 1;
  return;
}


/* ObscuredInt op_Decrement(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Decrement(ObscuredInt *__return_storage_ptr__,ObscuredInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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


/* ObscuredUInt op_Explicit(ObscuredInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Explicit(ObscuredUInt *__return_storage_ptr__,ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = func_?(&value,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
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
  uVar5 = ObscuredUInt::ObscuredUInt_Encrypt(value_00,(MethodInfo *)0x0);
  func_?(&uStack_1,uVar5,0);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uStack_3 = value_00;
  }
  __return_storage_ptr__->currentCryptoKey = uStack_1;
  __return_storage_ptr__->hiddenValue = uStack_2;
  __return_storage_ptr__->fakeValue = uStack_3;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_4;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Implicit(Int32) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit(ObscuredInt *__return_storage_ptr__,int32_t value,MethodInfo *method)

{
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
  iVar5 = ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  func_?(&iStack_1,iVar5,0);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    iStack_3 = value;
  }
  __return_storage_ptr__->currentCryptoKey = iStack_1;
  __return_storage_ptr__->hiddenValue = iStack_2;
  __return_storage_ptr__->fakeValue = iStack_3;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_4;
  return __return_storage_ptr__;
}


/* Int32 op_Implicit(ObscuredInt) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_op_Implicit_1(ObscuredInt value,MethodInfo *method)

{
  iVar1 = func_?(&value,0);
  return iVar1;
}


/* ObscuredFloat op_Implicit(ObscuredInt) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_2
          (ObscuredFloat *__return_storage_ptr__,ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&value,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_2 = 0;
  AStack_3.b1 = 0;
  AStack_3.b2 = 0;
  AStack_3.b3 = 0;
  AStack_3.b4 = 0;
  pBStack_4 = (Byte__Array *)0x0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  AVar7 = ObscuredFloat::ObscuredFloat_InternalEncrypt((float)iVar1,(MethodInfo *)0x0);
  func_?(&iStack_2,AVar7,0);
  bVar8 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar8 != 0) {
    fStack_5 = (float)iVar1;
  }
  __return_storage_ptr__->currentCryptoKey = iStack_2;
  __return_storage_ptr__->hiddenValue = AStack_3;
  __return_storage_ptr__->hiddenValueOld = pBStack_4;
  __return_storage_ptr__->fakeValue = fStack_5;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_6;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(ObscuredInt) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_3
          (ObscuredDouble *__return_storage_ptr__,ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?();
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  pBStack_6 = (Byte__Array *)0x0;
  uStack_7 = 0;
  uStack_8 = 0.0;
  uStack_9 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar10 = ObscuredDouble::ObscuredDouble_InternalEncrypt((double)iVar1,(MethodInfo *)0x0);
  func_?(&uStack_2,AVar10,0);
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar11 != 0) {
    uStack_8 = (double)iVar1;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = uStack_2;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = uStack_3;
  (__return_storage_ptr__->hiddenValue).b1 = (undefined1)uStack_4;
  (__return_storage_ptr__->hiddenValue).b2 = uStack_4._1_1_;
  (__return_storage_ptr__->hiddenValue).b3 = uStack_4._2_1_;
  (__return_storage_ptr__->hiddenValue).b4 = uStack_4._3_1_;
  (__return_storage_ptr__->hiddenValue).b5 = (undefined1)uStack_5;
  (__return_storage_ptr__->hiddenValue).b6 = uStack_5._1_1_;
  (__return_storage_ptr__->hiddenValue).b7 = uStack_5._2_1_;
  (__return_storage_ptr__->hiddenValue).b8 = uStack_5._3_1_;
  __return_storage_ptr__->hiddenValueOld = pBStack_6;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uStack_7;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = (undefined4)uStack_8;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = uStack_8._4_4_;
  *(undefined8 *)&__return_storage_ptr__->inited = uStack_9;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Increment(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Increment(ObscuredInt *__return_storage_ptr__,ObscuredInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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

