
/* Byte[] GetCornerCube(Int32) */

Byte__Array *
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
  }
  pBVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes;
  if (pBVar1 == (Byte__Array__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((uint)index < pBVar1->max_length) {
    if (pBVar1->vector[index] != (Byte__Array *)0x0) {
      unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                  PlayableBehaviour_Clone
                            ((PlayableBehaviour *)pBVar1->vector[index],(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* RemoveCubes+RemoveCubesWithinRadius+CornerCubes() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
     RemoveCubes_RemoveCubesWithinRadius_CornerCubes__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    func_?(&_910B8605B36FADCEA4E73E93069C6CF3C267517EB35F1F1EDCBCAA766B91ABC1_Field);
    func_?(&::CA66B4132C71AA567724432EE944896F3FB783BD66199A48BD185469C486F6F6_Field);
    func_?(&DA31D4A621FF6B9CEF190E1E3120AC4475BEED9AE301BCA7D911603382372ABB_Field);
    func_?(&F3251C4424AE7E75C326B098E00FF103D1693D5A68F69A1CC5077575B51FCCD6_Field);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array__Array *)func_?(TypeInfo__System__Byte,4);
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar2,
             __910B8605B36FADCEA4E73E93069C6CF3C267517EB35F1F1EDCBCAA766B91ABC1_Field,
             (MethodInfo *)0x0);
  if (pBVar1 == (Byte__Array__Array *)0x0) {
    func_?();
  }
  else if (pBVar1->max_length != 0) {
    pBVar1->vector[0] = pBVar2;
    func_?(pBVar1->vector);
    pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)pBVar2,
               _DA31D4A621FF6B9CEF190E1E3120AC4475BEED9AE301BCA7D911603382372ABB_Field,
               (MethodInfo *)0x0);
    if (1 < pBVar1->max_length) {
      pBVar1->vector[1] = pBVar2;
      func_?(pBVar1->vector + 1);
      pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                ((Array *)pBVar2,
                 _F3251C4424AE7E75C326B098E00FF103D1693D5A68F69A1CC5077575B51FCCD6_Field,
                 (MethodInfo *)0x0);
      if (2 < pBVar1->max_length) {
        pBVar1->vector[2] = pBVar2;
        func_?(pBVar1->vector + 2);
        pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)pBVar2,
                   _CA66B4132C71AA567724432EE944896F3FB783BD66199A48BD185469C486F6F6_Field,
                   (MethodInfo *)0x0);
        if (3 < pBVar1->max_length) {
          pBVar1->vector[3] = pBVar2;
          func_?(pBVar1->vector + 3);
          TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes =
               pBVar1;
          func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields,
                          pBVar1);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

