
/* Byte[] GetBytes(Decimal) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
BitconverterExt_GetBytes(Decimal *dec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Int32,4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(int32_t *)(lVar1 + 0x20) = dec->lo;
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(int32_t *)(lVar1 + 0x24) = dec->mid;
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(int32_t *)(lVar1 + 0x28) = dec->hi;
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(int32_t *)(lVar1 + 0x2c) = dec->flags;
            this = (List_1_System_Byte_ *)
                   FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
            FUN_?(this,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__
                         );
            puVar2 = (undefined4 *)(lVar1 + 0x20);
            for (uVar3 = 0;
                pMVar4 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__,
                (int)uVar3 < *(int *)(lVar1 + 0x18); uVar3 = uVar3 + 1) {
              if (*(uint *)(lVar1 + 0x18) <= uVar3) goto code_?;
              uVar5 = *puVar2;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Byte);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              collection = (IEnumerable_1_System_Byte_ *)FUN_?(TypeInfo__System__Byte,4);
              if (collection == (IEnumerable_1_System_Byte_ *)0x0) goto code_?;
              if (*(int *)&collection[1].monitor == 0) goto code_?;
              *(undefined4 *)&collection[2].klass = uVar5;
              if (this == (List_1_System_Byte_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
              List_1_System_Byte__InsertRange
                        (this,(this->fields)._size,collection,
                         MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                         ->klass->rgctx_data[0x12].method);
              puVar2 = puVar2 + 1;
            }
            if (this != (List_1_System_Byte_ *)0x0) {
              if ((this->fields)._size != 0) {
                pvVar6 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->
                         klass->rgctx_data[3].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
                  pvVar6 = (void *)FUN_?(pvVar6);
                }
                pBVar7 = (Byte__Array *)FUN_?(pvVar6);
                mscorlib.dll::System::Array::Array_Copy_3
                          ((Array *)(this->fields)._items,0,(Array *)pBVar7,0,(this->fields)._size,
                           (MethodInfo *)0x0);
                return pBVar7;
              }
              pvVar6 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->
                       klass->rgctx_data[2].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
                pvVar6 = (void *)FUN_?(pvVar6);
              }
              if (*(int *)((longlong)pvVar6 + 0xe4) == 0) {
                FUN_?(pvVar6);
              }
              pIVar8 = pMVar4->klass->rgctx_data[2].klass;
              if ((pIVar8->field_0x135 & 1) == 0) {
                pIVar8 = (Il2CppClass *)FUN_?(pIVar8);
              }
              return *(Byte__Array **)pIVar8->static_fields;
            }
            goto code_?;
          }
        }
      }
    }
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pBVar7 = (Byte__Array *)(*pcVar9)();
    return pBVar7;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  pBVar7 = (Byte__Array *)(*pcVar9)();
  return pBVar7;
}


/* Decimal ToDecimal(Byte[]) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
          BitconverterExt_ToDecimal
                    (Decimal *__return_storage_ptr__,Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    if ((int)bytes->max_length != 0x10) {
      uVar1 = func_?(&TypeInfo__System__Exception);
      this = (Exception *)func_?(uVar1);
      message = (String *)func_?(&StringLiteral__ACTk__A_decimal_must_be_created);
      mscorlib.dll::System::Exception::Exception__ctor_1(this,message,(MethodInfo *)0x0);
      uVar1 = func_?(&
                                  MethodInfo__CodeStage__AntiCheat__ObscuredTypes__BitconverterExt__ToDecimal_System__Byte____
                                 );
      FUN_?(this,uVar1);
      pcVar2 = (code *)swi(3);
      pDVar3 = (Decimal *)(*pcVar2)();
      return pDVar3;
    }
    bits = (Int32__Array *)FUN_?(TypeInfo__System__Int32,4);
    puVar4 = bytes->vector;
    uVar5 = 0;
    while( true ) {
      uVar6 = (uint)uVar5;
      if ((uint)bytes->max_length <= uVar6) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_startIndex,
                   ExceptionResource__Enum_ArgumentOutOfRange_Index,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      if ((int)bytes->max_length + -4 < (int)uVar6) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException_1
                  (ExceptionResource__Enum_Arg_ArrayPlusOffTooSmall,ExceptionArgument__Enum_value,
                   (MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      if (bits == (Int32__Array *)0x0) break;
      uVar7 = uVar5 >> 2;
      if ((uint)bits->max_length <= (uint)uVar7) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pDVar3 = (Decimal *)(*pcVar2)();
        return pDVar3;
      }
      uVar5 = (ulonglong)(uVar6 + 4);
      iVar8 = *(int32_t *)puVar4;
      puVar4 = puVar4 + 4;
      bits->vector[uVar7] = iVar8;
      if (0xf < (int)(uVar6 + 4)) {
        __return_storage_ptr__->flags = 0;
        __return_storage_ptr__->hi = 0;
        __return_storage_ptr__->lo = 0;
        __return_storage_ptr__->mid = 0;
        mscorlib.dll::System::Decimal::Decimal__ctor_6
                  (__return_storage_ptr__,bits,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Decimal *)(*pcVar2)();
  return pDVar3;
}

