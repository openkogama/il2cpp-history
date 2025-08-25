
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
      this = pSVar3;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        this = (String *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar3 != (String *)0x0) {
        array = (Int32__Array *)func_?();
        method_00 = (Random *)func_?();
        mscorlib.dll::System::Random::Random__ctor_1(method_00,0x72fce,(MethodInfo *)method_00);
        piVar4 = array->vector;
        for (uVar5 = 0; (int)uVar5 < (this->fields)._stringLength; uVar5 = uVar5 + 1) {
          if (StringLiteral_KoGaMa == (String *)0x0) goto code_?;
          if (method_00 == (Random *)0x0) goto code_?;
          this = (String *)&UNK_?;
          iVar6 = (*(code *)(method_00->klass->vtable).Next_1.method)();
          if (array == (Int32__Array *)0x0) goto code_?;
          if (array->max_length <= uVar5) goto code_?;
          *piVar4 = iVar6;
          piVar4 = piVar4 + 1;
        }
        pSVar3 = (String *)&UNK_?;
        mscorlib.dll::System::Array::Array_Sort_8
                  (array,void_MethodInfo__System__Array__Sort<int>_System__Int32____);
        pBVar7 = TypeInfo__System__Byte;
        uVar5 = 0;
        if (array != (Int32__Array *)0x0) {
          if (array->max_length == 0) {
code_?:
            func_?();
          }
          else {
            pMVar8 = (MonitorData *)array->vector[0];
            if (StringLiteral_KoGaMa != (String *)0x0) {
              pBVar9 = (Byte__Array *)func_?();
              index = (undefined *)0x0;
              uVar10 = 0;
              pSVar11 = StringLiteral_KoGaMa;
              if (StringLiteral_KoGaMa != (String *)0x0) {
                while ((int)index < (pSVar11->fields)._stringLength) {
                  uVar12 = uVar10 + 1;
                  pSVar3 = pSVar11;
                  uVar13 = mscorlib.dll::System::String::String_get_Chars
                                    (pSVar11,(int32_t)index,(MethodInfo *)0x0);
                  if (pBVar9 == (Byte__Array *)0x0) goto code_?;
                  if (pBVar9->max_length <= uVar10) goto code_?;
                  pBVar9->vector[uVar10] = (uint8_t)uVar13;
                  uVar10 = uVar12;
                  index = &UNK_?;
                }
                pSVar11 = pSVar3 + 1;
                pMVar14 = (MonitorData *)0x0;
                do {
                  if ((int)(pBVar7->_0).namespaze <= (int)pMVar14) {
                    return pBVar9;
                  }
                  uVar12 = uVar10;
                  if ((pMVar14 == pMVar8) && ((int)uVar5 < *(int *)&(pSVar3->fields)._firstChar)) {
                    uVar12 = uVar10 + 1;
                    pSVar3 = this;
                    uVar13 = mscorlib.dll::System::String::String_get_Chars
                                      (this,uVar5,(MethodInfo *)0x0);
                    if (pBVar9 == (Byte__Array *)0x0) break;
                    if (pBVar9->max_length <= uVar10) goto code_?;
                    pBVar9->vector[uVar10] = (uint8_t)uVar13;
                    if ((int)uVar5 < *(int *)&(pSVar3->fields)._firstChar + -1) {
                      uVar5 = uVar5 + 1;
                      pSVar11 = (String *)&pSVar11->monitor;
                      if (*(uint *)&(pSVar3->fields)._firstChar <= uVar5) goto code_?;
                      pMVar8 = *(MonitorData **)pSVar11;
                    }
                    pMVar14 = (MonitorData *)&UNK_?;
                  }
                  uVar10 = uVar12 + 1;
                  if ((MonitorData *)(pBVar7->_0).namespaze <= pMVar14) goto code_?;
                  if (pBVar9 == (Byte__Array *)0x0) break;
                  if (pBVar9->max_length <= uVar12) goto code_?;
                  pMVar15 = pMVar14 + (int)&(pBVar7->_0).byval_arg.data;
                  pMVar14 = pMVar14 + 1;
                  *(MonitorData *)(pBVar9->vector + uVar12) = *pMVar15;
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
  pcVar16 = (code *)swi(3);
  pBVar9 = (Byte__Array *)(*pcVar16)();
  return pBVar9;
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

