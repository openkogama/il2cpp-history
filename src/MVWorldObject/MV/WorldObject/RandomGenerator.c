
/* Int32 GetNewRandom() */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_GetNewRandom
                  (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
    func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = (this->fields).seed;
  uVar3 = (this->fields).round;
  uVar4 = uVar1 + 1;
  (this->fields).step = uVar4;
  if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar5 == (UInt16__Array *)0x0) {
code_?:
    func_?();
code_?:
    pMVar6 = MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__;
    uVar7 = func_?();
    func_?(uVar7,pMVar6);
  }
  else {
    uVar8 = pUVar5->max_length;
    iVar9 = (int)uVar8 >> 0x1f;
    uVar10 = uVar3 * uVar1 * uVar2;
    if ((iVar9 < 1) && ((iVar9 < 0 || (uVar8 <= uVar4)))) {
      puVar11 = &(this->fields).round;
      *puVar11 = *puVar11 + 1;
      (this->fields).step = 0;
    }
    if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar5 == (UInt16__Array *)0x0) goto code_?;
    lVar12 = func_?(uVar10,0,pUVar5->max_length,(int)pUVar5->max_length >> 0x1f);
    if (0x7fffffff < lVar12) goto code_?;
    if (pUVar5->max_length <= (uint)lVar12) goto code_?;
    uVar13 = pUVar5->vector[(uint)lVar12];
    lVar12 = func_?(~uVar10,0,pUVar5->max_length,(int)pUVar5->max_length >> 0x1f);
    if (lVar12 < 0x80000000) {
      if ((uint)lVar12 < pUVar5->max_length) {
        return CONCAT22(uVar13,pUVar5->vector[(uint)lVar12]);
      }
      goto code_?;
    }
  }
  pMVar6 = MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__;
  uVar7 = func_?();
  func_?(uVar7,pMVar6);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* UInt32 IncrementRandomIndex() */

uint32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_IncrementRandomIndex
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = (this->fields).seed;
  uVar3 = (this->fields).round;
  uVar4 = uVar1 + 1;
  (this->fields).step = uVar4;
  if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar5 != (UInt16__Array *)0x0) {
    uVar6 = pUVar5->max_length;
    if (((int)uVar6 >> 0x1f < 1) && (((int)uVar6 < 0 && (int)uVar6 >> 0x1f < 1 || (uVar6 <= uVar4)))
       ) {
      puVar7 = &(this->fields).round;
      *puVar7 = *puVar7 + 1;
      (this->fields).step = 0;
    }
    return uVar3 * uVar1 * uVar2;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  uVar1 = (*pcVar8)();
  return uVar1;
}


/* Int32 Range(Int32, Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                  (RandomGenerator *this,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (max + -1 < min) {
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar1);
    pMVar2 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_max_must_be_greater_than_min);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar2);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__RandomGenerator__Range_int__int_);
    func_?(this_00,uVar1);
code_?:
    pMVar2 = MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__;
    uVar1 = func_?();
    func_?(uVar1,pMVar2);
code_?:
    pMVar2 = MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__;
    uVar1 = func_?();
    func_?(uVar1,pMVar2);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
      func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
      cRam_? = '\x01';
    }
    uVar3 = (this->fields).step;
    uVar4 = (this->fields).seed;
    uVar5 = (this->fields).round;
    (this->fields).step = uVar3 + 1;
    if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar6 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar6 == (UInt16__Array *)0x0) goto code_?;
    uVar7 = pUVar6->max_length;
    iVar8 = (int)uVar7 >> 0x1f;
    uVar9 = uVar5 * uVar3 * uVar4;
    if ((iVar8 < 1) && ((iVar8 < 0 || (uVar7 <= uVar3 + 1)))) {
      puVar10 = &(this->fields).round;
      *puVar10 = *puVar10 + 1;
      (this->fields).step = 0;
    }
    if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar6 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar6 == (UInt16__Array *)0x0) goto code_?;
    lVar11 = func_?(uVar9,0,pUVar6->max_length,(int)pUVar6->max_length >> 0x1f);
    if (0x7fffffff < lVar11) goto code_?;
    if ((uint)lVar11 < pUVar6->max_length) {
      uVar12 = pUVar6->vector[(uint)lVar11];
      lVar11 = func_?(~uVar9,0,pUVar6->max_length,(int)pUVar6->max_length >> 0x1f);
      if (0x7fffffff < lVar11) goto code_?;
      if ((uint)lVar11 < pUVar6->max_length) {
        uVar13 = pUVar6->vector[(uint)lVar11];
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        uVar7 = (int)((uint)uVar13 + (uint)uVar12 * 0x10000) / 2;
        uVar9 = (int)uVar7 >> 0x1f;
        return min + (int)((uVar7 ^ uVar9) - uVar9) % (((max + -1) - min) + 1);
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_ToString
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt32);
    func_?(&StringLiteral_Seed__0___Round__1___Step__2__);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  this = (RandomGenerator *)(this->fields).seed;
  arg0 = (Object *)func_?(TypeInfo__System__UInt32,&this);
  uStack_2 = (pRVar1->fields).round;
  arg1 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_2);
  uStack_3 = (pRVar1->fields).step;
  arg2 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Seed__0___Round__1___Step__2__,arg0,arg1,arg2,(MethodInfo *)0x0)
  ;
  return pSVar4;
}


/* RandomGenerator() */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    func_?(&_4666F65F06B4D88A8B0A0B9B14E88555CB0664EC0219F1C8B5315FD000218E28_Field);
    func_?(&TypeInfo__System__UInt16);
    cRam_? = '\x01';
  }
  array = (UInt16__Array *)func_?(TypeInfo__System__UInt16,0x100);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__4666F65F06B4D88A8B0A0B9B14E88555CB0664EC0219F1C8B5315FD000218E28_Field
             ,(MethodInfo *)0x0);
  TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers = array;
  func_?(TypeInfo__MV__WorldObject__RandomGenerator->static_fields,array);
  return;
}


/* RandomGenerator(UInt32, UInt32, UInt32) */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__ctor
               (RandomGenerator *this,uint32_t seed,uint32_t step,uint32_t round,MethodInfo *method)

{
  (this->fields).step = 1;
  (this->fields).round = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).seed = seed;
  (this->fields).step = step;
  (this->fields).round = round;
  return;
}

