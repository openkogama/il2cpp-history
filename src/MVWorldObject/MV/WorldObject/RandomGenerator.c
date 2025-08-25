
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
    if ((iVar9 < 1) && ((iVar9 < 0 || (uVar8 <= uVar4)))) {
      puVar10 = &(this->fields).round;
      *puVar10 = *puVar10 + 1;
      (this->fields).step = 0;
    }
    uVar4 = uVar3 * uVar1 * uVar2;
    if ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pRVar11 = TypeInfo__MV__WorldObject__RandomGenerator;
    pUVar5 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    pUVar12 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar12 == (UInt16__Array *)0x0) goto code_?;
    lVar13 = func_?(uVar4,0,pUVar12->max_length,(int)pUVar12->max_length >> 0x1f);
    if (0x7fffffff < lVar13) goto code_?;
    uVar8 = func_?(uVar4,0,pUVar12->max_length,(int)pUVar12->max_length >> 0x1f);
    if (pUVar5->max_length <= uVar8) goto code_?;
    uVar14 = pUVar5->vector[uVar8];
    pUVar5 = pRVar11->static_fields->randomNumbers;
    if (pUVar5 == (UInt16__Array *)0x0) goto code_?;
    lVar13 = func_?(~uVar4,0,pUVar5->max_length,(int)pUVar5->max_length >> 0x1f);
    if (lVar13 < 0x80000000) {
      uVar4 = func_?(~uVar4,0,pUVar5->max_length,(int)pUVar5->max_length >> 0x1f);
      if (uVar4 < pUVar5->max_length) {
        return (uint)pUVar5->vector[uVar4] + (uint)uVar14 * 0x10000;
      }
      goto code_?;
    }
  }
  pMVar6 = MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__;
  uVar7 = func_?();
  func_?(uVar7,pMVar6);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  iVar16 = (*pcVar15)();
  return iVar16;
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
    return uVar1 * uVar3 * uVar2;
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
  if (min <= max + -1) {
    iVar1 = RandomGenerator_GetNewRandom(this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uVar2 = iVar1 / 2 >> 0x1f;
    return min + (int)((iVar1 / 2 ^ uVar2) - uVar2) % (((max + -1) - min) + 1);
  }
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_max_must_be_greater_than_min);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  uVar3 = func_?(&MethodInfo__MV__WorldObject__RandomGenerator__Range_int__int_);
  func_?(this_00,uVar3);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
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

