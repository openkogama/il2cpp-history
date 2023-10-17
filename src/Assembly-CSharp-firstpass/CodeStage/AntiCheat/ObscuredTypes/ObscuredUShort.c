
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_ApplyNewCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (uVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
               cryptoKey) {
    uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar1 = ObscuredUShort_EncryptDecrypt_1
                      (uVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  return;
}


/* UInt16 EncryptDecrypt(UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey ^
         value;
}


/* UInt16 EncryptDecrypt(UInt16, UInt16) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_EncryptDecrypt_1(uint16_t value,uint16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals(ObscuredUShort *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredUShort__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_0).element_class) {
        pOVar2 = (ObscuredUShort *)func_?(obj);
        bVar3 = ObscuredUShort_Equals_1(this,*pOVar2,(MethodInfo *)0x0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredUShort) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_Equals_1(ObscuredUShort *this,ObscuredUShort obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = this->hiddenValue;
  if (this->currentCryptoKey != obj.currentCryptoKey) {
    uVar2 = this->currentCryptoKey;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar1 = ObscuredUShort_EncryptDecrypt_1(uVar1,uVar2,(MethodInfo *)0x0);
    uVar2 = ObscuredUShort_EncryptDecrypt_1(obj.hiddenValue,obj.currentCryptoKey,(MethodInfo *)0x0);
    return uVar1 == uVar2;
  }
  return uVar1 == obj.hiddenValue;
}


/* UInt16 GetDecrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetDecrypted(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->inited = 1;
    this->fakeValue = 0;
  }
  uVar1 = this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (uVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      uVar1 = (*pcVar5)();
      return uVar1;
    }
    (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
              (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
  }
  return uVar2;
}


/* UInt16 GetEncrypted() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_GetEncrypted(ObscuredUShort *this,MethodInfo *method)

{
  ObscuredUShort_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
        ObscuredUShort_GetHashCode(ObscuredUShort *this,MethodInfo *method)

{
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = (uint)uVar1;
  iVar3 = mscorlib.dll::System::UInt16::UInt16_GetHashCode((UInt16 *)&uStack_2,(MethodInfo *)0x0);
  return iVar3;
}


/* UInt16 InternalDecrypt() */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_InternalDecrypt(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
    uVar1 = ObscuredUShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    this->inited = 1;
    this->fakeValue = 0;
  }
  uVar1 = this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if (uVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  uVar2 = uVar2 ^ uVar1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && (this->fakeValue != 0)) && (uVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      uVar1 = (*pcVar5)();
      return uVar1;
    }
    (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)
              (pOVar4,(pOVar4->klass->vtable).OnCheatingDetected.method);
  }
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_RandomizeCryptoKey(ObscuredUShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fff,(MethodInfo *)0x0);
  uVar3 = (ushort)iVar2;
  this->currentCryptoKey = uVar3;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (uVar3 != 0) {
    this->hiddenValue = uVar3 ^ uVar1;
    return;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  this->hiddenValue =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey ^
       uVar1;
  return;
}


/* Void SetEncrypted(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetEncrypted(ObscuredUShort *this,uint16_t encrypted,MethodInfo *method)

{
  this->inited = 1;
  this->hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort_SetNewCryptoKey(uint16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey = newKey
    ;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString(ObscuredUShort *this,MethodInfo *method)

{
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = (uint)uVar1;
  pSVar3 = mscorlib.dll::System::UInt16::UInt16_ToString((UInt16 *)&uStack_2,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_1(ObscuredUShort *this,String *format,MethodInfo *method)

{
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = (uint)uVar1;
  pSVar3 = mscorlib.dll::System::UInt16::UInt16_ToString_2
                     ((UInt16 *)&uStack_2,format,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_2
                   (ObscuredUShort *this,IFormatProvider *provider,MethodInfo *method)

{
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = (uint)uVar1;
  pSVar3 = mscorlib.dll::System::UInt16::UInt16_ToString_1
                     ((UInt16 *)&uStack_2,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_ToString_3
                   (ObscuredUShort *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  uVar1 = ObscuredUShort_InternalDecrypt(this,(MethodInfo *)0x0);
  uStack_2 = (uint)uVar1;
  pSVar3 = mscorlib.dll::System::UInt16::UInt16_ToString_3
                     ((UInt16 *)&uStack_2,format,provider,(MethodInfo *)0x0);
  return pSVar3;
}


/* ObscuredUShort() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  iVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,0x7fff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey =
       (uint16_t)iVar1;
  return;
}


/* ObscuredUShort(UInt16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
     ObscuredUShort__ctor(ObscuredUShort *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->fakeValue = 0;
  this->inited = 1;
  return;
}


/* ObscuredUShort op_Decrement(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Decrement(ObscuredUShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = ObscuredUShort_InternalDecrypt(&input,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 - 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 - 1;
  }
  OVar4.hiddenValue = input.hiddenValue;
  OVar4.currentCryptoKey = input.currentCryptoKey;
  OVar4.fakeValue = input.fakeValue;
  OVar4.inited = input.inited;
  OVar4._7_1_ = input._7_1_;
  return OVar4;
}


/* ObscuredUShort op_Implicit(UInt16) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Implicit(uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort,0);
  }
  uVar2 = ObscuredUShort_EncryptDecrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort,uVar1);
  }
  uVar1 = CONCAT62((int6)(CONCAT17((char)((ulonglong)uVar1 >> 0x38),CONCAT16(1,(uint6)uVar2 << 0x10)
                                  ) >> 0x10),
                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->
                   cryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = value;
  }
  OVar4._6_2_ = (undefined2)((ulonglong)uVar1 >> 0x30);
  OVar4._0_4_ = (undefined4)uVar1;
  OVar4.fakeValue = uVar2;
  return OVar4;
}


/* UInt16 op_Implicit(ObscuredUShort) */

uint16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
         ObscuredUShort_op_Implicit_1(ObscuredUShort value,MethodInfo *method)

{
  uVar1 = ObscuredUShort_InternalDecrypt(&value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredUShort op_Increment(ObscuredUShort) */

ObscuredUShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::
ObscuredUShort_op_Increment(ObscuredUShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar1 = ObscuredUShort_InternalDecrypt(&input,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    cRam_? = '\x01';
  }
  uVar2 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredUShort->static_fields->cryptoKey;
  }
  input.hiddenValue = uVar2 ^ uVar1 + 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    input.fakeValue = uVar1 + 1;
  }
  OVar4.hiddenValue = input.hiddenValue;
  OVar4.currentCryptoKey = input.currentCryptoKey;
  OVar4.fakeValue = input.fakeValue;
  OVar4.inited = input.inited;
  OVar4._7_1_ = input._7_1_;
  return OVar4;
}

