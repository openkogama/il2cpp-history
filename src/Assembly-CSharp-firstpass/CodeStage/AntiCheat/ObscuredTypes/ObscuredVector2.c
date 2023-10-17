
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_ApplyNewCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
               cryptoKey) {
    VVar2 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    fStack_3 = VVar2.y;
    fStack_4 = VVar2.x;
    OVar5 = ObscuredVector2_Encrypt_2(fStack_4,fStack_3,key,(MethodInfo *)0x0);
    this->hiddenValue = OVar5;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  return;
}


/* Boolean CompareVectorsWithTolerance(Vector2, Vector2) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_CompareVectorsWithTolerance
               (ObscuredVector2 *this,Vector2 vector1,Vector2 vector2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    fVar2 = (pOVar1->fields).vector2Epsilon;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if (fVar2 <= (float)((uint)(vector1.x - vector2.x) & _UNK_?)) {
      return 0;
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    return (float)((uint)(vector1.y - vector2.y) & _UNK_?) < fVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Vector2 Decrypt(ObscuredVector2+RawEncryptedVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_Decrypt(ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  OVar2.x = (uint)value.x ^ uVar1;
  OVar2.y = (uint)value.y ^ uVar1;
  return OVar2;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Vector2, Int32) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt_1(Vector2 value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
    OVar1 = ObscuredVector2_Encrypt
                      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields
                       ->initialFakeValue,(MethodInfo *)0x0);
    this->hiddenValue = OVar1;
    fVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
            initialFakeValue).y;
    (this->fakeValue).x =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x;
    (this->fakeValue).y = fVar2;
    this->inited = 1;
  }
  uVar3 = (this->hiddenValue).x;
  uVar4 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOStack_5 = (ObscuredCheatingDetector *)(uVar4 ^ uVar3);
  pMVar6 = (MethodInfo *)((this->hiddenValue).y ^ this->currentCryptoKey);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      VVar8.y = (float)pMVar6;
      VVar8.x = (float)pOStack_5;
      bVar7 = ObscuredVector2_CompareVectorsWithTolerance
                        (this,VVar8,this->fakeValue,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
          cRam_? = '\x01';
        }
        pOStack_5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                    static_fields->_Instance_k__BackingField;
        if (pOStack_5 == (ObscuredCheatingDetector *)0x0) {
          func_?();
          pcVar9 = (code *)swi(3);
          VVar8 = (Vector2)(*pcVar9)();
          return VVar8;
        }
        pMVar6 = (pOStack_5->klass->vtable).OnCheatingDetected.method;
        (*(pOStack_5->klass->vtable).OnCheatingDetected.methodPtr)();
      }
    }
  }
  VVar10.y = (float)pMVar6;
  VVar10.x = (float)pOStack_5;
  return VVar10;
}


/* ObscuredVector2+RawEncryptedVector2 GetEncrypted() */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_GetEncrypted(ObscuredVector2 *this,MethodInfo *method)

{
  ObscuredVector2_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_GetHashCode(ObscuredVector2 *this,MethodInfo *method)

{
  VStack_1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  uVar2 = mscorlib.dll::System::Single::Single_GetHashCode((Single *)&VStack_1,(MethodInfo *)0x0);
  iVar3 = mscorlib.dll::System::Single::Single_GetHashCode((Single *)&VStack_1.y,(MethodInfo *)0x0);
  return iVar3 << 2 ^ uVar2;
}


/* Vector2 InternalDecrypt() */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalDecrypt(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
    OVar1 = ObscuredVector2_Encrypt
                      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields
                       ->initialFakeValue,(MethodInfo *)0x0);
    this->hiddenValue = OVar1;
    fVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
            initialFakeValue).y;
    (this->fakeValue).x =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x;
    (this->fakeValue).y = fVar2;
    this->inited = 1;
  }
  uVar3 = (this->hiddenValue).x;
  uVar4 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOStack_5 = (ObscuredCheatingDetector *)(uVar4 ^ uVar3);
  pMVar6 = (MethodInfo *)((this->hiddenValue).y ^ this->currentCryptoKey);
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      VVar8.y = (float)pMVar6;
      VVar8.x = (float)pOStack_5;
      bVar7 = ObscuredVector2_CompareVectorsWithTolerance
                        (this,VVar8,this->fakeValue,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
          cRam_? = '\x01';
        }
        pOStack_5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                    static_fields->_Instance_k__BackingField;
        if (pOStack_5 == (ObscuredCheatingDetector *)0x0) {
          func_?();
          pcVar9 = (code *)swi(3);
          VVar8 = (Vector2)(*pcVar9)();
          return VVar8;
        }
        pMVar6 = (pOStack_5->klass->vtable).OnCheatingDetected.method;
        (*(pOStack_5->klass->vtable).OnCheatingDetected.methodPtr)();
      }
    }
  }
  VVar10.y = (float)pMVar6;
  VVar10.x = (float)pOStack_5;
  return VVar10;
}


/* Single InternalDecryptField(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_InternalDecryptField
                (ObscuredVector2 *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if (this->currentCryptoKey !=
      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey) {
    uVar1 = this->currentCryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (float)(uVar1 ^ encrypted);
}


/* Int32 InternalEncryptField(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalEncryptField
                  (ObscuredVector2 *this,float encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (uint)encrypted ^ uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_RandomizeCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  VStack_1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  do {
    key = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->currentCryptoKey = key;
  } while (key == 0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    VStack_1.y = (float)&UNK_?;
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  OVar2 = ObscuredVector2_Encrypt_2(VStack_1.x,VStack_1.y,key,(MethodInfo *)0x0);
  this->hiddenValue = OVar2;
  return;
}


/* Void SetEncrypted(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetEncrypted
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 encrypted,
               MethodInfo *method)

{
  this->inited = 1;
  (this->hiddenValue).x = encrypted.x;
  (this->hiddenValue).y = encrypted.y;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    VVar2 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
    (this->fakeValue).x = (float)encrypted.x;
    encrypted.y = (int32_t)VVar2.y;
    (this->fakeValue).y = (float)encrypted.y;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
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
  VStack_1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_ToString
                     (&VStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
         ObscuredVector2_ToString_1(ObscuredVector2 *this,String *format,MethodInfo *method)

{
  VStack_1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_ToString_1
                     (&VStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredVector2() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey = iVar1;
  if (cRam_? == '\0') {
    ppVStack2 = &TypeInfo__UnityEngine__Vector2;
    func_?();
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields;
  (pOVar4->initialFakeValue).x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (pOVar4->initialFakeValue).y = fVar3;
  return;
}


/* ObscuredVector2(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  (this->hiddenValue).x = value.x;
  (this->hiddenValue).y = value.y;
  fVar1 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
          initialFakeValue).y;
  (this->fakeValue).x =
       (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
       initialFakeValue).x;
  (this->fakeValue).y = fVar1;
  this->inited = 1;
  return;
}


/* ObscuredVector2(Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor_1(ObscuredVector2 *this,float x,float y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  this->currentCryptoKey = key;
  OVar1 = ObscuredVector2_Encrypt_2(x,y,key,(MethodInfo *)0x0);
  this->hiddenValue = OVar1;
  (this->fakeValue).x = x;
  (this->fakeValue).y = y;
  this->inited = 1;
  return;
}


/* Single get_Item(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_Item(ObscuredVector2 *this,int32_t index,MethodInfo *method)

{
  if (index == 0) {
    fVar1 = ObscuredVector2_get_x(this,(MethodInfo *)0x0);
    return fVar1;
  }
  if (index == 1) {
    fVar1 = ObscuredVector2_get_y(this,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar2);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector2_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?(&MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2__get_Item_int_);
  func_?(this_00);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_x(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  fVar1 = ObscuredVector2_InternalDecryptField(this,(this->hiddenValue).x,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      fVar3 = (this->fakeValue).x;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = (float)((uint)(fVar1 - fVar3) & _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        fVar6 = (float10)(*pcVar5)();
        return (float)fVar6;
      }
      pfVar7 = &(pOVar4->fields).vector2Epsilon;
      if (*pfVar7 <= fVar3 && fVar3 != *pfVar7) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar4 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)(pOVar4);
      }
    }
  }
  return fVar1;
}


/* Single get_y() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_y(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  fVar1 = ObscuredVector2_InternalDecryptField(this,(this->hiddenValue).y,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      fVar3 = (this->fakeValue).y;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = (float)((uint)(fVar1 - fVar3) & _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        fVar6 = (float10)(*pcVar5)();
        return (float)fVar6;
      }
      pfVar7 = &(pOVar4->fields).vector2Epsilon;
      if (*pfVar7 <= fVar3 && fVar3 != *pfVar7) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar4 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(pOVar4->klass->vtable).OnCheatingDetected.methodPtr)(pOVar4);
      }
    }
  }
  return fVar1;
}


/* ObscuredVector2 op_Implicit(Vector2) */

ObscuredVector2 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_op_Implicit
          (ObscuredVector2 *__return_storage_ptr__,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  (__return_storage_ptr__->hiddenValue).y = 0;
  (__return_storage_ptr__->fakeValue).x = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).y = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  value_00 = ObscuredVector2_Encrypt(value,(MethodInfo *)0x0);
  ObscuredVector2__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    (__return_storage_ptr__->fakeValue).x = value.x;
    (__return_storage_ptr__->fakeValue).y = value.y;
  }
  return __return_storage_ptr__;
}


/* Vector2 op_Implicit(ObscuredVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_op_Implicit_1(ObscuredVector2 value,MethodInfo *method)

{
  VVar1 = ObscuredVector2_InternalDecrypt(&value,(MethodInfo *)0x0);
  return VVar1;
}


/* Vector3 op_Implicit(ObscuredVector2) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
          ObscuredVector2_op_Implicit_2
                    (Vector3 *__return_storage_ptr__,ObscuredVector2 value,MethodInfo *method)

{
  VVar1 = ObscuredVector2_InternalDecrypt(&value,(MethodInfo *)0x0);
  __return_storage_ptr__->x = fStack_2;
  fStack_3 = VVar1.y;
  __return_storage_ptr__->y = fStack_3;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_Item(ObscuredVector2 *this,int32_t index,float value,MethodInfo *method)

{
  if (index == 0) {
    iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).x = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).x = value;
    }
  }
  else {
    if (index != 1) {
      uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar3);
      func_?(this_00);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector2_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this_00,message,method_00);
      func_?(&
                      MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2__set_Item_int__float_
                     );
      func_?(this_00);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).y = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).y = value;
      return;
    }
  }
  return;
}


/* Void set_x(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_x(ObscuredVector2 *this,float value,MethodInfo *method)

{
  iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).x = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).x = value;
  }
  return;
}


/* Void set_y(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_y(ObscuredVector2 *this,float value,MethodInfo *method)

{
  iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).y = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).y = value;
  }
  return;
}

