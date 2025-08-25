
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_ApplyNewCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  uVar1 = this->currentCryptoKey;
  iVar2 = *(int *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (((int)uVar1 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey)
     || (iVar2 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                 static_fields->cryptoKey + 4))) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar1 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
    uVar1 = ObscuredULong_Encrypt_1
                      (uVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = uVar1;
    uVar3 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey
    ;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar3;
  }
  return;
}


/* UInt64 Decrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)value ^
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey);
}


/* UInt64 Decrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Decrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)value ^
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey);
}


/* UInt64 Encrypt(UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt(uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)value ^
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey);
}


/* UInt64 Encrypt(UInt64, UInt64) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_Encrypt_1(uint64_t value,uint64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)value ^
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields
                        ->cryptoKey);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals(ObscuredULong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredULong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_0).element_class) {
        iVar2 = func_?(obj);
        obj_00._28_4_ = 0;
        obj_00._0_28_ = *(undefined1 (*) [28])(iVar2 + 4);
        bVar3 = ObscuredULong_Equals_1(this,obj_00,unaff_ESI);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredULong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_Equals_1(ObscuredULong *this,ObscuredULong obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if (((int)this->currentCryptoKey == in_stack_1) &&
     (*(int *)((int)&this->currentCryptoKey + 4) == (int)obj.currentCryptoKey)) {
    if ((int)this->hiddenValue != obj.currentCryptoKey._4_4_) {
      return 0;
    }
    bVar2 = *(int *)((int)&this->hiddenValue + 4) == (int)obj.hiddenValue;
  }
  else {
    uVar3 = this->hiddenValue;
    uVar4 = this->currentCryptoKey;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar3 = ObscuredULong_Decrypt_1(uVar3,uVar4,(MethodInfo *)0x0);
    uVar4 = ObscuredULong_Decrypt_1
                      (obj._4_8_,CONCAT44((int)obj.currentCryptoKey,in_stack_1),
                       (MethodInfo *)0x0);
    if ((int)uVar3 != (int)uVar4) {
      return 0;
    }
    bVar2 = (int)(uVar3 >> 0x20) == (int)(uVar4 >> 0x20);
  }
  if (!bVar2) {
    return 0;
  }
  return 1;
}


/* UInt64 GetDecrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetDecrypted(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey
    ;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    uVar2 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar2;
    *(undefined4 *)&this->fakeValue = 0;
    *(undefined4 *)((int)&this->fakeValue + 4) = 0;
    this->inited = 1;
  }
  uVar1 = (undefined4)this->currentCryptoKey;
  uVar2 = this->hiddenValue;
  uVar3 = *(undefined4 *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Decrypt_1(uVar2,CONCAT44(uVar3,uVar1),(MethodInfo *)0x0);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && ((int)this->fakeValue != 0 || *(int *)((int)&this->fakeValue + 4) != 0)) &&
     (((int)uVar2 != (int)this->fakeValue ||
      ((int)(uVar2 >> 0x20) != *(int *)((int)&this->fakeValue + 4))))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      uVar2 = (*pcVar6)();
      return uVar2;
    }
    (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)(pOVar5);
  }
  return uVar2;
}


/* UInt64 GetEncrypted() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_GetEncrypted(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  ObscuredULong_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
        ObscuredULong_GetHashCode(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  UStack_1.m_value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::UInt64::UInt64_GetHashCode(&UStack_1,(MethodInfo *)0x0);
  return iVar2;
}


/* UInt64 InternalDecrypt() */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_InternalDecrypt(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey
    ;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    uVar2 = ObscuredULong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = uVar2;
    *(undefined4 *)&this->fakeValue = 0;
    *(undefined4 *)((int)&this->fakeValue + 4) = 0;
    this->inited = 1;
  }
  uVar2 = this->hiddenValue;
  key = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar2 = ObscuredULong_Decrypt_1(uVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && ((int)this->fakeValue != 0 || *(int *)((int)&this->fakeValue + 4) != 0)) &&
     (((int)uVar2 != (int)this->fakeValue ||
      ((int)(uVar2 >> 0x20) != *(int *)((int)&this->fakeValue + 4))))) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 == (ObscuredCheatingDetector *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      uVar2 = (*pcVar5)();
      return uVar2;
    }
    (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
  }
  return uVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_RandomizeCryptoKey(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (1,0x7fffffff,(MethodInfo *)0x0);
  *(int32_t *)&this->currentCryptoKey = iVar2;
  *(int32_t *)((int)&this->currentCryptoKey + 4) = iVar2 >> 0x1f;
  uVar1 = ObscuredULong_Encrypt_1(uVar1,(longlong)iVar2,(MethodInfo *)0x0);
  this->hiddenValue = uVar1;
  return;
}


/* Void SetEncrypted(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetEncrypted(ObscuredULong *this,uint64_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  this->inited = 1;
  *(undefined4 *)&this->hiddenValue = in_stack_1;
  *(undefined4 *)((int)&this->hiddenValue + 4) = (undefined4)encrypted;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    }
    uVar3 = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = uVar3;
  }
  return;
}


/* Void SetNewCryptoKey(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong_SetNewCryptoKey(uint64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString(ObscuredULong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  UStack_1.m_value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt64::UInt64_ToString(&UStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_1(ObscuredULong *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  UStack_1.m_value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt64::UInt64_ToString_2(&UStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_2(ObscuredULong *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  UStack_1.m_value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt64::UInt64_ToString_1(&UStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_ToString_3
                   (ObscuredULong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  UStack_1.m_value = ObscuredULong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::UInt64::UInt64_ToString_3
                     (&UStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredULong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  iVar1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
          CryptoKeyGenerator_GenerateKey(0,0x7fffffff,(MethodInfo *)0x0);
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredULong(UInt64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
     ObscuredULong__ctor(ObscuredULong *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = *(undefined4 *)
           ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->
                  cryptoKey + 4);
  *(int *)&this->currentCryptoKey =
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->static_fields->cryptoKey;
  *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
  *(undefined4 *)&this->hiddenValue = in_stack_2;
  *(undefined4 *)((int)&this->hiddenValue + 4) = (undefined4)value;
  *(undefined4 *)&this->fakeValue = 0;
  *(undefined4 *)((int)&this->fakeValue + 4) = 0;
  this->inited = 1;
  return;
}


/* ObscuredULong op_Decrement(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Decrement
          (ObscuredULong *__return_storage_ptr__,ObscuredULong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_InternalDecrypt((ObscuredULong *)&stack0x00000008,(MethodInfo *)0x0);
  iVar2 = (int)uVar1 + -1;
  iVar3 = (int)(uVar1 >> 0x20) - (uint)((int)uVar1 == 0);
  uVar1 = ObscuredULong_Encrypt_1
                    (CONCAT44(iVar3,iVar2),
                     CONCAT44((undefined4)input.currentCryptoKey,in_stack_4),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)uVar1;
  input.hiddenValue._0_4_ = (undefined4)(uVar1 >> 0x20);
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    input.hiddenValue._4_4_ = iVar2;
    input.fakeValue._0_4_ = iVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_4;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  *(int *)&__return_storage_ptr__->fakeValue = input.hiddenValue._4_4_;
  *(int *)((int)&__return_storage_ptr__->fakeValue + 4) = (int)input.fakeValue;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}


/* ObscuredULong op_Implicit(UInt64) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Implicit(ObscuredULong *__return_storage_ptr__,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->fakeValue = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->inited = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_Encrypt(CONCAT44((undefined4)value,in_stack_2),(MethodInfo *)0x0);
  ObscuredULong__ctor(__return_storage_ptr__,uVar1 >> 0x20,unaff_EDI);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    *(undefined4 *)&__return_storage_ptr__->fakeValue = in_stack_2;
    *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = (undefined4)value;
  }
  return __return_storage_ptr__;
}


/* UInt64 op_Implicit(ObscuredULong) */

uint64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
         ObscuredULong_op_Implicit_1(ObscuredULong value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_InternalDecrypt(&value,(MethodInfo *)0x0);
  return uVar1;
}


/* ObscuredULong op_Increment(ObscuredULong) */

ObscuredULong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredULong::
ObscuredULong_op_Increment
          (ObscuredULong *__return_storage_ptr__,ObscuredULong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredULong);
  }
  uVar1 = ObscuredULong_InternalDecrypt((ObscuredULong *)&stack0x00000008,(MethodInfo *)0x0);
  uVar2 = ObscuredULong_Encrypt_1
                    (uVar1 + 1,CONCAT44((undefined4)input.currentCryptoKey,in_stack_3),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)uVar2;
  input.hiddenValue._0_4_ = (undefined4)(uVar2 >> 0x20);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  uVar2 = CONCAT44((undefined4)input.fakeValue,input.hiddenValue._4_4_);
  if (bVar4 != 0) {
    uVar2 = uVar1 + 1;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  __return_storage_ptr__->fakeValue = uVar2;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}

