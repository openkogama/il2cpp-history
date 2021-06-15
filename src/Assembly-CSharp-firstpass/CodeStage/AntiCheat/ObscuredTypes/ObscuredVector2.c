
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_ApplyNewCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = *piVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (iVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
               cryptoKey) {
    VVar3 = (Vector2)func_?(piVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    VVar3 = (Vector2)ObscuredVector2_Encrypt_1
                               (VVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2
                                      ->static_fields->cryptoKey,(MethodInfo *)0x0);
    this->fakeValue = VVar3;
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
              cryptoKey;
  }
  return;
}


/* Boolean CompareVectorsWithTolerance(Vector2, Vector2) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_CompareVectorsWithTolerance
               (ObscuredVector2 *this,Vector2 vector1,Vector2 vector2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    fVar2 = (pOVar1->fields).vector2Epsilon;
    uVar3 = (uint)((ulonglong)_UNK_? >> 0x20);
    bVar4 = false;
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)(vector1.x - vector2.x) >> 0x20) & uVar3,
                                SUB84((double)(vector1.x - vector2.x),0) & (uint)_UNK_?) <
        fVar2) {
      bVar4 = (float)(double)CONCAT44((uint)((ulonglong)(double)(vector1.y - vector2.y) >> 0x20) &
                                      uVar3,SUB84((double)(vector1.y - vector2.y),0) &
                                            (uint)_UNK_?) < fVar2;
    }
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Vector2 Decrypt(ObscuredVector2+RawEncryptedVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_Decrypt(ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  VVar2.x = (float)(value.x ^ uVar1);
  VVar2.y = (float)(value.y ^ uVar1);
  return VVar2;
}


/* Vector2 Decrypt(ObscuredVector2+RawEncryptedVector2, Int32) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_Decrypt_1
                  (ObscuredVector2_RawEncryptedVector2 value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  VVar1.x = (float)(value.x ^ key);
  VVar1.y = (float)(value.y ^ key);
  return VVar1;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Vector2) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt(Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  OVar1 = ObscuredVector2_Encrypt_2(value.x,value.y,0,(MethodInfo *)0x0);
  return OVar1;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Vector2, Int32) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt_1(Vector2 value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  OVar1 = ObscuredVector2_Encrypt_2(value.x,value.y,key,(MethodInfo *)0x0);
  return OVar1;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Single, Single, Int32) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt_2(float x,float y,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  OVar1.x = (uint)x ^ key;
  OVar1.y = (uint)y ^ key;
  return OVar1;
}


/* Vector2 GetDecrypted() */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_GetDecrypted(ObscuredVector2 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue.x == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
              cryptoKey;
    VVar2 = (Vector2)ObscuredVector2_Encrypt
                                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                                 static_fields->initialFakeValue,(MethodInfo *)0x0);
    this->fakeValue = VVar2;
    fVar3 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
             initialFakeValue).y;
    *(float *)&this->inited =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x;
    this[1].currentCryptoKey = (int32_t)fVar3;
    *(undefined1 *)&this[1].hiddenValue.x = 1;
  }
  fVar3 = (this->fakeValue).x;
  uVar4 = *piVar1;
  uVar5 = uVar4;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    uVar5 = *piVar1;
  }
  fVar3 = (float)(uVar4 ^ (uint)fVar3);
  fVar6 = (float)((uint)(this->fakeValue).y ^ uVar5);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    cVar8 = func_?(&this->inited,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).x,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).y,0);
    if (cVar8 == '\0') {
      fVar9 = *(float *)&this->inited;
      fVar10 = (float)this[1].currentCryptoKey;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar11 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar11 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?(0);
        pcVar12 = (code *)swi(3);
        VVar2 = (Vector2)(*pcVar12)();
        return VVar2;
      }
      fVar13 = (pOVar11->fields).vector2Epsilon;
      dVar14 = (double)(fVar3 - fVar9);
      uVar4 = (uint)((ulonglong)_UNK_? >> 0x20);
      if ((fVar13 <= (float)(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                            SUB84(dVar14,0) & (uint)_UNK_?)) ||
         (dVar14 = (double)(fVar6 - fVar10),
         fVar13 <= (float)(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                          SUB84(dVar14,0) & (uint)_UNK_?))) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar11 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar11 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar11->klass->vtable).OnCheatingDetected.method)
                  (pOVar11,(pOVar11->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  VVar2.y = fVar6;
  VVar2.x = fVar3;
  return VVar2;
}


/* ObscuredVector2+RawEncryptedVector2 GetEncrypted() */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_GetEncrypted(ObscuredVector2 *this,MethodInfo *method)

{
  func_?(&(this->hiddenValue).y,0);
  OVar1.x = (int32_t)(this->fakeValue).x;
  OVar1.y = (int32_t)(this->fakeValue).y;
  return OVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_GetHashCode(ObscuredVector2 *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&(this->hiddenValue).y,0);
  iVar2 = func_?(&uStack_1,0);
  return iVar2;
}


/* Vector2 InternalDecrypt() */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalDecrypt(ObscuredVector2 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].hiddenValue.x == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
              cryptoKey;
    VVar2 = (Vector2)ObscuredVector2_Encrypt
                                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                                 static_fields->initialFakeValue,(MethodInfo *)0x0);
    this->fakeValue = VVar2;
    fVar3 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
             initialFakeValue).y;
    *(float *)&this->inited =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x;
    this[1].currentCryptoKey = (int32_t)fVar3;
    *(undefined1 *)&this[1].hiddenValue.x = 1;
  }
  fVar3 = (this->fakeValue).x;
  uVar4 = *piVar1;
  uVar5 = uVar4;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    uVar5 = *piVar1;
  }
  fVar3 = (float)(uVar4 ^ (uint)fVar3);
  fVar6 = (float)((uint)(this->fakeValue).y ^ uVar5);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    cVar8 = func_?(&this->inited,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).x,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).y,0);
    if (cVar8 == '\0') {
      fVar9 = *(float *)&this->inited;
      fVar10 = (float)this[1].currentCryptoKey;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar11 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar11 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?(0);
        pcVar12 = (code *)swi(3);
        VVar2 = (Vector2)(*pcVar12)();
        return VVar2;
      }
      fVar13 = (pOVar11->fields).vector2Epsilon;
      dVar14 = (double)(fVar3 - fVar9);
      uVar4 = (uint)((ulonglong)_UNK_? >> 0x20);
      if ((fVar13 <= (float)(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                            SUB84(dVar14,0) & (uint)_UNK_?)) ||
         (dVar14 = (double)(fVar6 - fVar10),
         fVar13 <= (float)(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,
                                          SUB84(dVar14,0) & (uint)_UNK_?))) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar11 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar11 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar11->klass->vtable).OnCheatingDetected.method)
                  (pOVar11,(pOVar11->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  VVar2.y = fVar6;
  VVar2.x = fVar3;
  return VVar2;
}


/* Single InternalDecryptField(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_InternalDecryptField
                (ObscuredVector2 *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  uVar2 = (this->hiddenValue).y;
  if (uVar2 == uVar1) {
    uVar2 = uVar1;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (float)(uVar2 ^ encrypted);
}


/* Int32 InternalEncryptField(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalEncryptField
                  (ObscuredVector2 *this,float encrypted,MethodInfo *method)

{
  iVar1 = func_?(&(this->hiddenValue).y,encrypted,method);
  return iVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_RandomizeCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = func_?(piVar1,0);
  pOStack_3 = (ObscuredVector2__Class *)uVar2;
  do {
    key = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *piVar1 = key;
  } while (key == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    pOStack_3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  VVar4 = (Vector2)ObscuredVector2_Encrypt_2
                             ((float)pOStack_3,(float)((ulonglong)uVar2 >> 0x20),key,
                              (MethodInfo *)0x0);
  this->fakeValue = VVar4;
  return;
}


/* Void SetEncrypted(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetEncrypted
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 encrypted,
               MethodInfo *method)

{
  (this->fakeValue).x = (float)encrypted.x;
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  (this->fakeValue).y = (float)encrypted.y;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = func_?(&(this->hiddenValue).y,0);
    *(undefined8 *)&this->inited = uVar2;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey =
         newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
         ObscuredVector2_ToString(ObscuredVector2 *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&(this->hiddenValue).y,0);
  pSVar2 = (String *)func_?(&uStack_1,0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
         ObscuredVector2_ToString_1(ObscuredVector2 *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_1 = func_?(&(this->hiddenValue).y,0);
  pSVar2 = (String *)func_?(&uStack_1,format,0);
  return pSVar2;
}


/* ObscuredVector2() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__cctor(MethodInfo *method)

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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey = iVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields;
  (pOVar3->initialFakeValue).x = fStack_4;
  fStack_5 = VVar2.y;
  (pOVar3->initialFakeValue).y = fStack_5;
  return;
}


/* ObscuredVector2(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  func_?(&(this->hiddenValue).y,value.x,value.y,method);
  return;
}


/* ObscuredVector2(Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor_1(ObscuredVector2 *this,float x,float y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  (this->hiddenValue).y = key;
  VVar1 = (Vector2)ObscuredVector2_Encrypt_2(x,y,key,(MethodInfo *)0x0);
  this->fakeValue = VVar1;
  *(float *)&this->inited = x;
  this[1].currentCryptoKey = (int32_t)y;
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  return;
}


/* Single get_Item(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_Item(ObscuredVector2 *this,int32_t index,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index == 0) {
    fVar2 = (float10)func_?(piVar1,0);
    return (float)fVar2;
  }
  if (index == 1) {
    fVar2 = (float10)func_?(piVar1,0);
    return (float)fVar2;
  }
  this_00 = (StackOverflowException *)func_?(TypeInfo__System__IndexOutOfRangeException);
  mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
            (this_00,StringLiteral_Invalid_ObscuredVector2_index_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_x(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&(this->hiddenValue).y,(this->fakeValue).x,0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    cVar3 = func_?(&this->inited,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).x,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).y,0);
    if (cVar3 == '\0') {
      dVar4 = (double)((float)fVar1 - *(float *)&this->inited);
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
        fVar1 = (float10)(*pcVar7)();
        return (float)fVar1;
      }
      pfVar8 = &(pOVar6->fields).vector2Epsilon;
      if (*pfVar8 <= fVar5 && fVar5 != *pfVar8) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar6 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar6->klass->vtable).OnCheatingDetected.method)
                  (pOVar6,(pOVar6->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return (float)fVar1;
}


/* Single get_y() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_y(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&(this->hiddenValue).y,(this->fakeValue).y,0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    cVar3 = func_?(&this->inited,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).x,
                            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->initialFakeValue).y,0);
    if (cVar3 == '\0') {
      dVar4 = (double)((float)fVar1 - (float)this[1].currentCryptoKey);
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
        fVar1 = (float10)(*pcVar7)();
        return (float)fVar1;
      }
      pfVar8 = &(pOVar6->fields).vector2Epsilon;
      if (*pfVar8 <= fVar5 && fVar5 != *pfVar8) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar6 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar6 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar6->klass->vtable).OnCheatingDetected.method)
                  (pOVar6,(pOVar6->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return (float)fVar1;
}


/* ObscuredVector2 op_Implicit(Vector2) */

ObscuredVector2 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_op_Implicit
          (ObscuredVector2 *__return_storage_ptr__,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_3 = 0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  OVar6 = ObscuredVector2_Encrypt(value,(MethodInfo *)0x0);
  func_?(&iStack_1,OVar6,0);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    fStack_4 = value.x;
    uStack_5 = CONCAT44(uStack_5._4_4_,value.y);
  }
  __return_storage_ptr__->currentCryptoKey = iStack_1;
  (__return_storage_ptr__->hiddenValue).x = iStack_2;
  (__return_storage_ptr__->hiddenValue).y = iStack_3;
  (__return_storage_ptr__->fakeValue).x = fStack_4;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).y = uStack_5;
  return __return_storage_ptr__;
}


/* Vector2 op_Implicit(ObscuredVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_op_Implicit_1(ObscuredVector2 value,MethodInfo *method)

{
  VVar1 = (Vector2)func_?(&value,0);
  return VVar1;
}


/* Vector3 op_Implicit(ObscuredVector2) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
          ObscuredVector2_op_Implicit_2
                    (Vector3 *__return_storage_ptr__,ObscuredVector2 value,MethodInfo *method)

{
  uVar1 = func_?(&value,0);
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,uVar1,0,0);
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_Item(ObscuredVector2 *this,int32_t index,float value,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index == 0) {
    fVar2 = (float)func_?(piVar1,value,0);
    (this->fakeValue).x = fVar2;
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      *(float *)&this->inited = value;
    }
  }
  else {
    if (index != 1) {
      this_00 = (StackOverflowException *)
                func_?(TypeInfo__System__IndexOutOfRangeException);
      mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
                (this_00,StringLiteral_Invalid_ObscuredVector2_index_,(MethodInfo *)0x0);
      func_?(this_00,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar2 = (float)func_?(piVar1,value,0);
    (this->fakeValue).y = fVar2;
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      this[1].currentCryptoKey = (int32_t)value;
      return;
    }
  }
  return;
}


/* Void set_x(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_x(ObscuredVector2 *this,float value,MethodInfo *method)

{
  fVar1 = (float)func_?(&(this->hiddenValue).y,value,0);
  (this->fakeValue).x = fVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    *(float *)&this->inited = value;
  }
  return;
}


/* Void set_y(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_y(ObscuredVector2 *this,float value,MethodInfo *method)

{
  fVar1 = (float)func_?(&(this->hiddenValue).y,value,0);
  (this->fakeValue).y = fVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    this[1].currentCryptoKey = (int32_t)value;
  }
  return;
}

