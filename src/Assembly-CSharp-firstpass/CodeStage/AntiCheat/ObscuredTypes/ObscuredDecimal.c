
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_ApplyNewCryptoKey(ObscuredDecimal *this,MethodInfo *method)

{
  ppBVar1 = &this->hiddenValueOld;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar2 = *ppBVar1;
  iVar3._0_1_ = (this->hiddenValue).b1;
  iVar3._1_1_ = (this->hiddenValue).b2;
  iVar3._2_1_ = (this->hiddenValue).b3;
  iVar3._3_1_ = (this->hiddenValue).b4;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  if ((pBVar2 != *(Byte__Array **)
                  &TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                   cryptoKey) ||
     (iVar3 != *(int *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                              static_fields->cryptoKey + 4))) {
    puVar4 = (undefined4 *)func_?(&AStack_5,ppBVar1,0);
    AStack_5._0_4_ = *puVar4;
    AStack_5._4_4_ = puVar4[1];
    AStack_5._8_4_ = puVar4[2];
    AStack_5._12_4_ = puVar4[3];
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    value.hi._0_1_ = AStack_5.b5;
    value.hi._1_1_ = AStack_5.b6;
    value.hi._2_1_ = AStack_5.b7;
    value.hi._3_1_ = AStack_5.b8;
    value.flags._0_1_ = AStack_5.b1;
    value.flags._1_1_ = AStack_5.b2;
    value.flags._2_1_ = AStack_5.b3;
    value.flags._3_1_ = AStack_5.b4;
    value.lo._0_1_ = AStack_5.b9;
    value.lo._1_1_ = AStack_5.b10;
    value.lo._2_1_ = AStack_5.b11;
    value.lo._3_1_ = AStack_5.b12;
    value.mid._0_1_ = AStack_5.b13;
    value.mid._1_1_ = AStack_5.b14;
    value.mid._2_1_ = AStack_5.b15;
    value.mid._3_1_ = AStack_5.b16;
    pAVar6 = ObscuredDecimal_InternalEncrypt_1
                        (&AStack_5,value,
                         (ulonglong)
                         *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal
                                         ->static_fields->cryptoKey + 4),unaff_EDI);
    uVar7 = pAVar6->b2;
    uVar8 = pAVar6->b3;
    uVar9 = pAVar6->b4;
    uVar10 = pAVar6->b5;
    uVar11 = pAVar6->b6;
    uVar12 = pAVar6->b7;
    uVar13 = pAVar6->b8;
    uVar14 = *(uint32_t *)&pAVar6->b9;
    uVar15 = *(uint32_t *)&pAVar6->b13;
    (this->hiddenValue).b9 = pAVar6->b1;
    (this->hiddenValue).b10 = uVar7;
    (this->hiddenValue).b11 = uVar8;
    (this->hiddenValue).b12 = uVar9;
    (this->hiddenValue).b13 = uVar10;
    (this->hiddenValue).b14 = uVar11;
    (this->hiddenValue).b15 = uVar12;
    (this->hiddenValue).b16 = uVar13;
    (this->fakeValue).flags = uVar14;
    (this->fakeValue).hi = uVar15;
    pOVar16 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields;
    *ppBVar1 = *(Byte__Array **)&pOVar16->cryptoKey;
    uVar17 = *(undefined4 *)((int)&pOVar16->cryptoKey + 4);
    (this->hiddenValue).b1 = (char)uVar17;
    (this->hiddenValue).b2 = (char)((uint)uVar17 >> 8);
    (this->hiddenValue).b3 = (char)((uint)uVar17 >> 0x10);
    (this->hiddenValue).b4 = (char)((uint)uVar17 >> 0x18);
  }
  return;
}


/* Decimal Decrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt(Decimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1 = (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                cryptoKey;
  uVar2 = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                          static_fields->cryptoKey + 4);
  __return_storage_ptr__->flags = value.flags ^ uVar1;
  __return_storage_ptr__->hi = value.hi ^ uVar2;
  __return_storage_ptr__->lo = value.lo ^ uVar1;
  __return_storage_ptr__->mid = value.mid ^ uVar2;
  return __return_storage_ptr__;
}


/* Decimal Decrypt(Decimal, Int64) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Decrypt_1
                    (Decimal *__return_storage_ptr__,Decimal value,int64_t key,MethodInfo *method)

{
  __return_storage_ptr__->flags = value.flags ^ in_stack_1;
  __return_storage_ptr__->hi = value.hi ^ (uint)key;
  __return_storage_ptr__->lo = value.lo ^ in_stack_1;
  __return_storage_ptr__->mid = value.mid ^ (uint)key;
  return __return_storage_ptr__;
}


/* Decimal Encrypt(Decimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_Encrypt(Decimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  uVar1 = (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
                cryptoKey;
  uVar2 = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                          static_fields->cryptoKey + 4);
  __return_storage_ptr__->flags = value.flags ^ uVar1;
  __return_storage_ptr__->hi = value.hi ^ uVar2;
  __return_storage_ptr__->lo = value.lo ^ uVar1;
  __return_storage_ptr__->mid = value.mid ^ uVar2;
  return __return_storage_ptr__;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals(ObscuredDecimal *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((ObscuredDecimal__Class *)obj->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((((ObscuredDecimal__Class *)obj->klass)->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        uStack_3 = *puVar2;
        uStack_4 = puVar2[1];
        uStack_5 = puVar2[2];
        uStack_6 = puVar2[3];
        uStack_7 = puVar2[4];
        uStack_8 = puVar2[5];
        uStack_9 = puVar2[6];
        uStack_10 = puVar2[7];
        uStack_11 = puVar2[8];
        uStack_12 = puVar2[9];
        uStack_13 = puVar2[10];
        uStack_14 = puVar2[0xb];
        uStack_15 = 0;
        uStack_16 = 0;
        uStack_17 = 0;
        uStack_18 = 0;
        puVar2 = (undefined4 *)func_?(auStack_19,&uStack_3,0);
        uStack_15 = *puVar2;
        uStack_16 = puVar2[1];
        uStack_17 = puVar2[2];
        uStack_18 = puVar2[3];
        puVar2 = (undefined4 *)func_?(auStack_20,&this->hiddenValueOld,0);
        bVar21 = func_?(&uStack_15,*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
        return bVar21;
      }
      func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
      pcVar22 = (code *)swi(3);
      bVar21 = (*pcVar22)();
      return bVar21;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredDecimal) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_Equals_1(ObscuredDecimal *this,ObscuredDecimal obj,MethodInfo *method)

{
  uStack_1 = (undefined4)obj.currentCryptoKey;
  uStack_2 = obj.currentCryptoKey._4_4_;
  pBStack_3 = obj.hiddenValueOld;
  AStack_4.b1 = obj.hiddenValue.b1;
  AStack_4.b2 = obj.hiddenValue.b2;
  AStack_4.b3 = obj.hiddenValue.b3;
  AStack_4.b4 = obj.hiddenValue.b4;
  AStack_4.b5 = obj.hiddenValue.b5;
  AStack_4.b6 = obj.hiddenValue.b6;
  AStack_4.b7 = obj.hiddenValue.b7;
  AStack_4.b8 = obj.hiddenValue.b8;
  AStack_4.b9 = obj.hiddenValue.b9;
  AStack_4.b10 = obj.hiddenValue.b10;
  AStack_4.b11 = obj.hiddenValue.b11;
  AStack_4.b12 = obj.hiddenValue.b12;
  AStack_4.b13 = obj.hiddenValue.b13;
  AStack_4.b14 = obj.hiddenValue.b14;
  AStack_4.b15 = obj.hiddenValue.b15;
  AStack_4.b16 = obj.hiddenValue.b16;
  uStack_5 = obj.fakeValue.flags;
  uStack_6 = obj.fakeValue.hi;
  uStack_7 = obj.fakeValue.lo;
  uStack_8 = obj.fakeValue.mid;
  obj.fakeValue.flags = 0;
  obj.fakeValue.hi = 0;
  obj.fakeValue.lo = 0;
  obj.fakeValue.mid = 0;
  puVar9 = (uint32_t *)func_?(auStack_10,auStack_11,0);
  obj.fakeValue.flags = *puVar9;
  obj.fakeValue.hi = puVar9[1];
  obj.fakeValue.lo = puVar9[2];
  obj.fakeValue.mid = puVar9[3];
  puVar12 = (undefined4 *)func_?(auStack_13,&this->hiddenValueOld,0);
  bVar14 = func_?(&obj.fakeValue,*puVar12,puVar12[1],puVar12[2],puVar12[3],0);
  return bVar14;
}


/* Decimal GetDecrypted() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_GetDecrypted
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  puVar1 = (uint32_t *)func_?(auStack_2,&this->hiddenValueOld,0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  __return_storage_ptr__->flags = *puVar1;
  __return_storage_ptr__->hi = uVar3;
  __return_storage_ptr__->lo = uVar4;
  __return_storage_ptr__->mid = uVar5;
  return __return_storage_ptr__;
}


/* Decimal GetEncrypted() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_GetEncrypted
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  func_?(&this->hiddenValueOld,0);
  uVar1 = *(uint32_t *)&(this->hiddenValue).b13;
  uVar2 = (this->fakeValue).flags;
  uVar3 = (this->fakeValue).hi;
  __return_storage_ptr__->flags = *(uint32_t *)&(this->hiddenValue).b9;
  __return_storage_ptr__->hi = uVar1;
  __return_storage_ptr__->lo = uVar2;
  __return_storage_ptr__->mid = uVar3;
  return __return_storage_ptr__;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
        ObscuredDecimal_GetHashCode(ObscuredDecimal *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&this->hiddenValueOld,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  iVar7 = func_?(&uStack_1,0);
  return iVar7;
}


/* Decimal InternalDecrypt() */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_InternalDecrypt
                    (Decimal *__return_storage_ptr__,ObscuredDecimal *this,MethodInfo *method)

{
  puVar1 = (uint32_t *)func_?(auStack_2,&this->hiddenValueOld,method);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  __return_storage_ptr__->flags = *puVar1;
  __return_storage_ptr__->hi = uVar3;
  __return_storage_ptr__->lo = uVar4;
  __return_storage_ptr__->mid = uVar5;
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt(ACTkByte16 *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  value_00.hi = value.hi;
  value_00.flags = value.flags;
  value_00.lo = value.lo;
  value_00.mid = value.mid;
  pAVar1 = ObscuredDecimal_InternalEncrypt_1((ACTkByte16 *)&value,value_00,0,unaff_EBP);
  uVar2 = pAVar1->b2;
  uVar3 = pAVar1->b3;
  uVar4 = pAVar1->b4;
  uVar5 = pAVar1->b5;
  uVar6 = pAVar1->b6;
  uVar7 = pAVar1->b7;
  uVar8 = pAVar1->b8;
  uVar9 = pAVar1->b9;
  uVar10 = pAVar1->b10;
  uVar11 = pAVar1->b11;
  uVar12 = pAVar1->b12;
  uVar13 = pAVar1->b13;
  uVar14 = pAVar1->b14;
  uVar15 = pAVar1->b15;
  uVar16 = pAVar1->b16;
  __return_storage_ptr__->b1 = pAVar1->b1;
  __return_storage_ptr__->b2 = uVar2;
  __return_storage_ptr__->b3 = uVar3;
  __return_storage_ptr__->b4 = uVar4;
  __return_storage_ptr__->b5 = uVar5;
  __return_storage_ptr__->b6 = uVar6;
  __return_storage_ptr__->b7 = uVar7;
  __return_storage_ptr__->b8 = uVar8;
  __return_storage_ptr__->b9 = uVar9;
  __return_storage_ptr__->b10 = uVar10;
  __return_storage_ptr__->b11 = uVar11;
  __return_storage_ptr__->b12 = uVar12;
  __return_storage_ptr__->b13 = uVar13;
  __return_storage_ptr__->b14 = uVar14;
  __return_storage_ptr__->b15 = uVar15;
  __return_storage_ptr__->b16 = uVar16;
  return __return_storage_ptr__;
}


/* ACTkByte16 InternalEncrypt(Decimal, Int64) */

ACTkByte16 *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_InternalEncrypt_1
          (ACTkByte16 *__return_storage_ptr__,Decimal value,int64_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (in_stack_1 == 0 && (uint)key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
    }
    in_stack_1 =
         (uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->
               cryptoKey;
    key._0_4_ = *(uint *)((int)&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->
                                static_fields->cryptoKey + 4);
  }
  uVar2 = value.lo ^ in_stack_1;
  uVar3 = value.flags ^ in_stack_1;
  uVar4 = value.hi ^ (uint)key;
  uVar5 = value.mid ^ (uint)key;
  __return_storage_ptr__->b1 = (char)uVar3;
  __return_storage_ptr__->b2 = (char)(uVar3 >> 8);
  __return_storage_ptr__->b3 = (char)(uVar3 >> 0x10);
  __return_storage_ptr__->b4 = (char)(uVar3 >> 0x18);
  __return_storage_ptr__->b5 = (char)uVar4;
  __return_storage_ptr__->b6 = (char)(uVar4 >> 8);
  __return_storage_ptr__->b7 = (char)(uVar4 >> 0x10);
  __return_storage_ptr__->b8 = (char)(uVar4 >> 0x18);
  __return_storage_ptr__->b9 = (char)uVar2;
  __return_storage_ptr__->b10 = (char)(uVar2 >> 8);
  __return_storage_ptr__->b11 = (char)(uVar2 >> 0x10);
  __return_storage_ptr__->b12 = (char)(uVar2 >> 0x18);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)func_?(&AStack_2,&this->hiddenValueOld,0);
  AStack_2._0_4_ = *puVar1;
  AStack_2._4_4_ = puVar1[1];
  AStack_2._8_4_ = puVar1[2];
  AStack_2._12_4_ = puVar1[3];
  do {
    pBVar3 = (Byte__Array *)
              UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    uVar4 = (int)pBVar3 >> 0x1f;
    this->hiddenValueOld = pBVar3;
    (this->hiddenValue).b1 = (char)uVar4;
    (this->hiddenValue).b2 = (char)(uVar4 >> 8);
    (this->hiddenValue).b3 = (char)(uVar4 >> 0x10);
    (this->hiddenValue).b4 = (char)(uVar4 >> 0x18);
  } while (pBVar3 == (Byte__Array *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  value.hi._0_1_ = AStack_2.b5;
  value.hi._1_1_ = AStack_2.b6;
  value.hi._2_1_ = AStack_2.b7;
  value.hi._3_1_ = AStack_2.b8;
  value.flags._0_1_ = AStack_2.b1;
  value.flags._1_1_ = AStack_2.b2;
  value.flags._2_1_ = AStack_2.b3;
  value.flags._3_1_ = AStack_2.b4;
  value.lo._0_1_ = AStack_2.b9;
  value.lo._1_1_ = AStack_2.b10;
  value.lo._2_1_ = AStack_2.b11;
  value.lo._3_1_ = AStack_2.b12;
  value.mid._0_1_ = AStack_2.b13;
  value.mid._1_1_ = AStack_2.b14;
  value.mid._2_1_ = AStack_2.b15;
  value.mid._3_1_ = AStack_2.b16;
  pAVar5 = ObscuredDecimal_InternalEncrypt_1(&AStack_2,value,(ulonglong)uVar4,unaff_EDI);
  uVar6 = pAVar5->b2;
  uVar7 = pAVar5->b3;
  uVar8 = pAVar5->b4;
  uVar9 = pAVar5->b5;
  uVar10 = pAVar5->b6;
  uVar11 = pAVar5->b7;
  uVar12 = pAVar5->b8;
  uVar13 = *(uint32_t *)&pAVar5->b9;
  uVar14 = *(uint32_t *)&pAVar5->b13;
  (this->hiddenValue).b9 = pAVar5->b1;
  (this->hiddenValue).b10 = uVar6;
  (this->hiddenValue).b11 = uVar7;
  (this->hiddenValue).b12 = uVar8;
  (this->hiddenValue).b13 = uVar9;
  (this->hiddenValue).b14 = uVar10;
  (this->hiddenValue).b15 = uVar11;
  (this->hiddenValue).b16 = uVar12;
  (this->fakeValue).flags = uVar13;
  (this->fakeValue).hi = uVar14;
  return;
}


/* Void SetEncrypted(Decimal) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetEncrypted(ObscuredDecimal *this,Decimal encrypted,MethodInfo *method)

{
  *(undefined1 *)((int)&this[1].currentCryptoKey + 4) = 1;
  (this->hiddenValue).b9 = (undefined1)encrypted.flags;
  (this->hiddenValue).b10 = encrypted.flags._1_1_;
  (this->hiddenValue).b11 = encrypted.flags._2_1_;
  (this->hiddenValue).b12 = encrypted.flags._3_1_;
  (this->hiddenValue).b13 = (undefined1)encrypted.hi;
  (this->hiddenValue).b14 = encrypted.hi._1_1_;
  (this->hiddenValue).b15 = encrypted.hi._2_1_;
  (this->hiddenValue).b16 = encrypted.hi._3_1_;
  (this->fakeValue).flags = encrypted.lo;
  (this->fakeValue).hi = encrypted.mid;
  bVar1 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar1 != 0) {
    puVar2 = (uint32_t *)func_?(&encrypted,&this->hiddenValueOld,0);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    (this->fakeValue).lo = *puVar2;
    (this->fakeValue).mid = uVar3;
    *(uint32_t *)&this->inited = uVar4;
    *(uint32_t *)&this[1].currentCryptoKey = uVar5;
  }
  return;
}


/* Void SetNewCryptoKey(Int64) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal_SetNewCryptoKey(int64_t newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString(ObscuredDecimal *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&this->hiddenValueOld,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,0);
  return pSVar7;
}


/* String ToString(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_1(ObscuredDecimal *this,String *format,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&this->hiddenValueOld,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,format,0);
  return pSVar7;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_2
                   (ObscuredDecimal *this,IFormatProvider *provider,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&this->hiddenValueOld,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,provider,0);
  return pSVar7;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
         ObscuredDecimal_ToString_3
                   (ObscuredDecimal *this,String *format,IFormatProvider *provider,
                   MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined4 *)func_?(auStack_6,&this->hiddenValueOld,0);
  uStack_1 = *puVar5;
  uStack_2 = puVar5[1];
  uStack_3 = puVar5[2];
  uStack_4 = puVar5[3];
  pSVar7 = (String *)func_?(&uStack_1,format,provider,0);
  return pSVar7;
}


/* ObscuredDecimal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__cctor(MethodInfo *method)

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
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->static_fields;
  *(int32_t *)&pOVar2->cryptoKey = iVar1;
  *(int32_t *)((int)&pOVar2->cryptoKey + 4) = iVar1 >> 0x1f;
  return;
}


/* ObscuredDecimal(ACTkByte16) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
     ObscuredDecimal__ctor(ObscuredDecimal *this,ACTkByte16 value,MethodInfo *method)

{
  func_?(&this->hiddenValueOld,value._0_4_,value._4_4_,value._8_4_,value._12_4_,method);
  return;
}


/* ObscuredDecimal op_Decrement(ObscuredDecimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Decrement
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (uint32_t *)func_?(&uStack_2,&stack0x00000008,0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = 0;
  uVar8 = 0;
  method_00 = (MethodInfo *)0x0;
  func_?(&stack0xffffffec,1,0);
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  d1.hi = uVar4;
  d1.flags = uVar3;
  d1.lo = uVar5;
  d1.mid = uVar6;
  d2.hi = uVar8;
  d2.flags = uVar7;
  d2.lo = (uint32_t)method_00;
  d2.mid = 0;
  pDVar9 = mscorlib.dll::System::Decimal::Decimal_op_Subtraction
                     ((Decimal *)&stack0xffffffdc,d1,d2,(MethodInfo *)0x0);
  uStack_2 = pDVar9->flags;
  puStack_10 = (undefined *)pDVar9->hi;
  uVar3 = pDVar9->flags;
  uVar4 = pDVar9->hi;
  uVar5 = pDVar9->lo;
  uVar6 = pDVar9->mid;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?();
  }
  __return_storage_ptr___00 = (ACTkByte16 *)&stack0xffffffdc;
  value.hi = uVar4;
  value.flags = uVar3;
  value.lo = uVar5;
  value.mid = uVar6;
  pAVar11 = ObscuredDecimal_InternalEncrypt_1
                     (__return_storage_ptr___00,value,(ulonglong)(uint)input.currentCryptoKey,
                      method_00);
  input.hiddenValueOld = *(Byte__Array **)pAVar11;
  input.hiddenValue.b1 = pAVar11->b5;
  input.hiddenValue.b2 = pAVar11->b6;
  input.hiddenValue.b3 = pAVar11->b7;
  input.hiddenValue.b4 = pAVar11->b8;
  input.hiddenValue.b5 = pAVar11->b9;
  input.hiddenValue.b6 = pAVar11->b10;
  input.hiddenValue.b7 = pAVar11->b11;
  input.hiddenValue.b8 = pAVar11->b12;
  input.hiddenValue.b9 = pAVar11->b13;
  input.hiddenValue.b10 = pAVar11->b14;
  input.hiddenValue.b11 = pAVar11->b15;
  input.hiddenValue.b12 = pAVar11->b16;
  bVar12 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar12 != 0) {
    input.hiddenValue.b13 = (undefined1)uStack_2;
    input.hiddenValue.b14 = uStack_2._1_1_;
    input.hiddenValue.b15 = uStack_2._2_1_;
    input.hiddenValue.b16 = uStack_2._3_1_;
    input.fakeValue.flags = (uint32_t)puStack_10;
    input.fakeValue.hi = (uint32_t)__return_storage_ptr___00;
    input.fakeValue.lo = uVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_13;
  *(uint *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = (uint)input.currentCryptoKey;
  __return_storage_ptr__->hiddenValueOld = input.currentCryptoKey._4_4_;
  *(Byte__Array **)&__return_storage_ptr__->hiddenValue = input.hiddenValueOld;
  (__return_storage_ptr__->hiddenValue).b5 = input.hiddenValue.b1;
  (__return_storage_ptr__->hiddenValue).b6 = input.hiddenValue.b2;
  (__return_storage_ptr__->hiddenValue).b7 = input.hiddenValue.b3;
  (__return_storage_ptr__->hiddenValue).b8 = input.hiddenValue.b4;
  (__return_storage_ptr__->hiddenValue).b9 = input.hiddenValue.b5;
  (__return_storage_ptr__->hiddenValue).b10 = input.hiddenValue.b6;
  (__return_storage_ptr__->hiddenValue).b11 = input.hiddenValue.b7;
  (__return_storage_ptr__->hiddenValue).b12 = input.hiddenValue.b8;
  (__return_storage_ptr__->hiddenValue).b13 = input.hiddenValue.b9;
  (__return_storage_ptr__->hiddenValue).b14 = input.hiddenValue.b10;
  (__return_storage_ptr__->hiddenValue).b15 = input.hiddenValue.b11;
  (__return_storage_ptr__->hiddenValue).b16 = input.hiddenValue.b12;
  (__return_storage_ptr__->fakeValue).flags = input.hiddenValue._12_4_;
  (__return_storage_ptr__->fakeValue).hi = input.fakeValue.flags;
  (__return_storage_ptr__->fakeValue).lo = input.fakeValue.hi;
  (__return_storage_ptr__->fakeValue).mid = input.fakeValue.lo;
  *(uint32_t *)&__return_storage_ptr__->inited = input.fakeValue.mid;
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Explicit(ObscuredFloat) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Explicit
          (ObscuredDecimal *__return_storage_ptr__,ObscuredFloat f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  uStack_1 = f.inited;
  uStack_2 = f._17_1_;
  uStack_3 = f._18_1_;
  uStack_4 = f._19_1_;
  iStack_5 = f.currentCryptoKey;
  AStack_6 = f.hiddenValue;
  pBStack_7 = f.hiddenValueOld;
  fStack_8 = f.fakeValue;
  fVar9 = (float10)func_?(&iStack_5,0);
  f._16_4_ = (BADTYPE)fVar9;
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  pDVar10 = mscorlib.dll::System::Decimal::Decimal_op_Explicit_8
                      ((Decimal *)&f.hiddenValue,(float)f._16_4_,(MethodInfo *)0x0);
  f.hiddenValue = (ACTkByte4)pDVar10->flags;
  f.hiddenValueOld = (Byte__Array *)pDVar10->hi;
  f.fakeValue = (float)pDVar10->lo;
  f._16_4_ = pDVar10->mid;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar11 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal;
  func_?(&stack0xffffffb8);
  if ((((uint)(pOVar11->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((pOVar11->_1).cctor_started == 0)) {
    func_?();
  }
  value.hi = (uint32_t)f.hiddenValueOld;
  value.flags._0_1_ = f.hiddenValue.b1;
  value.flags._1_1_ = f.hiddenValue.b2;
  value.flags._2_1_ = f.hiddenValue.b3;
  value.flags._3_1_ = f.hiddenValue.b4;
  value.lo = (uint32_t)f.fakeValue;
  value.mid = f._16_4_;
  pAVar12 = ObscuredDecimal_InternalEncrypt((ACTkByte16 *)&AStack_6,value,(MethodInfo *)0x0);
  uVar13 = pAVar12->b1;
  uVar14 = pAVar12->b2;
  uVar15 = pAVar12->b3;
  uVar16 = pAVar12->b4;
  uVar17 = pAVar12->b5;
  uVar18 = pAVar12->b6;
  uVar19 = pAVar12->b7;
  uVar20 = pAVar12->b8;
  uVar21 = pAVar12->b9;
  uVar22 = pAVar12->b10;
  uVar23 = pAVar12->b11;
  uVar24 = pAVar12->b12;
  uVar25 = pAVar12->b13;
  uVar26 = pAVar12->b14;
  uVar27 = pAVar12->b15;
  uVar28 = pAVar12->b16;
  AStack_29.b1 = 0;
  AStack_29.b2 = 0;
  AStack_29.b3 = 0;
  AStack_29.b4 = 0;
  func_?();
  pMVar30 = (MonitorData *)0x0;
  pBVar31 = (Byte__Array__Class *)&UNK_?;
  bVar32 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                     ((MethodInfo *)0x0);
  if (bVar32 != 0) {
    AStack_29 = f.hiddenValue;
    pBStack_33 = f.hiddenValueOld;
    fStack_34 = f.fakeValue;
    uStack_35 = f._16_4_;
  }
  *(Byte__Array__Class **)&__return_storage_ptr__->currentCryptoKey = pBVar31;
  *(MonitorData **)((int)&__return_storage_ptr__->currentCryptoKey + 4) = pMVar30;
  __return_storage_ptr__->hiddenValueOld = (Byte__Array *)&stack0xffffffb8;
  (__return_storage_ptr__->hiddenValue).b1 = uVar13;
  (__return_storage_ptr__->hiddenValue).b2 = uVar14;
  (__return_storage_ptr__->hiddenValue).b3 = uVar15;
  (__return_storage_ptr__->hiddenValue).b4 = uVar16;
  (__return_storage_ptr__->hiddenValue).b5 = uVar17;
  (__return_storage_ptr__->hiddenValue).b6 = uVar18;
  (__return_storage_ptr__->hiddenValue).b7 = uVar19;
  (__return_storage_ptr__->hiddenValue).b8 = uVar20;
  (__return_storage_ptr__->hiddenValue).b9 = uVar21;
  (__return_storage_ptr__->hiddenValue).b10 = uVar22;
  (__return_storage_ptr__->hiddenValue).b11 = uVar23;
  (__return_storage_ptr__->hiddenValue).b12 = uVar24;
  (__return_storage_ptr__->hiddenValue).b13 = uVar25;
  (__return_storage_ptr__->hiddenValue).b14 = uVar26;
  (__return_storage_ptr__->hiddenValue).b15 = uVar27;
  (__return_storage_ptr__->hiddenValue).b16 = uVar28;
  (__return_storage_ptr__->fakeValue).flags = (uint32_t)AStack_29;
  (__return_storage_ptr__->fakeValue).hi = (uint32_t)pBStack_33;
  (__return_storage_ptr__->fakeValue).lo = (uint32_t)fStack_34;
  (__return_storage_ptr__->fakeValue).mid = uStack_35;
  __return_storage_ptr__->inited = auStack_36[0];
  __return_storage_ptr__->field_0x2d = auStack_36[1];
  __return_storage_ptr__->field_0x2e = auStack_36[2];
  __return_storage_ptr__->field_0x2f = auStack_36[3];
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Implicit(Decimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Implicit
          (ObscuredDecimal *__return_storage_ptr__,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&ppppuStack_44,0,0x30);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal);
  }
  pAVar1 = ObscuredDecimal_InternalEncrypt(&AStack_2,value,(MethodInfo *)0x0);
  uStack_3._0_1_ = pAVar1->b1;
  uStack_3._1_1_ = pAVar1->b2;
  uStack_3._2_1_ = pAVar1->b3;
  uStack_3._3_1_ = pAVar1->b4;
  pBStack_4 = *(Byte__Array **)&pAVar1->b5;
  uStack_5._0_1_ = pAVar1->b9;
  uStack_5._1_1_ = pAVar1->b10;
  uStack_5._2_1_ = pAVar1->b11;
  uStack_5._3_1_ = pAVar1->b12;
  uStack_6._0_1_ = pAVar1->b13;
  uStack_6._1_1_ = pAVar1->b14;
  uStack_6._2_1_ = pAVar1->b15;
  uStack_6._3_1_ = pAVar1->b16;
  uStack_7 = 0;
  ppppuStack_44 = &ppppuStack_44;
  func_?();
  bVar8 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar8 != 0) {
    uStack_9 = value.flags;
    uStack_10 = value.hi;
    uStack_11 = value.lo;
    uStack_12 = value.mid;
  }
  *(undefined4 *****)&__return_storage_ptr__->currentCryptoKey = ppppuStack_44;
  *(undefined4 *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = uStack_3;
  __return_storage_ptr__->hiddenValueOld = pBStack_4;
  (__return_storage_ptr__->hiddenValue).b1 = (undefined1)uStack_5;
  (__return_storage_ptr__->hiddenValue).b2 = uStack_5._1_1_;
  (__return_storage_ptr__->hiddenValue).b3 = uStack_5._2_1_;
  (__return_storage_ptr__->hiddenValue).b4 = uStack_5._3_1_;
  (__return_storage_ptr__->hiddenValue).b5 = (undefined1)uStack_6;
  (__return_storage_ptr__->hiddenValue).b6 = uStack_6._1_1_;
  (__return_storage_ptr__->hiddenValue).b7 = uStack_6._2_1_;
  (__return_storage_ptr__->hiddenValue).b8 = uStack_6._3_1_;
  (__return_storage_ptr__->hiddenValue).b9 = (undefined1)uStack_7;
  (__return_storage_ptr__->hiddenValue).b10 = uStack_7._1_1_;
  (__return_storage_ptr__->hiddenValue).b11 = uStack_7._2_1_;
  (__return_storage_ptr__->hiddenValue).b12 = uStack_7._3_1_;
  (__return_storage_ptr__->hiddenValue).b13 = (undefined1)uStack_13;
  (__return_storage_ptr__->hiddenValue).b14 = uStack_13._1_1_;
  (__return_storage_ptr__->hiddenValue).b15 = uStack_13._2_1_;
  (__return_storage_ptr__->hiddenValue).b16 = uStack_13._3_1_;
  (__return_storage_ptr__->fakeValue).flags = uStack_9;
  (__return_storage_ptr__->fakeValue).hi = uStack_10;
  (__return_storage_ptr__->fakeValue).lo = uStack_11;
  (__return_storage_ptr__->fakeValue).mid = uStack_12;
  *(undefined4 *)&__return_storage_ptr__->inited = uStack_14;
  return __return_storage_ptr__;
}


/* Decimal op_Implicit(ObscuredDecimal) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
          ObscuredDecimal_op_Implicit_1
                    (Decimal *__return_storage_ptr__,ObscuredDecimal value,MethodInfo *method)

{
  puVar1 = (uint32_t *)func_?(auStack_2,&stack0x00000008,0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  __return_storage_ptr__->flags = *puVar1;
  __return_storage_ptr__->hi = uVar3;
  __return_storage_ptr__->lo = uVar4;
  __return_storage_ptr__->mid = uVar5;
  return __return_storage_ptr__;
}


/* ObscuredDecimal op_Increment(ObscuredDecimal) */

ObscuredDecimal *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredDecimal::
ObscuredDecimal_op_Increment
          (ObscuredDecimal *__return_storage_ptr__,ObscuredDecimal input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (uint32_t *)func_?(&uStack_2,&stack0x00000008,0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = 0;
  uVar8 = 0;
  method_00 = (MethodInfo *)0x0;
  func_?(&stack0xffffffec,1,0);
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  d1.hi = uVar4;
  d1.flags = uVar3;
  d1.lo = uVar5;
  d1.mid = uVar6;
  d2.hi = uVar8;
  d2.flags = uVar7;
  d2.lo = (uint32_t)method_00;
  d2.mid = 0;
  pDVar9 = mscorlib.dll::System::Decimal::Decimal_op_Addition
                     ((Decimal *)&stack0xffffffdc,d1,d2,(MethodInfo *)0x0);
  uStack_2 = pDVar9->flags;
  puStack_10 = (undefined *)pDVar9->hi;
  uVar3 = pDVar9->flags;
  uVar4 = pDVar9->hi;
  uVar5 = pDVar9->lo;
  uVar6 = pDVar9->mid;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredDecimal->_1).cctor_started == 0)) {
    func_?();
  }
  __return_storage_ptr___00 = (ACTkByte16 *)&stack0xffffffdc;
  value.hi = uVar4;
  value.flags = uVar3;
  value.lo = uVar5;
  value.mid = uVar6;
  pAVar11 = ObscuredDecimal_InternalEncrypt_1
                     (__return_storage_ptr___00,value,(ulonglong)(uint)input.currentCryptoKey,
                      method_00);
  input.hiddenValueOld = *(Byte__Array **)pAVar11;
  input.hiddenValue.b1 = pAVar11->b5;
  input.hiddenValue.b2 = pAVar11->b6;
  input.hiddenValue.b3 = pAVar11->b7;
  input.hiddenValue.b4 = pAVar11->b8;
  input.hiddenValue.b5 = pAVar11->b9;
  input.hiddenValue.b6 = pAVar11->b10;
  input.hiddenValue.b7 = pAVar11->b11;
  input.hiddenValue.b8 = pAVar11->b12;
  input.hiddenValue.b9 = pAVar11->b13;
  input.hiddenValue.b10 = pAVar11->b14;
  input.hiddenValue.b11 = pAVar11->b15;
  input.hiddenValue.b12 = pAVar11->b16;
  bVar12 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar12 != 0) {
    input.hiddenValue.b13 = (undefined1)uStack_2;
    input.hiddenValue.b14 = uStack_2._1_1_;
    input.hiddenValue.b15 = uStack_2._2_1_;
    input.hiddenValue.b16 = uStack_2._3_1_;
    input.fakeValue.flags = (uint32_t)puStack_10;
    input.fakeValue.hi = (uint32_t)__return_storage_ptr___00;
    input.fakeValue.lo = uVar3;
  }
  *(undefined4 *)&__return_storage_ptr__->currentCryptoKey = in_stack_13;
  *(uint *)((int)&__return_storage_ptr__->currentCryptoKey + 4) = (uint)input.currentCryptoKey;
  __return_storage_ptr__->hiddenValueOld = input.currentCryptoKey._4_4_;
  *(Byte__Array **)&__return_storage_ptr__->hiddenValue = input.hiddenValueOld;
  (__return_storage_ptr__->hiddenValue).b5 = input.hiddenValue.b1;
  (__return_storage_ptr__->hiddenValue).b6 = input.hiddenValue.b2;
  (__return_storage_ptr__->hiddenValue).b7 = input.hiddenValue.b3;
  (__return_storage_ptr__->hiddenValue).b8 = input.hiddenValue.b4;
  (__return_storage_ptr__->hiddenValue).b9 = input.hiddenValue.b5;
  (__return_storage_ptr__->hiddenValue).b10 = input.hiddenValue.b6;
  (__return_storage_ptr__->hiddenValue).b11 = input.hiddenValue.b7;
  (__return_storage_ptr__->hiddenValue).b12 = input.hiddenValue.b8;
  (__return_storage_ptr__->hiddenValue).b13 = input.hiddenValue.b9;
  (__return_storage_ptr__->hiddenValue).b14 = input.hiddenValue.b10;
  (__return_storage_ptr__->hiddenValue).b15 = input.hiddenValue.b11;
  (__return_storage_ptr__->hiddenValue).b16 = input.hiddenValue.b12;
  (__return_storage_ptr__->fakeValue).flags = input.hiddenValue._12_4_;
  (__return_storage_ptr__->fakeValue).hi = input.fakeValue.flags;
  (__return_storage_ptr__->fakeValue).lo = input.fakeValue.hi;
  (__return_storage_ptr__->fakeValue).mid = input.fakeValue.lo;
  *(uint32_t *)&__return_storage_ptr__->inited = input.fakeValue.mid;
  return __return_storage_ptr__;
}

