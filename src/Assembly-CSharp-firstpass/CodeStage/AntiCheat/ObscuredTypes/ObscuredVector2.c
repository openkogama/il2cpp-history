
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_ApplyNewCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    value = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
    OVar2 = ObscuredVector2_Encrypt_1
                      (value,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = OVar2;
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
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    fVar2 = (pOVar1->fields).vector2Epsilon;
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    fStack_3 = vector1.x;
    fStack_4 = vector2.x;
    if (fVar2 <= (float)((uint)(fStack_3 - fStack_4) & (uint)_UNK_?)) {
      return 0;
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    fStack_5 = vector1.y;
    fStack_6 = vector2.y;
    return (float)((uint)(fStack_5 - fStack_6) & (uint)_UNK_?) < fVar2;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Vector2 Decrypt(ObscuredVector2+RawEncryptedVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_Decrypt(ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStackX_c = value.y;
  VVar2.y = (float)(uStackX_c ^ uVar1);
  VVar2.x = (float)(value.x ^ uVar1);
  return VVar2;
}


/* Vector2 Decrypt(ObscuredVector2+RawEncryptedVector2, Int32) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_Decrypt_1
                  (ObscuredVector2_RawEncryptedVector2 value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStackX_c = value.y;
  VVar1.y = (float)(uStackX_c ^ key);
  VVar1.x = (float)(value.x ^ key);
  return VVar1;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Vector2) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt(Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fStackX_1c = value.y;
  fStackX_18 = value.x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,fStackX_1c,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar2.y = (uint)fStackX_1c ^ uVar1;
  OVar2.x = (uint)fStackX_18 ^ uVar1;
  return OVar2;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Vector2, Int32) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt_1(Vector2 value,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fStackX_24 = value.y;
  fStackX_20 = value.x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,fStackX_24,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1.y = (uint)fStackX_24 ^ key;
  OVar1.x = (uint)fStackX_20 ^ key;
  return OVar1;
}


/* ObscuredVector2+RawEncryptedVector2 Encrypt(Single, Single, Int32) */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_Encrypt_2(float x,float y,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1.y = (uint)y ^ key;
  OVar1.x = (uint)x ^ key;
  return OVar1;
}


/* Vector2 GetDecrypted() */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_GetDecrypted(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
    OVar1 = ObscuredVector2_Encrypt
                      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields
                       ->initialFakeValue,(MethodInfo *)0x0);
    this->hiddenValue = OVar1;
    fVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
            initialFakeValue).x;
    (this->fakeValue).y =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).y;
    (this->fakeValue).x = fVar2;
    this->inited = 1;
  }
  uVar3 = (this->hiddenValue).x;
  uVar4 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = (float)(uVar4 ^ uVar3);
  fVar2 = (float)((this->hiddenValue).y ^ this->currentCryptoKey);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      VVar7 = this->fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      vector1.y = fVar2;
      vector1.x = fVar5;
      bVar6 = ObscuredVector2_CompareVectorsWithTolerance(this,vector1,VVar7,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        plVar8 = (longlong *)FUN_?();
        if (plVar8 == (longlong *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          VVar7 = (Vector2)(*pcVar9)();
          return VVar7;
        }
        (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      }
    }
  }
  VVar7.y = fVar2;
  VVar7.x = fVar5;
  return VVar7;
}


/* ObscuredVector2+RawEncryptedVector2 GetEncrypted() */

ObscuredVector2_RawEncryptedVector2
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
ObscuredVector2_GetEncrypted(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredVector2_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_GetHashCode(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  VVar1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  fVar2 = VVar1.x;
  if (0x7f7fffff < ((int)fVar2 - 1U & 0x7fffffff)) {
    fVar2 = (float)((uint)fVar2 & 0x7f800000);
  }
  fStackX_1c = VVar1.y;
  if (0x7f7fffff < ((int)fStackX_1c - 1U & 0x7fffffff)) {
    fStackX_1c = (float)((uint)fStackX_1c & 0x7f800000);
  }
  return (int)fStackX_1c * 4 ^ (uint)fVar2;
}


/* Vector2 InternalDecrypt() */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalDecrypt(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
    OVar1 = ObscuredVector2_Encrypt
                      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields
                       ->initialFakeValue,(MethodInfo *)0x0);
    this->hiddenValue = OVar1;
    fVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
            initialFakeValue).x;
    (this->fakeValue).y =
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).y;
    (this->fakeValue).x = fVar2;
    this->inited = 1;
  }
  uVar3 = (this->hiddenValue).x;
  uVar4 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = (float)(uVar4 ^ uVar3);
  fVar2 = (float)((this->hiddenValue).y ^ this->currentCryptoKey);
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      VVar7 = this->fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      vector1.y = fVar2;
      vector1.x = fVar5;
      bVar6 = ObscuredVector2_CompareVectorsWithTolerance(this,vector1,VVar7,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        plVar8 = (longlong *)FUN_?();
        if (plVar8 == (longlong *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          VVar7 = (Vector2)(*pcVar9)();
          return VVar7;
        }
        (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      }
    }
  }
  VVar7.y = fVar2;
  VVar7.x = fVar5;
  return VVar7;
}


/* Single InternalDecryptField(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_InternalDecryptField
                (ObscuredVector2 *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if (this->currentCryptoKey != uVar1) {
    uVar1 = this->currentCryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (float)(uVar1 ^ encrypted);
}


/* Int32 InternalEncryptField(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_InternalEncryptField
                  (ObscuredVector2 *this,float encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (uint)encrypted ^ uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_RandomizeCryptoKey(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  VVar1 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  while ((pcVar2 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0))) {
    pcRam_? = pcVar2;
    key = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      fStackX_1c = VVar1.y;
      fStackX_18 = VVar1.x;
      OVar3 = ObscuredVector2_Encrypt_2(fStackX_18,fStackX_1c,key,(MethodInfo *)0x0);
      this->hiddenValue = OVar3;
      return;
    }
  }
  uVar4 = func_?(&UNK_?);
  FUN_?(uVar4,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEncrypted(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetEncrypted
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 encrypted,
               MethodInfo *method)

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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    VVar2 = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
    fStackX_8 = VVar2.x;
    fStackX_c = VVar2.y;
    (this->fakeValue).x = fStackX_8;
    (this->fakeValue).y = fStackX_c;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
         ObscuredVector2_ToString(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  aVStackX_18[0] = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = (String *)FUN_?(aVStackX_18,0,0);
  return pSVar1;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
         ObscuredVector2_ToString_1(ObscuredVector2 *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  aVStackX_10[0] = ObscuredVector2_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar1 = (String *)FUN_?(aVStackX_10,format,0);
  return pSVar1;
}


/* ObscuredVector2() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
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
          CryptoKeyGenerator_GenerateKey(-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey = iVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields;
  (pOVar3->initialFakeValue).x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (pOVar3->initialFakeValue).y = fVar2;
  return;
}


/* ObscuredVector2(ObscuredVector2+RawEncryptedVector2) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor
               (ObscuredVector2 *this,ObscuredVector2_RawEncryptedVector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->cryptoKey;
  this->hiddenValue = value;
  this->currentCryptoKey = iVar1;
  fVar2 = (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
          initialFakeValue).y;
  (this->fakeValue).x =
       (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
       initialFakeValue).x;
  (this->fakeValue).y = fVar2;
  this->inited = 1;
  return;
}


/* ObscuredVector2(Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2__ctor_1(ObscuredVector2 *this,float x,float y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index != 0) {
    if (index != 1) {
      uVar1 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar1);
      message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector2_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this_00,message,(MethodInfo *)0x0);
      uVar1 = func_?(&
                                  MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2__get_Item_int_
                                 );
      FUN_?(this_00,uVar1);
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar4 = (this->hiddenValue).y;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    fVar3 = ObscuredVector2_InternalDecryptField(this,iVar4,(MethodInfo *)0x0);
    bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar5 != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c
          == 0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
      }
      if (((this->fakeValue).x !=
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
           initialFakeValue).x) ||
         ((this->fakeValue).y !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
          initialFakeValue).y)) {
        fVar6 = (this->fakeValue).y;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar6 = (float)((uint)(fVar3 - fVar6) & _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          fVar3 = (float)(*pcVar2)();
          return fVar3;
        }
        pfVar8 = &(pOVar7->fields).vector2Epsilon;
        if (*pfVar8 <= fVar6 && fVar6 != *pfVar8) {
          plVar9 = (longlong *)FUN_?();
          if (plVar9 == (longlong *)0x0) goto code_?;
          (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        }
      }
    }
    return fVar3;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar4 = (this->hiddenValue).x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar3 = ObscuredVector2_InternalDecryptField(this,iVar4,(MethodInfo *)0x0);
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      fVar6 = (this->fakeValue).x;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = (float)((uint)(fVar3 - fVar6) & _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        fVar3 = (float)(*pcVar2)();
        return fVar3;
      }
      pfVar8 = &(pOVar7->fields).vector2Epsilon;
      if (*pfVar8 <= fVar6 && fVar6 != *pfVar8) {
        plVar9 = (longlong *)FUN_?();
        if (plVar9 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      }
    }
  }
  return fVar3;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
      ObscuredVector2_get_x(ObscuredVector2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar1 = ObscuredVector2_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      fVar3 = (this->fakeValue).x;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar3 = (float)((uint)(fVar1 - fVar3) & _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        fVar1 = (float)(*pcVar5)();
        return fVar1;
      }
      pfVar6 = &(pOVar4->fields).vector2Epsilon;
      if (*pfVar6 <= fVar3 && fVar3 != *pfVar6) {
        plVar7 = (longlong *)FUN_?();
        if (plVar7 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
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
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).y;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar1 = ObscuredVector2_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    }
    if (((this->fakeValue).x !=
         (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
         initialFakeValue).x) ||
       ((this->fakeValue).y !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->static_fields->
        initialFakeValue).y)) {
      fVar3 = (this->fakeValue).y;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar3 = (float)((uint)(fVar1 - fVar3) & _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        fVar1 = (float)(*pcVar5)();
        return fVar1;
      }
      pfVar6 = &(pOVar4->fields).vector2Epsilon;
      if (*pfVar6 <= fVar3 && fVar3 != *pfVar6) {
        plVar7 = (longlong *)FUN_?();
        if (plVar7 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  *(undefined8 *)&(__return_storage_ptr__->hiddenValue).y = 0;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).y = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  value_00 = ObscuredVector2_Encrypt(value,(MethodInfo *)0x0);
  ObscuredVector2__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    __return_storage_ptr__->fakeValue = value;
  }
  return __return_storage_ptr__;
}


/* Vector2 op_Implicit(ObscuredVector2) */

Vector2 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
        ObscuredVector2_op_Implicit_1(ObscuredVector2 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  VVar1 = ObscuredVector2_InternalDecrypt(value,(MethodInfo *)0x0);
  return VVar1;
}


/* Vector3 op_Implicit(ObscuredVector2) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
          ObscuredVector2_op_Implicit_2
                    (Vector3 *__return_storage_ptr__,ObscuredVector2 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  VVar1 = ObscuredVector2_InternalDecrypt(value,(MethodInfo *)0x0);
  fStackX_8 = VVar1.x;
  fStackX_c = VVar1.y;
  __return_storage_ptr__->x = fStackX_8;
  __return_storage_ptr__->y = fStackX_c;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_Item(ObscuredVector2 *this,int32_t index,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).x = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).x = value;
    }
    return;
  }
  if (index == 1) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).y = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).y = value;
    }
    return;
  }
  uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar3);
  message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector2_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2__set_Item_int__float_
                             );
  FUN_?(this_00,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_x(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::
     ObscuredVector2_set_x(ObscuredVector2 *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector2->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  iVar1 = ObscuredVector2_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).y = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).y = value;
  }
  return;
}

