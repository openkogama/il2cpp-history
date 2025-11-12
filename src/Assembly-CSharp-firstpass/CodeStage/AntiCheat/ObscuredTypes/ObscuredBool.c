
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_ApplyNewCryptoKey(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey
     ) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar2 = ObscuredBool_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    }
    this->hiddenValue = (uint)bVar2 * 0x20 + 0xb5 ^ (uint)uVar1;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  }
  return;
}


/* Boolean Decrypt(Int32) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  return ((uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                cryptoKey ^ value) != 0xb5;
}


/* Boolean Decrypt(Int32, Byte) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Decrypt_1(int32_t value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey
         ^ (uint)value * 0x20 + 0xb5;
}


/* Int32 Encrypt(Boolean, Byte) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_Encrypt_1(bool value,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredBool__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        apOStack_2[0] = obj[1].klass;
        apOStack_2[1]._0_4_ = *(undefined4 *)&obj[1].monitor;
        bVar3 = ObscuredBool_Equals_1(this,(ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
        return bVar3;
      }
      FUN_?(obj);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredBool) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_Equals_1(ObscuredBool *this,ObscuredBool *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = this->hiddenValue;
  if (this->currentCryptoKey != obj->currentCryptoKey) {
    key = this->currentCryptoKey;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar1 = ObscuredBool_Decrypt_1(value,key,(MethodInfo *)0x0);
    bVar2 = ObscuredBool_Decrypt_1(obj->hiddenValue,obj->currentCryptoKey,(MethodInfo *)0x0);
    return bVar2 ^ bVar1 ^ 1;
  }
  return value == obj->hiddenValue;
}


/* Boolean GetDecrypted() */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_GetDecrypted(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    iVar1 = ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->fakeValueChanged = 1;
    this->inited = 1;
  }
  bVar2 = ((uint)this->currentCryptoKey ^ this->hiddenValue) != 0xb5;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValueChanged != 0)) && (bVar2 != (bool)this->fakeValue)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar3 = (*pcVar5)();
      return bVar3;
    }
    (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
              (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
  }
  return bVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_GetEncrypted(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  ObscuredBool_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_GetHashCode(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = ObscuredBool_InternalDecrypt(this,(MethodInfo *)0x0);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  return (uint)bVar1;
}


/* Boolean InternalDecrypt() */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_InternalDecrypt(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    iVar1 = ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->fakeValueChanged = 1;
    this->inited = 1;
  }
  bVar2 = ((uint)this->currentCryptoKey ^ this->hiddenValue) != 0xb5;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValueChanged != 0)) && (bVar2 != (bool)this->fakeValue)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar3 = (*pcVar5)();
      return bVar3;
    }
    (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
              (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
  }
  return bVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_RandomizeCryptoKey(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = ObscuredBool_InternalDecrypt(this,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  key = (*pcRam_?)(1,0x96);
  this->currentCryptoKey = key;
  iVar3 = ObscuredBool_Encrypt_1(value,key,(MethodInfo *)0x0);
  this->hiddenValue = iVar3;
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_SetEncrypted(ObscuredBool *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar1 = ObscuredBool_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = bVar1;
    this->fakeValueChanged = 1;
  }
  return;
}


/* Void SetNewCryptoKey(Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_SetNewCryptoKey(uint8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
         ObscuredBool_ToString(ObscuredBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = ObscuredBool_InternalDecrypt(this,(MethodInfo *)0x0);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_False;
  if (bVar1 != 0) {
    pSVar2 = StringLiteral_True;
  }
  return pSVar2;
}


/* ObscuredBool() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
               ->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->fakeValueChanged = 0;
  this->inited = 1;
  return;
}


/* ObscuredBool op_Implicit(Boolean) */

ObscuredBool *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
ObscuredBool_op_Implicit(ObscuredBool *__return_storage_ptr__,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  __return_storage_ptr__->fakeValueChanged = 0;
  __return_storage_ptr__->inited = 0;
  __return_storage_ptr__->field_0xb = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = ObscuredBool_Encrypt(value,(MethodInfo *)0x0);
  ObscuredBool__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
    __return_storage_ptr__->fakeValueChanged = 1;
  }
  return __return_storage_ptr__;
}


/* Boolean op_Implicit(ObscuredBool) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
     ObscuredBool_op_Implicit_1(ObscuredBool *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = ObscuredBool_InternalDecrypt(value,(MethodInfo *)0x0);
  return bVar1;
}

