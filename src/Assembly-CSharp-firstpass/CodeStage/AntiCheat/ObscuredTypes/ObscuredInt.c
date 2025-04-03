
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_ApplyNewCryptoKey(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey)
  {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar2 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    }
    this->hiddenValue = uVar2 ^ uVar3;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  }
  return;
}


/* Int32 Decrypt(Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredInt__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar2 = (ObscuredInt *)func_?(obj);
        bVar3 = ObscuredInt_Equals_1(this,*pOVar2,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  uVar2 = this->currentCryptoKey;
  if (uVar2 != obj.currentCryptoKey) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      cRam_? = '\x01';
    }
    if (uVar2 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      cRam_? = '\x01';
    }
    if (obj.currentCryptoKey == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      obj.currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    }
    return (uVar1 ^ uVar2) == (obj.currentCryptoKey ^ obj.hiddenValue);
  }
  return uVar1 == obj.hiddenValue;
}


/* Int32 GetDecrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetDecrypted(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar2 = this->currentCryptoKey;
  uVar3 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  ObscuredInt_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_GetHashCode(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iStack_1 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pvVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                     ((uint8_t *)&iStack_1,(MethodInfo *)0x0);
  return (int32_t)pvVar2;
}


/* Int32 InternalDecrypt() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_InternalDecrypt(ObscuredInt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    iVar1 = ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  uVar2 = this->currentCryptoKey;
  uVar3 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  this->hiddenValue = iVar1;
  do {
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->currentCryptoKey = uVar2;
  } while (uVar2 == 0);
  uVar3 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  this->hiddenValue = uVar3 ^ uVar2;
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetEncrypted(ObscuredInt *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    iVar2 = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  IStack_1.m_value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_1(ObscuredInt *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  IStack_1.m_value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_1(&IStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_2(ObscuredInt *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  IStack_1.m_value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_2(&IStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
         ObscuredInt_ToString_3
                   (ObscuredInt *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  IStack_1.m_value = ObscuredInt_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_3
                     (&IStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredInt() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
     ObscuredInt__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredInt op_Decrement(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Decrement(ObscuredInt *__return_storage_ptr__,ObscuredInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = ObscuredInt_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value_00 = ObscuredInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt,0,0,0,0);
  }
  ObscuredUInt::ObscuredUInt_Encrypt(value_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUInt);
  }
  uVar2 = 0;
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  puVar3 = &UNK_?;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar5 = 0;
  if (bVar4 != 0) {
    uVar5 = value_00;
  }
  __return_storage_ptr__->currentCryptoKey = (uint32_t)puVar3;
  __return_storage_ptr__->hiddenValue = uVar2;
  __return_storage_ptr__->fakeValue = uVar5;
  *(undefined4 *)&__return_storage_ptr__->inited = uVar1;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Implicit(Int32) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit(ObscuredInt *__return_storage_ptr__,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  uVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor;
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValue = 0;
  __return_storage_ptr__->fakeValue = 0;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  if (uVar2 == 0) {
    func_?(pOVar1);
  }
  iVar3 = ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields;
  __return_storage_ptr__->hiddenValue = iVar3;
  __return_storage_ptr__->fakeValue = 0;
  __return_storage_ptr__->currentCryptoKey = pOVar4->cryptoKey;
  __return_storage_ptr__->inited = 1;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Int32 op_Implicit(ObscuredInt) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_op_Implicit_1(ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = ObscuredInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredFloat op_Implicit(ObscuredInt) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_2
          (ObscuredFloat *__return_storage_ptr__,ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = ObscuredInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredFloat::ObscuredFloat_InternalEncrypt((float)iVar1,(MethodInfo *)0x0);
  ObscuredFloat::ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffe8,value_00,(MethodInfo *)0x0);
  iVar3 = 0;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    fStack_2 = (float)iVar1;
  }
  __return_storage_ptr__->currentCryptoKey = iVar3;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  __return_storage_ptr__->fakeValue = fStack_2;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(ObscuredInt) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Implicit_3
          (ObscuredDouble *__return_storage_ptr__,ObscuredInt value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  iVar1 = ObscuredInt_InternalDecrypt(&value,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uStack_2 = 0.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value_00 = ObscuredDouble::ObscuredDouble_InternalEncrypt((double)iVar1,(MethodInfo *)0x0);
  ObscuredDouble::ObscuredDouble__ctor
            ((ObscuredDouble *)&stack0xffffffd4,value_00,(MethodInfo *)0x0);
  uVar3 = 0;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uStack_2 = (double)iVar1;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = 0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  (__return_storage_ptr__->hiddenValue).b5 = 0;
  (__return_storage_ptr__->hiddenValue).b6 = 0;
  (__return_storage_ptr__->hiddenValue).b7 = 0;
  (__return_storage_ptr__->hiddenValue).b8 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = (undefined4)uStack_2;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = uStack_2._4_4_;
  *(undefined8 *)&__return_storage_ptr__->inited = 0;
  return __return_storage_ptr__;
}


/* ObscuredInt op_Increment(ObscuredInt) */

ObscuredInt *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
ObscuredInt_op_Increment(ObscuredInt *__return_storage_ptr__,ObscuredInt input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = ObscuredInt_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
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

