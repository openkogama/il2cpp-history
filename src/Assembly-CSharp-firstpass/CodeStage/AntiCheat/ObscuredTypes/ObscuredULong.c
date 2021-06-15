
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_ApplyNewCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  puVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = *puVar1;
  iVar3 = *(int *)((int)&this->hiddenValue + 4);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (((int)uVar2 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey)
     || (iVar3 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                 static_fields->cryptoKey + 4))) {
    uVar2 = func_?(puVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar2 = ObscuredULong_Encrypt_1
                      (uVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
    pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields;
    *(int *)puVar1 = (int)pOVar4->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar4->cryptoKey + 4);
  }
  return;
}


/* UInt64 Decrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey ^ (uint)value);
}


/* UInt64 Decrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey ^ (uint)value);
}


/* UInt64 Encrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey ^ (uint)value);
}


/* UInt64 Encrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey ^ (uint)value);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals(ObscuredULong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredULong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredULong__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(&this->hiddenValue,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],
                                puVar2[5],puVar2[6],puVar2[7],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredULong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals_1(ObscuredULong *this,ObscuredULong obj,MethodInfo *method)

{
  bVar1 = func_?(&this->hiddenValue);
  return bVar1;
}


/* UInt64 GetDecrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetDecrypted(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields;
    *(int *)&this->hiddenValue = (int)pOVar1->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar1->cryptoKey + 4);
    uVar2 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
    *(undefined4 *)&this->inited = 0;
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  uVar2 = this->fakeValue;
  key = this->hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Decrypt_1(uVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(int *)&this->inited != 0 || *(int *)&this->field_0x1c != 0)) &&
     (uVar2 != *(uint64_t *)&this->inited)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
      return uVar2;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    uVar2 = (*pcVar5)();
    return uVar2;
  }
  return uVar2;
}


/* UInt64 GetEncrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetEncrypted(ObscuredULong *this,MethodInfo *method)

{
  func_?(&this->hiddenValue,0);
  return this->fakeValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
        ObscuredULong_GetHashCode(ObscuredULong *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* UInt64 InternalDecrypt() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_InternalDecrypt(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields;
    *(int *)&this->hiddenValue = (int)pOVar1->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar1->cryptoKey + 4);
    uVar2 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
    *(undefined4 *)&this->inited = 0;
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  uVar2 = this->fakeValue;
  key = this->hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Decrypt_1(uVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(int *)&this->inited != 0 || *(int *)&this->field_0x1c != 0)) &&
     (uVar2 != *(uint64_t *)&this->inited)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
      return uVar2;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    uVar2 = (*pcVar5)();
    return uVar2;
  }
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_RandomizeCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(&this->hiddenValue,0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fffffff,(MethodInfo *)0x0);
  *(int32_t *)&this->hiddenValue = iVar2;
  *(int32_t *)((int)&this->hiddenValue + 4) = iVar2 >> 0x1f;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_Encrypt_1(uVar1,(longlong)iVar2,(MethodInfo *)0x0);
  this->fakeValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetEncrypted(ObscuredULong *this,uint64_t encrypted,MethodInfo *method)

{
  *(undefined4 *)&this->fakeValue = in_stack_1;
  *(undefined1 *)&this[1].currentCryptoKey = 1;
  *(undefined4 *)((int)&this->fakeValue + 4) = (undefined4)encrypted;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    uVar3 = func_?(&this->hiddenValue,0);
    *(undefined8 *)&this->inited = uVar3;
  }
  return;
}


/* Void SetNewCryptoKey(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetNewCryptoKey(uint64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString(ObscuredULong *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_1(ObscuredULong *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_2(ObscuredULong *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_3
                   (ObscuredULong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredULong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__cctor(MethodInfo *method)

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
          CryptoKeyGenerator_GenerateKey(0,0x7fffffff,(MethodInfo *)0x0);
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredULong(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__ctor(ObscuredULong *this,uint64_t value,MethodInfo *method)

{
  func_?(&this->hiddenValue);
  return;
}


/* ObscuredULong op_Decrement(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Decrement
          (ObscuredULong *__return_storage_ptr__,ObscuredULong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  lVar1 = func_?(&stack0x00000008,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Encrypt_1
                    (lVar1 - 1U,CONCAT44((undefined4)input.currentCryptoKey,in_stack_3),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)uVar2;
  input.hiddenValue._0_4_ = (undefined4)(uVar2 >> 0x20);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = CONCAT44((undefined4)input.fakeValue,input.hiddenValue._4_4_);
  if (bVar4 != 0) {
    uVar2 = lVar1 - 1U;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  __return_storage_ptr__->fakeValue = uVar2;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}


/* ObscuredULong op_Implicit(UInt64) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Implicit(ObscuredULong *__return_storage_ptr__,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar9 = ObscuredULong_Encrypt(CONCAT44((undefined4)value,in_stack_10),(MethodInfo *)0x0);
  func_?(&uStack_1,uVar9,0);
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar11 != 0) {
    uStack_5 = in_stack_10;
    uStack_6 = (undefined4)value;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = uStack_1;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = uStack_2;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = uStack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = uStack_4;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = uStack_5;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = uStack_6;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_7;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_8;
  return __return_storage_ptr__;
}


/* UInt64 op_Implicit(ObscuredULong) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_op_Implicit_1(ObscuredULong value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  return uVar1;
}


/* ObscuredULong op_Increment(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Increment
          (ObscuredULong *__return_storage_ptr__,ObscuredULong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  lVar1 = func_?(&stack0x00000008,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Encrypt_1
                    (lVar1 + 1U,CONCAT44((undefined4)input.currentCryptoKey,in_stack_3),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)uVar2;
  input.hiddenValue._0_4_ = (undefined4)(uVar2 >> 0x20);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = CONCAT44((undefined4)input.fakeValue,input.hiddenValue._4_4_);
  if (bVar4 != 0) {
    uVar2 = lVar1 + 1U;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  __return_storage_ptr__->fakeValue = uVar2;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}

