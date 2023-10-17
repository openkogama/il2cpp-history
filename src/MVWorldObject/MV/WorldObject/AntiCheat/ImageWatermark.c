
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
  encrypt = ImageWatermark_EncryptedWatermark((MethodInfo *)0x0);
  if (StringLiteral_KoGaMa != (String *)0x0) {
    pIVar1 = ImageWatermark_WatermarkPositions
                       ((StringLiteral_KoGaMa->fields)._stringLength + 0xc + bytes->max_length,
                        encrypt,(MethodInfo *)0x0);
    index = 0;
    if (pIVar1 != (Int32__Array *)0x0) {
      if (pIVar1->max_length == 0) goto code_?;
      uStack_2 = pIVar1->vector[0];
      if (StringLiteral_KoGaMa != (String *)0x0) {
        encrypt = (String *)
                  ((StringLiteral_KoGaMa->fields)._stringLength + pIVar1->max_length +
                  bytes->max_length);
        pBVar3 = (Byte__Array *)func_?(TypeInfo__System__Byte);
        this = StringLiteral_KoGaMa;
        uStack_4 = 0;
        uVar5 = 0;
        if (StringLiteral_KoGaMa != (String *)0x0) {
          for (; (int)uStack_4 < (this->fields)._stringLength; uStack_4 = uStack_4 + 1) {
            uVar6 = mscorlib.dll::System::String::String_get_Chars(this,uStack_4,(MethodInfo *)0x0);
            if (pBVar3 == (Byte__Array *)0x0) goto code_?;
            if (pBVar3->max_length <= uVar5) goto code_?;
            pBVar3->vector[uVar5] = (uint8_t)uVar6;
            uVar5 = uVar5 + 1;
          }
          uStack_4 = 0;
          piStack_7 = pIVar1->vector;
          do {
            if ((int)bytes->max_length <= (int)uStack_4) {
              return pBVar3;
            }
            uVar8 = uVar5;
            if ((uStack_4 == uStack_2) && ((int)index < (int)pIVar1->max_length)) {
              if (encrypt == (String *)0x0) break;
              uVar8 = uVar5 + 1;
              uVar6 = mscorlib.dll::System::String::String_get_Chars
                                (encrypt,index,(MethodInfo *)0x0);
              if (pBVar3 == (Byte__Array *)0x0) break;
              if (pBVar3->max_length <= uVar5) goto code_?;
              pBVar3->vector[uVar5] = (uint8_t)uVar6;
              if ((int)index < (int)(pIVar1->max_length - 1)) {
                index = index + 1;
                piStack_7 = piStack_7 + 1;
                if (pIVar1->max_length <= index) goto code_?;
                uStack_2 = *piStack_7;
              }
            }
            uVar5 = uVar8 + 1;
            if (bytes->max_length <= uStack_4) goto code_?;
            if (pBVar3 == (Byte__Array *)0x0) break;
            if (pBVar3->max_length <= uVar8) goto code_?;
            puVar9 = bytes->vector + uStack_4;
            uStack_4 = uStack_4 + 1;
            pBVar3->vector[uVar8] = *puVar9;
          } while( true );
        }
      }
    }
  }
code_?:
  func_?(encrypt);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar10)();
  return pBVar3;
}


/* Byte[] CleanUp(Byte[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_CleanUp
          (Byte__Array *bytes,MethodInfo *method)

{
  pBVar1 = bytes;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  if (bytes == (Byte__Array *)0x0) {
    return (Byte__Array *)0x0;
  }
  if (StringLiteral_KoGaMa != (String *)0x0) {
    if ((int)bytes->max_length < (StringLiteral_KoGaMa->fields)._stringLength + 0xc) {
      return bytes;
    }
    pSVar2 = ImageWatermark_EncryptedWatermark((MethodInfo *)0x0);
    pIVar3 = ImageWatermark_WatermarkPositions(bytes->max_length,pSVar2,(MethodInfo *)0x0);
    if ((StringLiteral_KoGaMa != (String *)0x0) &&
       (pBVar4 = (Byte__Array *)
                 func_?(TypeInfo__System__Byte,
                                 (bytes->max_length - (StringLiteral_KoGaMa->fields)._stringLength)
                                 + -0xc), pSVar2 != (String *)0x0)) {
      uVar5 = mscorlib.dll::System::String::String_get_Chars(pSVar2,0,(MethodInfo *)0x0);
      bytes = (Byte__Array *)((uint)(byte)uVar5 << 0x18);
      index = 0;
      if (pIVar3 != (Int32__Array *)0x0) {
        if (pIVar3->max_length == 0) {
code_?:
          func_?();
        }
        else {
          iVar6 = pIVar3->vector[0];
          if (StringLiteral_KoGaMa != (String *)0x0) {
            uVar7 = (StringLiteral_KoGaMa->fields)._stringLength;
            puStack_8 = pBVar1->vector + uVar7;
            piStack_9 = pIVar3->vector;
            pSVar2 = StringLiteral_KoGaMa;
            uVar10 = 0;
            do {
              if ((int)pBVar1->max_length <= (int)uVar7) {
                return pBVar4;
              }
              if ((int)index < (int)pIVar3->max_length) {
                if (pSVar2 == (String *)0x0) break;
                if ((pSVar2->fields)._stringLength + iVar6 != uVar7 - index) goto code_?;
                if (pBVar1->max_length <= uVar7) goto code_?;
                if (*puStack_8 != bytes._3_1_) {
                  uVar11 = func_?(&TypeInfo__System__Exception);
                  this = (Exception *)func_?(uVar11);
                  func_?(this);
                  method_00 = (MethodInfo *)0x0;
                  pSVar2 = (String *)func_?(&StringLiteral_An_error_occurred);
                  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar2,method_00);
                  uVar11 = func_?(&
                                          MethodInfo__MV__WorldObject__AntiCheat__ImageWatermark__CleanUp_System__Byte____
                                         );
                  func_?(this,uVar11);
                  goto code_?;
                }
                index = index + 1;
                piStack_9 = piStack_9 + 1;
                uVar12 = uVar10;
                if ((int)index < (int)pIVar3->max_length) {
                  if (pIVar3->max_length <= index) goto code_?;
                  iVar6 = *piStack_9;
                  uVar5 = mscorlib.dll::System::String::String_get_Chars
                                    ((String *)0x0,index,(MethodInfo *)0x0);
                  bytes = (Byte__Array *)((uint)(byte)uVar5 << 0x18);
                  pSVar2 = StringLiteral_KoGaMa;
                  uVar12 = uVar10;
                }
              }
              else {
code_?:
                uVar12 = uVar10 + 1;
                if (pBVar1->max_length <= uVar7) goto code_?;
                if (pBVar4 == (Byte__Array *)0x0) break;
                if (pBVar4->max_length <= uVar10) goto code_?;
                pBVar4->vector[uVar10] = *puStack_8;
                pSVar2 = StringLiteral_KoGaMa;
              }
              uVar7 = uVar7 + 1;
              puStack_8 = puStack_8 + 1;
              uVar10 = uVar12;
            } while( true );
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar13)();
  return pBVar1;
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
  pSVar2 = Security::SecurityHelper::SecurityHelper_Encrypt(pSVar2,(MethodInfo *)0x0);
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


/* Boolean HasWatermark(Byte[]) */

bool MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_HasWatermark
               (Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  if (bytes == (Byte__Array *)0x0) {
    return 0;
  }
  if (StringLiteral_KoGaMa != (String *)0x0) {
    if ((int)bytes->max_length < (StringLiteral_KoGaMa->fields)._stringLength + 0xc) {
      return 0;
    }
    index = 0;
    do {
      if ((StringLiteral_KoGaMa->fields)._stringLength <= (int)index) {
        return 1;
      }
      uVar1 = mscorlib.dll::System::String::String_get_Chars
                        (StringLiteral_KoGaMa,index,(MethodInfo *)0x0);
      if (bytes->max_length <= index) goto code_?;
      if (bytes->vector[index] != (uint8_t)uVar1) {
        return 0;
      }
      index = index + 1;
    } while (StringLiteral_KoGaMa != (String *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
    if (this != (Random *)0x0) {
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
        iVar4 = (*(this->klass->vtable).Next_1.methodPtr)
                          (this,(StringLiteral_KoGaMa->fields)._stringLength,max,
                           (this->klass->vtable).Next_1.method);
        if (pIVar1 == (Int32__Array *)0x0) break;
        if (pIVar1->max_length <= uVar3) goto code_?;
        uVar3 = uVar3 + 1;
        *piVar2 = iVar4;
        piVar2 = piVar2 + 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar5)();
  return pIVar1;
}

