
/* Byte[] AddToArray(Byte[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
          (Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_KoGaMa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((bytes == (Byte__Array *)0x0) || ((int)bytes->max_length < 1)) {
    return bytes;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__no_shit_sherlock);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yy_MM_dd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar1 = StringLiteral_yy_MM_dd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral__no_shit_sherlock,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar2 = (pSVar1->fields)._stringLength;
    if (0xc < iVar2) {
      if (iVar2 + -0xc < 0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this_00 = (ArgumentOutOfRangeException *)func_?(uVar3);
        pSVar1 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
        pSVar4 = (String *)func_?(&StringLiteral_length);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (this_00,pSVar4,pSVar1,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(this_00,uVar3);
        pcVar5 = (code *)swi(3);
        pBVar6 = (Byte__Array *)(*pcVar5)();
        return pBVar6;
      }
      pSVar1 = mscorlib.dll::System::String::String_InternalSubString
                         (pSVar1,0,0xc,(MethodInfo *)0x0);
    }
    if (StringLiteral_KoGaMa != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Random);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_KoGaMa);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar1 != (String *)0x0) {
        lVar7 = FUN_?(TypeInfo__System__Int32,(pSVar1->fields)._stringLength);
        this = (Random *)FUN_?(TypeInfo__System__Random);
        mscorlib.dll::System::Random::Random__ctor_1(this,0x72fce,(MethodInfo *)0x0);
        puVar8 = (undefined4 *)(lVar7 + 0x20);
        uVar9 = 0;
        uVar10 = uVar9;
        while (pMVar11 = void_MethodInfo__System__Array__Sort<int>_System__Int32____,
              uVar12 = (uint)uVar10, (int)uVar12 < (pSVar1->fields)._stringLength) {
          if ((StringLiteral_KoGaMa == (String *)0x0) || (this == (Random *)0x0))
          goto code_?;
          uVar13 = (*(this->klass->vtable).Next_1.methodPtr)(this);
          if (lVar7 == 0) goto code_?;
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto code_?;
          *puVar8 = uVar13;
          puVar8 = puVar8 + 1;
          uVar10 = (ulonglong)(uVar12 + 1);
        }
        if ((void_MethodInfo__System__Array__Sort<int>_System__Int32____->field7_0x38).rgctx_data ==
            (Il2CppRGCTXData *)0x0) {
          FUN_?(void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        }
        if (lVar7 == 0) {
          uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
          this_01 = (ArgumentNullException *)func_?(uVar3);
          pSVar1 = (String *)func_?(&StringLiteral_array);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_01,pSVar1,(MethodInfo *)0x0);
          FUN_?(this_01,pMVar11);
          pcVar5 = (code *)swi(3);
          pBVar6 = (Byte__Array *)(*pcVar5)();
          return pBVar6;
        }
        FUN_?(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0,
                      (pMVar11->field7_0x38).rgctx_data[1].rgctxDataDummy);
        if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          pBVar6 = (Byte__Array *)(*pcVar5)();
          return pBVar6;
        }
        uVar12 = *(uint *)(lVar7 + 0x20);
        if (StringLiteral_KoGaMa != (String *)0x0) {
          pBVar6 = (Byte__Array *)
                   FUN_?(TypeInfo__System__Byte,
                                 *(int *)(lVar7 + 0x18) +
                                 (StringLiteral_KoGaMa->fields)._stringLength +
                                 (int)bytes->max_length);
          pSVar4 = StringLiteral_KoGaMa;
          if (StringLiteral_KoGaMa != (String *)0x0) {
            puVar14 = &(StringLiteral_KoGaMa->fields)._firstChar;
            uVar10 = uVar9;
            uVar15 = uVar9;
            uVar16 = uVar9;
            while( true ) {
              uVar17 = (uint)uVar10;
              if ((pSVar4->fields)._stringLength <= (int)uVar16) break;
              if ((longlong)(pSVar4->fields)._stringLength <= (longlong)uVar16)
              goto code_?;
              uVar10 = (ulonglong)(uVar17 + 1);
              if (pBVar6 == (Byte__Array *)0x0) goto code_?;
              if ((uint)pBVar6->max_length <= uVar17) goto code_?;
              uVar16 = (ulonglong)((int)uVar16 + 1);
              pBVar6->vector[uVar15] = (uint8_t)*puVar14;
              puVar14 = puVar14 + 1;
              uVar15 = uVar15 + 1;
            }
            puVar18 = bytes->vector;
            puVar14 = &(pSVar1->fields)._firstChar;
            uVar16 = uVar9;
            uVar19 = uVar9;
            do {
              uVar20 = (uint)uVar10;
              uVar17 = (uint)uVar19;
              if ((int)bytes->max_length <= (int)uVar17) {
                return pBVar6;
              }
              uVar21 = uVar15;
              uVar22 = uVar20;
              if ((uVar17 == uVar12) && (iVar2 = (int)uVar16, iVar2 < *(int *)(lVar7 + 0x18))) {
                if ((longlong)(pSVar1->fields)._stringLength <= (longlong)uVar16) {
code_?:
                  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                            ((MethodInfo *)0x0);
                  pcVar5 = (code *)swi(3);
                  pBVar6 = (Byte__Array *)(*pcVar5)();
                  return pBVar6;
                }
                uVar22 = uVar20 + 1;
                uVar21 = uVar15 + 1;
                if (pBVar6 == (Byte__Array *)0x0) break;
                if ((uint)pBVar6->max_length <= uVar20) goto code_?;
                pBVar6->vector[uVar15] = (uint8_t)*puVar14;
                if (iVar2 < *(int *)(lVar7 + 0x18) + -1) {
                  uVar9 = uVar9 + 1;
                  puVar14 = puVar14 + 1;
                  uVar16 = (ulonglong)(iVar2 + 1U);
                  if (*(uint *)(lVar7 + 0x18) <= iVar2 + 1U) goto code_?;
                  uVar12 = *(uint *)(lVar7 + 0x20 + uVar9 * 4);
                }
              }
              uVar10 = (ulonglong)(uVar22 + 1);
              uVar15 = uVar21 + 1;
              if ((uint)bytes->max_length <= uVar17) goto code_?;
              if (pBVar6 == (Byte__Array *)0x0) break;
              if ((uint)pBVar6->max_length <= uVar22) goto code_?;
              uVar19 = (ulonglong)(uVar17 + 1);
              pBVar6->vector[uVar21] = *puVar18;
              puVar18 = puVar18 + 1;
            } while( true );
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pBVar6 = (Byte__Array *)(*pcVar5)();
  return pBVar6;
}


/* String EncryptedWatermark() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::
         ImageWatermark_EncryptedWatermark(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__no_shit_sherlock);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yy_MM_dd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar1 = StringLiteral_yy_MM_dd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral__no_shit_sherlock,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar2 = (pSVar1->fields)._stringLength;
    if (0xc < iVar2) {
      if (iVar2 + -0xc < 0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this = (ArgumentOutOfRangeException *)func_?(uVar3);
        pSVar1 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
        paramName = (String *)func_?(&StringLiteral_length);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (this,paramName,pSVar1,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(this,uVar3);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
      pSVar1 = mscorlib.dll::System::String::String_InternalSubString
                         (pSVar1,0,0xc,(MethodInfo *)0x0);
    }
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Int32[] WatermarkPositions(Int32, String) */

Int32__Array *
MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_WatermarkPositions
          (int32_t max,String *encrypt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&void_MethodInfo__System__Array__Sort<int>_System__Int32____);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Random);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_KoGaMa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (encrypt != (String *)0x0) {
    pIVar1 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,(encrypt->fields)._stringLength);
    this = (Random *)FUN_?(TypeInfo__System__Random);
    mscorlib.dll::System::Random::Random__ctor_1(this,0x72fce,(MethodInfo *)0x0);
    uVar2 = 0;
    piVar3 = pIVar1->vector;
    while( true ) {
      pMVar4 = void_MethodInfo__System__Array__Sort<int>_System__Int32____;
      if ((encrypt->fields)._stringLength <= (int)uVar2) {
        if ((void_MethodInfo__System__Array__Sort<int>_System__Int32____->field7_0x38).rgctx_data ==
            (Il2CppRGCTXData *)0x0) {
          FUN_?(void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        }
        if (pIVar1 != (Int32__Array *)0x0) {
          FUN_?(pIVar1,0,(int)pIVar1->max_length,0,
                        (pMVar4->field7_0x38).rgctx_data[1].rgctxDataDummy);
          return pIVar1;
        }
        uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
        this_00 = (ArgumentNullException *)func_?(uVar5);
        paramName = (String *)func_?(&StringLiteral_array);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (this_00,paramName,(MethodInfo *)0x0);
        FUN_?(this_00,pMVar4);
        pcVar6 = (code *)swi(3);
        pIVar1 = (Int32__Array *)(*pcVar6)();
        return pIVar1;
      }
      if ((StringLiteral_KoGaMa == (String *)0x0) || (this == (Random *)0x0)) break;
      iVar7 = (*(this->klass->vtable).Next_1.methodPtr)(this);
      if (pIVar1 == (Int32__Array *)0x0) break;
      if ((uint)pIVar1->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        pIVar1 = (Int32__Array *)(*pcVar6)();
        return pIVar1;
      }
      uVar2 = uVar2 + 1;
      *piVar3 = iVar7;
      piVar3 = piVar3 + 1;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar6)();
  return pIVar1;
}

