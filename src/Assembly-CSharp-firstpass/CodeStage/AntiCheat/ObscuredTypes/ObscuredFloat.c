
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_ApplyNewCryptoKey(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->
               cryptoKey) {
    fVar2 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    if (uVar3 == 0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey
      ;
    }
    this->hiddenValue = (ACTkByte4)((uint)fVar2 ^ uVar3);
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  return;
}


/* Single Decrypt(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (float)(value ^ TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields
                         ->cryptoKey);
}


/* Single Decrypt(Int32, Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_Decrypt_1(int32_t value,int32_t key,MethodInfo *method)

{
  return (float)(value ^ key);
}


/* Int32 Encrypt(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_Encrypt(float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey ^
         (uint)value;
}


/* Int32 Encrypt(Single, Int32) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_Encrypt_1(float value,int32_t key,MethodInfo *method)

{
  return (uint)value ^ key;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_Equals(ObscuredFloat *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredFloat__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        iVar2 = func_?(obj);
        method_00 = *(MethodInfo **)(iVar2 + 0x10);
        fVar3 = ObscuredFloat_InternalDecrypt((ObscuredFloat *)&stack0xffffffd8,(MethodInfo *)0x0);
        DStack_4.m_value = (double)fVar3;
        fVar3 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
        dStack_5 = (double)fVar3;
        bVar6 = mscorlib.dll::System::Double::Double_Equals_1
                          (&DStack_4,(double)((ulonglong)dStack_5 >> 0x20),method_00);
        return bVar6;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      pcVar7 = (code *)swi(3);
      bVar6 = (*pcVar7)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredFloat) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_Equals_1(ObscuredFloat *this,ObscuredFloat obj,MethodInfo *method)

{
  ObscuredFloat_InternalDecrypt(&obj,(MethodInfo *)0x0);
  fVar1 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Double::Double_Equals_1
                    ((Double *)&stack0xffffffec,(double)((ulonglong)(double)fVar1 >> 0x20),unaff_EBP
                    );
  return bVar2;
}


/* Single GetDecrypted() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_GetDecrypted(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  fVar2 = (float)((uint)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (fVar4 = this->fakeValue, fVar4 != 0.0)) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar4 = (float)((uint)(fVar2 - fVar4) & _UNK_?);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      fVar7 = (float10)(*pcVar6)();
      return (float)fVar7;
    }
    pfVar8 = &(pOVar5->fields).floatEpsilon;
    if (*pfVar8 <= fVar4 && fVar4 != *pfVar8) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        cRam_? = '\x01';
      }
      pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar5 == (ObscuredCheatingDetector *)0x0) goto code_?;
      (*(pOVar5->klass->vtable).OnCheatingDetected.methodPtr)
                (pOVar5,(pOVar5->klass->vtable).OnCheatingDetected.method);
    }
  }
  return fVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetEncrypted(ObscuredFloat *this,MethodInfo *method)

{
  ObscuredFloat_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return (int32_t)this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetHashCode(ObscuredFloat *this,MethodInfo *method)

{
  SStack_1.m_value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_1,(MethodInfo *)0x0);
  return iVar2;
}


/* Single InternalDecrypt() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_InternalDecrypt(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar1;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  fVar2 = (float)((uint)this->hiddenValue ^ this->currentCryptoKey);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && (fVar4 = this->fakeValue, fVar4 != 0.0)) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar4 = (float)((uint)(fVar2 - fVar4) & _UNK_?);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      fVar7 = (float10)(*pcVar6)();
      return (float)fVar7;
    }
    pfVar8 = &(pOVar5->fields).floatEpsilon;
    if (*pfVar8 <= fVar4 && fVar4 != *pfVar8) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        cRam_? = '\x01';
      }
      pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar5 == (ObscuredCheatingDetector *)0x0) goto code_?;
      (*(pOVar5->klass->vtable).OnCheatingDetected.methodPtr)
                (pOVar5,(pOVar5->klass->vtable).OnCheatingDetected.method);
    }
  }
  return fVar2;
}


/* ACTkByte4 InternalEncrypt(Single) */

ACTkByte4 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (ACTkByte4)
         ((uint)value ^
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey);
}


/* ACTkByte4 InternalEncrypt(Single, Int32) */

ACTkByte4 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt_1(float value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  return (ACTkByte4)((uint)value ^ key);
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_RandomizeCryptoKey(ObscuredFloat *this,MethodInfo *method)

{
  pOVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pOVar2 = (ObscuredFloat *)ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  do {
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->currentCryptoKey = uVar3;
  } while (uVar3 == 0);
  this = pOVar2;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    this = (ObscuredFloat *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pOVar1->hiddenValue = (ACTkByte4)((uint)this ^ uVar3);
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetEncrypted(ObscuredFloat *this,int32_t encrypted,MethodInfo *method)

{
  this->inited = 1;
  (this->hiddenValue).b1 = (undefined1)encrypted;
  (this->hiddenValue).b2 = encrypted._1_1_;
  (this->hiddenValue).b3 = encrypted._2_1_;
  (this->hiddenValue).b4 = encrypted._3_1_;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    fVar2 = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = fVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString(ObscuredFloat *this,MethodInfo *method)

{
  SStack_1.m_value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_1(ObscuredFloat *this,String *format,MethodInfo *method)

{
  SStack_1.m_value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString_2(&SStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_2(ObscuredFloat *this,IFormatProvider *provider,MethodInfo *method)

{
  SStack_1.m_value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString_1(&SStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_3
                   (ObscuredFloat *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  SStack_1.m_value = ObscuredFloat_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString_3
                     (&SStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredFloat() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = iVar1;
  return;
}


/* ObscuredFloat(ACTkByte4) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__ctor(ObscuredFloat *this,ACTkByte4 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->hiddenValueOld = (Byte__Array *)0x0;
  func_?(&this->hiddenValueOld,0);
  this->fakeValue = 0.0;
  this->inited = 1;
  return;
}


/* ObscuredFloat op_Decrement(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Decrement
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = ObscuredFloat_InternalDecrypt(&input,(MethodInfo *)0x0);
  ppOVar2 = (ObscuredFloat__Class **)(fVar1 - _UNK_?);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    ppOVar2 = (ObscuredFloat__Class **)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    func_?();
  }
  if (cRam_? == '\0') {
    ppOVar2 = &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    func_?();
    cRam_? = '\x01';
  }
  uVar3 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      ppOVar2 = (ObscuredFloat__Class **)
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      func_?();
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  input.hiddenValue = (ACTkByte4)((uint)ppOVar2 ^ uVar3);
  fVar1 = 0.0;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    input.fakeValue = fVar1;
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->hiddenValueOld = input.hiddenValueOld;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = input._17_3_;
  return __return_storage_ptr__;
}


/* ObscuredFloat op_Implicit(Single) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Implicit(ObscuredFloat *__return_storage_ptr__,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  __return_storage_ptr__->fakeValue = 0.0;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value_00 = ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  ObscuredFloat__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Single op_Implicit(ObscuredFloat) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1(ObscuredFloat value,MethodInfo *method)

{
  fVar1 = ObscuredFloat_InternalDecrypt(&value,(MethodInfo *)0x0);
  return fVar1;
}


/* ObscuredFloat op_Increment(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Increment
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = ObscuredFloat_InternalDecrypt(&input,(MethodInfo *)0x0);
  ppOVar2 = (ObscuredFloat__Class **)(fVar1 + _UNK_?);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    ppOVar2 = (ObscuredFloat__Class **)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    func_?();
  }
  if (cRam_? == '\0') {
    ppOVar2 = &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    func_?();
    cRam_? = '\x01';
  }
  uVar3 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      ppOVar2 = (ObscuredFloat__Class **)
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      func_?();
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  input.hiddenValue = (ACTkByte4)((uint)ppOVar2 ^ uVar3);
  fVar1 = 0.0;
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    input.fakeValue = fVar1;
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->hiddenValueOld = input.hiddenValueOld;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = input._17_3_;
  return __return_storage_ptr__;
}

