
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_ApplyNewCryptoKey(ObscuredFloat *this,MethodInfo *method)

{
  ppBVar1 = &this->hiddenValueOld;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar2 = *ppBVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (pBVar2 != (Byte__Array *)
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->
                cryptoKey) {
    fVar3 = (float10)func_?(ppBVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    AVar4 = ObscuredFloat_InternalEncrypt_1
                      ((float)fVar3,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->
                       cryptoKey,(MethodInfo *)0x0);
    this->fakeValue = (float)AVar4;
    *ppBVar1 = (Byte__Array *)
               TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->
               cryptoKey;
  }
  return;
}


/* Single Decrypt(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_Decrypt(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredFloat__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredFloat__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        uStack_3 = *puVar2;
        uStack_4 = puVar2[1];
        uStack_5 = puVar2[2];
        uStack_6 = puVar2[3];
        uStack_7 = puVar2[4];
        dStack_8 = 0.0;
        fVar9 = (float10)func_?(&uStack_3,0);
        dStack_8 = (double)fVar9;
        fVar9 = (float10)func_?(&this->hiddenValueOld,0);
        dStack_10 = (double)fVar9;
        bVar11 = func_?(&dStack_8,dStack_10,0);
        return bVar11;
      }
      pOVar12 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      func_?();
      pcVar13 = (code *)swi(3);
      bVar11 = (*pcVar13)(pOVar12);
      return bVar11;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredFloat) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_Equals_1(ObscuredFloat *this,ObscuredFloat obj,MethodInfo *method)

{
  bStack_1 = obj.inited;
  uStack_2 = obj._17_3_;
  piVar3 = &iStack_4;
  iStack_4 = obj.currentCryptoKey;
  AStack_5 = obj.hiddenValue;
  pBStack_6 = obj.hiddenValueOld;
  fStack_7 = obj.fakeValue;
  uVar8 = 0;
  obj.fakeValue = 0.0;
  obj.inited = 0;
  obj._17_3_ = 0;
  fVar9 = (float10)func_?();
  obj._12_8_ = (BADTYPE)fVar9;
  fVar9 = (float10)func_?(&this->hiddenValueOld,0,piVar3,uVar8);
  dStack_10 = (double)fVar9;
  bVar11 = func_?(&obj.fakeValue,dStack_10,0);
  return bVar11;
}


/* Single GetDecrypted() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_GetDecrypted(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].hiddenValue.b1 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->hiddenValueOld =
         (Byte__Array *)
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->fakeValue = (float)AVar1;
    this[1].currentCryptoKey = 0;
    this[1].hiddenValue.b1 = 1;
  }
  fVar2 = (float)((uint)this->fakeValue ^ (uint)this->hiddenValueOld);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && ((float)this[1].currentCryptoKey != 0.0)) {
    dVar4 = (double)(fVar2 - (float)this[1].currentCryptoKey);
    fVar5 = (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                                    SUB84(dVar4,0) & _UNK_?);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar6 == (ObscuredCheatingDetector *)0x0) {
code_?:
      func_?(0);
      pcVar7 = (code *)swi(3);
      fVar8 = (float10)(*pcVar7)();
      return (float)fVar8;
    }
    pfVar9 = &(pOVar6->fields).floatEpsilon;
    if (*pfVar9 <= fVar5 && fVar5 != *pfVar9) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar6 == (ObscuredCheatingDetector *)0x0) goto code_?;
      (*(code *)(pOVar6->klass->vtable).OnCheatingDetected.method)
                (pOVar6,(pOVar6->klass->vtable).StartDetectionAutomatically.methodPtr);
    }
  }
  return fVar2;
}


/* Int32 GetEncrypted() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetEncrypted(ObscuredFloat *this,MethodInfo *method)

{
  func_?(&this->hiddenValueOld,0);
  return (int32_t)this->fakeValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_GetHashCode(ObscuredFloat *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValueOld,0);
  fStack_1 = (float)fVar2;
  iVar3 = func_?(&fStack_1,0);
  return iVar3;
}


/* Single InternalDecrypt() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_InternalDecrypt(ObscuredFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].hiddenValue.b1 == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this->hiddenValueOld =
         (Byte__Array *)
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
    AVar1 = ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->fakeValue = (float)AVar1;
    this[1].currentCryptoKey = 0;
    this[1].hiddenValue.b1 = 1;
  }
  fVar2 = (float)((uint)this->fakeValue ^ (uint)this->hiddenValueOld);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar3 != 0) && ((float)this[1].currentCryptoKey != 0.0)) {
    dVar4 = (double)(fVar2 - (float)this[1].currentCryptoKey);
    fVar5 = (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_?,
                                    SUB84(dVar4,0) & _UNK_?);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar6 == (ObscuredCheatingDetector *)0x0) {
code_?:
      func_?(0);
      pcVar7 = (code *)swi(3);
      fVar8 = (float10)(*pcVar7)();
      return (float)fVar8;
    }
    pfVar9 = &(pOVar6->fields).floatEpsilon;
    if (*pfVar9 <= fVar5 && fVar5 != *pfVar9) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar6 == (ObscuredCheatingDetector *)0x0) goto code_?;
      (*(code *)(pOVar6->klass->vtable).OnCheatingDetected.method)
                (pOVar6,(pOVar6->klass->vtable).StartDetectionAutomatically.methodPtr);
    }
  }
  return fVar2;
}


/* ACTkByte4 InternalEncrypt(Single) */

ACTkByte4 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&this->hiddenValueOld,0);
  do {
    pBVar2 = (Byte__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                       (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->hiddenValueOld = pBVar2;
  } while (pBVar2 == (Byte__Array *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this->fakeValue = (float)((uint)(float)fVar1 ^ (uint)pBVar2);
  return;
}


/* Void SetEncrypted(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetEncrypted(ObscuredFloat *this,int32_t encrypted,MethodInfo *method)

{
  this[1].hiddenValue.b1 = 1;
  this->fakeValue = (float)encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    fVar2 = (float10)func_?(&this->hiddenValueOld,0);
    this[1].currentCryptoKey = (int32_t)(float)fVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  fStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValueOld,0);
  fStack_1 = (float)fVar2;
  pSVar3 = (String *)func_?(&fStack_1,0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_1(ObscuredFloat *this,String *format,MethodInfo *method)

{
  fStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValueOld,0);
  fStack_1 = (float)fVar2;
  pSVar3 = (String *)func_?(&fStack_1,format,0);
  return pSVar3;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_2(ObscuredFloat *this,IFormatProvider *provider,MethodInfo *method)

{
  fStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValueOld,0);
  fStack_1 = (float)fVar2;
  pSVar3 = (String *)func_?(&fStack_1,provider,0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
         ObscuredFloat_ToString_3
                   (ObscuredFloat *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  fStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValueOld,0);
  fStack_1 = (float)fVar2;
  pSVar3 = (String *)func_?(&fStack_1,format,provider,0);
  return pSVar3;
}


/* ObscuredFloat() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__cctor(MethodInfo *method)

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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey = iVar1;
  return;
}


/* ObscuredFloat(ACTkByte4) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
     ObscuredFloat__ctor(ObscuredFloat *this,ACTkByte4 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  this->hiddenValueOld =
       (Byte__Array *)
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  this->fakeValue = (float)value;
  *(undefined4 *)&this->inited = 0;
  this[1].currentCryptoKey = 0;
  this[1].hiddenValue.b1 = 1;
  return;
}


/* ObscuredFloat op_Decrement(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Decrement
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&input,0);
  fVar2 = (float10)_UNK_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar3 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  input.hiddenValue = (ACTkByte4)((uint)(float)(fVar1 - fVar2) ^ uVar3);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    input.fakeValue = (float)(fVar1 - fVar2);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  AStack_2.b1 = 0;
  AStack_2.b2 = 0;
  AStack_2.b3 = 0;
  AStack_2.b4 = 0;
  pBStack_3 = (Byte__Array *)0x0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  AVar6 = ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  func_?(&iStack_1,AVar6,0);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    fStack_4 = value;
  }
  __return_storage_ptr__->currentCryptoKey = iStack_1;
  __return_storage_ptr__->hiddenValue = AStack_2;
  __return_storage_ptr__->hiddenValueOld = pBStack_3;
  __return_storage_ptr__->fakeValue = fStack_4;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_5;
  return __return_storage_ptr__;
}


/* Single op_Implicit(ObscuredFloat) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1(ObscuredFloat value,MethodInfo *method)

{
  fVar1 = (float10)func_?(&value,0);
  return (float)fVar1;
}


/* ObscuredFloat op_Increment(ObscuredFloat) */

ObscuredFloat *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
ObscuredFloat_op_Increment
          (ObscuredFloat *__return_storage_ptr__,ObscuredFloat input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&input,0);
  fVar2 = (float10)_UNK_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar3 = input.currentCryptoKey;
  if (input.currentCryptoKey == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->static_fields->cryptoKey;
  }
  input.hiddenValue = (ACTkByte4)((uint)(float)(fVar1 + fVar2) ^ uVar3);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar4 != 0) {
    input.fakeValue = (float)(fVar1 + fVar2);
  }
  __return_storage_ptr__->currentCryptoKey = input.currentCryptoKey;
  __return_storage_ptr__->hiddenValue = input.hiddenValue;
  __return_storage_ptr__->hiddenValueOld = input.hiddenValueOld;
  __return_storage_ptr__->fakeValue = input.fakeValue;
  __return_storage_ptr__->inited = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = input._17_3_;
  return __return_storage_ptr__;
}

