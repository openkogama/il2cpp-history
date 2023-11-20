
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_ApplyNewCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->
               cryptoKey) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pVVar2 = ObscuredVector3_InternalDecrypt((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
    pOVar3 = ObscuredVector3_Encrypt_1
                       ((ObscuredVector3_RawEncryptedVector3 *)&stack0xfffffff0,*pVVar2,
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->
                        static_fields->cryptoKey,(MethodInfo *)0x0);
    iVar4 = pOVar3->y;
    iVar5 = pOVar3->z;
    (this->hiddenValue).x = pOVar3->x;
    (this->hiddenValue).y = iVar4;
    (this->hiddenValue).z = iVar5;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  return;
}


/* Boolean CompareVectorsWithTolerance(Vector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_CompareVectorsWithTolerance
               (ObscuredVector3 *this,Vector3 vector1,Vector3 vector2,MethodInfo *method)

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
    fVar2 = (pOVar1->fields).vector3Epsilon;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if ((float)((uint)(vector1.x - vector2.x) & _UNK_?) < fVar2) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if ((float)((uint)(vector1.y - vector2.y) & _UNK_?) < fVar2) {
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        return (float)((uint)(vector1.z - vector2.z) & _UNK_?) < fVar2;
      }
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Vector3 Decrypt(ObscuredVector3+RawEncryptedVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_Decrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3_RawEncryptedVector3 value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->x = (float)(value.x ^ uVar1);
  __return_storage_ptr__->y = (float)(value.y ^ uVar1);
  __return_storage_ptr__->z = (float)(value.z ^ uVar1);
  return __return_storage_ptr__;
}


/* Vector3 Decrypt(ObscuredVector3+RawEncryptedVector3, Int32) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_Decrypt_1
                    (Vector3 *__return_storage_ptr__,ObscuredVector3_RawEncryptedVector3 value,
                    int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->y = (float)(value.y ^ key);
  __return_storage_ptr__->x = (float)(value.x ^ key);
  __return_storage_ptr__->z = (float)(value.z ^ key);
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 Encrypt(Vector3) */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_Encrypt
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,Vector3 value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  value_00.z = value.z;
  value_00.x = value.x;
  value_00.y = value.y;
  pOVar1 = ObscuredVector3_Encrypt_1
                     ((ObscuredVector3_RawEncryptedVector3 *)&value,value_00,0,(MethodInfo *)0x0);
  iVar2 = pOVar1->y;
  iVar3 = pOVar1->z;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
  return __return_storage_ptr__;
}


/* ObscuredVector3+RawEncryptedVector3 Encrypt(Vector3, Int32) */

ObscuredVector3_RawEncryptedVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_Encrypt_1
          (ObscuredVector3_RawEncryptedVector3 *__return_storage_ptr__,Vector3 value,int32_t key,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pOVar1 = ObscuredVector3_Encrypt_2
                     ((ObscuredVector3_RawEncryptedVector3 *)&value,value.x,value.y,value.z,key,
                      (MethodInfo *)0x0);
  iVar2 = pOVar1->y;
  iVar3 = pOVar1->z;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->y = (uint)y ^ key;
  __return_storage_ptr__->x = (uint)x ^ key;
  __return_storage_ptr__->z = (uint)z ^ key;
  return __return_storage_ptr__;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_Equals(ObscuredVector3 *this,Object *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  if (cRam_? == '\0') {
    VStack_2.z = (float)&TypeInfo__UnityEngine__Vector3;
    VStack_2.y = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if (other != (Object *)0x0) {
    pOVar5 = (Object *)0x0;
    if ((Vector3__Class *)other->klass == TypeInfo__UnityEngine__Vector3) {
      pOVar5 = other;
    }
    if (pOVar5 != (Object *)0x0) {
      if ((other->klass->_0).element_class != (TypeInfo__UnityEngine__Vector3->_0).element_class) {
        VStack_2.z = (float)TypeInfo__UnityEngine__Vector3;
        VStack_2.y = (float)other;
        VStack_2.x = (float)&UNK_?;
        func_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      VStack_2.z = (float)other;
      VStack_2.y = (float)&UNK_?;
      puVar8 = (undefined8 *)func_?();
      VStack_2.x = (float)*puVar8;
      if ((((float)uStack_3 == VStack_2.x) &&
          (VStack_2.y = (float)((ulonglong)*puVar8 >> 0x20), uStack_3._4_4_ == VStack_2.y)) &&
         (fStack_4 == *(float *)(puVar8 + 1))) {
        return 1;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  ObscuredVector3_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1 = (this->hiddenValue).y;
  iVar2 = (this->hiddenValue).z;
  __return_storage_ptr__->x = (this->hiddenValue).x;
  __return_storage_ptr__->y = iVar1;
  __return_storage_ptr__->z = iVar2;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_GetHashCode(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  SStack_2.m_value = 0.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar3 = ObscuredVector3_InternalDecrypt(&VStack_4,this,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar3->x;
  uStack_1._4_4_ = pVVar3->y;
  SStack_2.m_value = pVVar3->z;
  uVar5 = mscorlib.dll::System::Single::Single_GetHashCode((Single *)&uStack_1,(MethodInfo *)0x0);
  iVar6 = mscorlib.dll::System::Single::Single_GetHashCode
                    ((Single *)((int)&uStack_1 + 4),(MethodInfo *)0x0);
  iVar7 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_2,(MethodInfo *)0x0);
  return iVar7 >> 2 ^ iVar6 * 4 ^ uVar5;
}


/* Vector3 InternalDecrypt() */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_InternalDecrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  bVar1 = this->inited;
  __return_storage_ptr__->z = 0.0;
  if (bVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
    pOVar2 = ObscuredVector3_Encrypt_1
                        (&OStack_3,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->
                         static_fields->initialFakeValue,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->
                         static_fields->cryptoKey,(MethodInfo *)0x0);
    iVar4 = pOVar2->y;
    iVar5 = pOVar2->z;
    (this->hiddenValue).x = pOVar2->x;
    (this->hiddenValue).y = iVar4;
    (this->hiddenValue).z = iVar5;
    pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    fVar7 = (pOVar6->initialFakeValue).y;
    fVar8 = (pOVar6->initialFakeValue).z;
    (this->fakeValue).x = (pOVar6->initialFakeValue).x;
    (this->fakeValue).y = fVar7;
    (this->fakeValue).z = fVar8;
    this->inited = 1;
  }
  uVar9 = (this->hiddenValue).x;
  uVar10 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  uVar11 = (this->hiddenValue).z;
  uVar12 = this->currentCryptoKey;
  __return_storage_ptr__->y = (float)((this->hiddenValue).y ^ this->currentCryptoKey);
  __return_storage_ptr__->x = (float)(uVar10 ^ uVar9);
  __return_storage_ptr__->z = (float)(uVar11 ^ uVar12);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar13->zeroVector).x;
    uVar15 = (pVVar13->zeroVector).y;
    if ((((this->fakeValue).x != (float)uVar14) || ((this->fakeValue).y != (float)uVar15)) ||
       ((this->fakeValue).z != (pVVar13->zeroVector).z)) {
      fVar8 = (this->fakeValue).z;
      uStack_16._0_4_ = __return_storage_ptr__->x;
      uStack_16._4_4_ = __return_storage_ptr__->y;
      uVar17._0_4_ = (this->fakeValue).x;
      uVar17._4_4_ = (this->fakeValue).y;
      fVar7 = __return_storage_ptr__->z;
      OStack_3.x = uVar14;
      OStack_3.y = (undefined4)uVar17;
      OStack_3.z = uVar17._4_4_;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
        uVar17 = CONCAT44(OStack_3.z,OStack_3.y);
      }
      vector1.z = fVar7;
      vector1.x = (float)(undefined4)uStack_16;
      vector1.y = (float)uStack_16._4_4_;
      vector2.z = fVar8;
      vector2.x = (float)(int)uVar17;
      vector2.y = (float)(int)((ulonglong)uVar17 >> 0x20);
      bVar1 = ObscuredVector3_CompareVectorsWithTolerance(this,vector1,vector2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          uStack_16 = CONCAT44(&UNK_?,(undefined4)uStack_16);
          func_?();
          cRam_? = '\x01';
        }
        pOVar18 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                  ->_Instance_k__BackingField;
        if (pOVar18 == (ObscuredCheatingDetector *)0x0) {
          func_?();
          pcVar19 = (code *)swi(3);
          pVVar20 = (Vector3 *)(*pcVar19)();
          return pVVar20;
        }
        uStack_16 = CONCAT44(pOVar18,&UNK_?);
        (*(code *)(pOVar18->klass->vtable).OnCheatingDetected.method)();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if (this->currentCryptoKey !=
      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey) {
    uVar1 = this->currentCryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (float)(uVar1 ^ encrypted);
}


/* Int32 InternalEncryptField(Single) */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_InternalEncryptField
                  (ObscuredVector3 *this,float encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  return (uint)encrypted ^ uVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_RandomizeCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  do {
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->currentCryptoKey = iVar5;
  } while (iVar5 == 0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    VStack_2.z = (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3;
    VStack_2.y = (float)&UNK_?;
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar6 = ObscuredVector3_Encrypt_1
                     ((ObscuredVector3_RawEncryptedVector3 *)&VStack_2,value,iVar5,
                      (MethodInfo *)0x0);
  iVar7 = pOVar6->y;
  iVar5 = pOVar6->z;
  (this->hiddenValue).x = pOVar6->x;
  (this->hiddenValue).y = iVar7;
  (this->hiddenValue).z = iVar5;
  return;
}


/* Void SetEncrypted(ObscuredVector3+RawEncryptedVector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetEncrypted
               (ObscuredVector3 *this,ObscuredVector3_RawEncryptedVector3 encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  (this->hiddenValue).x = encrypted.x;
  (this->hiddenValue).y = encrypted.y;
  this->inited = 1;
  (this->hiddenValue).z = encrypted.z;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pVVar2 = ObscuredVector3_InternalDecrypt((Vector3 *)&encrypted,this,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    (this->fakeValue).x = pVVar2->x;
    (this->fakeValue).y = fVar3;
    (this->fakeValue).z = fVar4;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey =
         newKey;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
         ObscuredVector3_ToString(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar3 = ObscuredVector3_InternalDecrypt(&VStack_4,this,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar3->x;
  uStack_1._4_4_ = pVVar3->y;
  fStack_2 = pVVar3->z;
  pSVar5 = (String *)func_?(&uStack_1,0,0,0);
  return pSVar5;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
         ObscuredVector3_ToString_1(ObscuredVector3 *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar3 = ObscuredVector3_InternalDecrypt(&VStack_4,this,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar3->x;
  uStack_1._4_4_ = pVVar3->y;
  fStack_2 = pVVar3->z;
  pSVar5 = (String *)func_?(&uStack_1,format,0,0);
  return pSVar5;
}


/* ObscuredVector3() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey = iVar1;
  if (cRam_? == '\0') {
    ppVStack2 = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  (pOVar6->initialFakeValue).x = (pVVar3->zeroVector).x;
  (pOVar6->initialFakeValue).y = fVar4;
  (pOVar6->initialFakeValue).z = fVar5;
  return;
}


/* ObscuredVector3(ObscuredVector3+RawEncryptedVector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__ctor
               (ObscuredVector3 *this,ObscuredVector3_RawEncryptedVector3 encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  (this->hiddenValue).x = encrypted.x;
  (this->hiddenValue).y = encrypted.y;
  (this->hiddenValue).z = encrypted.z;
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  fVar2 = (pOVar1->initialFakeValue).y;
  fVar3 = (pOVar1->initialFakeValue).z;
  (this->fakeValue).x = (pOVar1->initialFakeValue).x;
  (this->fakeValue).y = fVar2;
  (this->fakeValue).z = fVar3;
  this->inited = 1;
  return;
}


/* ObscuredVector3(Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__ctor_1(ObscuredVector3 *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  this->currentCryptoKey = iVar1;
  pOVar2 = ObscuredVector3_Encrypt_2(&OStack_3,x,y,z,iVar1,(MethodInfo *)0x0);
  iVar4 = pOVar2->y;
  iVar1 = pOVar2->z;
  (this->hiddenValue).x = pOVar2->x;
  (this->hiddenValue).y = iVar4;
  (this->hiddenValue).z = iVar1;
  (this->fakeValue).x = x;
  (this->fakeValue).y = y;
  (this->fakeValue).z = z;
  this->inited = 1;
  return;
}


/* Single get_Item(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_Item(ObscuredVector3 *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if (index == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    fVar1 = ObscuredVector3_get_x(this,(MethodInfo *)0x0);
    return fVar1;
  }
  if (index == 1) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    fVar1 = ObscuredVector3_get_y(this,(MethodInfo *)0x0);
    return fVar1;
  }
  if (index == 2) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    fVar1 = ObscuredVector3_get_z(this,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?(&MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3__get_Item_int_);
  func_?(this_00);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_x(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).x;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).x;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        fVar9 = (float10)(*pcVar8)();
        return (float)fVar9;
      }
      pfVar10 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar10 <= fVar6 && fVar6 != *pfVar10) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar7 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar7->klass->vtable).OnCheatingDetected.method)
                  (pOVar7,(pOVar7->klass->vtable).StartDetectionAutomatically.methodPtr);
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
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).y;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).y;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        fVar9 = (float10)(*pcVar8)();
        return (float)fVar9;
      }
      pfVar10 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar10 <= fVar6 && fVar6 != *pfVar10) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar7 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar7->klass->vtable).OnCheatingDetected.method)
                  (pOVar7,(pOVar7->klass->vtable).StartDetectionAutomatically.methodPtr);
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
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  encrypted = (this->hiddenValue).z;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  fVar1 = ObscuredVector3_InternalDecryptField(this,encrypted,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4 = (pOVar3->initialFakeValue).x;
    uVar5 = (pOVar3->initialFakeValue).y;
    if ((((this->fakeValue).x != (float)uVar4) || ((this->fakeValue).y != (float)uVar5)) ||
       ((this->fakeValue).z != (pOVar3->initialFakeValue).z)) {
      fVar6 = (this->fakeValue).z;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar6 = (float)((uint)(fVar1 - fVar6) & _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        fVar9 = (float10)(*pcVar8)();
        return (float)fVar9;
      }
      pfVar10 = &(pOVar7->fields).vector3Epsilon;
      if (*pfVar10 <= fVar6 && fVar6 != *pfVar10) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar7 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar7->klass->vtable).OnCheatingDetected.method)
                  (pOVar7,(pOVar7->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return fVar1;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,ObscuredVector3 b,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_5,&b,(MethodInfo *)0x0);
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  fStack_4 = VStack_2.z + fStack_4;
  value.y = uStack_3._4_4_ + VStack_2.y;
  value.x = (float)uStack_3 + VStack_2.x;
  value.z = fStack_4;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&puStack_7,value,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar11 = (pOVar6->fakeValue).y;
  fVar12 = (pOVar6->fakeValue).z;
  bVar13 = pOVar6->inited;
  uVar14 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar11;
  (__return_storage_ptr__->fakeValue).z = fVar12;
  __return_storage_ptr__->inited = bVar13;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar14;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 a,ObscuredVector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&b,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  value.y = a.y + (float)uStack_3._4_4_;
  value.x = a.x + (float)(undefined4)uStack_3;
  value.z = a.z + fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,Vector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  value.y = b.y + (float)uStack_3._4_4_;
  value.x = b.x + (float)(undefined4)uStack_3;
  value.z = b.z + fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Division(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Division
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z / d;
  value.y = (float)uStack_3._4_4_ / d;
  value.x = (float)(undefined4)uStack_3 / d;
  value.z = fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(ObscuredVector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality(ObscuredVector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&lhs,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_5,&rhs,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fStack_4 = fStack_4 - pVVar1->z;
  return (uStack_3._4_4_ - (float)uVar7) * (uStack_3._4_4_ - (float)uVar7) +
         ((float)uStack_3 - (float)uVar6) * ((float)uStack_3 - (float)uVar6) + fStack_4 * fStack_4
         < _UNK_?;
}


/* Boolean op_Equality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_1(Vector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&rhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = lhs.z - pVVar1->z;
  return (lhs.y - (float)uVar4) * (lhs.y - (float)uVar4) +
         (lhs.x - (float)uVar3) * (lhs.x - (float)uVar3) + fVar5 * fVar5 < _UNK_?;
}


/* Boolean op_Equality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_2(ObscuredVector3 lhs,Vector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&lhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z - rhs.z;
  return ((float)uVar4 - rhs.y) * ((float)uVar4 - rhs.y) +
         ((float)uVar3 - rhs.x) * ((float)uVar3 - rhs.x) + fVar5 * fVar5 < _UNK_?;
}


/* ObscuredVector3 op_Implicit(Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Implicit
          (ObscuredVector3 *__return_storage_ptr__,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  (__return_storage_ptr__->hiddenValue).y = 0;
  (__return_storage_ptr__->hiddenValue).z = 0;
  (__return_storage_ptr__->fakeValue).x = 0.0;
  (__return_storage_ptr__->fakeValue).y = 0.0;
  (__return_storage_ptr__->fakeValue).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pOVar1 = ObscuredVector3_Encrypt_1
                     ((ObscuredVector3_RawEncryptedVector3 *)&stack0xfffffff0,value,
                      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields
                      ->cryptoKey,(MethodInfo *)0x0);
  ObscuredVector3__ctor(__return_storage_ptr__,*pOVar1,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (__return_storage_ptr__->fakeValue).x = value.x;
    (__return_storage_ptr__->fakeValue).y = value.y;
    (__return_storage_ptr__->fakeValue).z = value.z;
  }
  return __return_storage_ptr__;
}


/* Vector3 op_Implicit(ObscuredVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_op_Implicit_1
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&value,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean op_Inequality(ObscuredVector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality(ObscuredVector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&lhs,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_5,&rhs,(MethodInfo *)0x0);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fStack_4 = fStack_4 - pVVar1->z;
  return _UNK_? <=
         (uStack_3._4_4_ - (float)uVar7) * (uStack_3._4_4_ - (float)uVar7) +
         ((float)uStack_3 - (float)uVar6) * ((float)uStack_3 - (float)uVar6) + fStack_4 * fStack_4
  ;
}


/* Boolean op_Inequality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_1(Vector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&rhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = lhs.z - pVVar1->z;
  return _UNK_? <=
         (lhs.y - (float)uVar4) * (lhs.y - (float)uVar4) +
         (lhs.x - (float)uVar3) * (lhs.x - (float)uVar3) + fVar5 * fVar5;
}


/* Boolean op_Inequality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_2(ObscuredVector3 lhs,Vector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&lhs,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z - rhs.z;
  return _UNK_? <=
         ((float)uVar4 - rhs.y) * ((float)uVar4 - rhs.y) +
         ((float)uVar3 - rhs.x) * ((float)uVar3 - rhs.x) + fVar5 * fVar5;
}


/* ObscuredVector3 op_Multiply(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Multiply
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z * d;
  value.y = (float)uStack_3._4_4_ * d;
  value.x = (float)(undefined4)uStack_3 * d;
  value.z = fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Multiply(Single, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Multiply_1
          (ObscuredVector3 *__return_storage_ptr__,float d,ObscuredVector3 a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z * d;
  value.y = (float)uStack_3._4_4_ * d;
  value.x = (float)(undefined4)uStack_3 * d;
  value.z = fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(ObscuredVector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,ObscuredVector3 b,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_5,&b,(MethodInfo *)0x0);
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = fStack_4 - pVVar1->z;
  value.y = uStack_3._4_4_ - VStack_2.y;
  value.x = (float)uStack_3 - VStack_2.x;
  value.z = VStack_2.z;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&puStack_7,value,(MethodInfo *)0x0);
  iVar8 = (pOVar6->hiddenValue).x;
  iVar9 = (pOVar6->hiddenValue).y;
  iVar10 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar11 = (pOVar6->fakeValue).y;
  fVar12 = (pOVar6->fakeValue).z;
  bVar13 = pOVar6->inited;
  uVar14 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar11;
  (__return_storage_ptr__->fakeValue).z = fVar12;
  __return_storage_ptr__->inited = bVar13;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar14;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 a,ObscuredVector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&b,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  value.y = a.y - (float)uStack_3._4_4_;
  value.x = a.x - (float)(undefined4)uStack_3;
  value.z = a.z - fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,Vector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  value.y = (float)uStack_3._4_4_ - b.y;
  value.x = (float)(undefined4)uStack_3 - b.x;
  value.z = fStack_4 - b.z;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_UnaryNegation(ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_UnaryNegation
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pVVar1 = ObscuredVector3_InternalDecrypt(&VStack_2,&a,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = (float)((uint)pVVar1->z ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.y = (float)(uStack_3._4_4_ ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.x = (float)((undefined4)uStack_3 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.z = fStack_4;
  pOVar5 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc4,value,(MethodInfo *)0x0);
  iVar6 = (pOVar5->hiddenValue).x;
  iVar7 = (pOVar5->hiddenValue).y;
  iVar8 = (pOVar5->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar5->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar6;
  (__return_storage_ptr__->hiddenValue).y = iVar7;
  (__return_storage_ptr__->hiddenValue).z = iVar8;
  fVar9 = (pOVar5->fakeValue).y;
  fVar10 = (pOVar5->fakeValue).z;
  bVar11 = pOVar5->inited;
  uVar12 = *(undefined3 *)&pOVar5->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar5->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar9;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_Item(ObscuredVector3 *this,int32_t index,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if (index == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    ObscuredVector3_set_x(this,value,(MethodInfo *)0x0);
    return;
  }
  if (index == 1) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    ObscuredVector3_set_y(this,value,(MethodInfo *)0x0);
    return;
  }
  if (index == 2) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    ObscuredVector3_set_z(this,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_ObscuredVector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?(&
                  MethodInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3__set_Item_int__float_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_x(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_x(ObscuredVector3 *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
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

