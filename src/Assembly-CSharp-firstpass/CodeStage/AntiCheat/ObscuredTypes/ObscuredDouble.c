
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_ApplyNewCryptoKey(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  iVar2 = *(int *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  if (((int)iVar1 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey)
     || (iVar2 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                                 static_fields->cryptoKey + 4))) {
    value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    AVar3 = ObscuredDouble_InternalEncrypt_1
                      (value,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = AVar3;
    uVar4 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
              cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar4;
  }
  return;
}


/* Double Decrypt(Int64) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  return (double)CONCAT44(value._4_4_ ^
                          *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble
                                          ->static_fields->cryptoKey + 4),
                          (uint)value ^
                          (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                                static_fields->cryptoKey);
}


/* Double Decrypt(Int64, Int64) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_Decrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  return (double)(value ^ key);
}


/* Int64 Encrypt(Double) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_Encrypt(double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  value._0_4_ ^
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields
                        ->cryptoKey);
}


/* Int64 Encrypt(Double, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_Encrypt_1(double value,int64_t key,MethodInfo *method)

{
  return key ^ (ulonglong)value;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_Equals(ObscuredDouble *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDouble__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_0).element_class) {
        iVar2 = func_?(obj);
        method_00 = *(MethodInfo **)(iVar2 + 0x10);
        DStack_3.m_value =
             ObscuredDouble_InternalDecrypt((ObscuredDouble *)&stack0xffffffc4,(MethodInfo *)0x0);
        dStack_4 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
        bVar5 = mscorlib.dll::System::Double::Double_Equals_1
                          (&DStack_3,(double)((ulonglong)dStack_4 >> 0x20),method_00);
        return bVar5;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
      pcVar6 = (code *)swi(3);
      bVar5 = (*pcVar6)();
      return bVar5;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredDouble) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_Equals_1(ObscuredDouble *this,ObscuredDouble obj,MethodInfo *method)

{
  ObscuredDouble_InternalDecrypt((ObscuredDouble *)&stack0x00000008,(MethodInfo *)0x0);
  dVar1 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Double::Double_Equals_1
                    ((Double *)&stack0xffffffec,(double)((ulonglong)dVar1 >> 0x20),unaff_EBP);
  return bVar2;
}


/* Double GetDecrypted() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_GetDecrypted(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
              cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    AVar2 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar2;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  uVar3._0_1_ = (this->hiddenValue).b1;
  uVar3._1_1_ = (this->hiddenValue).b2;
  uVar3._2_1_ = (this->hiddenValue).b3;
  uVar3._3_1_ = (this->hiddenValue).b4;
  uVar4._0_1_ = (this->hiddenValue).b5;
  uVar4._1_1_ = (this->hiddenValue).b6;
  uVar4._2_1_ = (this->hiddenValue).b7;
  uVar4._3_1_ = (this->hiddenValue).b8;
  uVar3 = uVar3 ^ (uint)this->currentCryptoKey;
  uVar4 = uVar4 ^ *(uint *)((int)&this->currentCryptoKey + 4);
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar5 != 0) && (dVar6 = this->fakeValue, dVar6 != 0.0)) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar6 = (double)CONCAT44(uVar4,uVar3) - dVar6;
    if (_UNK_? <
        (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_?,
                         SUB84(dVar6,0) & _UNK_?)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
        func_?();
        pcVar8 = (code *)swi(3);
        fVar9 = (float10)(*pcVar8)();
        return (double)fVar9;
      }
      (*(pOVar7->klass->vtable).OnCheatingDetected.methodPtr)
                (pOVar7,(pOVar7->klass->vtable).OnCheatingDetected.method);
    }
  }
  return (double)CONCAT44(uVar4,uVar3);
}


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetEncrypted(ObscuredDouble *this,MethodInfo *method)

{
  ObscuredDouble_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1._0_1_ = (this->hiddenValue).b1;
  iVar1._1_1_ = (this->hiddenValue).b2;
  iVar1._2_1_ = (this->hiddenValue).b3;
  iVar1._3_1_ = (this->hiddenValue).b4;
  iVar1._4_1_ = (this->hiddenValue).b5;
  iVar1._5_1_ = (this->hiddenValue).b6;
  iVar1._6_1_ = (this->hiddenValue).b7;
  iVar1._7_1_ = (this->hiddenValue).b8;
  return iVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetHashCode(ObscuredDouble *this,MethodInfo *method)

{
  _puStack_c = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    _puStack_c = 4.1236718774401114e-227;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    _puStack_c = (double)CONCAT44(TypeInfo__System__BitConverter,&UNK_?);
    func_?();
  }
  uVar1 = (uint)((ulonglong)_puStack_c >> 0x20);
  if (0x7fefffff < ((uVar1 - 1) + (uint)(puStack_2 != (undefined *)0x0) & 0x7fffffff)) {
    puStack_2 = (undefined *)0x0;
    uVar1 = uVar1 & 0x7ff00000;
  }
  return uVar1 ^ (uint)puStack_2;
}


/* Double InternalDecrypt() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_InternalDecrypt(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
              cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    AVar2 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    this->hiddenValue = AVar2;
    this->fakeValue = 0.0;
    this->inited = 1;
  }
  uVar3._0_1_ = (this->hiddenValue).b1;
  uVar3._1_1_ = (this->hiddenValue).b2;
  uVar3._2_1_ = (this->hiddenValue).b3;
  uVar3._3_1_ = (this->hiddenValue).b4;
  uVar4._0_1_ = (this->hiddenValue).b5;
  uVar4._1_1_ = (this->hiddenValue).b6;
  uVar4._2_1_ = (this->hiddenValue).b7;
  uVar4._3_1_ = (this->hiddenValue).b8;
  uVar3 = uVar3 ^ (uint)this->currentCryptoKey;
  uVar4 = uVar4 ^ *(uint *)((int)&this->currentCryptoKey + 4);
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if ((bVar5 != 0) && (dVar6 = this->fakeValue, dVar6 != 0.0)) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar6 = (double)CONCAT44(uVar4,uVar3) - dVar6;
    if (_UNK_? <
        (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_?,
                         SUB84(dVar6,0) & _UNK_?)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        cRam_? = '\x01';
      }
      pOVar7 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar7 == (ObscuredCheatingDetector *)0x0) {
        func_?();
        pcVar8 = (code *)swi(3);
        fVar9 = (float10)(*pcVar8)();
        return (double)fVar9;
      }
      (*(pOVar7->klass->vtable).OnCheatingDetected.methodPtr)
                (pOVar7,(pOVar7->klass->vtable).OnCheatingDetected.method);
    }
  }
  return (double)CONCAT44(uVar4,uVar3);
}


/* ACTkByte8 InternalEncrypt(Double) */

ACTkByte8 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
          ObscuredDouble_InternalEncrypt(double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar1._0_4_ = value._0_4_ ^
                (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
                      cryptoKey;
  AVar1._4_4_ = value._4_4_ ^
                *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                                static_fields->cryptoKey + 4);
  return AVar1;
}


/* ACTkByte8 InternalEncrypt(Double, Int64) */

ACTkByte8 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
          ObscuredDouble_InternalEncrypt_1(double value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
  }
  return (ACTkByte8)(key ^ (ulonglong)value);
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_RandomizeCryptoKey(ObscuredDouble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  uStack_1 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  do {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *(int32_t *)&this->currentCryptoKey = iVar2;
    *(int32_t *)((int)&this->currentCryptoKey + 4) = iVar2 >> 0x1f;
  } while (iVar2 == 0);
  iVar3 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    uStack_1 = (double)CONCAT44(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble,
                                &UNK_?);
    func_?();
  }
  AVar4 = ObscuredDouble_InternalEncrypt_1
                    (uStack_1,CONCAT44(iVar2 >> 0x1f,(int)iVar3),(MethodInfo *)0x0);
  this->hiddenValue = AVar4;
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetEncrypted(ObscuredDouble *this,int64_t encrypted,MethodInfo *method)

{
  this->inited = 1;
  (this->hiddenValue).b1 = uStack1;
  (this->hiddenValue).b2 = uStack2;
  (this->hiddenValue).b3 = uStack3;
  (this->hiddenValue).b4 = uStack4;
  (this->hiddenValue).b5 = (undefined1)encrypted;
  (this->hiddenValue).b6 = encrypted._1_1_;
  (this->hiddenValue).b7 = encrypted._2_1_;
  (this->hiddenValue).b8 = encrypted._3_1_;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    dVar6 = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = dVar6;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString(ObscuredDouble *this,MethodInfo *method)

{
  DStack_1.m_value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Double::Double_ToString(&DStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_1(ObscuredDouble *this,String *format,MethodInfo *method)

{
  DStack_1.m_value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Double::Double_ToString_1(&DStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_2
                   (ObscuredDouble *this,IFormatProvider *provider,MethodInfo *method)

{
  DStack_1.m_value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Double::Double_ToString_2(&DStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_3
                   (ObscuredDouble *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  DStack_1.m_value = ObscuredDouble_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Double::Double_ToString_3
                     (&DStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredDouble() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredDouble(ACTkByte8) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__ctor(ObscuredDouble *this,ACTkByte8 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey;
  *(undefined4 *)((int)&this->currentCryptoKey + 4) =
       *(undefined4 *)
        ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
               cryptoKey + 4);
  (this->hiddenValue).b1 = value.b1;
  (this->hiddenValue).b2 = value.b2;
  (this->hiddenValue).b3 = value.b3;
  (this->hiddenValue).b4 = value.b4;
  *(int *)&this->currentCryptoKey = (int)iVar1;
  (this->hiddenValue).b5 = value.b5;
  (this->hiddenValue).b6 = value.b6;
  (this->hiddenValue).b7 = value.b7;
  (this->hiddenValue).b8 = value.b8;
  this->hiddenValueOld = (Byte__Array *)0x0;
  func_?(&this->hiddenValueOld,0);
  this->inited = 1;
  this->fakeValue = 0.0;
  return;
}


/* ObscuredDouble op_Decrement(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Decrement
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  dVar1 = ObscuredDouble_InternalDecrypt((ObscuredDouble *)&stack0x00000008,(MethodInfo *)0x0);
  dVar1 = dVar1 - _UNK_?;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    puVar2 = &UNK_?;
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble;
    func_?();
    dVar1 = (double)CONCAT44(pOVar3,puVar2);
  }
  AVar4 = ObscuredDouble_InternalEncrypt_1
                    (dVar1,CONCAT44((undefined4)input.currentCryptoKey,in_stack_5),
                     (MethodInfo *)0x0);
  uVar6 = 0;
  input.currentCryptoKey._4_4_ = AVar4._0_4_;
  input.hiddenValue._0_4_ = AVar4._4_4_;
  puVar2 = &UNK_?;
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    input._20_4_ = puVar2;
    input.fakeValue._0_4_ = uVar6;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_5;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).b1 = input.currentCryptoKey._4_1_;
  (__return_storage_ptr__->hiddenValue).b2 = input.currentCryptoKey._5_1_;
  (__return_storage_ptr__->hiddenValue).b3 = input.currentCryptoKey._6_1_;
  (__return_storage_ptr__->hiddenValue).b4 = input.currentCryptoKey._7_1_;
  (__return_storage_ptr__->hiddenValue).b5 = input.hiddenValue.b1;
  (__return_storage_ptr__->hiddenValue).b6 = input.hiddenValue.b2;
  (__return_storage_ptr__->hiddenValue).b7 = input.hiddenValue.b3;
  (__return_storage_ptr__->hiddenValue).b8 = input.hiddenValue.b4;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)input.hiddenValue._4_4_;
  *(Byte__Array **)&__return_storage_ptr__->field_0x14 = input.hiddenValueOld;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = input._20_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = input.fakeValue._0_4_;
  *(undefined8 *)&__return_storage_ptr__->inited = input._28_8_;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(Double) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Implicit(ObscuredDouble *__return_storage_ptr__,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = 0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  (__return_storage_ptr__->hiddenValue).b5 = 0;
  (__return_storage_ptr__->hiddenValue).b6 = 0;
  (__return_storage_ptr__->hiddenValue).b7 = 0;
  (__return_storage_ptr__->hiddenValue).b8 = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = 0;
  *(undefined8 *)&__return_storage_ptr__->inited = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  value_00 = ObscuredDouble_InternalEncrypt
                       ((double)CONCAT44(value._0_4_,in_stack_1),(MethodInfo *)0x0);
  ObscuredDouble__ctor(__return_storage_ptr__,value_00,(MethodInfo *)0x0);
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    __return_storage_ptr__->fakeValue = (double)CONCAT44(value._0_4_,in_stack_1);
  }
  return __return_storage_ptr__;
}


/* Double op_Implicit(ObscuredDouble) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_op_Implicit_1(ObscuredDouble value,MethodInfo *method)

{
  dVar1 = ObscuredDouble_InternalDecrypt(&value,(MethodInfo *)0x0);
  return dVar1;
}


/* ObscuredDouble op_Increment(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Increment
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    cRam_? = '\x01';
  }
  dVar1 = ObscuredDouble_InternalDecrypt((ObscuredDouble *)&stack0x00000008,(MethodInfo *)0x0);
  dVar1 = dVar1 + _UNK_?;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_finished_or_no_cctor
      == 0) {
    puVar2 = &UNK_?;
    pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble;
    func_?();
    dVar1 = (double)CONCAT44(pOVar3,puVar2);
  }
  AVar4 = ObscuredDouble_InternalEncrypt_1
                    (dVar1,CONCAT44((undefined4)input.currentCryptoKey,in_stack_5),
                     (MethodInfo *)0x0);
  uVar6 = 0;
  input.currentCryptoKey._4_4_ = AVar4._0_4_;
  input.hiddenValue._0_4_ = AVar4._4_4_;
  puVar2 = &UNK_?;
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar7 != 0) {
    input._20_4_ = puVar2;
    input.fakeValue._0_4_ = uVar6;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_5;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  (__return_storage_ptr__->hiddenValue).b1 = input.currentCryptoKey._4_1_;
  (__return_storage_ptr__->hiddenValue).b2 = input.currentCryptoKey._5_1_;
  (__return_storage_ptr__->hiddenValue).b3 = input.currentCryptoKey._6_1_;
  (__return_storage_ptr__->hiddenValue).b4 = input.currentCryptoKey._7_1_;
  (__return_storage_ptr__->hiddenValue).b5 = input.hiddenValue.b1;
  (__return_storage_ptr__->hiddenValue).b6 = input.hiddenValue.b2;
  (__return_storage_ptr__->hiddenValue).b7 = input.hiddenValue.b3;
  (__return_storage_ptr__->hiddenValue).b8 = input.hiddenValue.b4;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)input.hiddenValue._4_4_;
  *(Byte__Array **)&__return_storage_ptr__->field_0x14 = input.hiddenValueOld;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = input._20_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = input.fakeValue._0_4_;
  *(undefined8 *)&__return_storage_ptr__->inited = input._28_8_;
  return __return_storage_ptr__;
}

