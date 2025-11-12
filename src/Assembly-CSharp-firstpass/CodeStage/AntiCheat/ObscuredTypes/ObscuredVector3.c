
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_ApplyNewCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pVVar2 = ObscuredVector3_InternalDecrypt(&VStack_3,this,(MethodInfo *)0x0);
    x = pVVar2->x;
    y = pVVar2->y;
    z = pVVar2->z;
    iVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey
    ;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pOVar5 = ObscuredVector3_Encrypt_2
                       ((ObscuredVector3_RawEncryptedVector3 *)&VStack_3,(float)x,(float)y,z,iVar4,
                        (MethodInfo *)0x0);
    iVar4 = pOVar5->z;
    iVar6 = pOVar5->y;
    (this->hiddenValue).x = pOVar5->x;
    (this->hiddenValue).y = iVar6;
    (this->hiddenValue).z = iVar4;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  return;
}


/* Boolean CompareVectorsWithTolerance(Vector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_CompareVectorsWithTolerance
               (ObscuredVector3 *this,Vector3 *vector1,Vector3 *vector2,MethodInfo *method)

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
    fVar2 = vector1->x;
    fVar3 = (pOVar1->fields).vector3Epsilon;
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((float)((uint)(fVar2 - vector2->x) & (uint)_UNK_?) < fVar3) {
      fVar2 = vector1->y;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((float)((uint)(fVar2 - vector2->y) & (uint)_UNK_?) < fVar3) {
        fVar2 = vector1->z;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        return (float)((uint)(fVar2 - vector2->z) & (uint)_UNK_?) < fVar3;
      }
    }
    return 0;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Vector3 Decrypt(ObscuredVector3+RawEncryptedVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_Decrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3_RawEncryptedVector3 *value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  uVar2 = value->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = value->y;
  uVar4 = value->z;
  __return_storage_ptr__->x = (float)(uVar2 ^ uVar1);
  __return_storage_ptr__->y = (float)(uVar3 ^ uVar1);
  __return_storage_ptr__->z = (float)(uVar4 ^ uVar1);
  return __return_storage_ptr__;
}


/* Vector3 Decrypt(ObscuredVector3+RawEncryptedVector3, Int32) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_Decrypt_1
                    (Vector3 *__return_storage_ptr__,ObscuredVector3_RawEncryptedVector3 *value,
                    int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  uVar1 = value->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = value->y;
  __return_storage_ptr__->z = (float)(key ^ value->z);
  __return_storage_ptr__->x = (float)(uVar1 ^ key);
  __return_storage_ptr__->y = (float)(key ^ uVar2);
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 Encrypt(Vector3) */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_Encrypt
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,Vector3 *value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = value->x;
  uVar2 = value->y;
  fVar3 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = uVar1 ^ uVar4;
  __return_storage_ptr__->y = uVar2 ^ uVar4;
  __return_storage_ptr__->z = (uint)fVar3 ^ uVar4;
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 Encrypt(Vector3, Int32) */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_Encrypt_1
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,Vector3 *value,int32_t key,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = ObscuredVector3_Encrypt_2(&OStack_2,value->x,value->y,value->z,key,(MethodInfo *)0x0);
  iVar3 = pOVar1->y;
  iVar4 = pOVar1->z;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar3;
  __return_storage_ptr__->z = iVar4;
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 Encrypt(Single, Single, Single, Int32) */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_Encrypt_2
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,float x,float y,float z,
          int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = (uint)x ^ key;
  __return_storage_ptr__->y = (uint)y ^ key;
  __return_storage_ptr__->z = (uint)z ^ key;
  return __return_storage_ptr__;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_Equals(ObscuredVector3 *this,Object *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (other != (Object *)0x0) {
    pOVar6 = (Object *)0x0;
    if ((Vector3__Class *)other->klass == TypeInfo__UnityEngine__Vector3) {
      pOVar6 = other;
    }
    if (pOVar6 != (Object *)0x0) {
      if ((other->klass->_0).element_class != (TypeInfo__UnityEngine__Vector3->_0).element_class) {
        FUN_?(other);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      if ((float)uVar3 == SUB84(other[1].klass,0)) {
        VStack_2.y = (float)((ulonglong)other[1].klass >> 0x20);
        if (((float)uVar4 == VStack_2.y) && (fVar5 == *(float *)&other[1].monitor)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Vector3 GetDecrypted() */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_GetDecrypted
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 GetEncrypted() */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_GetEncrypted
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,ObscuredVector3 *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredVector3_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1 = (this->hiddenValue).z;
  iVar2 = (this->hiddenValue).y;
  __return_storage_ptr__->x = (this->hiddenValue).x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar1;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_GetHashCode(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uVar3 = (uint)pVVar1->x;
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (0x7f7fffff < (uVar3 - 1 & 0x7fffffff)) {
    uVar3 = uVar3 & 0x7f800000;
  }
  if (0x7f7fffff < ((int)fVar4 - 1U & 0x7fffffff)) {
    fVar4 = (float)((uint)fVar4 & 0x7f800000);
  }
  if (0x7f7fffff < ((int)fVar5 - 1U & 0x7fffffff)) {
    fVar5 = (float)((uint)fVar5 & 0x7f800000);
  }
  return (int)fVar5 >> 2 ^ (int)fVar4 * 4 ^ uVar3;
}


/* Vector3 InternalDecrypt() */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_InternalDecrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (this->inited == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    bVar1 = cRam_? == '\0';
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    VStack_3.x = (pOVar2->initialFakeValue).x;
    VStack_3.y = (pOVar2->initialFakeValue).y;
    iVar4 = pOVar2->cryptoKey;
    fVar5 = (pOVar2->initialFakeValue).z;
    if (bVar1) {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pOVar6 = ObscuredVector3_Encrypt_2
                        ((ObscuredVector3_RawEncryptedVector3 *)aVStack_7,VStack_3.x,VStack_3.y,
                         fVar5,iVar4,(MethodInfo *)0x0);
    iVar8 = pOVar6->y;
    iVar4 = pOVar6->z;
    (this->hiddenValue).x = pOVar6->x;
    (this->hiddenValue).y = iVar8;
    (this->hiddenValue).z = iVar4;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    fVar9 = (pOVar2->initialFakeValue).y;
    fVar5 = (pOVar2->initialFakeValue).z;
    (this->fakeValue).x = (pOVar2->initialFakeValue).x;
    (this->fakeValue).y = fVar9;
    (this->fakeValue).z = fVar5;
    this->inited = 1;
  }
  uVar10 = (this->hiddenValue).x;
  uVar11 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->y = (float)((this->hiddenValue).y ^ this->currentCryptoKey);
  __return_storage_ptr__->z = (float)((this->hiddenValue).z ^ this->currentCryptoKey);
  __return_storage_ptr__->x = (float)(uVar11 ^ uVar10);
  bVar12 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar12 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    aVStack_7[0].x = (pVVar13->zeroVector).x;
    aVStack_7[0].y = (pVVar13->zeroVector).y;
    if ((((this->fakeValue).x != aVStack_7[0].x) || ((this->fakeValue).y != aVStack_7[0].y)) ||
       ((this->fakeValue).z != (pVVar13->zeroVector).z)) {
      uVar14._0_4_ = __return_storage_ptr__->x;
      uVar14._4_4_ = __return_storage_ptr__->y;
      fVar5 = __return_storage_ptr__->z;
      uVar15._0_4_ = (this->fakeValue).x;
      uVar15._4_4_ = (this->fakeValue).y;
      fVar9 = (this->fakeValue).z;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      VStack_3._0_8_ = uVar15;
      VStack_3.z = fVar9;
      aVStack_7[0]._0_8_ = uVar14;
      aVStack_7[0].z = fVar5;
      bVar12 = ObscuredVector3_CompareVectorsWithTolerance
                         (this,aVStack_7,&VStack_3,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        plVar16 = (longlong *)FUN_?();
        if (plVar16 == (longlong *)0x0) {
          FUN_?();
          pcVar17 = (code *)swi(3);
          pVVar18 = (Vector3 *)(*pcVar17)();
          return pVVar18;
        }
        (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      }
    }
  }
  return __return_storage_ptr__;
}


/* Single InternalDecryptField(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_InternalDecryptField
                (ObscuredVector3 *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if (this->currentCryptoKey != uVar1) {
    uVar1 = this->currentCryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (float)(uVar1 ^ encrypted);
}


/* Int32 InternalEncryptField(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_InternalEncryptField
                  (ObscuredVector3 *this,float encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (uint)encrypted ^ uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_RandomizeCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  x = pVVar1->x;
  y = pVVar1->y;
  z = pVVar1->z;
  while ((pcVar3 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 != (code *)0x0))) {
    pcRam_? = pcVar3;
    key = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      pOVar4 = ObscuredVector3_Encrypt_2
                         ((ObscuredVector3_RawEncryptedVector3 *)&VStack_2,(float)x,(float)y,z,key,
                          (MethodInfo *)0x0);
      iVar5 = pOVar4->y;
      iVar6 = pOVar4->z;
      (this->hiddenValue).x = pOVar4->x;
      (this->hiddenValue).y = iVar5;
      (this->hiddenValue).z = iVar6;
      return;
    }
  }
  uVar7 = func_?(&UNK_?);
  FUN_?(uVar7,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetEncrypted(ObscuredVector3+RawEncryptedVector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetEncrypted
               (ObscuredVector3 *this,ObscuredVector3_RawEncryptedVector3 *encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = encrypted->y;
  iVar2 = encrypted->z;
  (this->hiddenValue).x = encrypted->x;
  (this->hiddenValue).y = iVar1;
  (this->hiddenValue).z = iVar2;
  this->inited = 1;
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pVVar4 = ObscuredVector3_InternalDecrypt(&VStack_5,this,(MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    (this->fakeValue).x = pVVar4->x;
    (this->fakeValue).y = fVar6;
    (this->fakeValue).z = fVar7;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
         ObscuredVector3_ToString(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pSVar5 = (String *)FUN_?(&uStack_3,0,0);
  return pSVar5;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
         ObscuredVector3_ToString_1(ObscuredVector3 *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pSVar5 = (String *)FUN_?(&uStack_3,format,0);
  return pSVar5;
}


/* ObscuredVector3() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey = iVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  fVar5 = (pVVar2->zeroVector).z;
  (pOVar4->initialFakeValue).x = (pVVar2->zeroVector).x;
  (pOVar4->initialFakeValue).y = fVar3;
  (pOVar4->initialFakeValue).z = fVar5;
  return;
}


/* ObscuredVector3(ObscuredVector3+RawEncryptedVector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__ctor
               (ObscuredVector3 *this,ObscuredVector3_RawEncryptedVector3 *encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  iVar1 = encrypted->y;
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  iVar3 = encrypted->z;
  (this->hiddenValue).x = encrypted->x;
  (this->hiddenValue).y = iVar1;
  (this->hiddenValue).z = iVar3;
  this->currentCryptoKey = iVar2;
  pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  fVar5 = (pOVar4->initialFakeValue).y;
  fVar6 = (pOVar4->initialFakeValue).z;
  (this->fakeValue).x = (pOVar4->initialFakeValue).x;
  (this->fakeValue).y = fVar5;
  (this->fakeValue).z = fVar6;
  this->inited = 1;
  return;
}


/* ObscuredVector3(Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__ctor_1(ObscuredVector3 *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  bVar1 = cRam_? == '\0';
  uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  this->currentCryptoKey = uVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey
    ;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  this->inited = 1;
  (this->hiddenValue).x = (uint)x ^ uVar2;
  (this->hiddenValue).y = (uint)y ^ uVar2;
  (this->hiddenValue).z = (uint)z ^ uVar2;
  (this->fakeValue).x = x;
  (this->fakeValue).y = y;
  (this->fakeValue).z = z;
  return;
}


/* Single get_Item(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_Item(ObscuredVector3 *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index != 0) {
    if (index == 1) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar1 = (this->hiddenValue).y;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      fVar2 = ObscuredVector3_InternalDecryptField(this,iVar1,(MethodInfo *)0x0);
      bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                         ((MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
        }
        pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
        uVar5 = (pOVar4->initialFakeValue).x;
        uVar6 = (pOVar4->initialFakeValue).y;
        if ((((this->fakeValue).x != (float)uVar5) || ((this->fakeValue).y != (float)uVar6)) ||
           ((this->fakeValue).z != (pOVar4->initialFakeValue).z)) {
          fVar7 = (this->fakeValue).y;
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar7 = (float)((uint)(fVar2 - fVar7) & _UNK_?);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                    static_fields->_Instance_k__BackingField;
          if (pOVar8 == (ObscuredCheatingDetector *)0x0) {
code_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            fVar2 = (float)(*pcVar9)();
            return fVar2;
          }
          pfVar10 = &(pOVar8->fields).vector3Epsilon;
          if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
            plVar11 = (longlong *)FUN_?();
            if (plVar11 == (longlong *)0x0) goto code_?;
            (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          }
        }
      }
      return fVar2;
    }
    if (index != 2) {
      uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar12);
      message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this_00,message,(MethodInfo *)0x0);
      uVar12 = func_?(&
                                   MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3__get_Item_int_
                                  );
      FUN_?(this_00,uVar12);
      pcVar9 = (code *)swi(3);
      fVar2 = (float)(*pcVar9)();
      return fVar2;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar1 = (this->hiddenValue).z;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    fVar2 = ObscuredVector3_InternalDecryptField(this,iVar1,(MethodInfo *)0x0);
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                       ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c
          == 0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      }
      pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
      uVar13 = (pOVar4->initialFakeValue).x;
      uVar14 = (pOVar4->initialFakeValue).y;
      if ((((this->fakeValue).x != (float)uVar13) || ((this->fakeValue).y != (float)uVar14)) ||
         ((this->fakeValue).z != (pOVar4->initialFakeValue).z)) {
        fVar7 = (this->fakeValue).z;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar7 = (float)((uint)(fVar2 - fVar7) & _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                  ->_Instance_k__BackingField;
        if (pOVar8 == (ObscuredCheatingDetector *)0x0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          fVar2 = (float)(*pcVar9)();
          return fVar2;
        }
        pfVar10 = &(pOVar8->fields).vector3Epsilon;
        if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
          plVar11 = (longlong *)FUN_?();
          if (plVar11 == (longlong *)0x0) goto code_?;
          (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        }
      }
    }
    return fVar2;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->hiddenValue).x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar2 = ObscuredVector3_InternalDecryptField(this,iVar1,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar15 = (pOVar4->initialFakeValue).x;
    uVar16 = (pOVar4->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar15) || ((this->fakeValue).y != (float)uVar16)) ||
       ((this->fakeValue).z != (pOVar4->initialFakeValue).z)) {
      fVar7 = (this->fakeValue).x;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar7 = (float)((uint)(fVar2 - fVar7) & _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
                _Instance_k__BackingField;
      if (pOVar8 == (ObscuredCheatingDetector *)0x0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        fVar2 = (float)(*pcVar9)();
        return fVar2;
      }
      pfVar10 = &(pOVar8->fields).vector3Epsilon;
      if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
        plVar11 = (longlong *)FUN_?();
        if (plVar11 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      }
    }
  }
  return fVar2;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_x(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).x;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
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
        pcVar8 = (code *)swi(3);
        fVar1 = (float)(*pcVar8)();
        return fVar1;
      }
      pfVar9 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar9 <= fVar6 && fVar6 != *pfVar9) {
        plVar10 = (longlong *)FUN_?();
        if (plVar10 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      }
    }
  }
  return fVar1;
}


/* Single get_y() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_y(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).y;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).y;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
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
        pcVar8 = (code *)swi(3);
        fVar1 = (float)(*pcVar8)();
        return fVar1;
      }
      pfVar9 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar9 <= fVar6 && fVar6 != *pfVar9) {
        plVar10 = (longlong *)FUN_?();
        if (plVar10 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      }
    }
  }
  return fVar1;
}


/* Single get_z() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_z(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).z;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).z;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
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
        pcVar8 = (code *)swi(3);
        fVar1 = (float)(*pcVar8)();
        return fVar1;
      }
      pfVar9 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar9 <= fVar6 && fVar6 != *pfVar9) {
        plVar10 = (longlong *)FUN_?();
        if (plVar10 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      }
    }
  }
  return fVar1;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,ObscuredVector3 *b,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,b,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  aVStack_2[0].z = fVar5 + pVVar1->z;
  aVStack_2[0].y = (float)uVar4 + (float)uVar7;
  aVStack_2[0].x = (float)uVar3 + (float)uVar6;
  pOVar8 = ObscuredVector3_op_Implicit(&OStack_9,aVStack_2,(MethodInfo *)0x0);
  iVar10 = (pOVar8->hiddenValue).x;
  iVar11 = (pOVar8->hiddenValue).y;
  iVar12 = (pOVar8->hiddenValue).z;
  fVar5 = (pOVar8->fakeValue).x;
  fVar13 = (pOVar8->fakeValue).y;
  uVar14 = *(undefined8 *)&(pOVar8->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar8->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar10;
  (__return_storage_ptr__->hiddenValue).y = iVar11;
  (__return_storage_ptr__->hiddenValue).z = iVar12;
  (__return_storage_ptr__->fakeValue).x = fVar5;
  (__return_storage_ptr__->fakeValue).y = fVar13;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar14;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 *a,ObscuredVector3 *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,b,(MethodInfo *)0x0);
  uVar3 = a->x;
  uVar4 = a->y;
  uVar5 = pVVar1->x;
  aVStack_2[0].x = (float)uVar5 + (float)uVar3;
  aVStack_2[0].z = pVVar1->z + a->z;
  aVStack_2[0].y = pVVar1->y + (float)uVar4;
  pOVar6 = ObscuredVector3_op_Implicit(&OStack_7,aVStack_2,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  fVar11 = (pOVar6->fakeValue).x;
  fVar12 = (pOVar6->fakeValue).y;
  uVar13 = *(undefined8 *)&(pOVar6->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  (__return_storage_ptr__->fakeValue).x = fVar11;
  (__return_storage_ptr__->fakeValue).y = fVar12;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,Vector3 *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uVar5 = b->x;
  aVStack_2[0].x = (float)uVar5 + (float)uVar3;
  aVStack_2[0].z = b->z + pVVar1->z;
  aVStack_2[0].y = b->y + (float)uVar4;
  pOVar6 = ObscuredVector3_op_Implicit(&OStack_7,aVStack_2,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  fVar11 = (pOVar6->fakeValue).x;
  fVar12 = (pOVar6->fakeValue).y;
  uVar13 = *(undefined8 *)&(pOVar6->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  (__return_storage_ptr__->fakeValue).x = fVar11;
  (__return_storage_ptr__->fakeValue).y = fVar12;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Division(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Division
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  aVStack_2[0].x = (float)uVar3 / d;
  aVStack_2[0].z = pVVar1->z / d;
  aVStack_2[0].y = pVVar1->y / d;
  pOVar4 = ObscuredVector3_op_Implicit(&OStack_5,aVStack_2,(MethodInfo *)0x0);
  iVar6 = (pOVar4->hiddenValue).x;
  iVar7 = (pOVar4->hiddenValue).y;
  iVar8 = (pOVar4->hiddenValue).z;
  fVar9 = (pOVar4->fakeValue).x;
  fVar10 = (pOVar4->fakeValue).y;
  uVar11 = *(undefined8 *)&(pOVar4->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar4->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  (__return_storage_ptr__->fakeValue).x = fVar9;
  (__return_storage_ptr__->fakeValue).y = fVar10;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar11;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(ObscuredVector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality(ObscuredVector3 *lhs,ObscuredVector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,lhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,rhs,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fVar5 = fVar5 - pVVar1->z;
  return ((float)uVar4 - (float)uVar7) * ((float)uVar4 - (float)uVar7) +
         ((float)uVar3 - (float)uVar6) * ((float)uVar3 - (float)uVar6) + fVar5 * fVar5 <
         _UNK_?;
}


/* Boolean op_Equality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_1(Vector3 *lhs,ObscuredVector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,rhs,(MethodInfo *)0x0);
  uVar3 = lhs->x;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = lhs->z - pVVar1->z;
  fVar7 = lhs->y - (float)uVar5;
  return fVar7 * fVar7 + ((float)uVar3 - (float)uVar4) * ((float)uVar3 - (float)uVar4) +
         fVar6 * fVar6 < _UNK_?;
}


/* Boolean op_Equality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_2(ObscuredVector3 *lhs,Vector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = rhs->x;
  uVar2 = rhs->y;
  pVVar3 = ObscuredVector3_InternalDecrypt(aVStack_4,lhs,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  fVar6 = pVVar3->y - (float)uVar2;
  fVar7 = pVVar3->z - rhs->z;
  return fVar6 * fVar6 + ((float)uVar5 - (float)uVar1) * ((float)uVar5 - (float)uVar1) +
         fVar7 * fVar7 < _UNK_?;
}


/* ObscuredVector3 op_Implicit(Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Implicit
          (ObscuredVector3 *__return_storage_ptr__,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3;
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  (__return_storage_ptr__->hiddenValue).y = 0;
  (__return_storage_ptr__->hiddenValue).z = 0;
  (__return_storage_ptr__->fakeValue).x = 0.0;
  (__return_storage_ptr__->fakeValue).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = 0;
  if (*(int *)&(pOVar1->_1).field_0x1c == 0) {
    FUN_?();
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3;
  }
  aOStack_2[0].x = (int32_t)value->x;
  aOStack_2[0].y = (int32_t)value->y;
  iVar3 = pOVar1->static_fields->cryptoKey;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3;
  }
  if (*(int *)&(pOVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = ObscuredVector3_Encrypt_2
                     (aOStack_2,(float)aOStack_2[0].x,(float)aOStack_2[0].y,value->z,iVar3,
                      (MethodInfo *)0x0);
  iVar5 = pOVar4->x;
  iVar6 = pOVar4->y;
  iVar3 = pOVar4->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  (__return_storage_ptr__->hiddenValue).x = iVar5;
  (__return_storage_ptr__->hiddenValue).y = iVar6;
  (__return_storage_ptr__->hiddenValue).z = iVar3;
  __return_storage_ptr__->inited = 1;
  fVar8 = (pOVar7->initialFakeValue).x;
  fVar9 = (pOVar7->initialFakeValue).y;
  fVar10 = (pOVar7->initialFakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar7->cryptoKey;
  (__return_storage_ptr__->fakeValue).x = fVar8;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar11 != 0) {
    fVar8 = value->y;
    fVar10 = value->z;
    (__return_storage_ptr__->fakeValue).x = value->x;
    (__return_storage_ptr__->fakeValue).y = fVar8;
    (__return_storage_ptr__->fakeValue).z = fVar10;
  }
  return __return_storage_ptr__;
}


/* Vector3 op_Implicit(ObscuredVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_op_Implicit_1
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,value,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean op_Inequality(ObscuredVector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality(ObscuredVector3 *lhs,ObscuredVector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,lhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,rhs,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fVar5 = fVar5 - pVVar1->z;
  return _UNK_? <=
         ((float)uVar4 - (float)uVar7) * ((float)uVar4 - (float)uVar7) +
         ((float)uVar3 - (float)uVar6) * ((float)uVar3 - (float)uVar6) + fVar5 * fVar5;
}


/* Boolean op_Inequality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_1(Vector3 *lhs,ObscuredVector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,rhs,(MethodInfo *)0x0);
  uVar3 = lhs->x;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = lhs->z - pVVar1->z;
  fVar7 = lhs->y - (float)uVar5;
  return _UNK_? <=
         fVar7 * fVar7 + ((float)uVar3 - (float)uVar4) * ((float)uVar3 - (float)uVar4) +
         fVar6 * fVar6;
}


/* Boolean op_Inequality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_2(ObscuredVector3 *lhs,Vector3 *rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,lhs,(MethodInfo *)0x0);
  uVar3 = rhs->x;
  uVar4 = rhs->y;
  uVar5 = pVVar1->x;
  fVar6 = pVVar1->y - (float)uVar4;
  fVar7 = pVVar1->z - rhs->z;
  return _UNK_? <=
         fVar6 * fVar6 + ((float)uVar5 - (float)uVar3) * ((float)uVar5 - (float)uVar3) +
         fVar7 * fVar7;
}


/* ObscuredVector3 op_Multiply(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Multiply
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  aVStack_2[0].x = (float)uVar3 * d;
  aVStack_2[0].z = pVVar1->z * d;
  aVStack_2[0].y = pVVar1->y * d;
  pOVar4 = ObscuredVector3_op_Implicit(&OStack_5,aVStack_2,(MethodInfo *)0x0);
  iVar6 = (pOVar4->hiddenValue).x;
  iVar7 = (pOVar4->hiddenValue).y;
  iVar8 = (pOVar4->hiddenValue).z;
  fVar9 = (pOVar4->fakeValue).x;
  fVar10 = (pOVar4->fakeValue).y;
  uVar11 = *(undefined8 *)&(pOVar4->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar4->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  (__return_storage_ptr__->fakeValue).x = fVar9;
  (__return_storage_ptr__->fakeValue).y = fVar10;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar11;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Multiply(Single, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Multiply_1
          (ObscuredVector3 *__return_storage_ptr__,float d,ObscuredVector3 *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  aVStack_2[0].x = (float)uVar3 * d;
  aVStack_2[0].z = pVVar1->z * d;
  aVStack_2[0].y = pVVar1->y * d;
  pOVar4 = ObscuredVector3_op_Implicit(&OStack_5,aVStack_2,(MethodInfo *)0x0);
  iVar6 = (pOVar4->hiddenValue).x;
  iVar7 = (pOVar4->hiddenValue).y;
  iVar8 = (pOVar4->hiddenValue).z;
  fVar9 = (pOVar4->fakeValue).x;
  fVar10 = (pOVar4->fakeValue).y;
  uVar11 = *(undefined8 *)&(pOVar4->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar4->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  (__return_storage_ptr__->fakeValue).x = fVar9;
  (__return_storage_ptr__->fakeValue).y = fVar10;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar11;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(ObscuredVector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,ObscuredVector3 *b,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,b,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  aVStack_2[0].z = fVar5 - pVVar1->z;
  aVStack_2[0].y = (float)uVar4 - (float)uVar7;
  aVStack_2[0].x = (float)uVar3 - (float)uVar6;
  pOVar8 = ObscuredVector3_op_Implicit(&OStack_9,aVStack_2,(MethodInfo *)0x0);
  iVar10 = (pOVar8->hiddenValue).x;
  iVar11 = (pOVar8->hiddenValue).y;
  iVar12 = (pOVar8->hiddenValue).z;
  fVar5 = (pOVar8->fakeValue).x;
  fVar13 = (pOVar8->fakeValue).y;
  uVar14 = *(undefined8 *)&(pOVar8->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar8->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar10;
  (__return_storage_ptr__->hiddenValue).y = iVar11;
  (__return_storage_ptr__->hiddenValue).z = iVar12;
  (__return_storage_ptr__->fakeValue).x = fVar5;
  (__return_storage_ptr__->fakeValue).y = fVar13;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar14;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 *a,ObscuredVector3 *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,b,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uVar5 = a->x;
  aVStack_2[0].x = (float)uVar5 - (float)uVar3;
  aVStack_2[0].z = a->z - pVVar1->z;
  aVStack_2[0].y = a->y - (float)uVar4;
  pOVar6 = ObscuredVector3_op_Implicit(&OStack_7,aVStack_2,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  fVar11 = (pOVar6->fakeValue).x;
  fVar12 = (pOVar6->fakeValue).y;
  uVar13 = *(undefined8 *)&(pOVar6->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  (__return_storage_ptr__->fakeValue).x = fVar11;
  (__return_storage_ptr__->fakeValue).y = fVar12;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,Vector3 *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = b->x;
  uVar2 = b->y;
  pVVar3 = ObscuredVector3_InternalDecrypt(aVStack_4,a,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  aVStack_4[0].x = (float)uVar5 - (float)uVar1;
  aVStack_4[0].z = pVVar3->z - b->z;
  aVStack_4[0].y = pVVar3->y - (float)uVar2;
  pOVar6 = ObscuredVector3_op_Implicit(&OStack_7,aVStack_4,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  fVar11 = (pOVar6->fakeValue).x;
  fVar12 = (pOVar6->fakeValue).y;
  uVar13 = *(undefined8 *)&(pOVar6->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  (__return_storage_ptr__->fakeValue).x = fVar11;
  (__return_storage_ptr__->fakeValue).y = fVar12;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_UnaryNegation(ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_UnaryNegation
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(aVStack_2,a,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  aVStack_2[0].x = (float)(uVar3 ^ _UNK_?);
  aVStack_2[0].y = (float)((uint)pVVar1->y ^ _UNK_?);
  aVStack_2[0].z = (float)((uint)pVVar1->z ^ _UNK_?);
  pOVar4 = ObscuredVector3_op_Implicit(&OStack_5,aVStack_2,(MethodInfo *)0x0);
  iVar6 = (pOVar4->hiddenValue).x;
  iVar7 = (pOVar4->hiddenValue).y;
  iVar8 = (pOVar4->hiddenValue).z;
  fVar9 = (pOVar4->fakeValue).x;
  fVar10 = (pOVar4->fakeValue).y;
  uVar11 = *(undefined8 *)&(pOVar4->fakeValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar4->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  (__return_storage_ptr__->fakeValue).x = fVar9;
  (__return_storage_ptr__->fakeValue).y = fVar10;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).z = uVar11;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_Item(ObscuredVector3 *this,int32_t index,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).x = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).x = value;
    }
    return;
  }
  if (index == 1) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).y = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).y = value;
    }
    return;
  }
  if (index == 2) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
    (this->hiddenValue).z = iVar1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fakeValue).z = value;
    }
    return;
  }
  uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar3);
  message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3__set_Item_int__float_
                             );
  FUN_?(this_00,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_x(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_x(ObscuredVector3 *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).x = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).x = value;
  }
  return;
}


/* Void set_y(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_y(ObscuredVector3 *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).y = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).y = value;
  }
  return;
}


/* Void set_z(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_z(ObscuredVector3 *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  iVar1 = ObscuredVector3_InternalEncryptField(this,value,(MethodInfo *)0x0);
  (this->hiddenValue).z = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).z = value;
  }
  return;
}

