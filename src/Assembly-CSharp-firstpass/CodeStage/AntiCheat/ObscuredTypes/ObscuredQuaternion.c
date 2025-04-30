
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_ApplyNewCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  if (iVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
               cryptoKey) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    pQVar2 = ObscuredQuaternion_InternalDecrypt
                       ((Quaternion *)&stack0xffffffec,this,(MethodInfo *)0x0);
    pOVar3 = ObscuredQuaternion_Encrypt_1
                       ((ObscuredQuaternion_RawEncryptedQuaternion *)&stack0xffffffec,*pQVar2,
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->
                        static_fields->cryptoKey,(MethodInfo *)0x0);
    iVar4 = pOVar3->y;
    iVar5 = pOVar3->z;
    iVar6 = pOVar3->w;
    (this->hiddenValue).x = pOVar3->x;
    (this->hiddenValue).y = iVar4;
    (this->hiddenValue).z = iVar5;
    (this->hiddenValue).w = iVar6;
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey
    ;
  }
  return;
}


/* Boolean CompareQuaternionsWithTolerance(Quaternion, Quaternion) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_CompareQuaternionsWithTolerance
               (ObscuredQuaternion *this,Quaternion q1,Quaternion q2,MethodInfo *method)

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
    fVar2 = (pOVar1->fields).quaternionEpsilon;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if ((float)((uint)(q1.x - q2.x) & _UNK_?) < fVar2) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if ((float)((uint)(q1.y - q2.y) & _UNK_?) < fVar2) {
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        if ((float)((uint)(q1.z - q2.z) & _UNK_?) < fVar2) {
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          return (float)((uint)(q1.w - q2.w) & _UNK_?) < fVar2;
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Quaternion Decrypt(ObscuredQuaternion+RawEncryptedQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Decrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion_RawEncryptedQuaternion value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->x = (float)(value.x ^ uVar1);
  __return_storage_ptr__->y = (float)(value.y ^ uVar1);
  __return_storage_ptr__->z = (float)(value.z ^ uVar1);
  __return_storage_ptr__->w = (float)(value.w ^ uVar1);
  return __return_storage_ptr__;
}


/* Quaternion Decrypt(ObscuredQuaternion+RawEncryptedQuaternion, Int32) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Decrypt_1
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion_RawEncryptedQuaternion value,
          int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->x = (float)(value.x ^ key);
  __return_storage_ptr__->y = (float)(value.y ^ key);
  __return_storage_ptr__->z = (float)(value.z ^ key);
  __return_storage_ptr__->w = (float)(value.w ^ key);
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion Encrypt(Quaternion) */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Encrypt
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,Quaternion value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pOVar1 = ObscuredQuaternion_Encrypt_2
                     ((ObscuredQuaternion_RawEncryptedQuaternion *)&value,value.x,value.y,value.z,
                      value.w,0,(MethodInfo *)0x0);
  iVar2 = pOVar1->y;
  iVar3 = pOVar1->z;
  iVar4 = pOVar1->w;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
  __return_storage_ptr__->w = iVar4;
  return __return_storage_ptr__;
}


/* ObscuredQuaternion+RawEncryptedQuaternion Encrypt(Quaternion, Int32) */

ObscuredQuaternion_RawEncryptedQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Encrypt_1
          (ObscuredQuaternion_RawEncryptedQuaternion *__return_storage_ptr__,Quaternion value,
          int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pOVar1 = ObscuredQuaternion_Encrypt_2
                     ((ObscuredQuaternion_RawEncryptedQuaternion *)&value,value.x,value.y,value.z,
                      value.w,key,(MethodInfo *)0x0);
  iVar2 = pOVar1->y;
  iVar3 = pOVar1->z;
  iVar4 = pOVar1->w;
  __return_storage_ptr__->x = pOVar1->x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
  __return_storage_ptr__->w = iVar4;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  __return_storage_ptr__->w = 0;
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->x = (uint)x ^ key;
  __return_storage_ptr__->z = (uint)z ^ key;
  __return_storage_ptr__->y = (uint)y ^ key;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  SStack_3.m_value = pQVar1->x;
  SStack_4.m_value = pQVar1->y;
  SStack_5.m_value = pQVar1->z;
  SStack_6.m_value = pQVar1->w;
  uVar7 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_3,(MethodInfo *)0x0);
  iVar8 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_4,(MethodInfo *)0x0);
  iVar9 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_5,(MethodInfo *)0x0);
  uVar10 = mscorlib.dll::System::Single::Single_GetHashCode(&SStack_6,(MethodInfo *)0x0);
  return (int)(uVar10 ^ iVar9 >> 1) >> 1 ^ iVar8 * 4 ^ uVar7;
}


/* Quaternion InternalDecrypt() */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_InternalDecrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  bVar1 = this->inited;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (bVar1 == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey
    ;
    pOVar2 = ObscuredQuaternion_Encrypt
                        ((ObscuredQuaternion_RawEncryptedQuaternion *)&stack0xffffffdc,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->
                         static_fields->initialFakeValue,(MethodInfo *)0x0);
    iVar3 = pOVar2->y;
    iVar4 = pOVar2->z;
    iVar5 = pOVar2->w;
    (this->hiddenValue).x = pOVar2->x;
    (this->hiddenValue).y = iVar3;
    (this->hiddenValue).z = iVar4;
    (this->hiddenValue).w = iVar5;
    pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
    fVar7 = (pOVar6->initialFakeValue).x;
    fVar8 = (pOVar6->initialFakeValue).y;
    fVar9 = (pOVar6->initialFakeValue).z;
    fVar10 = (pOVar6->initialFakeValue).w;
    this->inited = 1;
    (this->fakeValue).x = fVar7;
    (this->fakeValue).y = fVar8;
    (this->fakeValue).z = fVar9;
    (this->fakeValue).w = fVar10;
  }
  uVar11 = (this->hiddenValue).x;
  uVar12 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  uVar13 = this->currentCryptoKey;
  uVar14 = (this->hiddenValue).z;
  __return_storage_ptr__->y = (float)((this->hiddenValue).y ^ uVar13);
  uVar15 = (this->hiddenValue).w;
  __return_storage_ptr__->z = (float)(uVar14 ^ uVar13);
  __return_storage_ptr__->x = (float)(uVar12 ^ uVar11);
  __return_storage_ptr__->w = (float)(uVar15 ^ uVar13);
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
    fVar7 = (pOVar6->initialFakeValue).y;
    fVar8 = (pOVar6->initialFakeValue).z;
    fVar9 = (pOVar6->initialFakeValue).w;
    bVar1 = mscorlib.dll::System::Single::Single_Equals_1
                       ((Single *)&this->fakeValue,(pOVar6->initialFakeValue).x,(MethodInfo *)0x0);
    if ((((bVar1 != 0) &&
         (bVar1 = mscorlib.dll::System::Single::Single_Equals_1
                             ((Single *)&(this->fakeValue).y,fVar7,(MethodInfo *)0x0), bVar1 != 0)
         ) && (bVar1 = mscorlib.dll::System::Single::Single_Equals_1
                                  ((Single *)&(this->fakeValue).z,fVar8,(MethodInfo *)0x0),
              bVar1 != 0)) &&
       (bVar1 = mscorlib.dll::System::Single::Single_Equals_1
                           ((Single *)&(this->fakeValue).w,fVar9,(MethodInfo *)0x0), bVar1 != 0))
    {
      return __return_storage_ptr__;
    }
    fVar7 = __return_storage_ptr__->x;
    fVar8 = __return_storage_ptr__->y;
    fVar9 = __return_storage_ptr__->z;
    fVar10 = __return_storage_ptr__->w;
    fVar16 = (this->fakeValue).x;
    fVar17 = (this->fakeValue).y;
    fVar18 = (this->fakeValue).z;
    fVar19 = (this->fakeValue).w;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    q1.y = fVar8;
    q1.x = fVar7;
    q1.z = fVar9;
    q1.w = fVar10;
    q2.y = fVar17;
    q2.x = fVar16;
    q2.z = fVar18;
    q2.w = fVar19;
    bVar1 = ObscuredQuaternion_CompareQuaternionsWithTolerance(this,q1,q2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        ppOStack20 = &TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector;
        func_?();
        cRam_? = '\x01';
      }
      pOVar21 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar21 == (ObscuredCheatingDetector *)0x0) {
        func_?();
        pcVar22 = (code *)swi(3);
        pQVar23 = (Quaternion *)(*pcVar22)();
        return pQVar23;
      }
      pOVar24 = pOVar21->klass;
      ppOStack20 =
           (ObscuredCheatingDetector__Class **)
           (pOVar24->vtable).StartDetectionAutomatically.methodPtr;
      (*(code *)(pOVar24->vtable).OnCheatingDetected.method)();
    }
  }
  return __return_storage_ptr__;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_RandomizeCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt((Quaternion *)&stack0xffffffec,this,(MethodInfo *)0x0)
  ;
  y = pQVar1->y;
  puStack_2 = (undefined *)pQVar1->z;
  pOStack_3 = (ObscuredQuaternion__Class *)pQVar1->w;
  do {
    x = (ObscuredQuaternion__Class **)0x0;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    this->currentCryptoKey = iVar4;
  } while (iVar4 == 0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    pOStack_3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
    func_?();
  }
  if (cRam_? == '\0') {
    x = &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    x = (ObscuredQuaternion__Class **)
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
    func_?();
  }
  pOVar5 = ObscuredQuaternion_Encrypt_2
                     ((ObscuredQuaternion_RawEncryptedQuaternion *)&stack0xffffffec,(float)x,y,
                      (float)puStack_2,(float)pOStack_3,iVar4,(MethodInfo *)0x0);
  iVar4 = pOVar5->y;
  iVar6 = pOVar5->z;
  iVar7 = pOVar5->w;
  (this->hiddenValue).x = pOVar5->x;
  (this->hiddenValue).y = iVar4;
  (this->hiddenValue).z = iVar6;
  (this->hiddenValue).w = iVar7;
  return;
}


/* Void SetEncrypted(ObscuredQuaternion+RawEncryptedQuaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetEncrypted
               (ObscuredQuaternion *this,ObscuredQuaternion_RawEncryptedQuaternion encrypted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  this->inited = 1;
  (this->hiddenValue).x = encrypted.x;
  (this->hiddenValue).y = encrypted.y;
  (this->hiddenValue).z = encrypted.z;
  (this->hiddenValue).w = encrypted.w;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    pQVar2 = ObscuredQuaternion_InternalDecrypt((Quaternion *)&encrypted,this,(MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    (this->fakeValue).x = pQVar2->x;
    (this->fakeValue).y = fVar3;
    (this->fakeValue).z = fVar4;
    (this->fakeValue).w = fVar5;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey =
         newKey;
    return;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  fStack_3 = pQVar1->x;
  fStack_4 = pQVar1->y;
  fStack_5 = pQVar1->z;
  fStack_6 = pQVar1->w;
  pSVar7 = (String *)func_?(&fStack_3,0,0,0);
  return pSVar7;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
         ObscuredQuaternion_ToString_1(ObscuredQuaternion *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,this,(MethodInfo *)0x0);
  fStack_3 = pQVar1->x;
  fStack_4 = pQVar1->y;
  fStack_5 = pQVar1->z;
  fStack_6 = pQVar1->w;
  pSVar7 = (String *)func_?(&fStack_3,format,0,0);
  return pSVar7;
}


/* ObscuredQuaternion() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey =
       iVar1;
  if (cRam_? == '\0') {
    ppQStack2 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  (pOVar7->initialFakeValue).x = (pQVar3->identityQuaternion).x;
  (pOVar7->initialFakeValue).y = fVar4;
  (pOVar7->initialFakeValue).z = fVar5;
  (pOVar7->initialFakeValue).w = fVar6;
  return;
}


/* ObscuredQuaternion(ObscuredQuaternion+RawEncryptedQuaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__ctor
               (ObscuredQuaternion *this,ObscuredQuaternion_RawEncryptedQuaternion value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey;
  (this->hiddenValue).x = value.x;
  (this->hiddenValue).y = value.y;
  (this->hiddenValue).z = value.z;
  (this->hiddenValue).w = value.w;
  pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  fVar2 = (pOVar1->initialFakeValue).x;
  fVar3 = (pOVar1->initialFakeValue).y;
  fVar4 = (pOVar1->initialFakeValue).z;
  fVar5 = (pOVar1->initialFakeValue).w;
  this->inited = 1;
  (this->fakeValue).x = fVar2;
  (this->fakeValue).y = fVar3;
  (this->fakeValue).z = fVar4;
  (this->fakeValue).w = fVar5;
  return;
}


/* ObscuredQuaternion(Single, Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__ctor_1
               (ObscuredQuaternion *this,float x,float y,float z,float w,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  this->currentCryptoKey = iVar1;
  pOVar2 = ObscuredQuaternion_Encrypt_2(&OStack_3,x,y,z,w,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar2->x;
  iVar4 = pOVar2->y;
  iVar5 = pOVar2->z;
  iVar6 = pOVar2->w;
  this->inited = 1;
  (this->hiddenValue).x = iVar1;
  (this->hiddenValue).y = iVar4;
  (this->hiddenValue).z = iVar5;
  (this->hiddenValue).w = iVar6;
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
          (ObscuredQuaternion *__return_storage_ptr__,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  (__return_storage_ptr__->hiddenValue).x = 0;
  (__return_storage_ptr__->hiddenValue).y = 0;
  (__return_storage_ptr__->hiddenValue).z = 0;
  (__return_storage_ptr__->hiddenValue).w = 0;
  (__return_storage_ptr__->fakeValue).x = 0.0;
  (__return_storage_ptr__->fakeValue).y = 0.0;
  (__return_storage_ptr__->fakeValue).z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).w = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pOVar1 = ObscuredQuaternion_Encrypt
                     ((ObscuredQuaternion_RawEncryptedQuaternion *)&stack0xffffffec,value,
                      (MethodInfo *)0x0);
  ObscuredQuaternion__ctor(__return_storage_ptr__,*pOVar1,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (__return_storage_ptr__->fakeValue).x = value.x;
    (__return_storage_ptr__->fakeValue).y = value.y;
    (__return_storage_ptr__->fakeValue).z = value.z;
    (__return_storage_ptr__->fakeValue).w = value.w;
  }
  return __return_storage_ptr__;
}


/* Quaternion op_Implicit(ObscuredQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_op_Implicit_1
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pQVar1 = ObscuredQuaternion_InternalDecrypt(&QStack_2,&value,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

