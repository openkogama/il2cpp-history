
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_ApplyNewCryptoKey(ObscuredBool *this,MethodInfo *method)

{
  pbVar1 = &this->fakeValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = *pbVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  if (uVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey
     ) {
    value = func_?(pbVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    iVar3 = ObscuredBool_Encrypt_1
                      (value,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    *(int32_t *)(this + 1) = iVar3;
    *pbVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  }
  return;
}


/* Boolean Decrypt(Int32) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  return ((uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                cryptoKey ^ value) != 0xb5;
}


/* Boolean Decrypt(Int32, Byte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Decrypt_1(int32_t value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  }
  return ((uint)key ^ value) != 0xb5;
}


/* Int32 Encrypt(Boolean) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_Encrypt(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  return (uint)value * 0x20 + 0xb5 ^
         (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey
  ;
}


/* Int32 Encrypt(Boolean, Byte) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_Encrypt_1(bool value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  }
  return (uint)value * 0x20 + 0xb5 ^ (uint)key;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Equals(ObscuredBool *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredBool__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredBool__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        puVar2 = (undefined8 *)func_?(obj);
        bVar3 = func_?(&this->fakeValue,*puVar2,*(undefined4 *)(puVar2 + 1),0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredBool) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Equals_1(ObscuredBool *this,ObscuredBool obj,MethodInfo *method)

{
  bVar1 = func_?(&this->fakeValue,obj._0_8_,obj._8_4_,method);
  return bVar1;
}


/* Boolean GetDecrypted() */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_GetDecrypted(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*(char *)((int)&this[1].hiddenValue + 2) == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    iVar1 = ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    *(int32_t *)(this + 1) = iVar1;
    *(undefined2 *)&this[1].hiddenValue = 0x100;
    *(undefined1 *)((int)&this[1].hiddenValue + 2) = 1;
  }
  bVar2 = ((uint)this->fakeValue ^ *(uint *)(this + 1)) != 0xb5;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(char *)((int)&this[1].hiddenValue + 1) != '\0')) &&
     (bVar2 != (bool)(char)this[1].hiddenValue)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      bVar3 = (*pcVar5)();
      return bVar3;
    }
    (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)
              (pOVar4,(pOVar4->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_GetEncrypted(ObscuredBool *this,MethodInfo *method)

{
  func_?(&this->fakeValue,0);
  return *(int32_t *)(this + 1);
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_GetHashCode(ObscuredBool *this,MethodInfo *method)

{
  func_?(&this->fakeValue,0,(uint)in_ECX);
  iVar1 = func_?(&stack0xfffffffb,0);
  return iVar1;
}


/* Boolean InternalDecrypt() */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_InternalDecrypt(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*(char *)((int)&this[1].hiddenValue + 2) == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    this->fakeValue =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    iVar1 = ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    *(int32_t *)(this + 1) = iVar1;
    *(undefined2 *)&this[1].hiddenValue = 0x100;
    *(undefined1 *)((int)&this[1].hiddenValue + 2) = 1;
  }
  bVar2 = ((uint)this->fakeValue ^ *(uint *)(this + 1)) != 0xb5;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(char *)((int)&this[1].hiddenValue + 1) != '\0')) &&
     (bVar2 != (bool)(char)this[1].hiddenValue)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      bVar3 = (*pcVar5)();
      return bVar3;
    }
    (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)
              (pOVar4,(pOVar4->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return bVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_RandomizeCryptoKey(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&this->fakeValue,0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x96,(MethodInfo *)0x0);
  value = (bool)iVar1;
  this->fakeValue = value;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  iVar1 = ObscuredBool_Encrypt_1(value,value,(MethodInfo *)0x0);
  *(int32_t *)(this + 1) = iVar1;
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_SetEncrypted(ObscuredBool *this,int32_t encrypted,MethodInfo *method)

{
  *(undefined1 *)((int)&this[1].hiddenValue + 2) = 1;
  *(int32_t *)(this + 1) = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?(&this->fakeValue,0);
    *(undefined1 *)&this[1].hiddenValue = uVar2;
    *(undefined1 *)((int)&this[1].hiddenValue + 1) = 1;
  }
  return;
}


/* Void SetNewCryptoKey(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_SetNewCryptoKey(uint8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
         ObscuredBool_ToString(ObscuredBool *this,MethodInfo *method)

{
  func_?(&this->fakeValue,0,(uint)in_ECX);
  pSVar1 = (String *)func_?(&stack0xfffffffb,0);
  return pSVar1;
}


/* ObscuredBool() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool__cctor(MethodInfo *method)

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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey =
       (uint8_t)iVar1;
  return;
}


/* ObscuredBool(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool__ctor(ObscuredBool *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  this->fakeValue =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  *(int32_t *)(this + 1) = value;
  *(undefined2 *)&this[1].hiddenValue = 0;
  *(undefined1 *)((int)&this[1].hiddenValue + 2) = 1;
  return;
}


/* ObscuredBool op_Implicit(Boolean) */

ObscuredBool *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
ObscuredBool_op_Implicit(ObscuredBool *__return_storage_ptr__,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,0,0);
  }
  iVar3 = ObscuredBool_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,uVar1,uVar2);
  }
  uVar1 = CONCAT71((int7)(CONCAT44(iVar3,(int)uVar1) >> 8),
                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                   cryptoKey);
  uVar2 = CONCAT13((char)((uint)uVar2 >> 0x18),0x10000);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uVar2 = CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(1,value));
  }
  __return_storage_ptr__->currentCryptoKey = (char)uVar1;
  *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  __return_storage_ptr__->hiddenValue = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->fakeValue = (char)uVar2;
  __return_storage_ptr__->fakeValueChanged = (char)((uint)uVar2 >> 8);
  __return_storage_ptr__->inited = (char)((uint)uVar2 >> 0x10);
  __return_storage_ptr__->field_0xb = (char)((uint)uVar2 >> 0x18);
  return __return_storage_ptr__;
}


/* Boolean op_Implicit(ObscuredBool) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_op_Implicit_1(ObscuredBool value,MethodInfo *method)

{
  bVar1 = func_?(&value,0);
  return bVar1;
}

