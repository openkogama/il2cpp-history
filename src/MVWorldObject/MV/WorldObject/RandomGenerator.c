
/* Int32 GetNewRandom() */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_GetNewRandom
                  (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = (this->fields).seed;
  uVar3 = (this->fields).round;
  uVar4 = uVar1 + 1;
  (this->fields).step = uVar4;
  if (*(int *)&(TypeInfo__MV__WorldObject__RandomGenerator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar5 != (UInt16__Array *)0x0) {
    if ((longlong)(int)pUVar5->max_length <= (longlong)(ulonglong)uVar4) {
      puVar6 = &(this->fields).round;
      *puVar6 = *puVar6 + 1;
      (this->fields).step = 0;
    }
    uVar4 = uVar3 * uVar1 * uVar2;
    if (*(int *)&(TypeInfo__MV__WorldObject__RandomGenerator->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar5 != (UInt16__Array *)0x0) {
      lVar7 = (longlong)(ulonglong)uVar4 % (longlong)(int)pUVar5->max_length;
      if ((uint)lVar7 < (uint)pUVar5->max_length) {
        pUVar8 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
        lVar9 = (longlong)(ulonglong)~uVar4 % (longlong)(int)pUVar8->max_length;
        if ((uint)lVar9 < (uint)pUVar8->max_length) {
          return (uint)pUVar8->vector[lVar9] + (uint)pUVar5->vector[lVar7] * 0x10000;
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      iVar11 = (*pcVar10)();
      return iVar11;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  iVar11 = (*pcVar10)();
  return iVar11;
}


/* UInt32 IncrementRandomIndex() */

uint32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_IncrementRandomIndex
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = (this->fields).seed;
  uVar3 = (this->fields).round;
  uVar4 = uVar1 + 1;
  (this->fields).step = uVar4;
  if (*(int *)&(TypeInfo__MV__WorldObject__RandomGenerator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar5 != (UInt16__Array *)0x0) {
    if ((longlong)(int)pUVar5->max_length <= (longlong)(ulonglong)uVar4) {
      puVar6 = &(this->fields).round;
      *puVar6 = *puVar6 + 1;
      (this->fields).step = 0;
    }
    return uVar1 * uVar3 * uVar2;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  uVar1 = (*pcVar7)();
  return uVar1;
}


/* Int32 Range(Int32, Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                  (RandomGenerator *this,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (max + -1 < min) {
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    message = (String *)func_?(&StringLiteral_max_must_be_greater_than_min);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__RandomGenerator__Range_int__int_);
    FUN_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar4 = (this->fields).step;
  uVar5 = (this->fields).seed;
  uVar6 = (this->fields).round;
  uVar7 = uVar4 + 1;
  (this->fields).step = uVar7;
  if (*(int *)&(TypeInfo__MV__WorldObject__RandomGenerator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar8 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar8 != (UInt16__Array *)0x0) {
    if ((longlong)(int)pUVar8->max_length <= (longlong)(ulonglong)uVar7) {
      puVar9 = &(this->fields).round;
      *puVar9 = *puVar9 + 1;
      (this->fields).step = 0;
    }
    uVar7 = uVar4 * uVar6 * uVar5;
    if (*(int *)&(TypeInfo__MV__WorldObject__RandomGenerator->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar8 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar8 != (UInt16__Array *)0x0) {
      lVar10 = (longlong)(ulonglong)uVar7 % (longlong)(int)pUVar8->max_length;
      if ((uint)lVar10 < (uint)pUVar8->max_length) {
        uVar11 = pUVar8->vector[lVar10];
        pUVar8 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
        lVar10 = (longlong)(ulonglong)~uVar7 % (longlong)(int)pUVar8->max_length;
        if ((uint)lVar10 < (uint)pUVar8->max_length) {
          uVar12 = pUVar8->vector[lVar10];
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          iVar13 = (int)((uint)uVar12 + (uint)uVar11 * 0x10000) / 2;
          iVar14 = -iVar13;
          if (iVar14 < 0) {
            iVar14 = iVar13;
          }
          return min + iVar14 % (((max + -1) - min) + 1);
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_ToString
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Seed__0___Round__1___Step__2__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = (this->fields).seed;
  arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
  auStackX_8[0] = (this->fields).round;
  arg1 = (Object *)FUN_?(uRam_?,auStackX_8);
  auStackX_8[0] = (this->fields).step;
  arg2 = (Object *)FUN_?(uRam_?,auStackX_8);
  pSVar1 = StringLiteral_Seed__0___Round__1___Step__2__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* RandomGenerator() */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    FUN_?(&_4666F65F06B4D88A8B0A0B9B14E88555CB0664EC0219F1C8B5315FD000218E28_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__UInt16);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  array = (UInt16__Array *)FUN_?(TypeInfo__System__UInt16,0x100);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__4666F65F06B4D88A8B0A0B9B14E88555CB0664EC0219F1C8B5315FD000218E28_Field
             ,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers = array;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__MV__WorldObject__RandomGenerator->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* RandomGenerator(UInt32, UInt32, UInt32) */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__ctor
               (RandomGenerator *this,uint32_t seed,uint32_t step,uint32_t round,MethodInfo *method)

{
  (this->fields).seed = seed;
  (this->fields).step = step;
  (this->fields).round = round;
  return;
}

