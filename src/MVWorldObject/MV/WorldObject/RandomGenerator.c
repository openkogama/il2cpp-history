
/* Int32 GetNewRandom() */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_GetNewRandom
                  (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = uVar1 + 1;
  (this->fields).step = uVar2;
  uVar3 = (this->fields).seed * (this->fields).round * uVar1;
  if ((((uint)(TypeInfo__MV__WorldObject__RandomGenerator->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__RandomGenerator);
  }
  pUVar4 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
  if (pUVar4 == (UInt16__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar5 = func_?(0,MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  else {
    uVar6 = pUVar4->max_length;
    iVar7 = (int)uVar6 >> 0x1f;
    if ((iVar7 < 1) && ((iVar7 < 0 || (uVar6 <= uVar2)))) {
      puVar8 = &(this->fields).round;
      *puVar8 = *puVar8 + 1;
      (this->fields).step = 0;
    }
    if ((((uint)(TypeInfo__MV__WorldObject__RandomGenerator->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__RandomGenerator);
    }
    pUVar4 = TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers;
    if (pUVar4 == (UInt16__Array *)0x0) goto code_?;
    uVar2 = pUVar4->max_length;
    lVar9 = func_?(uVar3,0,uVar2,(int)uVar2 >> 0x1f);
    if (0x7fffffff < lVar9) goto code_?;
    if (pUVar4 == (UInt16__Array *)0x0) goto code_?;
    if (uVar2 <= (uint)lVar9) goto code_?;
    uVar10 = pUVar4->vector[(uint)lVar9];
    if (pUVar4 == (UInt16__Array *)0x0) goto code_?;
    lVar9 = func_?(~uVar3,0,uVar2,(int)uVar2 >> 0x1f);
    if (lVar9 < 0x80000000) {
      if ((uint)lVar9 < uVar2) {
        return (uint)pUVar4->vector[(uint)lVar9] + (uint)uVar10 * 0x10000;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0,MethodInfo__MV__WorldObject__RandomGenerator__GetNewRandom__);
  func_?(uVar5);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* UInt32 IncrementRandomIndex() */

uint32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_IncrementRandomIndex
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).step;
  uVar2 = (this->fields).seed;
  uVar3 = (this->fields).round;
  uVar4 = uVar1 + 1;
  (this->fields).step = uVar4;
  if ((((uint)(TypeInfo__MV__WorldObject__RandomGenerator->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MV__WorldObject__RandomGenerator->_1).cctor_started == 0)) {
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
    return uVar2 * uVar3 * uVar1;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  uVar1 = (*pcVar8)();
  return uVar1;
}


/* Int32 Range(Int32, Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                  (RandomGenerator *this,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (min <= max + -1) {
    iVar1 = RandomGenerator_GetNewRandom(this,(MethodInfo *)0x0);
    uVar2 = iVar1 / 2 >> 0x1f;
    return min + (int)((iVar1 / 2 ^ uVar2) - uVar2) % (((max + -1) - min) + 1);
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_max_must_be_greater_than_min,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__MV__WorldObject__RandomGenerator__Range_int__int_);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_ToString
                   (RandomGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  this = (RandomGenerator *)(this->fields).seed;
  arg0 = (Object *)func_?(TypeInfo__System__UInt32,&this);
  uStack_2 = (pRVar1->fields).round;
  arg1 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_2);
  uStack_3 = (pRVar1->fields).step;
  arg2 = (Object *)func_?(TypeInfo__System__UInt32,&uStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Seed__0___Round__1___Step__2__,arg0,arg1,arg2,(MethodInfo *)0x0)
  ;
  return pSVar4;
}


/* RandomGenerator() */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  array = (UInt16__Array *)func_?(TypeInfo__System__UInt16,0x100);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,___method0x60003f4_1_Field,(MethodInfo *)0x0);
  TypeInfo__MV__WorldObject__RandomGenerator->static_fields->randomNumbers = array;
  return;
}


/* RandomGenerator(UInt32, UInt32, UInt32) */

void MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__ctor
               (RandomGenerator *this,uint32_t seed,uint32_t step,uint32_t round,MethodInfo *method)

{
  (this->fields).step = 1;
  (this->fields).round = 1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).seed = seed;
  (this->fields).step = step;
  (this->fields).round = round;
  return;
}

