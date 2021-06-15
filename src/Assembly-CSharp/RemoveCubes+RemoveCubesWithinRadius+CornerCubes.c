
/* Byte[] GetCornerCube(Int32) */

Byte__Array *
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
  }
  pBVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes;
  if (pBVar1 == (Byte__Array__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if ((uint)index < pBVar1->max_length) {
    if (pBVar1->vector[index] != (Byte__Array *)0x0) {
      unaff_ESI = mscorlib.dll::System::Array::Array_Clone
                            ((Array *)pBVar1->vector[index],(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Byte;
      if (unaff_ESI == (Object *)0x0) {
        return (Byte__Array *)0x0;
      }
      pBVar2 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
      if (pBVar2 != (Byte__Array *)0x0) {
        return pBVar2;
      }
      goto code_?;
    }
    goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar4 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar4)();
  return pBVar2;
}


/* RemoveCubes+RemoveCubesWithinRadius+CornerCubes() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
     RemoveCubes_RemoveCubesWithinRadius_CornerCubes__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array__Array *)func_?(TypeInfo__System__Byte,4);
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar2,__field_9C638200F9333526E877E70D66D638368EC4125A_Field,
             (MethodInfo *)0x0);
  if (pBVar1 == (Byte__Array__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    pIStack4 = (Il2CppClass *)0x0;
    pBStack5 = (Byte__Array__Class *)0x0;
    func_?();
    func_?();
code_?:
    pIStack4 = (Il2CppClass *)0x0;
    pBStack5 = (Byte__Array__Class *)0x0;
    func_?();
    func_?();
  }
  else {
    if (pBVar2 != (Byte__Array *)0x0) {
      iVar6 = func_?(pBVar2);
      if (iVar6 == 0) goto code_?;
    }
    if (pBVar1->max_length == 0) goto code_?;
    pBVar1->vector[0] = pBVar2;
    pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pBVar2,__field_E143CF669B33B35FA24A183794D1CC22515F0F52_Field,
               (MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar1->max_length < 2) goto code_?;
    pBVar1->vector[1] = pBVar2;
    pBVar2 = (Byte__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pBVar2,__field_F6D2281FFD8CE28C3B4E23B8C750B40267FCB5A5_Field,
               (MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      pIStack4 = (pBVar1->klass->_0).element_class;
      pBStack5 = (Byte__Array__Class *)pBVar2;
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar1->max_length < 3) goto code_?;
    pBVar1->vector[2] = pBVar2;
    pIStack4 = (Il2CppClass *)0x8;
    pBStack5 = TypeInfo__System__Byte;
    pBVar2 = (Byte__Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pBVar2,__field_31CFEFED70C71F509321F194DF865602BE32FAA1_Field,
               (MethodInfo *)0x0);
    if (pBVar2 == (Byte__Array *)0x0) {
code_?:
      if (3 < pBVar1->max_length) {
        pBVar1->vector[3] = pBVar2;
        TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes =
             pBVar1;
        return;
      }
      goto code_?;
    }
    pIStack7 = (pBVar1->klass->_0).element_class;
    pBStack8 = pBVar2;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  pIStack7 = (Il2CppClass *)0x0;
  pBStack8 = (Byte__Array *)0x0;
  puStack9 = (undefined *)func_?();
  func_?();
code_?:
  pIStack7 = (Il2CppClass *)0x0;
  pBStack8 = (Byte__Array *)0x0;
  puStack9 = (undefined *)func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

