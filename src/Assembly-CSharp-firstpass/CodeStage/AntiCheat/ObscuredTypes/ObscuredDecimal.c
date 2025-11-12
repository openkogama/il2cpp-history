
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_ApplyNewCryptoKey(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = this->currentCryptoKey;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (lVar1 != TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
               cryptoKey) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pDVar2 = ObscuredDecimal_InternalDecrypt(&DStack_3,this,(MethodInfo *)0x0);
    uVar4._0_4_ = pDVar2->flags;
    uVar4._4_4_ = pDVar2->hi;
    uVar5._0_4_ = pDVar2->lo;
    uVar5._4_4_ = pDVar2->mid;
    uVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey
    ;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (uVar6 == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      uVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
              cryptoKey;
    }
    uVar4 = uVar4 ^ uVar6;
    uVar5 = uVar5 ^ uVar6;
    (this->hiddenValue).b1 = (char)uVar4;
    (this->hiddenValue).b2 = (char)(uVar4 >> 8);
    (this->hiddenValue).b3 = (char)(uVar4 >> 0x10);
    (this->hiddenValue).b4 = (char)(uVar4 >> 0x18);
    (this->hiddenValue).b5 = (char)(uVar4 >> 0x20);
    (this->hiddenValue).b6 = (char)(uVar4 >> 0x28);
    (this->hiddenValue).b7 = (char)(uVar4 >> 0x30);
    (this->hiddenValue).b8 = (char)(uVar4 >> 0x38);
    (this->hiddenValue).b9 = (char)uVar5;
    (this->hiddenValue).b10 = (char)(uVar5 >> 8);
    (this->hiddenValue).b11 = (char)(uVar5 >> 0x10);
    (this->hiddenValue).b12 = (char)(uVar5 >> 0x18);
    (this->hiddenValue).b13 = (char)(uVar5 >> 0x20);
    (this->hiddenValue).b14 = (char)(uVar5 >> 0x28);
    (this->hiddenValue).b15 = (char)(uVar5 >> 0x30);
    (this->hiddenValue).b16 = (char)(uVar5 >> 0x38);
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  }
  return;
}


/* Decimal Decrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt(Decimal *__return_storage_ptr__,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1._0_4_ = value->flags;
  uVar1._4_4_ = value->hi;
  uVar2._0_4_ = value->lo;
  uVar2._4_4_ = value->mid;
  uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar3;
  __return_storage_ptr__->flags = (int)uVar1;
  __return_storage_ptr__->hi = (int)(uVar1 >> 0x20);
  __return_storage_ptr__->lo = (int)uVar2;
  __return_storage_ptr__->mid = (int)(uVar2 >> 0x20);
  return __return_storage_ptr__;
}


/* Decimal Decrypt(Decimal, Int64) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt_1
                    (Decimal *__return_storage_ptr__,Decimal *value,int64_t key,MethodInfo *method)

{
  uVar1._0_4_ = value->flags;
  uVar1._4_4_ = value->hi;
  uVar2._0_4_ = value->lo;
  uVar2._4_4_ = value->mid;
  __return_storage_ptr__->flags = (int)(uVar1 ^ key);
  __return_storage_ptr__->hi = (int)((uVar1 ^ key) >> 0x20);
  __return_storage_ptr__->lo = (int)(uVar2 ^ key);
  __return_storage_ptr__->mid = (int)((uVar2 ^ key) >> 0x20);
  return __return_storage_ptr__;
}


/* Decimal Encrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Encrypt(Decimal *__return_storage_ptr__,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1._0_4_ = value->flags;
  uVar1._4_4_ = value->hi;
  uVar2._0_4_ = value->lo;
  uVar2._4_4_ = value->mid;
  uVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar3;
  __return_storage_ptr__->flags = (int)uVar1;
  __return_storage_ptr__->hi = (int)(uVar1 >> 0x20);
  __return_storage_ptr__->lo = (int)uVar2;
  __return_storage_ptr__->mid = (int)(uVar2 >> 0x20);
  return __return_storage_ptr__;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals(ObscuredDecimal *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDecimal__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c
          == 0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      }
      if ((obj->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_0).element_class) {
        auStack_2._0_8_ = obj[1].klass;
        auStack_2._8_8_ = obj[1].monitor;
        auStack_2._16_8_ = obj[2].klass;
        pMStack_3 = obj[2].monitor;
        pOStack_4 = obj[3].klass;
        pMStack_5 = obj[3].monitor;
        pOStack_6 = obj[4].klass;
        bVar7 = ObscuredDecimal_Equals_1(this,(ObscuredDecimal *)auStack_2,(MethodInfo *)0x0);
        return bVar7;
      }
      FUN_?(obj);
      pcVar8 = (code *)swi(3);
      bVar7 = (*pcVar8)();
      return bVar7;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredDecimal) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals_1(ObscuredDecimal *this,ObscuredDecimal *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)(auStack_2 + 0x10),obj,(MethodInfo *)0x0);
  auStack_2._16_4_ = pDVar1->flags;
  auStack_2._20_4_ = pDVar1->hi;
  uStack_3._0_4_ = pDVar1->lo;
  uStack_3._4_4_ = pDVar1->mid;
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)auStack_2,this,(MethodInfo *)0x0);
  auStack_2._0_4_ = pDVar1->flags;
  auStack_2._4_4_ = pDVar1->hi;
  auStack_2._8_4_ = pDVar1->lo;
  auStack_2._12_4_ = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal__DecCalc);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_VarDecCmp
                    ((Decimal *)(auStack_2 + 0x10),(Decimal *)auStack_2,(MethodInfo *)0x0);
  return iVar4 == 0;
}


/* Decimal GetDecrypted() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_GetDecrypted
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt
                     ((Decimal *)&stack0xffffffffffffffe8,this,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  ObscuredDecimal_ApplyNewCryptoKey(this,(MethodInfo *)0x0);
  uVar1._0_1_ = (this->hiddenValue).b1;
  uVar1._1_1_ = (this->hiddenValue).b2;
  uVar1._2_1_ = (this->hiddenValue).b3;
  uVar1._3_1_ = (this->hiddenValue).b4;
  uVar1._4_1_ = (this->hiddenValue).b5;
  uVar1._5_1_ = (this->hiddenValue).b6;
  uVar1._6_1_ = (this->hiddenValue).b7;
  uVar1._7_1_ = (this->hiddenValue).b8;
  uVar2._0_1_ = (this->hiddenValue).b9;
  uVar2._1_1_ = (this->hiddenValue).b10;
  uVar2._2_1_ = (this->hiddenValue).b11;
  uVar2._3_1_ = (this->hiddenValue).b12;
  uVar2._4_1_ = (this->hiddenValue).b13;
  uVar2._5_1_ = (this->hiddenValue).b14;
  uVar2._6_1_ = (this->hiddenValue).b15;
  uVar2._7_1_ = (this->hiddenValue).b16;
  __return_storage_ptr__->flags = (int)uVar1;
  __return_storage_ptr__->hi = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->lo = (int)uVar2;
  __return_storage_ptr__->mid = (int)((ulonglong)uVar2 >> 0x20);
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
        ObscuredDecimal_GetHashCode(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&iStack_2,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = mscorlib.dll::System::Decimal::Decimal_GetHashCode
                    ((Decimal *)&iStack_2,(MethodInfo *)0x0);
  return iVar6;
}


/* Decimal InternalDecrypt() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_InternalDecrypt
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (this->fakeValue).ulomidLE;
  __return_storage_ptr__->flags = 0;
  __return_storage_ptr__->hi = 0;
  __return_storage_ptr__->lo = 0;
  __return_storage_ptr__->mid = 0;
  if ((char)uVar1 == '\0') {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    this->currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__Decimal);
    }
    pDVar2 = TypeInfo__System__Decimal->static_fields;
    uVar3._0_4_ = (pDVar2->Zero).flags;
    uVar3._4_4_ = (pDVar2->Zero).hi;
    uVar4._0_4_ = (pDVar2->Zero).lo;
    uVar4._4_4_ = (pDVar2->Zero).mid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    uVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey
    ;
    uVar3 = uVar5 ^ uVar3;
    uVar4 = uVar4 ^ uVar5;
    (this->hiddenValue).b1 = (char)uVar3;
    (this->hiddenValue).b2 = (char)(uVar3 >> 8);
    (this->hiddenValue).b3 = (char)(uVar3 >> 0x10);
    (this->hiddenValue).b4 = (char)(uVar3 >> 0x18);
    (this->hiddenValue).b5 = (char)(uVar3 >> 0x20);
    (this->hiddenValue).b6 = (char)(uVar3 >> 0x28);
    (this->hiddenValue).b7 = (char)(uVar3 >> 0x30);
    (this->hiddenValue).b8 = (char)(uVar3 >> 0x38);
    (this->hiddenValue).b9 = (char)uVar4;
    (this->hiddenValue).b10 = (char)(uVar4 >> 8);
    (this->hiddenValue).b11 = (char)(uVar4 >> 0x10);
    (this->hiddenValue).b12 = (char)(uVar4 >> 0x18);
    (this->hiddenValue).b13 = (char)(uVar4 >> 0x20);
    (this->hiddenValue).b14 = (char)(uVar4 >> 0x28);
    (this->hiddenValue).b15 = (char)(uVar4 >> 0x30);
    (this->hiddenValue).b16 = (char)(uVar4 >> 0x38);
    (this->fakeValue).flags = 0;
    (this->fakeValue).hi = 0;
    (this->fakeValue).lo = 0;
    (this->fakeValue).mid = 0;
    *(undefined1 *)&(this->fakeValue).ulomidLE = 1;
  }
  uVar5._0_1_ = (this->hiddenValue).b1;
  uVar5._1_1_ = (this->hiddenValue).b2;
  uVar5._2_1_ = (this->hiddenValue).b3;
  uVar5._3_1_ = (this->hiddenValue).b4;
  uVar5._4_1_ = (this->hiddenValue).b5;
  uVar5._5_1_ = (this->hiddenValue).b6;
  uVar5._6_1_ = (this->hiddenValue).b7;
  uVar5._7_1_ = (this->hiddenValue).b8;
  uVar6._0_1_ = (this->hiddenValue).b9;
  uVar6._1_1_ = (this->hiddenValue).b10;
  uVar6._2_1_ = (this->hiddenValue).b11;
  uVar6._3_1_ = (this->hiddenValue).b12;
  uVar6._4_1_ = (this->hiddenValue).b13;
  uVar6._5_1_ = (this->hiddenValue).b14;
  uVar6._6_1_ = (this->hiddenValue).b15;
  uVar6._7_1_ = (this->hiddenValue).b16;
  auStack_7._0_8_ = uVar5 ^ this->currentCryptoKey;
  auStack_7._8_8_ = uVar6 ^ this->currentCryptoKey;
  __return_storage_ptr__->flags = (int)auStack_7._0_8_;
  __return_storage_ptr__->hi = (int)((ulonglong)auStack_7._0_8_ >> 0x20);
  __return_storage_ptr__->lo = (int)auStack_7._8_8_;
  __return_storage_ptr__->mid = (int)((ulonglong)auStack_7._8_8_ >> 0x20);
  bVar8 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar8 != 0) {
    uVar1._0_4_ = (this->fakeValue).flags;
    uVar1._4_4_ = (this->fakeValue).hi;
    uVar9._0_4_ = (this->fakeValue).lo;
    uVar9._4_4_ = (this->fakeValue).mid;
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__Decimal);
    }
    pDVar2 = TypeInfo__System__Decimal->static_fields;
    auStack_7._0_4_ = (pDVar2->Zero).flags;
    auStack_7._4_4_ = (pDVar2->Zero).hi;
    auStack_7._8_4_ = (pDVar2->Zero).lo;
    auStack_7._12_4_ = (pDVar2->Zero).mid;
    auStack_7._16_8_ = uVar1;
    uStack_10 = uVar9;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Decimal__DecCalc);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar11 = mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_VarDecCmp
                       ((Decimal *)(auStack_7 + 0x10),(Decimal *)auStack_7,(MethodInfo *)0x0);
    if (iVar11 != 0) {
      uVar12._0_4_ = __return_storage_ptr__->flags;
      uVar12._4_4_ = __return_storage_ptr__->hi;
      uVar13._0_4_ = __return_storage_ptr__->lo;
      uVar13._4_4_ = __return_storage_ptr__->mid;
      uVar14._0_4_ = (this->fakeValue).flags;
      uVar14._4_4_ = (this->fakeValue).hi;
      uVar15._0_4_ = (this->fakeValue).lo;
      uVar15._4_4_ = (this->fakeValue).mid;
      if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_7._0_8_ = uVar12;
      auStack_7._8_8_ = uVar13;
      auStack_7._16_8_ = uVar14;
      uStack_10 = uVar15;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Decimal__DecCalc);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar11 = mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_VarDecCmp
                         ((Decimal *)auStack_7,(Decimal *)(auStack_7 + 0x10),(MethodInfo *)0x0);
      if (iVar11 != 0) {
        plVar16 = (longlong *)FUN_?();
        if (plVar16 == (longlong *)0x0) {
          FUN_?();
          pcVar17 = (code *)swi(3);
          pDVar18 = (Decimal *)(*pcVar17)();
          return pDVar18;
        }
        (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      }
    }
  }
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt
          (ACTkByte16 *__return_storage_ptr__,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  uVar2._0_4_ = value->flags;
  uVar2._4_4_ = value->hi;
  uVar3._0_4_ = value->lo;
  uVar3._4_4_ = value->mid;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1;
  __return_storage_ptr__->b1 = (char)uVar2;
  __return_storage_ptr__->b2 = (char)(uVar2 >> 8);
  __return_storage_ptr__->b3 = (char)(uVar2 >> 0x10);
  __return_storage_ptr__->b4 = (char)(uVar2 >> 0x18);
  __return_storage_ptr__->b5 = (char)(uVar2 >> 0x20);
  __return_storage_ptr__->b6 = (char)(uVar2 >> 0x28);
  __return_storage_ptr__->b7 = (char)(uVar2 >> 0x30);
  __return_storage_ptr__->b8 = (char)(uVar2 >> 0x38);
  __return_storage_ptr__->b9 = (char)uVar3;
  __return_storage_ptr__->b10 = (char)(uVar3 >> 8);
  __return_storage_ptr__->b11 = (char)(uVar3 >> 0x10);
  __return_storage_ptr__->b12 = (char)(uVar3 >> 0x18);
  __return_storage_ptr__->b13 = (char)(uVar3 >> 0x20);
  __return_storage_ptr__->b14 = (char)(uVar3 >> 0x28);
  __return_storage_ptr__->b15 = (char)(uVar3 >> 0x30);
  __return_storage_ptr__->b16 = (char)(uVar3 >> 0x38);
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal, Int64) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt_1
          (ACTkByte16 *__return_storage_ptr__,Decimal *value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  }
  uVar1._0_4_ = value->flags;
  uVar1._4_4_ = value->hi;
  uVar2._0_4_ = value->lo;
  uVar2._4_4_ = value->mid;
  uVar1 = uVar1 ^ key;
  uVar2 = uVar2 ^ key;
  __return_storage_ptr__->b1 = (char)uVar1;
  __return_storage_ptr__->b2 = (char)(uVar1 >> 8);
  __return_storage_ptr__->b3 = (char)(uVar1 >> 0x10);
  __return_storage_ptr__->b4 = (char)(uVar1 >> 0x18);
  __return_storage_ptr__->b5 = (char)(uVar1 >> 0x20);
  __return_storage_ptr__->b6 = (char)(uVar1 >> 0x28);
  __return_storage_ptr__->b7 = (char)(uVar1 >> 0x30);
  __return_storage_ptr__->b8 = (char)(uVar1 >> 0x38);
  __return_storage_ptr__->b9 = (char)uVar2;
  __return_storage_ptr__->b10 = (char)(uVar2 >> 8);
  __return_storage_ptr__->b11 = (char)(uVar2 >> 0x10);
  __return_storage_ptr__->b12 = (char)(uVar2 >> 0x18);
  __return_storage_ptr__->b13 = (char)(uVar2 >> 0x20);
  __return_storage_ptr__->b14 = (char)(uVar2 >> 0x28);
  __return_storage_ptr__->b15 = (char)(uVar2 >> 0x30);
  __return_storage_ptr__->b16 = (char)(uVar2 >> 0x38);
  return __return_storage_ptr__;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_RandomizeCryptoKey(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt(&DStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pDVar1->flags;
  uVar3._4_4_ = pDVar1->hi;
  uVar4._0_4_ = pDVar1->lo;
  uVar4._4_4_ = pDVar1->mid;
  while ((pcVar5 = pcRam_?, pcRam_? != (code *)0x0 ||
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 != (code *)0x0))) {
    pcRam_? = pcVar5;
    iVar6 = (*pcRam_?)(0x80000000);
    uVar7 = (ulonglong)iVar6;
    this->currentCryptoKey = uVar7;
    if (iVar6 != 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c
          == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar3 = uVar3 ^ uVar7;
      uVar4 = uVar4 ^ uVar7;
      (this->hiddenValue).b1 = (char)uVar3;
      (this->hiddenValue).b2 = (char)(uVar3 >> 8);
      (this->hiddenValue).b3 = (char)(uVar3 >> 0x10);
      (this->hiddenValue).b4 = (char)(uVar3 >> 0x18);
      (this->hiddenValue).b5 = (char)(uVar3 >> 0x20);
      (this->hiddenValue).b6 = (char)(uVar3 >> 0x28);
      (this->hiddenValue).b7 = (char)(uVar3 >> 0x30);
      (this->hiddenValue).b8 = (char)(uVar3 >> 0x38);
      (this->hiddenValue).b9 = (char)uVar4;
      (this->hiddenValue).b10 = (char)(uVar4 >> 8);
      (this->hiddenValue).b11 = (char)(uVar4 >> 0x10);
      (this->hiddenValue).b12 = (char)(uVar4 >> 0x18);
      (this->hiddenValue).b13 = (char)(uVar4 >> 0x20);
      (this->hiddenValue).b14 = (char)(uVar4 >> 0x28);
      (this->hiddenValue).b15 = (char)(uVar4 >> 0x30);
      (this->hiddenValue).b16 = (char)(uVar4 >> 0x38);
      return;
    }
  }
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8,0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetEncrypted(Decimal) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetEncrypted(ObscuredDecimal *this,Decimal *encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = encrypted->flags;
  uVar1._4_4_ = encrypted->hi;
  uVar2._0_4_ = encrypted->lo;
  uVar2._4_4_ = encrypted->mid;
  *(undefined1 *)&(this->fakeValue).ulomidLE = 1;
  (this->hiddenValue).b1 = (char)(undefined4)uVar1;
  (this->hiddenValue).b2 = (char)((ulonglong)uVar1 >> 8);
  (this->hiddenValue).b3 = (char)((ulonglong)uVar1 >> 0x10);
  (this->hiddenValue).b4 = (char)((ulonglong)uVar1 >> 0x18);
  (this->hiddenValue).b5 = (char)((ulonglong)uVar1 >> 0x20);
  (this->hiddenValue).b6 = (char)((ulonglong)uVar1 >> 0x28);
  (this->hiddenValue).b7 = (char)((ulonglong)uVar1 >> 0x30);
  (this->hiddenValue).b8 = (char)((ulonglong)uVar1 >> 0x38);
  (this->hiddenValue).b9 = (char)(undefined4)uVar2;
  (this->hiddenValue).b10 = (char)((ulonglong)uVar2 >> 8);
  (this->hiddenValue).b11 = (char)((ulonglong)uVar2 >> 0x10);
  (this->hiddenValue).b12 = (char)((ulonglong)uVar2 >> 0x18);
  (this->hiddenValue).b13 = (char)((ulonglong)uVar2 >> 0x20);
  (this->hiddenValue).b14 = (char)((ulonglong)uVar2 >> 0x28);
  (this->hiddenValue).b15 = (char)((ulonglong)uVar2 >> 0x30);
  (this->hiddenValue).b16 = (char)((ulonglong)uVar2 >> 0x38);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?();
    }
    pDVar4 = ObscuredDecimal_InternalDecrypt
                       ((Decimal *)&stack0xffffffffffffffe8,this,(MethodInfo *)0x0);
    iVar5 = pDVar4->hi;
    iVar6 = pDVar4->lo;
    iVar7 = pDVar4->mid;
    (this->fakeValue).flags = pDVar4->flags;
    (this->fakeValue).hi = iVar5;
    (this->fakeValue).lo = iVar6;
    (this->fakeValue).mid = iVar7;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString(ObscuredDecimal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&iStack_2,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = mscorlib.dll::System::Decimal::Decimal_ToString((Decimal *)&iStack_2,(MethodInfo *)0x0);
  return pSVar6;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_1(ObscuredDecimal *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt(aDStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pDVar1->flags;
  uVar3._4_4_ = pDVar1->hi;
  uVar4._0_4_ = pDVar1->lo;
  uVar4._4_4_ = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar5 = (uint16_t *)0x0;
    iVar6 = 0;
  }
  else {
    RStack_7._pointer._value = &(format->fields)._firstChar;
    RStack_7._12_4_ = 0;
    iVar6 = (format->fields)._stringLength;
    RStack_7._length = iVar6;
    puVar5 = RStack_7._pointer._value;
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._12_4_ = 0;
  RStack_7._pointer._value = puVar5;
  RStack_7._length = iVar6;
  aDStack_2[0]._0_8_ = uVar3;
  aDStack_2[0]._8_8_ = uVar4;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatDecimal
                     (aDStack_2,&RStack_7,info,(MethodInfo *)0x0);
  return pSVar8;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_2
                   (ObscuredDecimal *this,IFormatProvider *provider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)&iStack_2,this,(MethodInfo *)0x0);
  iStack_2 = pDVar1->flags;
  iStack_3 = pDVar1->hi;
  iStack_4 = pDVar1->lo;
  iStack_5 = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt(aDStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pDVar1->flags;
  uVar3._4_4_ = pDVar1->hi;
  uVar4._0_4_ = pDVar1->lo;
  uVar4._4_4_ = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (format == (String *)0x0) {
    puVar5 = (uint16_t *)0x0;
    iVar6 = 0;
  }
  else {
    RStack_7._pointer._value = &(format->fields)._firstChar;
    RStack_7._12_4_ = 0;
    iVar6 = (format->fields)._stringLength;
    RStack_7._length = iVar6;
    puVar5 = RStack_7._pointer._value;
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_GetInstance
                   (provider,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_7._12_4_ = 0;
  RStack_7._pointer._value = puVar5;
  RStack_7._length = iVar6;
  aDStack_2[0]._0_8_ = uVar3;
  aDStack_2[0]._8_8_ = uVar4;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatDecimal
                     (aDStack_2,&RStack_7,info,(MethodInfo *)0x0);
  return pSVar8;
}


/* ObscuredDecimal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
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
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey =
       (longlong)iVar1;
  return;
}


/* ObscuredDecimal(ACTkByte16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__ctor(ObscuredDecimal *this,ACTkByte16 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  bVar1 = iRam_? != 0;
  uVar2 = value->b1;
  uVar3 = value->b2;
  uVar4 = value->b3;
  uVar5 = value->b4;
  uVar6 = value->b5;
  uVar7 = value->b6;
  uVar8 = value->b7;
  uVar9 = value->b8;
  uVar10 = value->b9;
  uVar11 = value->b10;
  uVar12 = value->b11;
  uVar13 = value->b12;
  uVar14 = value->b13;
  uVar15 = value->b14;
  uVar16 = value->b15;
  uVar17 = value->b16;
  this->currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  (this->hiddenValue).b1 = uVar2;
  (this->hiddenValue).b2 = uVar3;
  (this->hiddenValue).b3 = uVar4;
  (this->hiddenValue).b4 = uVar5;
  (this->hiddenValue).b5 = uVar6;
  (this->hiddenValue).b6 = uVar7;
  (this->hiddenValue).b7 = uVar8;
  (this->hiddenValue).b8 = uVar9;
  (this->hiddenValue).b9 = uVar10;
  (this->hiddenValue).b10 = uVar11;
  (this->hiddenValue).b11 = uVar12;
  (this->hiddenValue).b12 = uVar13;
  (this->hiddenValue).b13 = uVar14;
  (this->hiddenValue).b14 = uVar15;
  (this->hiddenValue).b15 = uVar16;
  (this->hiddenValue).b16 = uVar17;
  this->hiddenValueOld = (Byte__Array *)0x0;
  if (bVar1) {
    uVar18 = (uint)((ulonglong)&this->hiddenValueOld >> 0xc);
    puVar19 = (ulonglong *)((ulonglong)((uVar18 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar20 = *puVar19;
      LOCK();
      uVar21 = *puVar19;
      if (uVar20 == uVar21) {
        *puVar19 = uVar20 | 1L << (uVar18 & 0x3f);
      }
      UNLOCK();
    } while (uVar20 != uVar21);
  }
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
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)(auStack_2 + 0x10),input,(MethodInfo *)0x0);
  auStack_2._0_4_ = pDVar1->flags;
  auStack_2._4_4_ = pDVar1->hi;
  auStack_2._8_4_ = pDVar1->lo;
  auStack_2._12_4_ = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar3 = TypeInfo__System__Decimal->static_fields;
  auStack_2._16_4_ = (undefined4)(pDVar3->Zero).ulomidLE;
  uStack_4 = *(undefined4 *)((longlong)&(pDVar3->Zero).ulomidLE + 4);
  iStack_5 = (pDVar3->One).flags;
  iStack_6 = (pDVar3->One).hi;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal__DecCalc);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
    FUN_?();
  }
  mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_DecAddSub
            ((Decimal_DecCalc *)auStack_2,(Decimal_DecCalc *)(auStack_2 + 0x10),1,
             (MethodInfo *)0x0);
  uVar7 = input->currentCryptoKey;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar7 == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    uVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
             cryptoKey;
  }
  uVar8 = auStack_2._8_8_;
  uVar9 = auStack_2._0_8_;
  auStack_2._8_8_ = auStack_2._8_8_ ^ uVar7;
  auStack_2._0_8_ = auStack_2._0_8_ ^ uVar7;
  (input->hiddenValue).b1 = (char)auStack_2._0_8_;
  (input->hiddenValue).b2 = (char)((ulonglong)auStack_2._0_8_ >> 8);
  (input->hiddenValue).b3 = (char)((ulonglong)auStack_2._0_8_ >> 0x10);
  (input->hiddenValue).b4 = (char)((ulonglong)auStack_2._0_8_ >> 0x18);
  (input->hiddenValue).b5 = (char)((ulonglong)auStack_2._0_8_ >> 0x20);
  (input->hiddenValue).b6 = (char)((ulonglong)auStack_2._0_8_ >> 0x28);
  (input->hiddenValue).b7 = (char)((ulonglong)auStack_2._0_8_ >> 0x30);
  (input->hiddenValue).b8 = (char)((ulonglong)auStack_2._0_8_ >> 0x38);
  (input->hiddenValue).b9 = (char)auStack_2._8_8_;
  (input->hiddenValue).b10 = (char)((ulonglong)auStack_2._8_8_ >> 8);
  (input->hiddenValue).b11 = (char)((ulonglong)auStack_2._8_8_ >> 0x10);
  (input->hiddenValue).b12 = (char)((ulonglong)auStack_2._8_8_ >> 0x18);
  (input->hiddenValue).b13 = (char)((ulonglong)auStack_2._8_8_ >> 0x20);
  (input->hiddenValue).b14 = (char)((ulonglong)auStack_2._8_8_ >> 0x28);
  (input->hiddenValue).b15 = (char)((ulonglong)auStack_2._8_8_ >> 0x30);
  (input->hiddenValue).b16 = (char)((ulonglong)auStack_2._8_8_ >> 0x38);
  bVar10 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar10 != 0) {
    auStack_2._0_4_ = (undefined4)uVar9;
    auStack_2._4_4_ = SUB84(uVar9,4);
    (input->fakeValue).flags = auStack_2._0_4_;
    (input->fakeValue).hi = auStack_2._4_4_;
    auStack_2._8_4_ = (undefined4)uVar8;
    auStack_2._12_4_ = SUB84(uVar8,4);
    (input->fakeValue).lo = auStack_2._8_4_;
    (input->fakeValue).mid = auStack_2._12_4_;
  }
  pBVar11 = input->hiddenValueOld;
  uVar12 = (input->hiddenValue).b1;
  uVar13 = (input->hiddenValue).b2;
  uVar14 = (input->hiddenValue).b3;
  uVar15 = (input->hiddenValue).b4;
  uVar16 = (input->hiddenValue).b5;
  uVar17 = (input->hiddenValue).b6;
  uVar18 = (input->hiddenValue).b7;
  uVar19 = (input->hiddenValue).b8;
  uVar20 = (input->hiddenValue).b9;
  uVar21 = (input->hiddenValue).b10;
  uVar22 = (input->hiddenValue).b11;
  uVar23 = (input->hiddenValue).b12;
  uVar24 = (input->hiddenValue).b13;
  uVar25 = (input->hiddenValue).b14;
  uVar26 = (input->hiddenValue).b15;
  uVar27 = (input->hiddenValue).b16;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValueOld = pBVar11;
  iVar28 = (input->fakeValue).flags;
  iVar29 = (input->fakeValue).hi;
  iVar30 = (input->fakeValue).lo;
  iVar31 = (input->fakeValue).mid;
  (__return_storage_ptr__->hiddenValue).b1 = uVar12;
  (__return_storage_ptr__->hiddenValue).b2 = uVar13;
  (__return_storage_ptr__->hiddenValue).b3 = uVar14;
  (__return_storage_ptr__->hiddenValue).b4 = uVar15;
  (__return_storage_ptr__->hiddenValue).b5 = uVar16;
  (__return_storage_ptr__->hiddenValue).b6 = uVar17;
  (__return_storage_ptr__->hiddenValue).b7 = uVar18;
  (__return_storage_ptr__->hiddenValue).b8 = uVar19;
  (__return_storage_ptr__->hiddenValue).b9 = uVar20;
  (__return_storage_ptr__->hiddenValue).b10 = uVar21;
  (__return_storage_ptr__->hiddenValue).b11 = uVar22;
  (__return_storage_ptr__->hiddenValue).b12 = uVar23;
  (__return_storage_ptr__->hiddenValue).b13 = uVar24;
  (__return_storage_ptr__->hiddenValue).b14 = uVar25;
  (__return_storage_ptr__->hiddenValue).b15 = uVar26;
  (__return_storage_ptr__->hiddenValue).b16 = uVar27;
  uVar32 = (input->fakeValue).ulomidLE;
  (__return_storage_ptr__->fakeValue).flags = iVar28;
  (__return_storage_ptr__->fakeValue).hi = iVar29;
  (__return_storage_ptr__->fakeValue).lo = iVar30;
  (__return_storage_ptr__->fakeValue).mid = iVar31;
  (__return_storage_ptr__->fakeValue).ulomidLE = uVar32;
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Explicit(ObscuredFloat) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Explicit
          (ObscuredDecimal *__return_storage_ptr__,ObscuredFloat *f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_1.currentCryptoKey = f->currentCryptoKey;
  OStack_1.hiddenValue.b1 = (f->hiddenValue).b1;
  OStack_1.hiddenValue.b2 = (f->hiddenValue).b2;
  OStack_1.hiddenValue.b3 = (f->hiddenValue).b3;
  OStack_1.hiddenValue.b4 = (f->hiddenValue).b4;
  OStack_1.hiddenValueOld = f->hiddenValueOld;
  OStack_1.fakeValue = f->fakeValue;
  OStack_1.inited = f->inited;
  OStack_1._21_3_ = *(undefined3 *)&f->field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  input = ObscuredFloat::ObscuredFloat_InternalDecrypt(&OStack_1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_2 = (undefined1  [8])0x0;
  pBStack_3 = (Byte__Array *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal__DecCalc);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
    FUN_?();
  }
  mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_VarDecFromR4
            (input,(Decimal_DecCalc *)auStack_2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  pBStack_5 = (Byte__Array *)0x0;
  uStack_6 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  auVar7 = auStack_2;
  uVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  OStack_1.currentCryptoKey = auStack_2._0_4_;
  OStack_1.hiddenValue.b1 = auStack_2[4];
  OStack_1.hiddenValue.b2 = auStack_2[5];
  OStack_1.hiddenValue.b3 = auStack_2[6];
  OStack_1.hiddenValue.b4 = auStack_2[7];
  OStack_1.hiddenValueOld = pBStack_3;
  uVar9 = (ulonglong)pBStack_3 ^
          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  auStack_2 = auVar7;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar10 = pBStack_3;
  auVar11 = auStack_2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  iStack_12 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
              cryptoKey;
  pBStack_13 = (Byte__Array *)0x0;
  if (iRam_? != 0) {
    uVar14 = (uint)((ulonglong)&pBStack_13 >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar18 = uVar16 == *puVar17;
      if (bVar18) {
        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
      auVar11 = auStack_2;
      pBVar10 = pBStack_3;
    } while (!bVar18);
  }
  uStack_6 = CONCAT71(uStack_6._1_7_,1);
  uStack_4 = 0;
  pBStack_5 = (Byte__Array *)0x0;
  uStack_19 = uVar8 ^ (ulonglong)auVar7;
  uStack_20 = uVar9;
  bVar21 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar21 == 0) {
    auVar11 = (undefined1  [8])uStack_4;
    pBVar10 = pBStack_5;
  }
  __return_storage_ptr__->currentCryptoKey = iStack_12;
  __return_storage_ptr__->hiddenValueOld = pBStack_13;
  (__return_storage_ptr__->hiddenValue).b1 = (undefined1)uStack_19;
  (__return_storage_ptr__->hiddenValue).b2 = uStack_19._1_1_;
  (__return_storage_ptr__->hiddenValue).b3 = uStack_19._2_1_;
  (__return_storage_ptr__->hiddenValue).b4 = uStack_19._3_1_;
  (__return_storage_ptr__->hiddenValue).b5 = uStack_19._4_1_;
  (__return_storage_ptr__->hiddenValue).b6 = uStack_19._5_1_;
  (__return_storage_ptr__->hiddenValue).b7 = uStack_19._6_1_;
  (__return_storage_ptr__->hiddenValue).b8 = uStack_19._7_1_;
  (__return_storage_ptr__->hiddenValue).b9 = (undefined1)uStack_20;
  (__return_storage_ptr__->hiddenValue).b10 = uStack_20._1_1_;
  (__return_storage_ptr__->hiddenValue).b11 = uStack_20._2_1_;
  (__return_storage_ptr__->hiddenValue).b12 = uStack_20._3_1_;
  (__return_storage_ptr__->hiddenValue).b13 = uStack_20._4_1_;
  (__return_storage_ptr__->hiddenValue).b14 = uStack_20._5_1_;
  (__return_storage_ptr__->hiddenValue).b15 = uStack_20._6_1_;
  (__return_storage_ptr__->hiddenValue).b16 = uStack_20._7_1_;
  (__return_storage_ptr__->fakeValue).flags = SUB84(auVar11,0);
  (__return_storage_ptr__->fakeValue).hi = (int)((ulonglong)auVar11 >> 0x20);
  *(Byte__Array **)&(__return_storage_ptr__->fakeValue).lo = pBVar10;
  (__return_storage_ptr__->fakeValue).ulomidLE = uStack_6;
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Implicit(Decimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Implicit
          (ObscuredDecimal *__return_storage_ptr__,Decimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->currentCryptoKey = 0;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)0x0;
  (__return_storage_ptr__->hiddenValue).b1 = 0;
  (__return_storage_ptr__->hiddenValue).b2 = 0;
  (__return_storage_ptr__->hiddenValue).b3 = 0;
  (__return_storage_ptr__->hiddenValue).b4 = 0;
  (__return_storage_ptr__->hiddenValue).b5 = 0;
  (__return_storage_ptr__->hiddenValue).b6 = 0;
  (__return_storage_ptr__->hiddenValue).b7 = 0;
  (__return_storage_ptr__->hiddenValue).b8 = 0;
  (__return_storage_ptr__->hiddenValue).b9 = 0;
  (__return_storage_ptr__->hiddenValue).b10 = 0;
  (__return_storage_ptr__->hiddenValue).b11 = 0;
  (__return_storage_ptr__->hiddenValue).b12 = 0;
  (__return_storage_ptr__->hiddenValue).b13 = 0;
  (__return_storage_ptr__->hiddenValue).b14 = 0;
  (__return_storage_ptr__->hiddenValue).b15 = 0;
  (__return_storage_ptr__->hiddenValue).b16 = 0;
  (__return_storage_ptr__->fakeValue).flags = 0;
  (__return_storage_ptr__->fakeValue).hi = 0;
  (__return_storage_ptr__->fakeValue).lo = 0;
  (__return_storage_ptr__->fakeValue).mid = 0;
  (__return_storage_ptr__->fakeValue).ulomidLE = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  uVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey;
  AStack_2._0_4_ = value->flags;
  AStack_2._4_4_ = value->hi;
  AStack_2._8_4_ = value->lo;
  AStack_2._12_4_ = value->mid;
  AStack_2._8_8_ = AStack_2._8_8_ ^ uVar1;
  AStack_2._0_8_ = AStack_2._0_8_ ^ uVar1;
  ObscuredDecimal__ctor(__return_storage_ptr__,&AStack_2,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    iVar4 = value->hi;
    iVar5 = value->lo;
    iVar6 = value->mid;
    (__return_storage_ptr__->fakeValue).flags = value->flags;
    (__return_storage_ptr__->fakeValue).hi = iVar4;
    (__return_storage_ptr__->fakeValue).lo = iVar5;
    (__return_storage_ptr__->fakeValue).mid = iVar6;
  }
  return __return_storage_ptr__;
}


/* Decimal op_Implicit(ObscuredDecimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_op_Implicit_1
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt
                     ((Decimal *)&stack0xffffffffffffffe8,value,(MethodInfo *)0x0);
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
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pDVar1 = ObscuredDecimal_InternalDecrypt((Decimal *)(auStack_2 + 0x10),input,(MethodInfo *)0x0);
  auStack_2._0_4_ = pDVar1->flags;
  auStack_2._4_4_ = pDVar1->hi;
  auStack_2._8_4_ = pDVar1->lo;
  auStack_2._12_4_ = pDVar1->mid;
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar3 = TypeInfo__System__Decimal->static_fields;
  auStack_2._16_4_ = (undefined4)(pDVar3->Zero).ulomidLE;
  uStack_4 = *(undefined4 *)((longlong)&(pDVar3->Zero).ulomidLE + 4);
  iStack_5 = (pDVar3->One).flags;
  iStack_6 = (pDVar3->One).hi;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal__DecCalc);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
    FUN_?();
  }
  mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_DecAddSub
            ((Decimal_DecCalc *)auStack_2,(Decimal_DecCalc *)(auStack_2 + 0x10),0,
             (MethodInfo *)0x0);
  uVar7 = input->currentCryptoKey;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar7 == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).field_0x1c ==
        0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    uVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
             cryptoKey;
  }
  uVar8 = auStack_2._8_8_;
  uVar9 = auStack_2._0_8_;
  auStack_2._8_8_ = auStack_2._8_8_ ^ uVar7;
  auStack_2._0_8_ = auStack_2._0_8_ ^ uVar7;
  (input->hiddenValue).b1 = (char)auStack_2._0_8_;
  (input->hiddenValue).b2 = (char)((ulonglong)auStack_2._0_8_ >> 8);
  (input->hiddenValue).b3 = (char)((ulonglong)auStack_2._0_8_ >> 0x10);
  (input->hiddenValue).b4 = (char)((ulonglong)auStack_2._0_8_ >> 0x18);
  (input->hiddenValue).b5 = (char)((ulonglong)auStack_2._0_8_ >> 0x20);
  (input->hiddenValue).b6 = (char)((ulonglong)auStack_2._0_8_ >> 0x28);
  (input->hiddenValue).b7 = (char)((ulonglong)auStack_2._0_8_ >> 0x30);
  (input->hiddenValue).b8 = (char)((ulonglong)auStack_2._0_8_ >> 0x38);
  (input->hiddenValue).b9 = (char)auStack_2._8_8_;
  (input->hiddenValue).b10 = (char)((ulonglong)auStack_2._8_8_ >> 8);
  (input->hiddenValue).b11 = (char)((ulonglong)auStack_2._8_8_ >> 0x10);
  (input->hiddenValue).b12 = (char)((ulonglong)auStack_2._8_8_ >> 0x18);
  (input->hiddenValue).b13 = (char)((ulonglong)auStack_2._8_8_ >> 0x20);
  (input->hiddenValue).b14 = (char)((ulonglong)auStack_2._8_8_ >> 0x28);
  (input->hiddenValue).b15 = (char)((ulonglong)auStack_2._8_8_ >> 0x30);
  (input->hiddenValue).b16 = (char)((ulonglong)auStack_2._8_8_ >> 0x38);
  bVar10 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar10 != 0) {
    auStack_2._0_4_ = (undefined4)uVar9;
    auStack_2._4_4_ = SUB84(uVar9,4);
    (input->fakeValue).flags = auStack_2._0_4_;
    (input->fakeValue).hi = auStack_2._4_4_;
    auStack_2._8_4_ = (undefined4)uVar8;
    auStack_2._12_4_ = SUB84(uVar8,4);
    (input->fakeValue).lo = auStack_2._8_4_;
    (input->fakeValue).mid = auStack_2._12_4_;
  }
  pBVar11 = input->hiddenValueOld;
  uVar12 = (input->hiddenValue).b1;
  uVar13 = (input->hiddenValue).b2;
  uVar14 = (input->hiddenValue).b3;
  uVar15 = (input->hiddenValue).b4;
  uVar16 = (input->hiddenValue).b5;
  uVar17 = (input->hiddenValue).b6;
  uVar18 = (input->hiddenValue).b7;
  uVar19 = (input->hiddenValue).b8;
  uVar20 = (input->hiddenValue).b9;
  uVar21 = (input->hiddenValue).b10;
  uVar22 = (input->hiddenValue).b11;
  uVar23 = (input->hiddenValue).b12;
  uVar24 = (input->hiddenValue).b13;
  uVar25 = (input->hiddenValue).b14;
  uVar26 = (input->hiddenValue).b15;
  uVar27 = (input->hiddenValue).b16;
  __return_storage_ptr__->currentCryptoKey = input->currentCryptoKey;
  __return_storage_ptr__->hiddenValueOld = pBVar11;
  iVar28 = (input->fakeValue).flags;
  iVar29 = (input->fakeValue).hi;
  iVar30 = (input->fakeValue).lo;
  iVar31 = (input->fakeValue).mid;
  (__return_storage_ptr__->hiddenValue).b1 = uVar12;
  (__return_storage_ptr__->hiddenValue).b2 = uVar13;
  (__return_storage_ptr__->hiddenValue).b3 = uVar14;
  (__return_storage_ptr__->hiddenValue).b4 = uVar15;
  (__return_storage_ptr__->hiddenValue).b5 = uVar16;
  (__return_storage_ptr__->hiddenValue).b6 = uVar17;
  (__return_storage_ptr__->hiddenValue).b7 = uVar18;
  (__return_storage_ptr__->hiddenValue).b8 = uVar19;
  (__return_storage_ptr__->hiddenValue).b9 = uVar20;
  (__return_storage_ptr__->hiddenValue).b10 = uVar21;
  (__return_storage_ptr__->hiddenValue).b11 = uVar22;
  (__return_storage_ptr__->hiddenValue).b12 = uVar23;
  (__return_storage_ptr__->hiddenValue).b13 = uVar24;
  (__return_storage_ptr__->hiddenValue).b14 = uVar25;
  (__return_storage_ptr__->hiddenValue).b15 = uVar26;
  (__return_storage_ptr__->hiddenValue).b16 = uVar27;
  uVar32 = (input->fakeValue).ulomidLE;
  (__return_storage_ptr__->fakeValue).flags = iVar28;
  (__return_storage_ptr__->fakeValue).hi = iVar29;
  (__return_storage_ptr__->fakeValue).lo = iVar30;
  (__return_storage_ptr__->fakeValue).mid = iVar31;
  (__return_storage_ptr__->fakeValue).ulomidLE = uVar32;
  return __return_storage_ptr__;
}

