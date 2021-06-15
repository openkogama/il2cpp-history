
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_ApplyNewCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = *piVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  if (iVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
               cryptoKey) {
    piVar3 = (int32_t *)func_?(&OStack_4,piVar1,0);
    OStack_4.x = *piVar3;
    OStack_4.y = piVar3[1];
    OStack_4.z = piVar3[2];
    OStack_4.w = piVar3[3];
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0))
    {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    value.y = (float)OStack_4.y;
    value.x = (float)OStack_4.x;
    value.z = (float)OStack_4.z;
    value.w = (float)OStack_4.w;
    pOVar5 = ObscuredQuaternion_Encrypt_1
                       (&OStack_4,value,
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->
                        static_fields->cryptoKey,(MethodInfo *)0x0);
    iVar6 = pOVar5->y;
    fVar7 = (float)pOVar5->z;
    fVar8 = (float)pOVar5->w;
    (this->hiddenValue).z = pOVar5->x;
    (this->hiddenValue).w = iVar6;
    (this->fakeValue).x = fVar7;
    (this->fakeValue).y = fVar8;
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
              cryptoKey;
  }
  return;
}


/* Boolean CompareQuaternionsWithTolerance(Quaternion, Quaternion) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_CompareQuaternionsWithTolerance
               (ObscuredQuaternion *this,Quaternion q1,Quaternion q2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    fVar2 = (pOVar1->fields).quaternionEpsilon;
    uVar3 = (uint)_UNK_?;
    uVar4 = (uint)((ulonglong)_UNK_? >> 0x20);
    if ((((float)(double)CONCAT44((uint)((ulonglong)(double)(q1.x - q2.x) >> 0x20) & uVar4,
                                  SUB84((double)(q1.x - q2.x),0) & uVar3) < fVar2) &&
        ((float)(double)CONCAT44((uint)((ulonglong)(double)(q1.y - q2.y) >> 0x20) & uVar4,
                                 SUB84((double)(q1.y - q2.y),0) & uVar3) < fVar2)) &&
       ((float)(double)CONCAT44((uint)((ulonglong)(double)(q1.z - q2.z) >> 0x20) & uVar4,
                                SUB84((double)(q1.z - q2.z),0) & uVar3) < fVar2)) {
      return (float)(double)CONCAT44((uint)((ulonglong)(double)(q1.w - q2.w) >> 0x20) & uVar4,
                                     SUB84((double)(q1.w - q2.w),0) & uVar3) < fVar2;
    }
    return 0;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Quaternion Decrypt(ObscuredQuaternion+RawEncryptedQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_Decrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion_RawEncryptedQuaternion value,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0))
    {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  value_00.y = value.y;
  value_00.x = value.x;
  value_00.z = value.z;
  value_00.w = value.w;
  pOVar1 = ObscuredQuaternion_Encrypt_1
                     ((ObscuredQuaternion_RawEncryptedQuaternion *)&value,value_00,0,
                      (MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0))
    {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  pfVar1 = (float *)func_?(auStack_2,&(this->hiddenValue).y,0);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  __return_storage_ptr__->x = *pfVar1;
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
  func_?(&(this->hiddenValue).y,0);
  iVar1 = (this->hiddenValue).w;
  fVar2 = (this->fakeValue).x;
  fVar3 = (this->fakeValue).y;
  __return_storage_ptr__->x = (this->hiddenValue).z;
  __return_storage_ptr__->y = iVar1;
  __return_storage_ptr__->z = (int32_t)fVar2;
  __return_storage_ptr__->w = (int32_t)fVar3;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
        ObscuredQuaternion_GetHashCode(ObscuredQuaternion *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&(this->hiddenValue).y,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  iVar7 = func_?(&uStack_1,0);
  return iVar7;
}


/* Quaternion InternalDecrypt() */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_InternalDecrypt
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion *this,MethodInfo *method)

{
  pfVar1 = (float *)func_?(auStack_2,&(this->hiddenValue).y,method);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  __return_storage_ptr__->x = *pfVar1;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_RandomizeCryptoKey(ObscuredQuaternion *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar2 = (undefined4 *)func_?(&OStack_3,piVar1,0);
  OStack_3.x = *puVar2;
  OStack_3.y = puVar2[1];
  OStack_3.z = puVar2[2];
  OStack_3.w = puVar2[3];
  do {
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *piVar1 = iVar4;
  } while (iVar4 == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    OStack_3.x = (int32_t)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion;
    func_?();
  }
  value.y = (float)OStack_3.y;
  value.x = (float)OStack_3.x;
  value.z = (float)OStack_3.z;
  value.w = (float)OStack_3.w;
  pOVar5 = ObscuredQuaternion_Encrypt_1(&OStack_3,value,iVar4,(MethodInfo *)0x0);
  iVar4 = pOVar5->y;
  fVar6 = (float)pOVar5->z;
  fVar7 = (float)pOVar5->w;
  (this->hiddenValue).z = pOVar5->x;
  (this->hiddenValue).w = iVar4;
  (this->fakeValue).x = fVar6;
  (this->fakeValue).y = fVar7;
  return;
}


/* Void SetEncrypted(ObscuredQuaternion+RawEncryptedQuaternion) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetEncrypted
               (ObscuredQuaternion *this,ObscuredQuaternion_RawEncryptedQuaternion encrypted,
               MethodInfo *method)

{
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  (this->hiddenValue).z = encrypted.x;
  (this->hiddenValue).w = encrypted.y;
  (this->fakeValue).x = (float)encrypted.z;
  (this->fakeValue).y = (float)encrypted.w;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pfVar2 = (float *)func_?(&encrypted,&(this->hiddenValue).y,0);
    fVar3 = pfVar2[1];
    fVar4 = pfVar2[2];
    fVar5 = pfVar2[3];
    (this->fakeValue).z = *pfVar2;
    (this->fakeValue).w = fVar3;
    *(float *)&this->inited = fVar4;
    this[1].currentCryptoKey = (int32_t)fVar5;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
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
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&(this->hiddenValue).y,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,0);
  return pSVar7;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
         ObscuredQuaternion_ToString_1(ObscuredQuaternion *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&(this->hiddenValue).y,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,format,0);
  return pSVar7;
}


/* ObscuredQuaternion() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__cctor(MethodInfo *method)

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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->cryptoKey =
       iVar1;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&puStack_3,(MethodInfo *)0x0);
  fVar4 = pQVar2->y;
  fVar5 = pQVar2->z;
  fVar6 = pQVar2->w;
  pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields;
  (pOVar7->initialFakeValue).x = pQVar2->x;
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
  func_?(&(this->hiddenValue).y,value.x,value.y,value.z,value.w,method);
  return;
}


/* ObscuredQuaternion(Single, Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
     ObscuredQuaternion__ctor_1
               (ObscuredQuaternion *this,float x,float y,float z,float w,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->static_fields->
          cryptoKey;
  (this->hiddenValue).y = iVar1;
  pOVar2 = ObscuredQuaternion_Encrypt_2(&OStack_3,x,y,z,w,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar2->y;
  fVar4 = (float)pOVar2->z;
  fVar5 = (float)pOVar2->w;
  (this->hiddenValue).z = pOVar2->x;
  (this->hiddenValue).w = iVar1;
  (this->fakeValue).x = fVar4;
  (this->fakeValue).y = fVar5;
  (this->fakeValue).z = x;
  (this->fakeValue).w = y;
  *(float *)&this->inited = z;
  this[1].currentCryptoKey = (int32_t)w;
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  return;
}


/* ObscuredQuaternion op_Implicit(Quaternion) */

ObscuredQuaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_op_Implicit
          (ObscuredQuaternion *__return_storage_ptr__,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppppuStack_3c = (undefined4 ****)0x0;
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_3 = 0;
  iStack_4 = 0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  uStack_8 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredQuaternion);
  }
  pOVar9 = ObscuredQuaternion_Encrypt(&OStack_10,value,(MethodInfo *)0x0);
  iStack_1 = pOVar9->x;
  iStack_2 = pOVar9->y;
  iStack_3 = pOVar9->z;
  iStack_4 = pOVar9->w;
  fStack_5 = 0.0;
  ppppuStack_3c = &ppppuStack_3c;
  func_?();
  bVar11 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar11 != 0) {
    fStack_5 = value.x;
    fStack_6 = value.y;
    fStack_7 = value.z;
    uStack_8 = CONCAT44(uStack_8._4_4_,value.w);
  }
  __return_storage_ptr__->currentCryptoKey = (int32_t)ppppuStack_3c;
  (__return_storage_ptr__->hiddenValue).x = iStack_1;
  (__return_storage_ptr__->hiddenValue).y = iStack_2;
  (__return_storage_ptr__->hiddenValue).z = iStack_3;
  (__return_storage_ptr__->hiddenValue).w = iStack_4;
  (__return_storage_ptr__->fakeValue).x = fStack_5;
  (__return_storage_ptr__->fakeValue).y = fStack_6;
  (__return_storage_ptr__->fakeValue).z = fStack_7;
  *(undefined8 *)&(__return_storage_ptr__->fakeValue).w = uStack_8;
  return __return_storage_ptr__;
}


/* Quaternion op_Implicit(ObscuredQuaternion) */

Quaternion *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredQuaternion::
ObscuredQuaternion_op_Implicit_1
          (Quaternion *__return_storage_ptr__,ObscuredQuaternion value,MethodInfo *method)

{
  pfVar1 = (float *)func_?(auStack_2,&value,0);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  __return_storage_ptr__->x = *pfVar1;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

