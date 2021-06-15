
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_ApplyNewCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  piVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = *piVar1;
  iVar3 = *(int *)((int)&this->hiddenValue + 4);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (((int)iVar2 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey)
     || (iVar3 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                 static_fields->cryptoKey + 4))) {
    iVar2 = func_?(piVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    iVar2 = ObscuredLong_Encrypt_1
                      (iVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
    pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields;
    *(int *)piVar1 = (int)pOVar4->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar4->cryptoKey + 4);
  }
  return;
}


/* Int64 Decrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Decrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Encrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Encrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals(ObscuredLong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredLong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredLong__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(&this->hiddenValue,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],
                                puVar2[5],puVar2[6],puVar2[7],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredLong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals_1(ObscuredLong *this,ObscuredLong obj,MethodInfo *method)

{
  bVar1 = func_?(&this->hiddenValue);
  return bVar1;
}


/* Int64 GetDecrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetDecrypted(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields;
    *(int *)&this->hiddenValue = (int)pOVar1->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar1->cryptoKey + 4);
    iVar2 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
    *(undefined4 *)&this->inited = 0;
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  iVar2 = this->fakeValue;
  key = this->hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Decrypt_1(iVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(int *)&this->inited != 0 || *(int *)&this->field_0x1c != 0)) &&
     (iVar2 != *(longlong *)&this->inited)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
      return iVar2;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    iVar2 = (*pcVar5)();
    return iVar2;
  }
  return iVar2;
}


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetEncrypted(ObscuredLong *this,MethodInfo *method)

{
  func_?(&this->hiddenValue,0);
  return this->fakeValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetHashCode(ObscuredLong *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* Int64 InternalDecrypt() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_InternalDecrypt(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields;
    *(int *)&this->hiddenValue = (int)pOVar1->cryptoKey;
    *(undefined4 *)((int)&this->hiddenValue + 4) = *(undefined4 *)((int)&pOVar1->cryptoKey + 4);
    iVar2 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
    *(undefined4 *)&this->inited = 0;
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  iVar2 = this->fakeValue;
  key = this->hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Decrypt_1(iVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (*(int *)&this->inited != 0 || *(int *)&this->field_0x1c != 0)) &&
     (iVar2 != *(longlong *)&this->inited)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
      return iVar2;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    iVar2 = (*pcVar5)();
    return iVar2;
  }
  return iVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_RandomizeCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&this->hiddenValue,0);
  do {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *(int32_t *)&this->hiddenValue = iVar2;
    *(int32_t *)((int)&this->hiddenValue + 4) = iVar2 >> 0x1f;
  } while (iVar2 == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar1 = ObscuredLong_Encrypt_1(iVar1,(longlong)iVar2,(MethodInfo *)0x0);
  this->fakeValue = iVar1;
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetEncrypted(ObscuredLong *this,int64_t encrypted,MethodInfo *method)

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


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString(ObscuredLong *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_1(ObscuredLong *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_2(ObscuredLong *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_3
                   (ObscuredLong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&this->hiddenValue,0);
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredLong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__cctor(MethodInfo *method)

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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredLong(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__ctor(ObscuredLong *this,int64_t value,MethodInfo *method)

{
  func_?(&this->hiddenValue);
  return;
}


/* ObscuredLong op_Decrement(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Decrement
          (ObscuredLong *__return_storage_ptr__,ObscuredLong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = func_?(&stack0x00000008,0);
  iVar2 = (int)uVar1 + -1;
  iVar3 = (int)((ulonglong)uVar1 >> 0x20) - (uint)((int)uVar1 == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar4 = ObscuredLong_Encrypt_1
                    (CONCAT44(iVar3,iVar2),
                     CONCAT44((undefined4)input.currentCryptoKey,in_stack_5),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)iVar4;
  input.hiddenValue._0_4_ = (undefined4)((ulonglong)iVar4 >> 0x20);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    input.hiddenValue._4_4_ = iVar2;
    input.fakeValue._0_4_ = iVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_5;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  *(int *)&__return_storage_ptr__->fakeValue = input.hiddenValue._4_4_;
  *(int *)((int)&__return_storage_ptr__->fakeValue + 4) = (int)input.fakeValue;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}


/* ObscuredLong op_Implicit(Int64) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Implicit(ObscuredLong *__return_storage_ptr__,int64_t value,MethodInfo *method)

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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar9 = ObscuredLong_Encrypt(CONCAT44((undefined4)value,in_stack_10),(MethodInfo *)0x0);
  func_?(&uStack_1,iVar9,0);
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


/* Int64 op_Implicit(ObscuredLong) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_op_Implicit_1(ObscuredLong value,MethodInfo *method)

{
  iVar1 = func_?(&value,0);
  return iVar1;
}


/* ObscuredLong op_Increment(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Increment
          (ObscuredLong *__return_storage_ptr__,ObscuredLong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  lVar1 = func_?(&stack0x00000008,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Encrypt_1
                    (lVar1 + 1,CONCAT44((undefined4)input.currentCryptoKey,in_stack_3),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)iVar2;
  input.hiddenValue._0_4_ = (undefined4)((ulonglong)iVar2 >> 0x20);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  lVar5 = CONCAT44((undefined4)input.fakeValue,input.hiddenValue._4_4_);
  if (bVar4 != 0) {
    lVar5 = lVar1 + 1;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  __return_storage_ptr__->fakeValue = lVar5;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}

