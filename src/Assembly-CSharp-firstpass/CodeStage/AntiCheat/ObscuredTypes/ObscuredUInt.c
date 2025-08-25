
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_ApplyNewCryptoKey(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey
     ) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      cRam_? = '\x01';
    }
    if (uVar1 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      }
      uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar2 ^ uVar1;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  return;
}


/* UInt32 Decrypt(UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_Decrypt(uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_0).element_class) {
        pOVar2 = (ObscuredUInt *)func_?(obj);
        bVar3 = ObscuredUInt_Equals_1(this,*pOVar2,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    uVar1 = this->hiddenValue;
    uVar2 = this->currentCryptoKey;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      cRam_? = '\x01';
    }
    if (uVar2 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      }
      uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      cRam_? = '\x01';
    }
    if (obj.currentCryptoKey == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
      }
      obj.currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    }
    return (uVar1 ^ uVar2) == (obj.hiddenValue ^ obj.currentCryptoKey);
  }
  return this->hiddenValue == obj.hiddenValue;
}


/* UInt32 GetDecrypted() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_GetDecrypted(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar2 = this->currentCryptoKey;
  uVar3 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
      func_?();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  ObscuredUInt_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
        ObscuredUInt_GetHashCode(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uStack_1 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pvVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                     ((uint8_t *)&uStack_1,(MethodInfo *)0x0);
  return (int32_t)pvVar2;
}


/* UInt32 InternalDecrypt() */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_InternalDecrypt(ObscuredUInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
    uVar1 = ObscuredUInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar2 = this->currentCryptoKey;
  uVar3 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
      func_?();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar1 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fffffff,(MethodInfo *)0x0);
  bVar3 = cRam_? == '\0';
  this->currentCryptoKey = uVar2;
  if (bVar3) {
    func_?();
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  this->hiddenValue = uVar2 ^ uVar1;
  return;
}


/* Void SetEncrypted(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetEncrypted(ObscuredUInt *this,uint32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt_SetNewCryptoKey(uint32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  UStack_1.m_value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt32::UInt32_ToString(&UStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_1(ObscuredUInt *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  UStack_1.m_value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt32::UInt32_ToString_2(&UStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_2(ObscuredUInt *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  UStack_1.m_value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt32::UInt32_ToString_1(&UStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_ToString_3
                   (ObscuredUInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  UStack_1.m_value = ObscuredUInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt32::UInt32_ToString_3
                     (&UStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredUInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
     ObscuredUInt__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredUInt op_Decrement(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Decrement
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar1 = ObscuredUInt_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 - 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 - 1;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  value_00 = ObscuredUInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,0,0,0,0);
  }
  ObscuredInt::ObscuredInt_Encrypt(value_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = 0;
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  puVar3 = &UNK_?;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar5 = 0;
  if (bVar4 != 0) {
    uVar5 = value_00;
  }
  __return_storage_ptr__->currentCryptoKey = (int32_t)puVar3;
  __return_storage_ptr__->hiddenValue = iVar2;
  __return_storage_ptr__->fakeValue = uVar5;
  *(undefined4 *)&__return_storage_ptr__->inited = uVar1;
  return __return_storage_ptr__;
}


/* ObscuredUInt op_Implicit(UInt32) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Implicit(ObscuredUInt *__return_storage_ptr__,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt;
  uVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).
          cctor_finished_or_no_cctor;
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  if (uVar2 == 0) {
    func_?(pOVar1);
  }
  uVar2 = ObscuredUInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields;
  __return_storage_ptr__->hiddenValue = uVar2;
  __return_storage_ptr__->fakeValue = 0;
  __return_storage_ptr__->currentCryptoKey = pOVar3->cryptoKey;
  __return_storage_ptr__->inited = 1;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* UInt32 op_Implicit(ObscuredUInt) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
         ObscuredUInt_op_Implicit_1(ObscuredUInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar1 = ObscuredUInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredUInt op_Increment(ObscuredUInt) */

ObscuredUInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUInt::
ObscuredUInt_op_Increment
          (ObscuredUInt *__return_storage_ptr__,ObscuredUInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar1 = ObscuredUInt_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 + 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 + 1;
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = input._13_3_;
  return __return_storage_ptr__;
}

