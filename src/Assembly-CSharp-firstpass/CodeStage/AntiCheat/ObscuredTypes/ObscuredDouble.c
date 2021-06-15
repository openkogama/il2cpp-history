
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_ApplyNewCryptoKey(ObscuredDouble *this,MethodInfo *method)

{
  pAVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2._0_1_ = pAVar1->b1;
  iVar2._1_1_ = pAVar1->b2;
  iVar2._2_1_ = pAVar1->b3;
  iVar2._3_1_ = pAVar1->b4;
  iVar3._0_1_ = (this->hiddenValue).b5;
  iVar3._1_1_ = (this->hiddenValue).b6;
  iVar3._2_1_ = (this->hiddenValue).b7;
  iVar3._3_1_ = (this->hiddenValue).b8;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  if ((iVar2 != (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->
                     cryptoKey) ||
     (iVar3 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                              static_fields->cryptoKey + 4))) {
    fVar4 = (float10)func_?(pAVar1,0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    AVar5 = ObscuredDouble_InternalEncrypt_1
                      ((double)fVar4,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields
                       ->cryptoKey,(MethodInfo *)0x0);
    *(ACTkByte8 *)&this->hiddenValueOld = AVar5;
    pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields;
    uVar7 = (undefined4)pOVar6->cryptoKey;
    pAVar1->b1 = (char)uVar7;
    pAVar1->b2 = (char)((uint)uVar7 >> 8);
    pAVar1->b3 = (char)((uint)uVar7 >> 0x10);
    pAVar1->b4 = (char)((uint)uVar7 >> 0x18);
    uVar7 = *(undefined4 *)((int)&pOVar6->cryptoKey + 4);
    (this->hiddenValue).b5 = (char)uVar7;
    (this->hiddenValue).b6 = (char)((uint)uVar7 >> 8);
    (this->hiddenValue).b7 = (char)((uint)uVar7 >> 0x10);
    (this->hiddenValue).b8 = (char)((uint)uVar7 >> 0x18);
  }
  return;
}


/* Double Decrypt(Int64) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields
                        ->cryptoKey ^ value._0_4_);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDouble__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredDouble__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        uStack_3 = *puVar2;
        uStack_4 = puVar2[1];
        uStack_5 = puVar2[2];
        uStack_6 = puVar2[3];
        uStack_7 = puVar2[4];
        uStack_8 = puVar2[5];
        uStack_9 = puVar2[6];
        uStack_10 = puVar2[7];
        uStack_11 = *(undefined8 *)(puVar2 + 8);
        dStack_12 = 0.0;
        fVar13 = (float10)func_?(&uStack_3,0);
        dStack_12 = (double)fVar13;
        fVar13 = (float10)func_?(&this->hiddenValue,0);
        dStack_14 = (double)fVar13;
        bVar15 = func_?(&dStack_12,dStack_14,0);
        return bVar15;
      }
      pOVar16 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble;
      func_?();
      pcVar17 = (code *)swi(3);
      bVar15 = (*pcVar17)(pOVar16);
      return bVar15;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredDouble) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_Equals_1(ObscuredDouble *this,ObscuredDouble obj,MethodInfo *method)

{
  puVar1 = auStack_2;
  uVar3 = 0;
  uStack_4 = (undefined4)obj.currentCryptoKey;
  uStack_5 = obj.currentCryptoKey._4_4_;
  AStack_6.b1 = obj.hiddenValue.b1;
  AStack_6.b2 = obj.hiddenValue.b2;
  AStack_6.b3 = obj.hiddenValue.b3;
  AStack_6.b4 = obj.hiddenValue.b4;
  AStack_6.b5 = obj.hiddenValue.b5;
  AStack_6.b6 = obj.hiddenValue.b6;
  AStack_6.b7 = obj.hiddenValue.b7;
  AStack_6.b8 = obj.hiddenValue.b8;
  pBStack_7 = obj.hiddenValueOld;
  uStack_8 = obj._20_4_;
  uStack_9 = obj.fakeValue._0_4_;
  uStack_10 = obj._28_8_;
  obj._28_8_ = 0;
  fVar11 = (float10)func_?();
  obj._28_8_ = (BADTYPE)fVar11;
  fVar11 = (float10)func_?(&this->hiddenValue,0,puVar1,uVar3);
  dStack_12 = (double)fVar11;
  bVar13 = func_?((undefined1 *)((int)&obj.fakeValue + 4),dStack_12,0);
  return bVar13;
}


/* Double GetDecrypted() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_GetDecrypted(ObscuredDouble *this,MethodInfo *method)

{
  pAVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields;
    uVar3 = (undefined4)pOVar2->cryptoKey;
    pAVar1->b1 = (char)uVar3;
    pAVar1->b2 = (char)((uint)uVar3 >> 8);
    pAVar1->b3 = (char)((uint)uVar3 >> 0x10);
    pAVar1->b4 = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)((int)&pOVar2->cryptoKey + 4);
    (this->hiddenValue).b5 = (char)uVar3;
    (this->hiddenValue).b6 = (char)((uint)uVar3 >> 8);
    (this->hiddenValue).b7 = (char)((uint)uVar3 >> 0x10);
    (this->hiddenValue).b8 = (char)((uint)uVar3 >> 0x18);
    AVar4 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    *(ACTkByte8 *)&this->hiddenValueOld = AVar4;
    *(undefined8 *)&this->inited = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  uVar5._0_1_ = pAVar1->b1;
  uVar5._1_1_ = pAVar1->b2;
  uVar5._2_1_ = pAVar1->b3;
  uVar5._3_1_ = pAVar1->b4;
  uVar6._0_1_ = (this->hiddenValue).b5;
  uVar6._1_1_ = (this->hiddenValue).b6;
  uVar6._2_1_ = (this->hiddenValue).b7;
  uVar6._3_1_ = (this->hiddenValue).b8;
  uVar5 = uVar5 ^ (uint)this->hiddenValueOld;
  uVar6 = uVar6 ^ *(uint *)&this->field_0x14;
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar7 != 0) && (*(double *)&this->inited != _UNK_?)) &&
     (dVar8 = (double)CONCAT44(uVar6,uVar5) - *(double *)&this->inited,
     _UNK_? <
     (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_?,
                      SUB84(dVar8,0) & _UNK_?))) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar9 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar9 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar10 = (code *)swi(3);
      fVar11 = (float10)(*pcVar10)();
      return (double)fVar11;
    }
    (*(code *)(pOVar9->klass->vtable).OnCheatingDetected.method)
              (pOVar9,(pOVar9->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return (double)CONCAT44(uVar6,uVar5);
}


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetEncrypted(ObscuredDouble *this,MethodInfo *method)

{
  func_?(&this->hiddenValue,0);
  return *(int64_t *)&this->hiddenValueOld;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
        ObscuredDouble_GetHashCode(ObscuredDouble *this,MethodInfo *method)

{
  dStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValue,0);
  dStack_1 = (double)fVar2;
  iVar3 = func_?(&dStack_1,0);
  return iVar3;
}


/* Double InternalDecrypt() */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_InternalDecrypt(ObscuredDouble *this,MethodInfo *method)

{
  pAVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)this[1].currentCryptoKey == '\0') {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
    }
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields;
    uVar3 = (undefined4)pOVar2->cryptoKey;
    pAVar1->b1 = (char)uVar3;
    pAVar1->b2 = (char)((uint)uVar3 >> 8);
    pAVar1->b3 = (char)((uint)uVar3 >> 0x10);
    pAVar1->b4 = (char)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)((int)&pOVar2->cryptoKey + 4);
    (this->hiddenValue).b5 = (char)uVar3;
    (this->hiddenValue).b6 = (char)((uint)uVar3 >> 8);
    (this->hiddenValue).b7 = (char)((uint)uVar3 >> 0x10);
    (this->hiddenValue).b8 = (char)((uint)uVar3 >> 0x18);
    AVar4 = ObscuredDouble_InternalEncrypt(0.0,(MethodInfo *)0x0);
    *(ACTkByte8 *)&this->hiddenValueOld = AVar4;
    *(undefined8 *)&this->inited = 0;
    *(undefined1 *)&this[1].currentCryptoKey = 1;
  }
  uVar5._0_1_ = pAVar1->b1;
  uVar5._1_1_ = pAVar1->b2;
  uVar5._2_1_ = pAVar1->b3;
  uVar5._3_1_ = pAVar1->b4;
  uVar6._0_1_ = (this->hiddenValue).b5;
  uVar6._1_1_ = (this->hiddenValue).b6;
  uVar6._2_1_ = (this->hiddenValue).b7;
  uVar6._3_1_ = (this->hiddenValue).b8;
  uVar5 = uVar5 ^ (uint)this->hiddenValueOld;
  uVar6 = uVar6 ^ *(uint *)&this->field_0x14;
  bVar7 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar7 != 0) && (*(double *)&this->inited != _UNK_?)) &&
     (dVar8 = (double)CONCAT44(uVar6,uVar5) - *(double *)&this->inited,
     _UNK_? <
     (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_?,
                      SUB84(dVar8,0) & _UNK_?))) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar9 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar9 == (ObscuredCheatingDetector *)0x0) {
      func_?(0);
      pcVar10 = (code *)swi(3);
      fVar11 = (float10)(*pcVar10)();
      return (double)fVar11;
    }
    (*(code *)(pOVar9->klass->vtable).OnCheatingDetected.method)
              (pOVar9,(pOVar9->klass->vtable).StartDetectionAutomatically.methodPtr);
  }
  return (double)CONCAT44(uVar6,uVar5);
}


/* ACTkByte8 InternalEncrypt(Double) */

ACTkByte8 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
          ObscuredDouble_InternalEncrypt(double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
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
  pAVar1 = &this->hiddenValue;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = (float10)func_?(pAVar1,0);
  do {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    iVar4 = iVar3 >> 0x1f;
    pAVar1->b1 = (char)iVar3;
    pAVar1->b2 = (char)((uint)iVar3 >> 8);
    pAVar1->b3 = (char)((uint)iVar3 >> 0x10);
    pAVar1->b4 = (char)((uint)iVar3 >> 0x18);
    (this->hiddenValue).b5 = (char)iVar4;
    (this->hiddenValue).b6 = (char)((uint)iVar4 >> 8);
    (this->hiddenValue).b7 = (char)((uint)iVar4 >> 0x10);
    (this->hiddenValue).b8 = (char)((uint)iVar4 >> 0x18);
  } while (iVar3 == 0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar5 = ObscuredDouble_InternalEncrypt_1((double)fVar2,(longlong)iVar3,(MethodInfo *)0x0);
  *(ACTkByte8 *)&this->hiddenValueOld = AVar5;
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetEncrypted(ObscuredDouble *this,int64_t encrypted,MethodInfo *method)

{
  this->hiddenValueOld = in_stack_1;
  *(undefined1 *)&this[1].currentCryptoKey = 1;
  *(undefined4 *)&this->field_0x14 = (undefined4)encrypted;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    fVar3 = (float10)func_?(&this->hiddenValue,0);
    *(double *)&this->inited = (double)fVar3;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString(ObscuredDouble *this,MethodInfo *method)

{
  dStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValue,0);
  dStack_1 = (double)fVar2;
  pSVar3 = (String *)func_?(&dStack_1,0);
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_1(ObscuredDouble *this,String *format,MethodInfo *method)

{
  dStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValue,0);
  dStack_1 = (double)fVar2;
  pSVar3 = (String *)func_?(&dStack_1,format,0);
  return pSVar3;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_2
                   (ObscuredDouble *this,IFormatProvider *provider,MethodInfo *method)

{
  dStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValue,0);
  dStack_1 = (double)fVar2;
  pSVar3 = (String *)func_?(&dStack_1,provider,0);
  return pSVar3;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
         ObscuredDouble_ToString_3
                   (ObscuredDouble *this,String *format,IFormatProvider *provider,MethodInfo *method
                   )

{
  dStack_1 = 0.0;
  fVar2 = (float10)func_?(&this->hiddenValue,0);
  dStack_1 = (double)fVar2;
  pSVar3 = (String *)func_?(&dStack_1,format,provider,0);
  return pSVar3;
}


/* ObscuredDouble() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__cctor(MethodInfo *method)

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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredDouble(ACTkByte8) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
     ObscuredDouble__ctor(ObscuredDouble *this,ACTkByte8 value,MethodInfo *method)

{
  func_?(&this->hiddenValue,value._0_4_,value._4_4_,method);
  return;
}


/* ObscuredDouble op_Decrement(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Decrement
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&stack0x00000008,0);
  fVar2 = (float10)_UNK_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar3 = ObscuredDouble_InternalEncrypt_1
                    ((double)(fVar1 - fVar2),
                     CONCAT44((undefined4)input.currentCryptoKey,in_stack_4),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = AVar3._0_4_;
  input.hiddenValue._0_4_ = AVar3._4_4_;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  dVar6 = (double)CONCAT44(input.fakeValue._0_4_,input._20_4_);
  if (bVar5 != 0) {
    dVar6 = (double)(fVar1 - fVar2);
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_4;
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
  __return_storage_ptr__->fakeValue = dVar6;
  *(undefined8 *)&__return_storage_ptr__->inited = input._28_8_;
  return __return_storage_ptr__;
}


/* ObscuredDouble op_Implicit(Double) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Implicit(ObscuredDouble *__return_storage_ptr__,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pBStack_5 = (Byte__Array *)0x0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar10 = ObscuredDouble_InternalEncrypt
                    ((double)CONCAT44(value._0_4_,in_stack_11),(MethodInfo *)0x0);
  func_?(&uStack_1,AVar10,0);
  bVar12 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar12 != 0) {
    uStack_7 = in_stack_11;
    uStack_8 = value._0_4_;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = uStack_1;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = uStack_2;
  (__return_storage_ptr__->hiddenValue).b1 = (undefined1)uStack_3;
  (__return_storage_ptr__->hiddenValue).b2 = uStack_3._1_1_;
  (__return_storage_ptr__->hiddenValue).b3 = uStack_3._2_1_;
  (__return_storage_ptr__->hiddenValue).b4 = uStack_3._3_1_;
  (__return_storage_ptr__->hiddenValue).b5 = (undefined1)uStack_4;
  (__return_storage_ptr__->hiddenValue).b6 = uStack_4._1_1_;
  (__return_storage_ptr__->hiddenValue).b7 = uStack_4._2_1_;
  (__return_storage_ptr__->hiddenValue).b8 = uStack_4._3_1_;
  __return_storage_ptr__->hiddenValueOld = pBStack_5;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uStack_6;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = uStack_7;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = uStack_8;
  *(undefined8 *)&__return_storage_ptr__->inited = uStack_9;
  return __return_storage_ptr__;
}


/* Double op_Implicit(ObscuredDouble) */

double Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
       ObscuredDouble_op_Implicit_1(ObscuredDouble value,MethodInfo *method)

{
  fVar1 = (float10)func_?(&value,0);
  return (double)fVar1;
}


/* ObscuredDouble op_Increment(ObscuredDouble) */

ObscuredDouble *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::
ObscuredDouble_op_Increment
          (ObscuredDouble *__return_storage_ptr__,ObscuredDouble input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?(&stack0x00000008,0);
  fVar2 = (float10)_UNK_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDouble);
  }
  AVar3 = ObscuredDouble_InternalEncrypt_1
                    ((double)(fVar1 + fVar2),
                     CONCAT44((undefined4)input.currentCryptoKey,in_stack_4),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = AVar3._0_4_;
  input.hiddenValue._0_4_ = AVar3._4_4_;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  dVar6 = (double)CONCAT44(input.fakeValue._0_4_,input._20_4_);
  if (bVar5 != 0) {
    dVar6 = (double)(fVar1 + fVar2);
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_4;
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
  __return_storage_ptr__->fakeValue = dVar6;
  *(undefined8 *)&__return_storage_ptr__->inited = input._28_8_;
  return __return_storage_ptr__;
}

