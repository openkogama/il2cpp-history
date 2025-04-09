
/* Byte[] AddToArray(Byte[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
          (Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  if ((bytes == (Byte__Array *)0x0) || ((int)bytes->max_length < 1)) {
    return bytes;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&StringLiteral__no_shit_sherlock);
    func_?(&StringLiteral_yy_MM_dd);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  puStack_2 = (undefined *)DVar1._dateData;
  pSVar3 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     ((DateTime *)&puStack_2,StringLiteral_yy_MM_dd,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar3,StringLiteral__no_shit_sherlock,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar3 = WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt(pSVar3,(MethodInfo *)0x0);
  if (pSVar3 != (String *)0x0) {
    if (0xc < (pSVar3->fields)._stringLength) {
      pSVar3 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,0xc,(MethodInfo *)0x0);
    }
    if (StringLiteral_KoGaMa != (String *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar3 != (String *)0x0) {
        pIVar4 = (Int32__Array *)func_?();
        pRVar5 = TypeInfo__System__Random;
        this = (Random *)func_?();
        mscorlib.dll::System::Random::Random__ctor_1(this,0x72fce,(MethodInfo *)0x0);
        piVar6 = pIVar4->vector;
        piVar7 = piVar6;
        for (uVar8 = 0; (int)uVar8 < (int)(pRVar5->_0).name; uVar8 = uVar8 + 1) {
          if ((StringLiteral_KoGaMa == (String *)0x0) ||
             (pRVar5 = (Random__Class *)(StringLiteral_KoGaMa->fields)._stringLength,
             this == (Random *)0x0)) goto code_?;
          piVar7 = (int32_t *)&UNK_?;
          iVar9 = (*(code *)(this->klass->vtable).Next_1.method)();
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          if (pIVar4->max_length <= uVar8) goto code_?;
          *piVar6 = iVar9;
          piVar6 = piVar6 + 1;
        }
        pSVar3 = (String *)&UNK_?;
        pIVar10 = pIVar4;
        mscorlib.dll::System::Array::Array_Sort_8
                  (pIVar4,void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        pIStack_11 = (Int32__Array *)0x0;
        if (pIVar4 != (Int32__Array *)0x0) {
          if (pIVar4->max_length == 0) {
code_?:
            func_?();
          }
          else {
            uVar8 = pIVar4->vector[0];
            if (StringLiteral_KoGaMa != (String *)0x0) {
              iVar12 = (StringLiteral_KoGaMa->fields)._stringLength + pIVar4->max_length +
                      bytes->max_length;
              pBVar13 = (Byte__Array *)func_?();
              pIVar4 = (Int32__Array *)0x0;
              uVar14 = 0;
              this_00 = StringLiteral_KoGaMa;
              if (StringLiteral_KoGaMa != (String *)0x0) {
                for (; (int)pIVar4 < (this_00->fields)._stringLength;
                    pIVar4 = (Int32__Array *)((int)&pIVar4->klass + 1)) {
                  uVar15 = uVar14 + 1;
                  pSVar3 = this_00;
                  pIVar10 = pIVar4;
                  uVar16 = mscorlib.dll::System::String::String_get_Chars
                                    (this_00,(int32_t)pIVar4,(MethodInfo *)0x0);
                  if (pBVar13 == (Byte__Array *)0x0) goto code_?;
                  if (pBVar13->max_length <= uVar14) goto code_?;
                  pBVar13->vector[uVar14] = (uint8_t)uVar16;
                  uVar14 = uVar15;
                }
                uVar15 = 0;
                do {
                  pIVar4 = pIStack_11;
                  if (*(int *)(iVar12 + 0xc) <= (int)uVar15) {
                    return pBVar13;
                  }
                  uVar17 = uVar14;
                  if ((uVar15 == uVar8) && ((int)pIStack_11 < (int)pIVar10->max_length)) {
                    uVar17 = uVar14 + 1;
                    pIVar10 = pIVar4;
                    uVar16 = mscorlib.dll::System::String::String_get_Chars
                                      (pSVar3,(int32_t)pIVar4,(MethodInfo *)0x0);
                    if (pBVar13 == (Byte__Array *)0x0) break;
                    if (pBVar13->max_length <= uVar14) goto code_?;
                    pBVar13->vector[uVar14] = (uint8_t)uVar16;
                    if (0xADDR < (int)((undefined *)pIVar10->max_length + -1)) {
                      piVar7 = piVar7 + 1;
                      if ((undefined *)pIVar10->max_length < &UNK_?) goto code_?;
                      uVar8 = *piVar7;
                    }
                  }
                  uVar14 = uVar17 + 1;
                  if (*(uint *)(iVar12 + 0xc) <= uVar15) goto code_?;
                  if (pBVar13 == (Byte__Array *)0x0) break;
                  if (pBVar13->max_length <= uVar17) goto code_?;
                  puVar18 = (uint8_t *)(iVar12 + 0x10 + uVar15);
                  uVar15 = uVar15 + 1;
                  pBVar13->vector[uVar17] = *puVar18;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pBVar13 = (Byte__Array *)(*pcVar19)();
  return pBVar13;
}


/* String EncryptedWatermark() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::
         ImageWatermark_EncryptedWatermark(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&StringLiteral__no_shit_sherlock);
    func_?(&StringLiteral_yy_MM_dd);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DStack_1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     (&DStack_1,StringLiteral_yy_MM_dd,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar2,StringLiteral__no_shit_sherlock,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar2 = WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt(pSVar2,(MethodInfo *)0x0);
  if (pSVar2 != (String *)0x0) {
    if (0xc < (pSVar2->fields)._stringLength) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,0xc,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Int32[] WatermarkPositions(Int32, String) */

Int32__Array *
MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_WatermarkPositions
          (int32_t max,String *encrypt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&void_MethodInfo__System__Array__Sort<int>_System__Int32____);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Random);
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  if (encrypt != (String *)0x0) {
    pIVar1 = (Int32__Array *)
             func_?(TypeInfo__System__Int32,(encrypt->fields)._stringLength);
    this = (Random *)func_?(TypeInfo__System__Random);
    mscorlib.dll::System::Random::Random__ctor_1(this,0x72fce,(MethodInfo *)0x0);
    piVar2 = pIVar1->vector;
    uVar3 = 0;
    while( true ) {
      if ((encrypt->fields)._stringLength <= (int)uVar3) {
        mscorlib.dll::System::Array::Array_Sort_8
                  (pIVar1,void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        return pIVar1;
      }
      if (StringLiteral_KoGaMa == (String *)0x0) break;
      if (this == (Random *)0x0) break;
      iVar4 = (*(code *)(this->klass->vtable).Next_1.method)
                        (this,(StringLiteral_KoGaMa->fields)._stringLength,max,
                         (this->klass->vtable).Next_2.methodPtr);
      if (pIVar1 == (Int32__Array *)0x0) break;
      if (pIVar1->max_length <= uVar3) goto code_?;
      uVar3 = uVar3 + 1;
      *piVar2 = iVar4;
      piVar2 = piVar2 + 1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar5)();
  return pIVar1;
}

