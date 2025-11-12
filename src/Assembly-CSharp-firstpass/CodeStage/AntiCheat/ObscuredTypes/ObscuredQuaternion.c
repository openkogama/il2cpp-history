
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_ApplyNewCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pQVar2 = ObscuredQuaternion_InternalDecrypt(aQStack_3,this,(MethodInfo *)0x0);
    x = pQVar2->x;
    y = pQVar2->y;
    z = pQVar2->z;
    w = pQVar2->w;
    iVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
            cryptoKey;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pOVar5 = ObscuredQuaternion_Encrypt_2
                       ((ObscuredQuaternion_RawEncryptedQuaternion *)aQStack_3,x,y,z,w,iVar4,
                        (MethodInfo *)0x0);
    iVar4 = pOVar5->y;
    iVar6 = pOVar5->z;
    iVar7 = pOVar5->w;
    (this->hiddenValue).x = pOVar5->x;
    (this->hiddenValue).y = iVar4;
    (this->hiddenValue).z = iVar6;
    (this->hiddenValue).w = iVar7;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey
    ;
  }
  return;
}


/* Boolean CompareQuaternionsWithTolerance(Quaternion, Quaternion) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_CompareQuaternionsWithTolerance
               (ObscuredQuaternion *this,Quaternion *q1,Quaternion *q2,MethodInfo *method)

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
    fVar2 = q1->x;
    fVar3 = (pOVar1->fields).quaternionEpsilon;
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((float)((uint)(fVar2 - q2->x) & (uint)_UNK_?) < fVar3) {
      fVar2 = q1->y;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((float)((uint)(fVar2 - q2->y) & (uint)_UNK_?) < fVar3) {
        fVar2 = q1->z;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((float)((uint)(fVar2 - q2->z) & (uint)_UNK_?) < fVar3) {
          fVar2 = q1->w;
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          return (float)((uint)(fVar2 - q2->w) & (uint)_UNK_?) < fVar3;
        }
      }
    }
    return 0;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Quaternion Decrypt(ObscuredQuaternion+RawEncryptedQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Decrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion_RawEncryptedQuaternion *value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  uVar2 = value->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = value->y;
  uVar4 = value->z;
  uVar5 = value->w;
  __return_storage_ptr__->x = (float)(uVar2 ^ uVar1);
  __return_storage_ptr__->y = (float)(uVar3 ^ uVar1);
  __return_storage_ptr__->z = (float)(uVar4 ^ uVar1);
  __return_storage_ptr__->w = (float)(uVar5 ^ uVar1);
  return __return_storage_ptr__;
}


/* Quaternion Decrypt(ObscuredQuaternion+RawEncryptedQuaternion, Int32) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Decrypt_1
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion_RawEncryptedQuaternion *value,
          int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  uVar1 = value->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->y = (float)(key ^ value->y);
  uVar2 = value->z;
  __return_storage_ptr__->w = (float)(key ^ value->w);
  __return_storage_ptr__->x = (float)(uVar1 ^ key);
  __return_storage_ptr__->z = (float)(key ^ uVar2);
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion Encrypt(Quaternion) */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Encrypt
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,Quaternion *value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = value->x;
  fVar2 = value->y;
  fVar3 = value->z;
  fVar4 = value->w;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  uVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = (uint)fVar1 ^ uVar5;
  __return_storage_ptr__->y = (uint)fVar2 ^ uVar5;
  __return_storage_ptr__->z = (uint)fVar3 ^ uVar5;
  __return_storage_ptr__->w = (uint)fVar4 ^ uVar5;
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion Encrypt(Quaternion, Int32) */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Encrypt_1
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,Quaternion *value,
          int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  w = value->w;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pOVar1 = ObscuredQuaternion_Encrypt_2
                     (aOStack_2,value->x,value->y,value->z,w,key,(MethodInfo *)0x0);
  iVar3 = pOVar1->y;
  iVar4 = pOVar1->z;
  iVar5 = pOVar1->w;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar3;
  __return_storage_ptr__->z = iVar4;
  __return_storage_ptr__->w = iVar5;
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion Encrypt(Single, Single, Single, Single, Int32) */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Encrypt_2
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,float x,float y,float z
          ,float w,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  __return_storage_ptr__->w = 0;
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = (uint)x ^ key;
  __return_storage_ptr__->y = (uint)y ^ key;
  __return_storage_ptr__->z = (uint)z ^ key;
  __return_storage_ptr__->w = (uint)w ^ key;
  return __return_storage_ptr__;
}


/* Quaternion GetDecrypted() */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_GetDecrypted
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion GetEncrypted() */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_GetEncrypted
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,
          ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  ObscuredQuaternion_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1 = (this->hiddenValue).y;
  iVar2 = (this->hiddenValue).z;
  iVar3 = (this->hiddenValue).w;
  __return_storage_ptr__->x = (this->hiddenValue).x;
  __return_storage_ptr__->y = iVar1;
  __return_storage_ptr__->z = iVar2;
  __return_storage_ptr__->w = iVar3;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
        ObscuredQuaternion_GetHashCode(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (0x7f7fffff < ((int)fVar3 - 1U & 0x7fffffff)) {
    fVar3 = (float)((uint)fVar3 & 0x7f800000);
  }
  if (0x7f7fffff < ((int)fVar4 - 1U & 0x7fffffff)) {
    fVar4 = (float)((uint)fVar4 & 0x7f800000);
  }
  if (0x7f7fffff < ((int)fVar5 - 1U & 0x7fffffff)) {
    fVar5 = (float)((uint)fVar5 & 0x7f800000);
  }
  if (0x7f7fffff < ((int)fVar6 - 1U & 0x7fffffff)) {
    fVar6 = (float)((uint)fVar6 & 0x7f800000);
  }
  return (int)fVar4 * 4 ^ (int)((int)fVar5 >> 1 ^ (uint)fVar6) >> 1 ^ (uint)fVar3;
}


/* Quaternion InternalDecrypt() */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_InternalDecrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = this->inited;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey
    ;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
    QStack_3.x = (pOVar2->initialFakeValue).x;
    QStack_3.y = (pOVar2->initialFakeValue).y;
    QStack_3.z = (pOVar2->initialFakeValue).z;
    QStack_3.w = (pOVar2->initialFakeValue).w;
    pOVar4 = ObscuredQuaternion_Encrypt
                        ((ObscuredQuaternion_RawEncryptedQuaternion *)aQStack_5,&QStack_3,
                         (MethodInfo *)0x0);
    iVar6 = pOVar4->y;
    iVar7 = pOVar4->z;
    iVar8 = pOVar4->w;
    (this->hiddenValue).x = pOVar4->x;
    (this->hiddenValue).y = iVar6;
    (this->hiddenValue).z = iVar7;
    (this->hiddenValue).w = iVar8;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
    fVar9 = (pOVar2->initialFakeValue).x;
    fVar10 = (pOVar2->initialFakeValue).y;
    fVar11 = (pOVar2->initialFakeValue).z;
    fVar12 = (pOVar2->initialFakeValue).w;
    this->inited = 1;
    (this->fakeValue).x = fVar9;
    (this->fakeValue).y = fVar10;
    (this->fakeValue).z = fVar11;
    (this->fakeValue).w = fVar12;
  }
  uVar13 = (this->hiddenValue).x;
  uVar14 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->y = (float)((this->hiddenValue).y ^ this->currentCryptoKey);
  __return_storage_ptr__->z = (float)((this->hiddenValue).z ^ this->currentCryptoKey);
  __return_storage_ptr__->w = (float)((this->hiddenValue).w ^ this->currentCryptoKey);
  __return_storage_ptr__->x = (float)(uVar14 ^ uVar13);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
    QStack_3.x = (pOVar2->initialFakeValue).x;
    QStack_3.y = (pOVar2->initialFakeValue).y;
    QStack_3.z = (pOVar2->initialFakeValue).z;
    QStack_3.w = (pOVar2->initialFakeValue).w;
    pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Equals_1
                       (&this->fakeValue,&QStack_3,
                        (MethodInfo *)
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    if (bVar1 == 0) {
      uVar16._0_4_ = __return_storage_ptr__->x;
      uVar16._4_4_ = __return_storage_ptr__->y;
      uVar17._0_4_ = __return_storage_ptr__->z;
      uVar17._4_4_ = __return_storage_ptr__->w;
      uVar18._0_4_ = (this->fakeValue).x;
      uVar18._4_4_ = (this->fakeValue).y;
      uVar19._0_4_ = (this->fakeValue).z;
      uVar19._4_4_ = (this->fakeValue).w;
      if (*(int *)&(pOVar15->_1).field_0x1c == 0) {
        FUN_?(pOVar15);
      }
      QStack_3._0_8_ = uVar18;
      QStack_3._8_8_ = uVar19;
      aQStack_5[0]._0_8_ = uVar16;
      aQStack_5[0]._8_8_ = uVar17;
      bVar1 = ObscuredQuaternion_CompareQuaternionsWithTolerance
                         (this,aQStack_5,&QStack_3,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        plVar20 = (longlong *)FUN_?();
        if (plVar20 == (longlong *)0x0) {
          FUN_?();
          pcVar21 = (code *)swi(3);
          pQVar22 = (Quaternion *)(*pcVar21)();
          return pQVar22;
        }
        (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
      }
    }
  }
  return __return_storage_ptr__;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_RandomizeCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(aQStack_2,this,(MethodInfo *)0x0);
  x = pQVar1->x;
  y = pQVar1->y;
  z = pQVar1->z;
  w = pQVar1->w;
  while ((pcVar3 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 != (code *)0x0))) {
    pcRam_? = pcVar3;
    key = (*pcRam_?)(0x80000000);
    this->currentCryptoKey = key;
    if (key != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = ObscuredQuaternion_Encrypt_2
                         ((ObscuredQuaternion_RawEncryptedQuaternion *)aQStack_2,x,y,z,w,key,
                          (MethodInfo *)0x0);
      iVar5 = pOVar4->y;
      iVar6 = pOVar4->z;
      iVar7 = pOVar4->w;
      (this->hiddenValue).x = pOVar4->x;
      (this->hiddenValue).y = iVar5;
      (this->hiddenValue).z = iVar6;
      (this->hiddenValue).w = iVar7;
      return;
    }
  }
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetEncrypted(ObscuredQuaternion+RawEncryptedQuaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetEncrypted
               (ObscuredQuaternion *this,ObscuredQuaternion_RawEncryptedQuaternion *encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = encrypted->x;
  iVar2 = encrypted->y;
  iVar3 = encrypted->z;
  iVar4 = encrypted->w;
  this->inited = 1;
  (this->hiddenValue).x = iVar1;
  (this->hiddenValue).y = iVar2;
  (this->hiddenValue).z = iVar3;
  (this->hiddenValue).w = iVar4;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pQVar6 = ObscuredQuaternion_InternalDecrypt(&QStack_7,this,(MethodInfo *)0x0);
    fVar8 = pQVar6->y;
    fVar9 = pQVar6->z;
    fVar10 = pQVar6->w;
    (this->fakeValue).x = pQVar6->x;
    (this->fakeValue).y = fVar8;
    (this->fakeValue).z = fVar9;
    (this->fakeValue).w = fVar10;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey =
       newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
         ObscuredQuaternion_ToString(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  QStack_2.x = pQVar1->x;
  QStack_2.y = pQVar1->y;
  QStack_2.z = pQVar1->z;
  QStack_2.w = pQVar1->w;
  pSVar3 = (String *)FUN_?(&QStack_2,0,0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
         ObscuredQuaternion_ToString_1(ObscuredQuaternion *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  QStack_2.x = pQVar1->x;
  QStack_2.y = pQVar1->y;
  QStack_2.z = pQVar1->z;
  QStack_2.w = pQVar1->w;
  pSVar3 = (String *)FUN_?(&QStack_2,format,0);
  return pSVar3;
}


/* ObscuredQuaternion() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey =
       iVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  (pOVar6->initialFakeValue).x = (pQVar2->identityQuaternion).x;
  (pOVar6->initialFakeValue).y = fVar3;
  (pOVar6->initialFakeValue).z = fVar4;
  (pOVar6->initialFakeValue).w = fVar5;
  return;
}


/* ObscuredQuaternion(ObscuredQuaternion+RawEncryptedQuaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__ctor
               (ObscuredQuaternion *this,ObscuredQuaternion_RawEncryptedQuaternion *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  iVar1 = value->x;
  iVar2 = value->y;
  iVar3 = value->z;
  iVar4 = value->w;
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey;
  (this->hiddenValue).x = iVar1;
  (this->hiddenValue).y = iVar2;
  (this->hiddenValue).z = iVar3;
  (this->hiddenValue).w = iVar4;
  pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  fVar6 = (pOVar5->initialFakeValue).x;
  fVar7 = (pOVar5->initialFakeValue).y;
  fVar8 = (pOVar5->initialFakeValue).z;
  fVar9 = (pOVar5->initialFakeValue).w;
  this->inited = 1;
  (this->fakeValue).x = fVar6;
  (this->fakeValue).y = fVar7;
  (this->fakeValue).z = fVar8;
  (this->fakeValue).w = fVar9;
  return;
}


/* ObscuredQuaternion(Single, Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__ctor_1
               (ObscuredQuaternion *this,float x,float y,float z,float w,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  bVar1 = cRam_? == '\0';
  uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  this->currentCryptoKey = uVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar2 == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    uVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
            cryptoKey;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  this->inited = 1;
  (this->hiddenValue).x = (uint)x ^ uVar2;
  (this->hiddenValue).y = (uint)y ^ uVar2;
  (this->hiddenValue).z = (uint)z ^ uVar2;
  (this->hiddenValue).w = (uint)w ^ uVar2;
  (this->fakeValue).x = x;
  (this->fakeValue).y = y;
  (this->fakeValue).z = z;
  (this->fakeValue).w = w;
  return;
}


/* ObscuredQuaternion op_Implicit(Quaternion) */

ObscuredQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_op_Implicit
          (ObscuredQuaternion *__return_storage_ptr__,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  (__return_storage_ptr__->hiddenValue).y = 0;
  (__return_storage_ptr__->hiddenValue).z = 0;
  *(undefined8 *)&(__return_storage_ptr__->hiddenValue).w = 0;
  (__return_storage_ptr__->fakeValue).y = 0.0;
  (__return_storage_ptr__->fakeValue).z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).w = 0;
  if (*(int *)&(pOVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_2.x = value->x;
  QStack_2.y = value->y;
  QStack_2.z = value->z;
  QStack_2.w = value->w;
  pOVar3 = ObscuredQuaternion_Encrypt(&OStack_4,&QStack_2,(MethodInfo *)0x0);
  QStack_2.x = (float)pOVar3->x;
  QStack_2.y = (float)pOVar3->y;
  QStack_2.z = (float)pOVar3->z;
  QStack_2.w = (float)pOVar3->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  (__return_storage_ptr__->hiddenValue).x = (int32_t)QStack_2.x;
  (__return_storage_ptr__->hiddenValue).y = (int32_t)QStack_2.y;
  (__return_storage_ptr__->hiddenValue).z = (int32_t)QStack_2.z;
  (__return_storage_ptr__->hiddenValue).w = (int32_t)QStack_2.w;
  __return_storage_ptr__->inited = 1;
  fVar6 = (pOVar5->initialFakeValue).x;
  fVar7 = (pOVar5->initialFakeValue).y;
  fVar8 = (pOVar5->initialFakeValue).z;
  fVar9 = (pOVar5->initialFakeValue).w;
  __return_storage_ptr__->currentCryptoKey = pOVar5->cryptoKey;
  (__return_storage_ptr__->fakeValue).x = fVar6;
  (__return_storage_ptr__->fakeValue).y = fVar7;
  (__return_storage_ptr__->fakeValue).z = fVar8;
  (__return_storage_ptr__->fakeValue).w = fVar9;
  bVar10 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar10 != 0) {
    fVar6 = value->y;
    fVar7 = value->z;
    fVar8 = value->w;
    (__return_storage_ptr__->fakeValue).x = value->x;
    (__return_storage_ptr__->fakeValue).y = fVar6;
    (__return_storage_ptr__->fakeValue).z = fVar7;
    (__return_storage_ptr__->fakeValue).w = fVar8;
  }
  return __return_storage_ptr__;
}


/* Quaternion op_Implicit(ObscuredQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_op_Implicit_1
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,value,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

