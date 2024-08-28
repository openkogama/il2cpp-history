
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_ApplyNewCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  iVar2 = *(int *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (((int)iVar1 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey)
     || (iVar2 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                 static_fields->cryptoKey + 4))) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    iVar1 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
    iVar1 = ObscuredLong_Encrypt_1
                      (iVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                             static_fields->cryptoKey,(MethodInfo *)0x0);
    this->hiddenValue = iVar1;
    uVar3 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar3;
  }
  return;
}


/* Int64 Decrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Decrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Decrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Encrypt(Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt(int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Int64 Encrypt(Int64, Int64) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_Encrypt_1(int64_t value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if (key != 0) {
    return value ^ key;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  return CONCAT44(*(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->
                                  static_fields->cryptoKey + 4) ^ value._4_4_,
                  (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                        cryptoKey ^ (uint)value);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals(ObscuredLong *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredLong__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
        iVar2 = func_?(obj);
        obj_00._28_4_ = 0;
        obj_00._0_28_ = *(undefined1 (*) [28])(iVar2 + 4);
        bVar3 = ObscuredLong_Equals_1(this,obj_00,unaff_ESI);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredLong) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_Equals_1(ObscuredLong *this,ObscuredLong obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  iVar2 = this->hiddenValue;
  if (((int)this->currentCryptoKey == in_stack_3) &&
     (*(int *)((int)&this->currentCryptoKey + 4) == (int)obj.currentCryptoKey)) {
    if ((int)this->hiddenValue != obj.currentCryptoKey._4_4_) {
      return 0;
    }
    bVar4 = *(int *)((int)&this->hiddenValue + 4) == (int)obj.hiddenValue;
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    iVar2 = ObscuredLong_Decrypt_1(iVar2,iVar1,(MethodInfo *)0x0);
    iVar1 = ObscuredLong_Decrypt_1
                      (obj._4_8_,CONCAT44((int)obj.currentCryptoKey,in_stack_3),
                       (MethodInfo *)0x0);
    if ((int)iVar2 != (int)iVar1) {
      return 0;
    }
    bVar4 = (int)((ulonglong)iVar2 >> 0x20) == (int)((ulonglong)iVar1 >> 0x20);
  }
  if (!bVar4) {
    return 0;
  }
  return 1;
}


/* Int64 GetDecrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetDecrypted(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    iVar2 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar2;
    *(undefined4 *)&this->fakeValue = 0;
    *(undefined4 *)((int)&this->fakeValue + 4) = 0;
    this->inited = 1;
  }
  uVar1 = (undefined4)this->currentCryptoKey;
  iVar2 = this->hiddenValue;
  uVar3 = *(undefined4 *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Decrypt_1(iVar2,CONCAT44(uVar3,uVar1),(MethodInfo *)0x0);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar4 != 0) && ((int)this->fakeValue != 0 || *(int *)((int)&this->fakeValue + 4) != 0)) &&
     (iVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar5 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar5 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar5->klass->vtable).OnCheatingDetected.method)(pOVar5);
      return iVar2;
    }
    func_?();
    pcVar6 = (code *)swi(3);
    iVar2 = (*pcVar6)();
    return iVar2;
  }
  return iVar2;
}


/* Int64 GetEncrypted() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetEncrypted(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  ObscuredLong_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  return this->hiddenValue;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_GetHashCode(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  TStack_1._ticks = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_GetHashCode(&TStack_1,(MethodInfo *)0x0);
  return iVar2;
}


/* Int64 InternalDecrypt() */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_InternalDecrypt(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if (this->inited == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    uVar1 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
    iVar2 = ObscuredLong_Encrypt(0,(MethodInfo *)0x0);
    this->hiddenValue = iVar2;
    *(undefined4 *)&this->fakeValue = 0;
    *(undefined4 *)((int)&this->fakeValue + 4) = 0;
    this->inited = 1;
  }
  iVar2 = this->hiddenValue;
  key = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Decrypt_1(iVar2,key,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (((bVar3 != 0) && ((int)this->fakeValue != 0 || *(int *)((int)&this->fakeValue + 4) != 0)) &&
     (iVar2 != this->fakeValue)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar4 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar4 != (ObscuredCheatingDetector *)0x0) {
      (*(code *)(pOVar4->klass->vtable).OnCheatingDetected.method)(pOVar4);
      return iVar2;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    iVar2 = (*pcVar5)();
    return iVar2;
  }
  return iVar2;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_RandomizeCryptoKey(ObscuredLong *this,MethodInfo *method)

{
  pOVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  do {
    this = (ObscuredLong *)((ulonglong)iVar2 >> 0x20);
    puStack_3 = (undefined *)iVar2;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *(int32_t *)&pOVar1->currentCryptoKey = iVar4;
    *(int32_t *)((int)&pOVar1->currentCryptoKey + 4) = iVar4 >> 0x1f;
  } while (iVar4 == 0);
  iVar2 = pOVar1->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar2 = ObscuredLong_Encrypt_1
                    (CONCAT44(this,puStack_3),CONCAT44(iVar4 >> 0x1f,(int)iVar2),(MethodInfo *)0x0);
  pOVar1->hiddenValue = iVar2;
  return;
}


/* Void SetEncrypted(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetEncrypted(ObscuredLong *this,int64_t encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  this->inited = 1;
  *(undefined4 *)&this->hiddenValue = in_stack_1;
  *(undefined4 *)((int)&this->hiddenValue + 4) = (undefined4)encrypted;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    }
    iVar3 = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
    this->fakeValue = iVar3;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString(ObscuredLong *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  IStack_1.m_value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int64::Int64_ToString(&IStack_1,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_1(ObscuredLong *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  IStack_1.m_value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int64::Int64_ToString_2(&IStack_1,format,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_2(ObscuredLong *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  IStack_1.m_value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int64::Int64_ToString_1(&IStack_1,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
         ObscuredLong_ToString_3
                   (ObscuredLong *this,String *format,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  IStack_1.m_value = ObscuredLong_InternalDecrypt(this,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int64::Int64_ToString_3
                     (&IStack_1,format,provider,(MethodInfo *)0x0);
  return pSVar2;
}


/* ObscuredLong() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredLong(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
     ObscuredLong__ctor(ObscuredLong *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  uVar1 = *(undefined4 *)
           ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->
                  cryptoKey + 4);
  *(int *)&this->currentCryptoKey =
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
  *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar1;
  *(undefined4 *)&this->hiddenValue = in_stack_2;
  *(undefined4 *)((int)&this->hiddenValue + 4) = (undefined4)value;
  *(undefined4 *)&this->fakeValue = 0;
  *(undefined4 *)((int)&this->fakeValue + 4) = 0;
  this->inited = 1;
  return;
}


/* ObscuredLong op_Decrement(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Decrement
          (ObscuredLong *__return_storage_ptr__,ObscuredLong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar1 = ObscuredLong_InternalDecrypt((ObscuredLong *)&stack0x00000008,(MethodInfo *)0x0);
  iVar2 = (int)iVar1 + -1;
  iVar3 = (int)((ulonglong)iVar1 >> 0x20) - (uint)((int)iVar1 == 0);
  iVar1 = ObscuredLong_Encrypt_1
                    (CONCAT44(iVar3,iVar2),
                     CONCAT44((undefined4)input.currentCryptoKey,in_stack_4),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)iVar1;
  input.hiddenValue._0_4_ = (undefined4)((ulonglong)iVar1 >> 0x20);
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


/* ObscuredLong op_Implicit(Int64) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Implicit(ObscuredLong *__return_storage_ptr__,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
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
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  uVar1 = ObscuredLong_Encrypt(CONCAT44((undefined4)value,in_stack_2),(MethodInfo *)0x0);
  ObscuredLong__ctor(__return_storage_ptr__,uVar1 >> 0x20,unaff_EDI);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    *(undefined4 *)&__return_storage_ptr__->fakeValue = in_stack_2;
    *(undefined4 *)((int)&__return_storage_ptr__->fakeValue + 4) = (undefined4)value;
  }
  return __return_storage_ptr__;
}


/* Int64 op_Implicit(ObscuredLong) */

int64_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
        ObscuredLong_op_Implicit_1(ObscuredLong value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar1 = ObscuredLong_InternalDecrypt(&value,(MethodInfo *)0x0);
  return iVar1;
}


/* ObscuredLong op_Increment(ObscuredLong) */

ObscuredLong *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
ObscuredLong_op_Increment
          (ObscuredLong *__return_storage_ptr__,ObscuredLong input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
  }
  iVar1 = ObscuredLong_InternalDecrypt((ObscuredLong *)&stack0x00000008,(MethodInfo *)0x0);
  iVar2 = ObscuredLong_Encrypt_1
                    (iVar1 + 1,CONCAT44((undefined4)input.currentCryptoKey,in_stack_3),
                     (MethodInfo *)0x0);
  input.currentCryptoKey._4_4_ = (undefined4)iVar2;
  input.hiddenValue._0_4_ = (undefined4)((ulonglong)iVar2 >> 0x20);
  bVar4 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  lVar5 = CONCAT44((undefined4)input.fakeValue,input.hiddenValue._4_4_);
  if (bVar4 != 0) {
    lVar5 = iVar1 + 1;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_3;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) =
       (undefined4)input.currentCryptoKey;
  *(undefined4 *)&__return_storage_ptr__->hiddenValue = input.currentCryptoKey._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->hiddenValue + 4) = (undefined4)input.hiddenValue;
  __return_storage_ptr__->fakeValue = lVar5;
  *(undefined4 *)&__return_storage_ptr__->inited = input.fakeValue._4_4_;
  __return_storage_ptr__->field_0x1c = input.inited;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = input._25_3_;
  return __return_storage_ptr__;
}

