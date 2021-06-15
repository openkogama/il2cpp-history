
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_ApplyNewCryptoKey(ObscuredShort *this,MethodInfo *method)

{
  pOVar1 = this + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar2 = pOVar1->currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  if (sVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->
               cryptoKey) {
    iVar3 = func_?(pOVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    iVar3 = ObscuredShort_EncryptDecrypt_1
                      (iVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this[1].hiddenValue = iVar3;
    pOVar1->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
  }
  return;
}


/* Int16 EncryptDecrypt(Int16) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_EncryptDecrypt(int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey ^
         value;
}


/* Int16 EncryptDecrypt(Int16, Int16) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_EncryptDecrypt_1(int16_t value,int16_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  return TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey ^
         value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_Equals(ObscuredShort *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredShort__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredShort__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(this + 1,*puVar2,puVar2[1],0);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredShort) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_Equals_1(ObscuredShort *this,ObscuredShort obj,MethodInfo *method)

{
  bVar1 = func_?(this + 1,obj._0_4_,obj._4_4_,method);
  return bVar1;
}


/* Int16 GetDecrypted() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetDecrypted(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
    iVar1 = ObscuredShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = iVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  iVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this[1].fakeValue != 0)) && (iVar1 != this[1].fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar3 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    (*(code *)(pOVar3->klass->vtable).OnCheatingDetected.method)(pOVar3);
  }
  return iVar1;
}


/* Int16 GetEncrypted() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetEncrypted(ObscuredShort *this,MethodInfo *method)

{
  func_?(this + 1,0);
  return this[1].hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_GetHashCode(ObscuredShort *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* Int16 InternalDecrypt() */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_InternalDecrypt(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[1].inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    this[1].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
    iVar1 = ObscuredShort_EncryptDecrypt(0,(MethodInfo *)0x0);
    this[1].hiddenValue = iVar1;
    this[1].inited = 1;
    this[1].fakeValue = 0;
  }
  iVar1 = this[1].hiddenValue;
  key = this[1].currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar2 != 0) && (this[1].fakeValue != 0)) && (iVar1 != this[1].fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar3 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    (*(code *)(pOVar3->klass->vtable).OnCheatingDetected.method)(pOVar3);
  }
  return iVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_RandomizeCryptoKey(ObscuredShort *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(this + 1,0);
  do {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x8000,0x7fff,(MethodInfo *)0x0);
    key = (short)iVar2;
    this[1].currentCryptoKey = key;
  } while (key == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = ObscuredShort_EncryptDecrypt_1(iVar1,key,(MethodInfo *)0x0);
  this[1].hiddenValue = iVar1;
  return;
}


/* Void SetEncrypted(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_SetEncrypted(ObscuredShort *this,int16_t encrypted,MethodInfo *method)

{
  this[1].inited = 1;
  this[1].hiddenValue = encrypted;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = func_?(this + 1,0);
    this[1].fakeValue = iVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort_SetNewCryptoKey(int16_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey = newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString(ObscuredShort *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_1(ObscuredShort *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_2(ObscuredShort *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,provider,0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
         ObscuredShort_ToString_3
                   (ObscuredShort *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(this + 1,0);
  uStack_1 = uStack_1 & 0xffff;
  pSVar2 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar2;
}


/* ObscuredShort() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort__cctor(MethodInfo *method)

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
          CryptoKeyGenerator_GenerateKey(-0x8000,0x7fff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey =
       (int16_t)iVar1;
  return;
}


/* ObscuredShort(Int16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
     ObscuredShort__ctor(ObscuredShort *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  this[1].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->static_fields->cryptoKey;
  this[1].hiddenValue = value;
  this[1].fakeValue = 0;
  this[1].inited = 1;
  return;
}


/* ObscuredShort op_Decrement(ObscuredShort) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Decrement(ObscuredShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  input.hiddenValue = ObscuredShort_EncryptDecrypt(sVar1 + -1,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    input.fakeValue = sVar1 + -1;
  }
  OVar3.hiddenValue = input.hiddenValue;
  OVar3.currentCryptoKey = input.currentCryptoKey;
  OVar3.fakeValue = input.fakeValue;
  OVar3.inited = input.inited;
  OVar3._7_1_ = input._7_1_;
  return OVar3;
}


/* ObscuredShort op_Implicit(Int16) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Implicit(int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue = 0;
  OStack_1.fakeValue = 0;
  OStack_1.inited = 0;
  OStack_1._7_1_ = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar2 = ObscuredShort_EncryptDecrypt(value,(MethodInfo *)0x0);
  func_?(&OStack_1,iVar2,0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  iVar2 = OStack_1.fakeValue;
  if (bVar3 != 0) {
    iVar2 = value;
  }
  OStack_1.fakeValue = iVar2;
  return OStack_1;
}


/* Int16 op_Implicit(ObscuredShort) */

int16_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
        ObscuredShort_op_Implicit_1(ObscuredShort value,MethodInfo *method)

{
  iVar1 = func_?(&value,0);
  return iVar1;
}


/* ObscuredShort op_Increment(ObscuredShort) */

ObscuredShort
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
ObscuredShort_op_Increment(ObscuredShort input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  sVar1 = func_?(&input,0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  input.hiddenValue = ObscuredShort_EncryptDecrypt(sVar1 + 1,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    input.fakeValue = sVar1 + 1;
  }
  OVar3.hiddenValue = input.hiddenValue;
  OVar3.currentCryptoKey = input.currentCryptoKey;
  OVar3.fakeValue = input.fakeValue;
  OVar3.inited = input.inited;
  OVar3._7_1_ = input._7_1_;
  return OVar3;
}

