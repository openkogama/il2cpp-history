
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_ApplyNewCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = *piVar1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  if (iVar2 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->
               cryptoKey) {
    puVar3 = (undefined8 *)func_?(&OStack_4,piVar1,0);
    uStack_5 = *puVar3;
    fVar6 = *(float *)(puVar3 + 1);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    value.z = fVar6;
    value.x = (float)(undefined4)uStack_5;
    value.y = (float)uStack_5._4_4_;
    pOVar7 = ObscuredVector3_Encrypt_1
                       (&OStack_4,value,
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->
                        static_fields->cryptoKey,(MethodInfo *)0x0);
    fVar6 = (float)pOVar7->z;
    *(undefined8 *)&(this->hiddenValue).z = *(undefined8 *)pOVar7;
    (this->fakeValue).y = fVar6;
    *piVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->
              cryptoKey;
  }
  return;
}


/* Boolean CompareVectorsWithTolerance(Vector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_CompareVectorsWithTolerance
               (ObscuredVector3 *this,Vector3 vector1,Vector3 vector2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    fVar2 = (pOVar1->fields).vector3Epsilon;
    uVar3 = (uint)_UNK_?;
    uVar4 = (uint)((ulonglong)_UNK_? >> 0x20);
    if (((float)(double)CONCAT44((uint)((ulonglong)(double)(vector1.x - vector2.x) >> 0x20) & uVar4,
                                 SUB84((double)(vector1.x - vector2.x),0) & uVar3) < fVar2) &&
       ((float)(double)CONCAT44((uint)((ulonglong)(double)(vector1.y - vector2.y) >> 0x20) & uVar4,
                                SUB84((double)(vector1.y - vector2.y),0) & uVar3) < fVar2)) {
      return (float)(double)CONCAT44((uint)((ulonglong)(double)(vector1.z - vector2.z) >> 0x20) &
                                     uVar4,SUB84((double)(vector1.z - vector2.z),0) & uVar3) < fVar2
      ;
    }
    return 0;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Vector3 Decrypt(ObscuredVector3+RawEncryptedVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_Decrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3_RawEncryptedVector3 value,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  __return_storage_ptr__->x = (float)(value.x ^ key);
  __return_storage_ptr__->y = (float)(value.y ^ key);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  uStack_1 = 0;
  uStack_2 = 0;
  puVar3 = (undefined8 *)func_?(auStack_4,&(this->hiddenValue).y,0);
  uStack_1 = *puVar3;
  uStack_2 = *(undefined4 *)(puVar3 + 1);
  bVar5 = func_?(&uStack_1,other,0);
  return bVar5;
}


/* Vector3 GetDecrypted() */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_GetDecrypted
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&(this->hiddenValue).y,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
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
  func_?(&(this->hiddenValue).y,0);
  uVar1 = *(undefined8 *)&(this->hiddenValue).z;
  fVar2 = (this->fakeValue).y;
  __return_storage_ptr__->x = (int)uVar1;
  __return_storage_ptr__->y = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->z = (int32_t)fVar2;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_GetHashCode(ObscuredVector3 *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  puVar3 = (undefined8 *)func_?(auStack_4,&(this->hiddenValue).y,0);
  uStack_1 = *puVar3;
  uStack_2 = *(undefined4 *)(puVar3 + 1);
  iVar5 = func_?(&uStack_1,0);
  return iVar5;
}


/* Vector3 InternalDecrypt() */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_InternalDecrypt
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&(this->hiddenValue).y,method);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Single InternalDecryptField(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_InternalDecryptField
                (ObscuredVector3 *this,int32_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
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

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
        ObscuredVector3_InternalEncryptField
                  (ObscuredVector3 *this,float encrypted,MethodInfo *method)

{
  iVar1 = func_?(&(this->hiddenValue).y,encrypted,method);
  return iVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_RandomizeCryptoKey(ObscuredVector3 *this,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar2 = (undefined8 *)func_?(&OStack_3,piVar1,0);
  uStack_4 = *puVar2;
  fVar5 = *(float *)(puVar2 + 1);
  do {
    key = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *piVar1 = key;
  } while (key == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  value.z = fVar5;
  value.x = (float)(undefined4)uStack_4;
  value.y = (float)uStack_4._4_4_;
  pOVar6 = ObscuredVector3_Encrypt_1(&OStack_3,value,key,(MethodInfo *)0x0);
  fVar5 = (float)pOVar6->z;
  *(undefined8 *)&(this->hiddenValue).z = *(undefined8 *)pOVar6;
  (this->fakeValue).y = fVar5;
  return;
}


/* Void SetEncrypted(ObscuredVector3+RawEncryptedVector3) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetEncrypted
               (ObscuredVector3 *this,ObscuredVector3_RawEncryptedVector3 encrypted,
               MethodInfo *method)

{
  *(undefined8 *)&(this->hiddenValue).z = encrypted._0_8_;
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  (this->fakeValue).y = (float)encrypted.z;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    puVar2 = (undefined8 *)func_?(&encrypted,&(this->hiddenValue).y,0);
    iVar3 = *(int32_t *)(puVar2 + 1);
    *(undefined8 *)&(this->fakeValue).z = *puVar2;
    this[1].currentCryptoKey = iVar3;
  }
  return;
}


/* Void SetNewCryptoKey(Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_SetNewCryptoKey(int32_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
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
  uStack_1 = 0;
  uStack_2 = 0;
  puVar3 = (undefined8 *)func_?(auStack_4,&(this->hiddenValue).y,0);
  uStack_1 = *puVar3;
  uStack_2 = *(undefined4 *)(puVar3 + 1);
  pSVar5 = (String *)func_?(&uStack_1,0);
  return pSVar5;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
         ObscuredVector3_ToString_1(ObscuredVector3 *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  puVar3 = (undefined8 *)func_?(auStack_4,&(this->hiddenValue).y,0);
  uStack_1 = *puVar3;
  uStack_2 = *(undefined4 *)(puVar3 + 1);
  pSVar5 = (String *)func_?(&uStack_1,format,0);
  return pSVar5;
}


/* ObscuredVector3() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__cctor(MethodInfo *method)

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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey = iVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&puStack_3,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
  (pOVar6->initialFakeValue).x = pVVar2->x;
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
  func_?(&(this->hiddenValue).y,encrypted._0_8_,encrypted.z,method);
  return;
}


/* ObscuredVector3(Single, Single, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3__ctor_1(ObscuredVector3 *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields->cryptoKey;
  (this->hiddenValue).y = key;
  pOVar1 = ObscuredVector3_Encrypt_2(&OStack_2,x,y,z,key,(MethodInfo *)0x0);
  fVar3 = (float)pOVar1->z;
  *(undefined8 *)&(this->hiddenValue).z = *(undefined8 *)pOVar1;
  (this->fakeValue).y = fVar3;
  (this->fakeValue).z = x;
  *(float *)&this->inited = y;
  this[1].currentCryptoKey = (int32_t)z;
  *(undefined1 *)&this[1].hiddenValue.x = 1;
  return;
}


/* Single get_Item(Int32) */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_Item(ObscuredVector3 *this,int32_t index,MethodInfo *method)

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
  if (index == 2) {
    fVar2 = (float10)func_?(piVar1,0);
    return (float)fVar2;
  }
  this_00 = (StackOverflowException *)func_?(TypeInfo__System__IndexOutOfRangeException);
  mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
            (this_00,StringLiteral_Invalid_ObscuredVector3_index_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Single get_x() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_x(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&(this->hiddenValue).y,(this->hiddenValue).z,0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pfVar3 = &(this->fakeValue).z;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar5._0_4_ = (pOVar4->initialFakeValue).x;
    uVar5._4_4_ = (pOVar4->initialFakeValue).y;
    cVar6 = func_?(pfVar3,uVar5,(pOVar4->initialFakeValue).z,0);
    if (cVar6 == '\0') {
      dVar7 = (double)((float)fVar1 - *pfVar3);
      fVar8 = (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_?,
                                      SUB84(dVar7,0) & _UNK_?);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar9 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar9 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?(0);
        pcVar10 = (code *)swi(3);
        fVar1 = (float10)(*pcVar10)();
        return (float)fVar1;
      }
      pfVar3 = &(pOVar9->fields).vector3Epsilon;
      if (*pfVar3 <= fVar8 && fVar8 != *pfVar3) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar9 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar9 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar9->klass->vtable).OnCheatingDetected.method)
                  (pOVar9,(pOVar9->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return (float)fVar1;
}


/* Single get_y() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_y(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&(this->hiddenValue).y,(this->fakeValue).x,0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4._0_4_ = (pOVar3->initialFakeValue).x;
    uVar4._4_4_ = (pOVar3->initialFakeValue).y;
    cVar5 = func_?(&(this->fakeValue).z,uVar4,(pOVar3->initialFakeValue).z,0);
    if (cVar5 == '\0') {
      dVar6 = (double)((float)fVar1 - *(float *)&this->inited);
      fVar7 = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_?,
                                      SUB84(dVar6,0) & _UNK_?);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar8 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?(0);
        pcVar9 = (code *)swi(3);
        fVar1 = (float10)(*pcVar9)();
        return (float)fVar1;
      }
      pfVar10 = &(pOVar8->fields).vector3Epsilon;
      if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar8 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar8->klass->vtable).OnCheatingDetected.method)
                  (pOVar8,(pOVar8->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return (float)fVar1;
}


/* Single get_z() */

float Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
      ObscuredVector3_get_z(ObscuredVector3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&(this->hiddenValue).y,(this->fakeValue).y,0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
    }
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields;
    uVar4._0_4_ = (pOVar3->initialFakeValue).x;
    uVar4._4_4_ = (pOVar3->initialFakeValue).y;
    cVar5 = func_?(&(this->fakeValue).z,uVar4,(pOVar3->initialFakeValue).z,0);
    if (cVar5 == '\0') {
      dVar6 = (double)((float)fVar1 - (float)this[1].currentCryptoKey);
      fVar7 = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_?,
                                      SUB84(dVar6,0) & _UNK_?);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar8 == (ObscuredCheatingDetector *)0x0) {
code_?:
        func_?(0);
        pcVar9 = (code *)swi(3);
        fVar1 = (float10)(*pcVar9)();
        return (float)fVar1;
      }
      pfVar10 = &(pOVar8->fields).vector3Epsilon;
      if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pOVar8 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar8 == (ObscuredCheatingDetector *)0x0) goto code_?;
        (*(code *)(pOVar8->klass->vtable).OnCheatingDetected.method)
                  (pOVar8,(pOVar8->klass->vtable).StartDetectionAutomatically.methodPtr);
      }
    }
  }
  return (float)fVar1;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,ObscuredVector3 b,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(&VStack_5,&b,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  b_00.z = fVar7;
  b_00.x = (float)(undefined4)uStack_6;
  b_00.y = (float)uStack_6._4_4_;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&VStack_5,a_00,b_00,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar8->x;
  uStack_3._4_4_ = pVVar8->y;
  fVar4 = pVVar8->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar9 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&puStack_10,value,(MethodInfo *)0x0);
  iVar11 = (pOVar9->hiddenValue).x;
  iVar12 = (pOVar9->hiddenValue).y;
  iVar13 = (pOVar9->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar9->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar11;
  (__return_storage_ptr__->hiddenValue).y = iVar12;
  (__return_storage_ptr__->hiddenValue).z = iVar13;
  fVar4 = (pOVar9->fakeValue).y;
  fVar7 = (pOVar9->fakeValue).z;
  bVar14 = pOVar9->inited;
  uVar15 = *(undefined3 *)&pOVar9->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar9->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar7;
  __return_storage_ptr__->inited = bVar14;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar15;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 a,ObscuredVector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&b,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar5.z = fVar4;
  VVar5.x = (float)(undefined4)uStack_3;
  VVar5.y = (float)uStack_3._4_4_;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      (&VStack_2,a,VVar5,(MethodInfo *)0x0);
  VVar5 = *pVVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,VVar5,(MethodInfo *)0x0)
  ;
  iVar8 = (pOVar7->hiddenValue).x;
  iVar9 = (pOVar7->hiddenValue).y;
  iVar10 = (pOVar7->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar7->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar4 = (pOVar7->fakeValue).y;
  fVar11 = (pOVar7->fakeValue).z;
  bVar12 = pOVar7->inited;
  uVar13 = *(undefined3 *)&pOVar7->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar7->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar11;
  __return_storage_ptr__->inited = bVar12;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Addition(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Addition_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,Vector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar5.z = fVar4;
  VVar5.x = (float)(undefined4)uStack_3;
  VVar5.y = (float)uStack_3._4_4_;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      (&VStack_2,VVar5,b,(MethodInfo *)0x0);
  VVar5 = *pVVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,VVar5,(MethodInfo *)0x0)
  ;
  iVar8 = (pOVar7->hiddenValue).x;
  iVar9 = (pOVar7->hiddenValue).y;
  iVar10 = (pOVar7->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar7->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar4 = (pOVar7->fakeValue).y;
  fVar11 = (pOVar7->fakeValue).z;
  bVar12 = pOVar7->inited;
  uVar13 = *(undefined3 *)&pOVar7->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar7->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar11;
  __return_storage_ptr__->inited = bVar12;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Division(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Division
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     (&VStack_2,a_00,d,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar5->x;
  uStack_3._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0)
  ;
  iVar7 = (pOVar6->hiddenValue).x;
  iVar8 = (pOVar6->hiddenValue).y;
  iVar9 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar7;
  (__return_storage_ptr__->hiddenValue).y = iVar8;
  (__return_storage_ptr__->hiddenValue).z = iVar9;
  fVar4 = (pOVar6->fakeValue).y;
  fVar10 = (pOVar6->fakeValue).z;
  bVar11 = pOVar6->inited;
  uVar12 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&lhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(auStack_5,&rhs,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs_00.z = fVar4;
  lhs_00.x = (float)(undefined4)uStack_3;
  lhs_00.y = (float)uStack_3._4_4_;
  rhs_00.z = fVar7;
  rhs_00.x = (float)(undefined4)uStack_6;
  rhs_00.y = (float)uStack_6._4_4_;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                    (lhs_00,rhs_00,(MethodInfo *)0x0);
  return bVar8;
}


/* Boolean op_Equality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_1(Vector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&rhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  rhs_00.z = fVar4;
  rhs_00.x = (float)(undefined4)uStack_3;
  rhs_00.y = (float)uStack_3._4_4_;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                    (lhs,rhs_00,(MethodInfo *)0x0);
  return bVar5;
}


/* Boolean op_Equality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Equality_2(ObscuredVector3 lhs,Vector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&lhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs_00.z = fVar4;
  lhs_00.x = (float)(undefined4)uStack_3;
  lhs_00.y = (float)uStack_3._4_4_;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                    (lhs_00,rhs,(MethodInfo *)0x0);
  return bVar5;
}


/* ObscuredVector3 op_Implicit(Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Implicit
          (ObscuredVector3 *__return_storage_ptr__,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppppuStack_30 = (undefined4 ****)0x0;
  uStack_1 = 0;
  iStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3);
  }
  pOVar6 = ObscuredVector3_Encrypt_1
                     (&OStack_7,value,
                      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->static_fields
                      ->cryptoKey,(MethodInfo *)0x0);
  uStack_1._0_4_ = pOVar6->x;
  uStack_1._4_4_ = pOVar6->y;
  iStack_2 = pOVar6->z;
  uStack_3 = uStack_3 & 0xffffffff00000000;
  ppppuStack_30 = &ppppuStack_30;
  func_?();
  bVar8 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar8 != 0) {
    uStack_3._0_4_ = value.x;
    uStack_3._4_4_ = value.y;
    fStack_4 = value.z;
  }
  __return_storage_ptr__->currentCryptoKey = (int32_t)ppppuStack_30;
  (__return_storage_ptr__->hiddenValue).x = (int32_t)uStack_1;
  (__return_storage_ptr__->hiddenValue).y = uStack_1._4_4_;
  (__return_storage_ptr__->hiddenValue).z = iStack_2;
  (__return_storage_ptr__->fakeValue).x = (float)uStack_3;
  (__return_storage_ptr__->fakeValue).y = uStack_3._4_4_;
  (__return_storage_ptr__->fakeValue).z = fStack_4;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_5;
  return __return_storage_ptr__;
}


/* Vector3 op_Implicit(ObscuredVector3) */

Vector3 * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
          ObscuredVector3_op_Implicit_1
                    (Vector3 *__return_storage_ptr__,ObscuredVector3 value,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&value,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean op_Inequality(ObscuredVector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality(ObscuredVector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&lhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(auStack_5,&rhs,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs_00.z = fVar4;
  lhs_00.x = (float)(undefined4)uStack_3;
  lhs_00.y = (float)uStack_3._4_4_;
  rhs_00.z = fVar7;
  rhs_00.x = (float)(undefined4)uStack_6;
  rhs_00.y = (float)uStack_6._4_4_;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (lhs_00,rhs_00,(MethodInfo *)0x0);
  return bVar8;
}


/* Boolean op_Inequality(Vector3, ObscuredVector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_1(Vector3 lhs,ObscuredVector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&rhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  rhs_00.z = fVar4;
  rhs_00.x = (float)(undefined4)uStack_3;
  rhs_00.y = (float)uStack_3._4_4_;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (lhs,rhs_00,(MethodInfo *)0x0);
  return bVar5;
}


/* Boolean op_Inequality(ObscuredVector3, Vector3) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_op_Inequality_2(ObscuredVector3 lhs,Vector3 rhs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&lhs,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs_00.z = fVar4;
  lhs_00.x = (float)(undefined4)uStack_3;
  lhs_00.y = (float)uStack_3._4_4_;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (lhs_00,rhs,(MethodInfo *)0x0);
  return bVar5;
}


/* ObscuredVector3 op_Multiply(ObscuredVector3, Single) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Multiply
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,float d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_2,a_00,d,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar5->x;
  uStack_3._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0)
  ;
  iVar7 = (pOVar6->hiddenValue).x;
  iVar8 = (pOVar6->hiddenValue).y;
  iVar9 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar7;
  (__return_storage_ptr__->hiddenValue).y = iVar8;
  (__return_storage_ptr__->hiddenValue).z = iVar9;
  fVar4 = (pOVar6->fakeValue).y;
  fVar10 = (pOVar6->fakeValue).z;
  bVar11 = pOVar6->inited;
  uVar12 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     (&VStack_2,d,a_00,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar5->x;
  uStack_3._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0)
  ;
  iVar7 = (pOVar6->hiddenValue).x;
  iVar8 = (pOVar6->hiddenValue).y;
  iVar9 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar7;
  (__return_storage_ptr__->hiddenValue).y = iVar8;
  (__return_storage_ptr__->hiddenValue).z = iVar9;
  fVar4 = (pOVar6->fakeValue).y;
  fVar10 = (pOVar6->fakeValue).z;
  bVar11 = pOVar6->inited;
  uVar12 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(&VStack_5,&b,0);
  uStack_6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  b_00.z = fVar7;
  b_00.x = (float)(undefined4)uStack_6;
  b_00.y = (float)uStack_6._4_4_;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&VStack_5,a_00,b_00,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar8->x;
  uStack_3._4_4_ = pVVar8->y;
  fVar4 = pVVar8->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar9 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&puStack_10,value,(MethodInfo *)0x0);
  iVar11 = (pOVar9->hiddenValue).x;
  iVar12 = (pOVar9->hiddenValue).y;
  iVar13 = (pOVar9->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar9->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar11;
  (__return_storage_ptr__->hiddenValue).y = iVar12;
  (__return_storage_ptr__->hiddenValue).z = iVar13;
  fVar4 = (pOVar9->fakeValue).y;
  fVar7 = (pOVar9->fakeValue).z;
  bVar14 = pOVar9->inited;
  uVar15 = *(undefined3 *)&pOVar9->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar9->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar7;
  __return_storage_ptr__->inited = bVar14;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar15;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(Vector3, ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_1
          (ObscuredVector3 *__return_storage_ptr__,Vector3 a,ObscuredVector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&b,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar5.z = fVar4;
  VVar5.x = (float)(undefined4)uStack_3;
  VVar5.y = (float)uStack_3._4_4_;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&VStack_2,a,VVar5,(MethodInfo *)0x0);
  VVar5 = *pVVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,VVar5,(MethodInfo *)0x0)
  ;
  iVar8 = (pOVar7->hiddenValue).x;
  iVar9 = (pOVar7->hiddenValue).y;
  iVar10 = (pOVar7->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar7->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar4 = (pOVar7->fakeValue).y;
  fVar11 = (pOVar7->fakeValue).z;
  bVar12 = pOVar7->inited;
  uVar13 = *(undefined3 *)&pOVar7->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar7->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar11;
  __return_storage_ptr__->inited = bVar12;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_Subtraction(ObscuredVector3, Vector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_Subtraction_2
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,Vector3 b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar5.z = fVar4;
  VVar5.x = (float)(undefined4)uStack_3;
  VVar5.y = (float)uStack_3._4_4_;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&VStack_2,VVar5,b,(MethodInfo *)0x0);
  VVar5 = *pVVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,VVar5,(MethodInfo *)0x0)
  ;
  iVar8 = (pOVar7->hiddenValue).x;
  iVar9 = (pOVar7->hiddenValue).y;
  iVar10 = (pOVar7->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar7->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar8;
  (__return_storage_ptr__->hiddenValue).y = iVar9;
  (__return_storage_ptr__->hiddenValue).z = iVar10;
  fVar4 = (pOVar7->fakeValue).y;
  fVar11 = (pOVar7->fakeValue).z;
  bVar12 = pOVar7->inited;
  uVar13 = *(undefined3 *)&pOVar7->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar7->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar11;
  __return_storage_ptr__->inited = bVar12;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar13;
  return __return_storage_ptr__;
}


/* ObscuredVector3 op_UnaryNegation(ObscuredVector3) */

ObscuredVector3 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
ObscuredVector3_op_UnaryNegation
          (ObscuredVector3 *__return_storage_ptr__,ObscuredVector3 a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&VStack_2,&a,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fVar4;
  a_00.x = (float)(undefined4)uStack_3;
  a_00.y = (float)uStack_3._4_4_;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     (&VStack_2,a_00,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar5->x;
  uStack_3._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredVector3->_1).cctor_started == 0)) {
    func_?();
  }
  value.z = fVar4;
  value.x = (float)(undefined4)uStack_3;
  value.y = (float)uStack_3._4_4_;
  pOVar6 = ObscuredVector3_op_Implicit((ObscuredVector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0)
  ;
  iVar7 = (pOVar6->hiddenValue).x;
  iVar8 = (pOVar6->hiddenValue).y;
  iVar9 = (pOVar6->hiddenValue).z;
  __return_storage_ptr__->currentCryptoKey = pOVar6->currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).x = iVar7;
  (__return_storage_ptr__->hiddenValue).y = iVar8;
  (__return_storage_ptr__->hiddenValue).z = iVar9;
  fVar4 = (pOVar6->fakeValue).y;
  fVar10 = (pOVar6->fakeValue).z;
  bVar11 = pOVar6->inited;
  uVar12 = *(undefined3 *)&pOVar6->field_0x1d;
  (__return_storage_ptr__->fakeValue).x = (pOVar6->fakeValue).x;
  (__return_storage_ptr__->fakeValue).y = fVar4;
  (__return_storage_ptr__->fakeValue).z = fVar10;
  __return_storage_ptr__->inited = bVar11;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar12;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_Item(ObscuredVector3 *this,int32_t index,float value,MethodInfo *method)

{
  piVar1 = &(this->hiddenValue).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index == 0) {
    iVar2 = func_?(piVar1,value,0);
    (this->hiddenValue).z = iVar2;
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      (this->fakeValue).z = value;
    }
  }
  else if (index == 1) {
    fVar4 = (float)func_?(piVar1,value,0);
    (this->fakeValue).x = fVar4;
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      *(float *)&this->inited = value;
      return;
    }
  }
  else {
    if (index != 2) {
      this_00 = (StackOverflowException *)
                func_?(TypeInfo__System__IndexOutOfRangeException);
      mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
                (this_00,StringLiteral_Invalid_ObscuredVector3_index_,(MethodInfo *)0x0);
      func_?(this_00,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar4 = (float)func_?(piVar1,value,0);
    (this->fakeValue).y = fVar4;
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_x(ObscuredVector3 *this,float value,MethodInfo *method)

{
  iVar1 = func_?(&(this->hiddenValue).y,value,0);
  (this->hiddenValue).z = iVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    (this->fakeValue).z = value;
  }
  return;
}


/* Void set_y(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_y(ObscuredVector3 *this,float value,MethodInfo *method)

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


/* Void set_z(Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector3::
     ObscuredVector3_set_z(ObscuredVector3 *this,float value,MethodInfo *method)

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

