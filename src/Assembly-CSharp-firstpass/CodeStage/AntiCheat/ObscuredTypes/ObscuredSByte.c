
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_ApplyNewCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->
               cryptoKey) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar2 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      cRam_? = '\x01';
    }
    if (bVar3 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      }
      bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = bVar2 ^ bVar3;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  return;
}


/* SByte EncryptDecrypt(SByte) */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_EncryptDecrypt(int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredSByte__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_0).element_class) {
        pOVar2 = (ObscuredSByte *)func_?(obj);
        bVar3 = ObscuredSByte_Equals_1(this,*pOVar2,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  bVar1 = this->hiddenValue;
  bVar2 = obj.currentCryptoKey;
  bVar3 = obj.hiddenValue;
  if (this->currentCryptoKey == bVar2) {
    return bVar1 == bVar3;
  }
  bVar4 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (bVar4 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  bVar1 = bVar1 ^ bVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (bVar2 != 0) {
    return bVar1 == (bVar2 ^ bVar3);
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  return bVar1 == (byte)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields
                         ->cryptoKey ^ bVar3);
}


/* SByte GetDecrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetDecrypted(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  bVar2 = this->hiddenValue;
  bVar3 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  bVar2 = bVar2 ^ bVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this->fakeValue != 0)) && (bVar2 != this->fakeValue)) {
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
  return bVar2;
}


/* SByte GetEncrypted() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_GetEncrypted(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  ObscuredSByte_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
        ObscuredSByte_GetHashCode(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT13(iVar1,(undefined3)uStack_2);
  iVar3 = mscorlib.dll::System::SByte::SByte_GetHashCode
                    ((SByte *)((int)&uStack_2 + 3),(MethodInfo *)0x0);
  return iVar3;
}


/* SByte InternalDecrypt() */

int8_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
       ObscuredSByte_InternalDecrypt(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
    iVar1 = ObscuredSByte_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    this->fakeValue = 0;
    this->inited = 1;
  }
  bVar2 = this->hiddenValue;
  bVar3 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if (bVar3 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  bVar2 = bVar2 ^ bVar3;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && (this->fakeValue != 0)) && (bVar2 != this->fakeValue)) {
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
  return bVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_RandomizeCryptoKey(ObscuredSByte *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  bVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  do {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80,0x7f,(MethodInfo *)0x0);
    bVar3 = (byte)iVar2;
    this->currentCryptoKey = bVar3;
  } while (bVar3 == 0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  this->hiddenValue = bVar3 ^ bVar1;
  return;
}


/* Void SetEncrypted(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetEncrypted(ObscuredSByte *this,int8_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    iVar2 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(SByte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte_SetNewCryptoKey(int8_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT13(iVar1,(undefined3)uStack_2);
  pSVar3 = mscorlib.dll::System::SByte::SByte_ToString
                     ((SByte *)((int)&uStack_2 + 3),(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_1(ObscuredSByte *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT13(iVar1,(undefined3)uStack_2);
  pSVar3 = mscorlib.dll::System::SByte::SByte_ToString_2
                     ((SByte *)((int)&uStack_2 + 3),format,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_2(ObscuredSByte *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT13(iVar1,(undefined3)uStack_2);
  pSVar3 = mscorlib.dll::System::SByte::SByte_ToString_1
                     ((SByte *)((int)&uStack_2 + 3),provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
         ObscuredSByte_ToString_3
                   (ObscuredSByte *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT13(iVar1,(undefined3)uStack_2);
  pSVar3 = mscorlib.dll::System::SByte::SByte_ToString_3
                     ((SByte *)((int)&uStack_2 + 3),format,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* ObscuredSByte() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
     ObscuredSByte__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredSByte op_Decrement(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Decrement(ObscuredSByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  bVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  input.hiddenValue = bVar2 ^ iVar1 - 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  bVar2 = input.fakeValue;
  if (bVar3 != 0) {
    bVar2 = iVar1 - 1U;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(&value,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredSByte op_Increment(ObscuredSByte) */

ObscuredSByte
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredSByte::
ObscuredSByte_op_Increment(ObscuredSByte input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
  }
  iVar1 = ObscuredSByte_InternalDecrypt(&input,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    cRam_? = '\x01';
  }
  bVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte);
    }
    bVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredSByte->static_fields->cryptoKey;
  }
  input.hiddenValue = bVar2 ^ iVar1 + 1U;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  bVar2 = input.fakeValue;
  if (bVar3 != 0) {
    bVar2 = iVar1 + 1U;
  }
  input.fakeValue = bVar2;
  return input;
}

