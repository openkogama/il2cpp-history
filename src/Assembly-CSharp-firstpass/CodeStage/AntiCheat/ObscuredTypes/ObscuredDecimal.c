
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_ApplyNewCryptoKey(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  iVar1 = this->currentCryptoKey;
  iVar2 = *(int *)((int)&this->currentCryptoKey + 4);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  if (((int)iVar1 !=
       (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey
      ) || (iVar2 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                                    static_fields->cryptoKey + 4))) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    pDVar3 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffec,this,(MethodInfo *)0x0);
    uVar4 = pDVar3->hi;
    uVar5 = pDVar3->lo;
    uVar6 = pDVar3->mid;
    value.lo = uVar6;
    value.hi = uVar5;
    value.flags = uVar4;
    value.mid = (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                     cryptoKey;
    value.ulomidLE._0_4_ =
         *(undefined4 *)
          ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                 cryptoKey + 4);
    value.ulomidLE._4_4_ = 0;
    pAVar7 = ObscuredDecimal_InternalEncrypt_1
                        ((ACTkByte16 *)&stack0xffffffec,value,in_stack_8,in_stack_9);
    uVar10 = pAVar7->b2;
    uVar11 = pAVar7->b3;
    uVar12 = pAVar7->b4;
    uVar13 = pAVar7->b5;
    uVar14 = pAVar7->b6;
    uVar15 = pAVar7->b7;
    uVar16 = pAVar7->b8;
    uVar17 = pAVar7->b9;
    uVar18 = pAVar7->b10;
    uVar19 = pAVar7->b11;
    uVar20 = pAVar7->b12;
    uVar21 = pAVar7->b13;
    uVar22 = pAVar7->b14;
    uVar23 = pAVar7->b15;
    uVar24 = pAVar7->b16;
    (this->hiddenValue).b1 = pAVar7->b1;
    (this->hiddenValue).b2 = uVar10;
    (this->hiddenValue).b3 = uVar11;
    (this->hiddenValue).b4 = uVar12;
    (this->hiddenValue).b5 = uVar13;
    (this->hiddenValue).b6 = uVar14;
    (this->hiddenValue).b7 = uVar15;
    (this->hiddenValue).b8 = uVar16;
    (this->hiddenValue).b9 = uVar17;
    (this->hiddenValue).b10 = uVar18;
    (this->hiddenValue).b11 = uVar19;
    (this->hiddenValue).b12 = uVar20;
    (this->hiddenValue).b13 = uVar21;
    (this->hiddenValue).b14 = uVar22;
    (this->hiddenValue).b15 = uVar23;
    (this->hiddenValue).b16 = uVar24;
    uVar25 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
              cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar25;
  }
  return;
}


/* Decimal Decrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt(Decimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1 = (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                cryptoKey;
  uVar2 = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                          static_fields->cryptoKey + 4);
  __return_storage_ptr__->flags = in_stack_3 ^ uVar1;
  __return_storage_ptr__->hi = value.flags ^ uVar2;
  __return_storage_ptr__->lo = value.hi ^ uVar1;
  __return_storage_ptr__->mid = value.lo ^ uVar2;
  return __return_storage_ptr__;
}


/* Decimal Decrypt(Decimal, Int64) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt_1
                    (Decimal *__return_storage_ptr__,Decimal value,int64_t key,MethodInfo *method)

{
  __return_storage_ptr__->flags = in_stack_1 ^ value.mid;
  __return_storage_ptr__->hi = value.flags ^ (uint)value.ulomidLE;
  __return_storage_ptr__->lo = value.hi ^ value.mid;
  __return_storage_ptr__->mid = value.lo ^ (uint)value.ulomidLE;
  return __return_storage_ptr__;
}


/* Decimal Encrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Encrypt(Decimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1 = (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                cryptoKey;
  uVar2 = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                          static_fields->cryptoKey + 4);
  __return_storage_ptr__->flags = in_stack_3 ^ uVar1;
  __return_storage_ptr__->hi = value.flags ^ uVar2;
  __return_storage_ptr__->lo = value.hi ^ uVar1;
  __return_storage_ptr__->mid = value.lo ^ uVar2;
  return __return_storage_ptr__;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals(ObscuredDecimal *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDecimal__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_0).element_class) {
        iVar2 = func_?(obj);
        obj_00.fakeValue.ulomidLE._0_4_ = (int)((ulonglong)*(undefined8 *)(iVar2 + 0x30) >> 0x20);
        obj_00._0_48_ = *(undefined1 (*) [48])(iVar2 + 4);
        obj_00.fakeValue.ulomidLE._4_4_ = 0;
        obj_00._56_4_ = unaff_ESI;
        obj_00._60_4_ = unaff_EBP;
        bVar3 = ObscuredDecimal_Equals_1(this,obj_00,unaff_retaddr);
        return bVar3;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredDecimal) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals_1(ObscuredDecimal *this,ObscuredDecimal obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  ObscuredDecimal_InternalDecrypt
            ((Decimal *)&stack0xffffffec,(ObscuredDecimal *)&stack0x00000008,(MethodInfo *)0x0);
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffec,this,(MethodInfo *)0x0);
  pDVar2 = (Decimal__Class *)pDVar1->hi;
  iVar3 = pDVar1->lo;
  iVar4 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    pDVar2 = TypeInfo__System__Decimal;
    func_?();
  }
  value.hi = iVar3;
  value.flags = (int32_t)pDVar2;
  value.lo = iVar4;
  value.mid = 0;
  value.ulomidLE._0_4_ = iVar3;
  value.ulomidLE._4_4_ = iVar4;
  bVar5 = mscorlib.dll::System::Decimal::Decimal_Equals_1
                    ((Decimal *)&stack0xffffffdc,value,unaff_EBP);
  return bVar5;
}


/* Decimal GetDecrypted() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_GetDecrypted
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffec,this,(MethodInfo *)0x0);
  iVar2 = pDVar1->hi;
  iVar3 = pDVar1->lo;
  iVar4 = pDVar1->mid;
  __return_storage_ptr__->flags = pDVar1->flags;
  __return_storage_ptr__->hi = iVar2;
  __return_storage_ptr__->lo = iVar3;
  __return_storage_ptr__->mid = iVar4;
  return __return_storage_ptr__;
}


/* Decimal GetEncrypted() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_GetEncrypted
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  ObscuredDecimal_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  iVar1 = *(int32_t *)&(this->hiddenValue).b5;
  iVar2 = *(int32_t *)&(this->hiddenValue).b9;
  iVar3 = *(int32_t *)&(this->hiddenValue).b13;
  __return_storage_ptr__->flags = *(int32_t *)&this->hiddenValue;
  __return_storage_ptr__->hi = iVar1;
  __return_storage_ptr__->lo = iVar2;
  __return_storage_ptr__->mid = iVar3;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
        ObscuredDecimal_GetHashCode(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&puStack_2,this,(MethodInfo *)0x0);
  iStack_3 = pDVar1->flags;
  iStack_4 = pDVar1->hi;
  iStack_5 = pDVar1->lo;
  iStack_6 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar7 = mscorlib.dll::System::Decimal::Decimal_GetHashCode
                    ((Decimal *)&iStack_3,(MethodInfo *)0x0);
  return iVar7;
}


/* Decimal InternalDecrypt() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_InternalDecrypt
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  uVar1 = (this->fakeValue).ulomidLE;
  __return_storage_ptr__->flags = 0;
  __return_storage_ptr__->hi = 0;
  __return_storage_ptr__->lo = 0;
  __return_storage_ptr__->mid = 0;
  if ((char)uVar1 == '\0') {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    uVar2 = *(undefined4 *)
             ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                    cryptoKey + 4);
    *(int *)&this->currentCryptoKey =
         (int)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
              cryptoKey;
    *(undefined4 *)((int)&this->currentCryptoKey + 4) = uVar2;
    if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Decimal);
    }
    pDVar3 = TypeInfo__System__Decimal->static_fields;
    uVar4 = (pDVar3->Zero).hi;
    uVar5 = (pDVar3->Zero).lo;
    uVar6 = (pDVar3->Zero).mid;
    value.lo = uVar6;
    value.hi = uVar5;
    value.flags = uVar4;
    value.mid = 0;
    value.ulomidLE._0_4_ = in_stack_7;
    value.ulomidLE._4_4_ = in_stack_8;
    pAVar9 = ObscuredDecimal_InternalEncrypt
                        ((ACTkByte16 *)&stack0xffffffdc,value,in_stack_10);
    uVar11 = pAVar9->b2;
    uVar12 = pAVar9->b3;
    uVar13 = pAVar9->b4;
    uVar14 = pAVar9->b5;
    uVar15 = pAVar9->b6;
    uVar16 = pAVar9->b7;
    uVar17 = pAVar9->b8;
    uVar18 = pAVar9->b9;
    uVar19 = pAVar9->b10;
    uVar20 = pAVar9->b11;
    uVar21 = pAVar9->b12;
    uVar22 = pAVar9->b13;
    uVar23 = pAVar9->b14;
    uVar24 = pAVar9->b15;
    uVar25 = pAVar9->b16;
    (this->hiddenValue).b1 = pAVar9->b1;
    (this->hiddenValue).b2 = uVar11;
    (this->hiddenValue).b3 = uVar12;
    (this->hiddenValue).b4 = uVar13;
    (this->hiddenValue).b5 = uVar14;
    (this->hiddenValue).b6 = uVar15;
    (this->hiddenValue).b7 = uVar16;
    (this->hiddenValue).b8 = uVar17;
    (this->hiddenValue).b9 = uVar18;
    (this->hiddenValue).b10 = uVar19;
    (this->hiddenValue).b11 = uVar20;
    (this->hiddenValue).b12 = uVar21;
    (this->hiddenValue).b13 = uVar22;
    (this->hiddenValue).b14 = uVar23;
    (this->hiddenValue).b15 = uVar24;
    (this->hiddenValue).b16 = uVar25;
    (this->fakeValue).flags = 0;
    (this->fakeValue).hi = 0;
    (this->fakeValue).lo = 0;
    (this->fakeValue).mid = 0;
    *(undefined1 *)&(this->fakeValue).ulomidLE = 1;
  }
  uVar26._0_1_ = (this->hiddenValue).b1;
  uVar26._1_1_ = (this->hiddenValue).b2;
  uVar26._2_1_ = (this->hiddenValue).b3;
  uVar26._3_1_ = (this->hiddenValue).b4;
  uVar27._0_1_ = (this->hiddenValue).b5;
  uVar27._1_1_ = (this->hiddenValue).b6;
  uVar27._2_1_ = (this->hiddenValue).b7;
  uVar27._3_1_ = (this->hiddenValue).b8;
  uVar28._0_1_ = (this->hiddenValue).b9;
  uVar28._1_1_ = (this->hiddenValue).b10;
  uVar28._2_1_ = (this->hiddenValue).b11;
  uVar28._3_1_ = (this->hiddenValue).b12;
  uVar29._0_1_ = (this->hiddenValue).b13;
  uVar29._1_1_ = (this->hiddenValue).b14;
  uVar29._2_1_ = (this->hiddenValue).b15;
  uVar29._3_1_ = (this->hiddenValue).b16;
  uVar30 = (uint)this->currentCryptoKey;
  uVar31 = *(uint *)((int)&this->currentCryptoKey + 4);
  __return_storage_ptr__->flags = uVar26 ^ uVar30;
  __return_storage_ptr__->hi = uVar27 ^ uVar31;
  __return_storage_ptr__->lo = uVar28 ^ uVar30;
  __return_storage_ptr__->mid = uVar29 ^ uVar31;
  bVar32 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar32 != 0) {
    iVar33 = (this->fakeValue).flags;
    iVar34 = (this->fakeValue).hi;
    iVar35 = (this->fakeValue).lo;
    iVar36 = (this->fakeValue).mid;
    if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Decimal);
    }
    pDVar3 = TypeInfo__System__Decimal->static_fields;
    uVar37 = (pDVar3->Zero).lo;
    uVar38 = (pDVar3->Zero).mid;
    d2_00.hi = uVar38;
    d2_00.flags = uVar37;
    d1.hi = iVar34;
    d1.flags = iVar33;
    d1.lo = iVar35;
    d1.mid = iVar36;
    d1.ulomidLE._0_4_ = (pDVar3->Zero).flags;
    d1.ulomidLE._4_4_ = (pDVar3->Zero).hi;
    d2_00.lo = 0;
    d2_00.mid = unaff_ESI;
    d2_00.ulomidLE._0_1_ = (uint8_t)in_stack_39;
    d2_00.ulomidLE._1_1_ = SUB41(in_stack_39,1);
    d2_00.ulomidLE._2_1_ = SUB41(in_stack_39,2);
    d2_00.ulomidLE._3_1_ = SUB41(in_stack_39,3);
    d2_00.ulomidLE._4_1_ = (uint8_t)in_stack_40;
    d2_00.ulomidLE._5_1_ = SUB41(in_stack_40,1);
    d2_00.ulomidLE._6_1_ = SUB41(in_stack_40,2);
    d2_00.ulomidLE._7_1_ = SUB41(in_stack_40,3);
    bVar32 = mscorlib.dll::System::Decimal::Decimal_op_Inequality(d1,d2_00,in_stack_41);
    if (bVar32 != 0) {
      iVar33 = __return_storage_ptr__->flags;
      iVar34 = __return_storage_ptr__->hi;
      iVar35 = __return_storage_ptr__->lo;
      iVar36 = __return_storage_ptr__->mid;
      iVar42 = (this->fakeValue).flags;
      iVar43 = (this->fakeValue).hi;
      iVar44 = (this->fakeValue).lo;
      iVar45 = (this->fakeValue).mid;
      if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      d1_00.hi = iVar34;
      d1_00.flags = iVar33;
      d1_00.lo = iVar35;
      d1_00.mid = iVar36;
      d1_00.ulomidLE._0_4_ = iVar42;
      d1_00.ulomidLE._4_4_ = iVar43;
      d2.hi = iVar45;
      d2.flags = iVar44;
      d2.lo = 0;
      d2.mid = (int32_t)method;
      d2.ulomidLE = in_stack_46;
      bVar32 = mscorlib.dll::System::Decimal::Decimal_op_Inequality(d1_00,d2,in_stack_47);
      if (bVar32 != 0) {
        if (cRam_? == '\0') {
          ppOStack48 = &TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector;
          func_?();
          cRam_? = '\x01';
        }
        pOVar49 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields
                 ->_Instance_k__BackingField;
        if (pOVar49 == (ObscuredCheatingDetector *)0x0) {
          func_?();
          pcVar50 = (code *)swi(3);
          pDVar51 = (Decimal *)(*pcVar50)();
          return pDVar51;
        }
        pOVar52 = pOVar49->klass;
        ppOStack48 =
             (ObscuredCheatingDetector__Class **)
             (pOVar52->vtable).StartDetectionAutomatically.methodPtr;
        (*(code *)(pOVar52->vtable).OnCheatingDetected.method)();
      }
    }
  }
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt(ACTkByte16 *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1 = (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                cryptoKey;
  uVar2 = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                          static_fields->cryptoKey + 4);
  uVar3 = value.hi ^ uVar1;
  uVar1 = uVar1 ^ in_stack_4;
  uVar5 = uVar2 ^ value.flags;
  uVar2 = value.lo ^ uVar2;
  __return_storage_ptr__->b1 = (char)uVar1;
  __return_storage_ptr__->b2 = (char)(uVar1 >> 8);
  __return_storage_ptr__->b3 = (char)(uVar1 >> 0x10);
  __return_storage_ptr__->b4 = (char)(uVar1 >> 0x18);
  __return_storage_ptr__->b5 = (char)uVar5;
  __return_storage_ptr__->b6 = (char)(uVar5 >> 8);
  __return_storage_ptr__->b7 = (char)(uVar5 >> 0x10);
  __return_storage_ptr__->b8 = (char)(uVar5 >> 0x18);
  __return_storage_ptr__->b9 = (char)uVar3;
  __return_storage_ptr__->b10 = (char)(uVar3 >> 8);
  __return_storage_ptr__->b11 = (char)(uVar3 >> 0x10);
  __return_storage_ptr__->b12 = (char)(uVar3 >> 0x18);
  __return_storage_ptr__->b13 = (char)uVar2;
  __return_storage_ptr__->b14 = (char)(uVar2 >> 8);
  __return_storage_ptr__->b15 = (char)(uVar2 >> 0x10);
  __return_storage_ptr__->b16 = (char)(uVar2 >> 0x18);
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal, Int64) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt_1
          (ACTkByte16 *__return_storage_ptr__,Decimal value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if (value.mid == 0 && (uint)value.ulomidLE == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    value.mid = (int32_t)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                         static_fields->cryptoKey;
    value.ulomidLE._0_4_ =
         *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                         static_fields->cryptoKey + 4);
  }
  uVar1 = value.hi ^ value.mid;
  uVar2 = in_stack_3 ^ value.mid;
  uVar4 = value.flags ^ (uint)value.ulomidLE;
  uVar5 = value.lo ^ (uint)value.ulomidLE;
  __return_storage_ptr__->b1 = (char)uVar2;
  __return_storage_ptr__->b2 = (char)(uVar2 >> 8);
  __return_storage_ptr__->b3 = (char)(uVar2 >> 0x10);
  __return_storage_ptr__->b4 = (char)(uVar2 >> 0x18);
  __return_storage_ptr__->b5 = (char)uVar4;
  __return_storage_ptr__->b6 = (char)(uVar4 >> 8);
  __return_storage_ptr__->b7 = (char)(uVar4 >> 0x10);
  __return_storage_ptr__->b8 = (char)(uVar4 >> 0x18);
  __return_storage_ptr__->b9 = (char)uVar1;
  __return_storage_ptr__->b10 = (char)(uVar1 >> 8);
  __return_storage_ptr__->b11 = (char)(uVar1 >> 0x10);
  __return_storage_ptr__->b12 = (char)(uVar1 >> 0x18);
  __return_storage_ptr__->b13 = (char)uVar5;
  __return_storage_ptr__->b14 = (char)(uVar5 >> 8);
  __return_storage_ptr__->b15 = (char)(uVar5 >> 0x10);
  __return_storage_ptr__->b16 = (char)(uVar5 >> 0x18);
  return __return_storage_ptr__;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_RandomizeCryptoKey(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffec,this,(MethodInfo *)0x0);
  iVar2 = pDVar1->flags;
  puVar3 = (undefined *)pDVar1->hi;
  method_00 = (ObscuredDecimal__Class *)pDVar1->lo;
  iVar4 = pDVar1->mid;
  do {
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                       (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    *(int32_t *)&this->currentCryptoKey = iVar5;
    *(int32_t *)((int)&this->currentCryptoKey + 4) = iVar5 >> 0x1f;
  } while (iVar5 == 0);
  iVar6 = this->currentCryptoKey;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    puVar3 = &UNK_?;
    method_00 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal;
    func_?();
  }
  value.hi = (int32_t)method_00;
  value.flags = (int32_t)puVar3;
  value.lo = iVar4;
  value.mid = (int)iVar6;
  value.ulomidLE._0_4_ = iVar5 >> 0x1f;
  value.ulomidLE._4_4_ = 0;
  pAVar7 = ObscuredDecimal_InternalEncrypt_1
                      ((ACTkByte16 *)&stack0xffffffec,value,CONCAT44(puVar3,iVar2),
                       (MethodInfo *)method_00);
  uVar8 = pAVar7->b2;
  uVar9 = pAVar7->b3;
  uVar10 = pAVar7->b4;
  uVar11 = pAVar7->b5;
  uVar12 = pAVar7->b6;
  uVar13 = pAVar7->b7;
  uVar14 = pAVar7->b8;
  uVar15 = pAVar7->b9;
  uVar16 = pAVar7->b10;
  uVar17 = pAVar7->b11;
  uVar18 = pAVar7->b12;
  uVar19 = pAVar7->b13;
  uVar20 = pAVar7->b14;
  uVar21 = pAVar7->b15;
  uVar22 = pAVar7->b16;
  (this->hiddenValue).b1 = pAVar7->b1;
  (this->hiddenValue).b2 = uVar8;
  (this->hiddenValue).b3 = uVar9;
  (this->hiddenValue).b4 = uVar10;
  (this->hiddenValue).b5 = uVar11;
  (this->hiddenValue).b6 = uVar12;
  (this->hiddenValue).b7 = uVar13;
  (this->hiddenValue).b8 = uVar14;
  (this->hiddenValue).b9 = uVar15;
  (this->hiddenValue).b10 = uVar16;
  (this->hiddenValue).b11 = uVar17;
  (this->hiddenValue).b12 = uVar18;
  (this->hiddenValue).b13 = uVar19;
  (this->hiddenValue).b14 = uVar20;
  (this->hiddenValue).b15 = uVar21;
  (this->hiddenValue).b16 = uVar22;
  return;
}


/* Void SetEncrypted(Decimal) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetEncrypted(ObscuredDecimal *this,Decimal encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  *(undefined1 *)&(this->fakeValue).ulomidLE = 1;
  (this->hiddenValue).b1 = uStack1;
  (this->hiddenValue).b2 = uStack2;
  (this->hiddenValue).b3 = uStack3;
  (this->hiddenValue).b4 = uStack4;
  (this->hiddenValue).b5 = (undefined1)encrypted.flags;
  (this->hiddenValue).b6 = encrypted.flags._1_1_;
  (this->hiddenValue).b7 = encrypted.flags._2_1_;
  (this->hiddenValue).b8 = encrypted.flags._3_1_;
  (this->hiddenValue).b9 = (undefined1)encrypted.hi;
  (this->hiddenValue).b10 = encrypted.hi._1_1_;
  (this->hiddenValue).b11 = encrypted.hi._2_1_;
  (this->hiddenValue).b12 = encrypted.hi._3_1_;
  (this->hiddenValue).b13 = (undefined1)encrypted.lo;
  (this->hiddenValue).b14 = encrypted.lo._1_1_;
  (this->hiddenValue).b15 = encrypted.lo._2_1_;
  (this->hiddenValue).b16 = encrypted.lo._3_1_;
  bVar5 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar5 != 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    pDVar6 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0x00000008,this,(MethodInfo *)0x0);
    iVar7 = pDVar6->hi;
    iVar8 = pDVar6->lo;
    iVar9 = pDVar6->mid;
    (this->fakeValue).flags = pDVar6->flags;
    (this->fakeValue).hi = iVar7;
    (this->fakeValue).lo = iVar8;
    (this->fakeValue).mid = iVar9;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&puStack_2,this,(MethodInfo *)0x0);
  iStack_3 = pDVar1->flags;
  iStack_4 = pDVar1->hi;
  iStack_5 = pDVar1->lo;
  iStack_6 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar7 = mscorlib.dll::System::Decimal::Decimal_ToString((Decimal *)&iStack_3,(MethodInfo *)0x0);
  return pSVar7;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_1(ObscuredDecimal *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffdc,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar6 = mscorlib.dll::System::Decimal::Decimal_ToString_1
                     ((Decimal *)&iStack_2,format,(MethodInfo *)0x0);
  return pSVar6;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_2
                   (ObscuredDecimal *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffdc,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar6 = mscorlib.dll::System::Decimal::Decimal_ToString_2
                     ((Decimal *)&iStack_2,provider,(MethodInfo *)0x0);
  return pSVar6;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_3
                   (ObscuredDecimal *this,String *format,IFormatProvider *provider,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&stack0xffffffdc,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar6 = mscorlib.dll::System::Decimal::Decimal_ToString_3
                     ((Decimal *)&iStack_2,format,provider,(MethodInfo *)0x0);
  return pSVar6;
}


/* ObscuredDecimal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredDecimal(ACTkByte16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__ctor(ObscuredDecimal *this,ACTkByte16 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  iVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  *(undefined4 *)((int)&this->currentCryptoKey + 4) =
       *(undefined4 *)
        ((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
               cryptoKey + 4);
  *(int *)&this->currentCryptoKey = (int)iVar1;
  (this->hiddenValue).b1 = value.b1;
  (this->hiddenValue).b2 = value.b2;
  (this->hiddenValue).b3 = value.b3;
  (this->hiddenValue).b4 = value.b4;
  (this->hiddenValue).b5 = value.b5;
  (this->hiddenValue).b6 = value.b6;
  (this->hiddenValue).b7 = value.b7;
  (this->hiddenValue).b8 = value.b8;
  (this->hiddenValue).b9 = value.b9;
  (this->hiddenValue).b10 = value.b10;
  (this->hiddenValue).b11 = value.b11;
  (this->hiddenValue).b12 = value.b12;
  (this->hiddenValue).b13 = value.b13;
  (this->hiddenValue).b14 = value.b14;
  (this->hiddenValue).b15 = value.b15;
  (this->hiddenValue).b16 = value.b16;
  this->hiddenValueOld = (Byte__Array *)0x0;
  func_?(&this->hiddenValueOld,0);
  (this->fakeValue).flags = 0;
  (this->fakeValue).hi = 0;
  (this->fakeValue).lo = 0;
  (this->fakeValue).mid = 0;
  *(undefined1 *)&(this->fakeValue).ulomidLE = 1;
  return;
}


/* ObscuredDecimal op_Decrement(ObscuredDecimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Decrement
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt
                     ((Decimal *)&stack0xffffffec,(ObscuredDecimal *)&stack0x00000008,
                      (MethodInfo *)0x0);
  iVar2 = pDVar1->flags;
  iVar3 = pDVar1->hi;
  iVar4 = pDVar1->lo;
  method_00 = (MethodInfo *)pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar5 = TypeInfo__System__Decimal->static_fields;
  d1.hi = iVar4;
  d1.flags = iVar3;
  d1.lo = (int32_t)method_00;
  d1.mid = (int)(pDVar5->Zero).ulomidLE;
  d1.ulomidLE._0_4_ = *(undefined4 *)((int)&(pDVar5->Zero).ulomidLE + 4);
  d1.ulomidLE._4_4_ = (pDVar5->One).flags;
  d2.hi = 0;
  d2.flags = (pDVar5->One).hi;
  d2.lo = in_stack_6;
  d2.mid = iVar2;
  d2.ulomidLE._0_4_ = iVar3;
  d2.ulomidLE._4_4_ = iVar4;
  pDVar1 = mscorlib.dll::System::Decimal::Decimal_op_Subtraction
                     ((Decimal *)&stack0xffffffdc,d1,d2,method_00);
  input.hiddenValue.b9 = 0;
  input.hiddenValue.b10 = 0;
  input.hiddenValue.b11 = 0;
  input.hiddenValue.b12 = 0;
  input.hiddenValue.b5 = (uint8_t)input.currentCryptoKey;
  input.hiddenValue.b6 = input.currentCryptoKey._1_1_;
  input.hiddenValue.b7 = input.currentCryptoKey._2_1_;
  input.hiddenValue.b8 = input.currentCryptoKey._3_1_;
  input.hiddenValue.b1 = uStack7;
  input.hiddenValue.b2 = uStack8;
  input.hiddenValue.b3 = uStack9;
  input.hiddenValue.b4 = uStack10;
  input.currentCryptoKey._4_4_ = pDVar1->lo;
  input.hiddenValueOld = (Byte__Array *)pDVar1->mid;
  uVar11 = pDVar1->hi;
  uVar12 = pDVar1->lo;
  uVar13 = pDVar1->mid;
  value.lo = uVar13;
  value.hi = uVar12;
  value.flags = uVar11;
  value.mid._0_1_ = uStack7;
  value.mid._1_1_ = uStack8;
  value.mid._2_1_ = uStack9;
  value.mid._3_1_ = uStack10;
  value.ulomidLE._0_1_ = (uint8_t)input.currentCryptoKey;
  value.ulomidLE._1_1_ = input.currentCryptoKey._1_1_;
  value.ulomidLE._2_1_ = input.currentCryptoKey._2_1_;
  value.ulomidLE._3_1_ = input.currentCryptoKey._3_1_;
  value.ulomidLE._4_4_ = 0;
  _uStack00000008 = pDVar1->flags;
  input.currentCryptoKey._0_4_ = pDVar1->hi;
  pAVar14 = ObscuredDecimal_InternalEncrypt_1
                     ((ACTkByte16 *)&stack0xffffffdc,value,
                      CONCAT44(input._28_4_,input.hiddenValue._12_4_),
                      (MethodInfo *)input.fakeValue.flags);
  input.fakeValue.flags = 0;
  input.hiddenValueOld = *(Byte__Array **)pAVar14;
  input.hiddenValue.b1 = pAVar14->b5;
  input.hiddenValue.b2 = pAVar14->b6;
  input.hiddenValue.b3 = pAVar14->b7;
  input.hiddenValue.b4 = pAVar14->b8;
  input.hiddenValue.b5 = pAVar14->b9;
  input.hiddenValue.b6 = pAVar14->b10;
  input.hiddenValue.b7 = pAVar14->b11;
  input.hiddenValue.b8 = pAVar14->b12;
  input.hiddenValue.b9 = pAVar14->b13;
  input.hiddenValue.b10 = pAVar14->b14;
  input.hiddenValue.b11 = pAVar14->b15;
  input.hiddenValue.b12 = pAVar14->b16;
  input._28_4_ = &UNK_?;
  Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  return (ObscuredDecimal *)&stack0xffffffdc;
}


/* ObscuredDecimal op_Explicit(ObscuredFloat) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Explicit
          (ObscuredDecimal *__return_storage_ptr__,ObscuredFloat f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  bStack_1 = f.inited;
  uStack_2 = f._17_3_;
  auStack_3._0_4_ = f.currentCryptoKey;
  auStack_3[4] = f.hiddenValue.b1;
  auStack_3[5] = f.hiddenValue.b2;
  auStack_3[6] = f.hiddenValue.b3;
  auStack_3[7] = f.hiddenValue.b4;
  pBStack_4 = f.hiddenValueOld;
  fStack_5 = f.fakeValue;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  f._16_4_ = ObscuredFloat::ObscuredFloat_InternalDecrypt
                       ((ObscuredFloat *)auStack_3,(MethodInfo *)0x0);
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar6 = mscorlib.dll::System::Decimal::Decimal_op_Explicit
                     ((Decimal *)&f.hiddenValue,(float)f._16_4_,(MethodInfo *)0x0);
  f.hiddenValue = (ACTkByte4)pDVar6->flags;
  f.hiddenValueOld = (Byte__Array *)pDVar6->hi;
  f.fakeValue = (float)pDVar6->lo;
  f._16_4_ = pDVar6->mid;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uVar7 = 0;
  value.hi = (int32_t)f.fakeValue;
  value.flags = (int32_t)f.hiddenValueOld;
  value.lo = f._16_4_;
  value.mid = 0;
  value.ulomidLE._0_4_ = in_stack_8;
  value.ulomidLE._4_4_ = in_stack_9;
  AVar10 = f.hiddenValue;
  pBVar11 = f.hiddenValueOld;
  pBVar12 = (Byte__Array *)f.fakeValue;
  uVar13 = f._16_4_;
  pAVar14 = ObscuredDecimal_InternalEncrypt((ACTkByte16 *)(auStack_3 + 4),value,in_stack_15);
  pBVar16 = *(Byte__Array **)pAVar14;
  fVar17 = *(float *)&pAVar14->b5;
  uVar18._0_1_ = pAVar14->b9;
  uVar18._1_1_ = pAVar14->b10;
  uVar18._2_1_ = pAVar14->b11;
  uVar18._3_1_ = pAVar14->b12;
  this = (ACTkByte4)&stack0xffffffb0;
  puVar19 = &UNK_?;
  ObscuredDecimal__ctor((ObscuredDecimal *)this,*pAVar14,(MethodInfo *)0x0);
  uVar20 = 0;
  puVar21 = &UNK_?;
  bVar22 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar22 == 0) {
    f.hiddenValue = this;
    f.hiddenValueOld = pBVar16;
    f.fakeValue = fVar17;
    f._16_4_ = uVar18;
  }
  *(ACTkByte4 *)&__return_storage_ptr__->currentCryptoKey = AVar10;
  *(Byte__Array **)((int)&__return_storage_ptr__->currentCryptoKey + 4) = pBVar11;
  __return_storage_ptr__->hiddenValueOld = pBVar12;
  (__return_storage_ptr__->hiddenValue).b1 = (bool)uVar13;
  (__return_storage_ptr__->hiddenValue).b2 = SUB41(uVar13,1);
  (__return_storage_ptr__->hiddenValue).b3 = SUB41(uVar13,2);
  (__return_storage_ptr__->hiddenValue).b4 = SUB41(uVar13,3);
  (__return_storage_ptr__->hiddenValue).b5 = (char)uVar7;
  (__return_storage_ptr__->hiddenValue).b6 = (char)((uint)uVar7 >> 8);
  (__return_storage_ptr__->hiddenValue).b7 = (char)((uint)uVar7 >> 0x10);
  (__return_storage_ptr__->hiddenValue).b8 = (char)((uint)uVar7 >> 0x18);
  (__return_storage_ptr__->hiddenValue).b9 = (char)in_stack_8;
  (__return_storage_ptr__->hiddenValue).b10 = (char)((uint)in_stack_8 >> 8);
  (__return_storage_ptr__->hiddenValue).b11 = (char)((uint)in_stack_8 >> 0x10);
  (__return_storage_ptr__->hiddenValue).b12 = (char)((uint)in_stack_8 >> 0x18);
  (__return_storage_ptr__->hiddenValue).b13 = (char)in_stack_9;
  (__return_storage_ptr__->hiddenValue).b14 = (char)((uint)in_stack_9 >> 8);
  (__return_storage_ptr__->hiddenValue).b15 = (char)((uint)in_stack_9 >> 0x10);
  (__return_storage_ptr__->hiddenValue).b16 = (char)((uint)in_stack_9 >> 0x18);
  *(undefined **)&__return_storage_ptr__->field_0x1c = puVar19;
  (__return_storage_ptr__->fakeValue).flags = (int32_t)f.hiddenValue;
  (__return_storage_ptr__->fakeValue).hi = (int32_t)f.hiddenValueOld;
  (__return_storage_ptr__->fakeValue).lo = (int32_t)f.fakeValue;
  (__return_storage_ptr__->fakeValue).mid = f._16_4_;
  (__return_storage_ptr__->fakeValue).ulomidLE = CONCAT44(uVar20,puVar21);
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Implicit(Decimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Implicit
          (ObscuredDecimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  func_?(__return_storage_ptr__,0,0x38);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  auVar1 = value._0_12_;
  value_00.mid = 0;
  value_00.flags = auVar1._0_4_;
  value_00.hi = auVar1._4_4_;
  value_00.lo = auVar1._8_4_;
  value_00.ulomidLE._0_4_ = unaff_ESI;
  value_00.ulomidLE._4_1_ = (uint8_t)in_stack_2;
  value_00.ulomidLE._5_1_ = SUB41(in_stack_2,1);
  value_00.ulomidLE._6_1_ = SUB41(in_stack_2,2);
  value_00.ulomidLE._7_1_ = SUB41(in_stack_2,3);
  pAVar3 = ObscuredDecimal_InternalEncrypt
                     ((ACTkByte16 *)&stack0xffffffec,value_00,in_stack_4);
  ObscuredDecimal__ctor(__return_storage_ptr__,*pAVar3,(MethodInfo *)0x0);
  iVar5 = 0;
  bVar6 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar6 != 0) {
    (__return_storage_ptr__->fakeValue).flags = iVar5;
    (__return_storage_ptr__->fakeValue).hi = value.flags;
    (__return_storage_ptr__->fakeValue).lo = value.hi;
    (__return_storage_ptr__->fakeValue).mid = value.lo;
  }
  return __return_storage_ptr__;
}


/* Decimal op_Implicit(ObscuredDecimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_op_Implicit_1
                    (Decimal *__return_storage_ptr__,ObscuredDecimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt
                     ((Decimal *)&stack0xffffffec,(ObscuredDecimal *)&stack0x00000008,
                      (MethodInfo *)0x0);
  iVar2 = pDVar1->hi;
  iVar3 = pDVar1->lo;
  iVar4 = pDVar1->mid;
  __return_storage_ptr__->flags = pDVar1->flags;
  __return_storage_ptr__->hi = iVar2;
  __return_storage_ptr__->lo = iVar3;
  __return_storage_ptr__->mid = iVar4;
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Increment(ObscuredDecimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Increment
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt
                     ((Decimal *)&stack0xffffffec,(ObscuredDecimal *)&stack0x00000008,
                      (MethodInfo *)0x0);
  iVar2 = pDVar1->flags;
  iVar3 = pDVar1->hi;
  iVar4 = pDVar1->lo;
  method_00 = (MethodInfo *)pDVar1->mid;
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar5 = TypeInfo__System__Decimal->static_fields;
  d1.hi = iVar4;
  d1.flags = iVar3;
  d1.lo = (int32_t)method_00;
  d1.mid = (int)(pDVar5->Zero).ulomidLE;
  d1.ulomidLE._0_4_ = *(undefined4 *)((int)&(pDVar5->Zero).ulomidLE + 4);
  d1.ulomidLE._4_4_ = (pDVar5->One).flags;
  d2.hi = 0;
  d2.flags = (pDVar5->One).hi;
  d2.lo = in_stack_6;
  d2.mid = iVar2;
  d2.ulomidLE._0_4_ = iVar3;
  d2.ulomidLE._4_4_ = iVar4;
  pDVar1 = mscorlib.dll::System::Decimal::Decimal_op_Addition
                     ((Decimal *)&stack0xffffffdc,d1,d2,method_00);
  input.hiddenValue.b9 = 0;
  input.hiddenValue.b10 = 0;
  input.hiddenValue.b11 = 0;
  input.hiddenValue.b12 = 0;
  input.hiddenValue.b5 = (uint8_t)input.currentCryptoKey;
  input.hiddenValue.b6 = input.currentCryptoKey._1_1_;
  input.hiddenValue.b7 = input.currentCryptoKey._2_1_;
  input.hiddenValue.b8 = input.currentCryptoKey._3_1_;
  input.hiddenValue.b1 = uStack7;
  input.hiddenValue.b2 = uStack8;
  input.hiddenValue.b3 = uStack9;
  input.hiddenValue.b4 = uStack10;
  input.currentCryptoKey._4_4_ = pDVar1->lo;
  input.hiddenValueOld = (Byte__Array *)pDVar1->mid;
  uVar11 = pDVar1->hi;
  uVar12 = pDVar1->lo;
  uVar13 = pDVar1->mid;
  value.lo = uVar13;
  value.hi = uVar12;
  value.flags = uVar11;
  value.mid._0_1_ = uStack7;
  value.mid._1_1_ = uStack8;
  value.mid._2_1_ = uStack9;
  value.mid._3_1_ = uStack10;
  value.ulomidLE._0_1_ = (uint8_t)input.currentCryptoKey;
  value.ulomidLE._1_1_ = input.currentCryptoKey._1_1_;
  value.ulomidLE._2_1_ = input.currentCryptoKey._2_1_;
  value.ulomidLE._3_1_ = input.currentCryptoKey._3_1_;
  value.ulomidLE._4_4_ = 0;
  _uStack00000008 = pDVar1->flags;
  input.currentCryptoKey._0_4_ = pDVar1->hi;
  pAVar14 = ObscuredDecimal_InternalEncrypt_1
                     ((ACTkByte16 *)&stack0xffffffdc,value,
                      CONCAT44(input._28_4_,input.hiddenValue._12_4_),
                      (MethodInfo *)input.fakeValue.flags);
  input.fakeValue.flags = 0;
  input.hiddenValueOld = *(Byte__Array **)pAVar14;
  input.hiddenValue.b1 = pAVar14->b5;
  input.hiddenValue.b2 = pAVar14->b6;
  input.hiddenValue.b3 = pAVar14->b7;
  input.hiddenValue.b4 = pAVar14->b8;
  input.hiddenValue.b5 = pAVar14->b9;
  input.hiddenValue.b6 = pAVar14->b10;
  input.hiddenValue.b7 = pAVar14->b11;
  input.hiddenValue.b8 = pAVar14->b12;
  input.hiddenValue.b9 = pAVar14->b13;
  input.hiddenValue.b10 = pAVar14->b14;
  input.hiddenValue.b11 = pAVar14->b15;
  input.hiddenValue.b12 = pAVar14->b16;
  input._28_4_ = &UNK_?;
  Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  return (ObscuredDecimal *)&stack0xffffffdc;
}

