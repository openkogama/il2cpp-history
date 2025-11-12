
/* Byte[] GetCornerCube(Int32) */

Byte__Array *
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
  }
  pBVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes;
  if (pBVar1 != (Byte__Array__Array *)0x0) {
    if ((uint)pBVar1->max_length <= (uint)index) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pBVar3 = (Byte__Array *)(*pcVar2)();
      return pBVar3;
    }
    if (pBVar1->vector[index] != (Byte__Array *)0x0) {
      lVar4 = FUN_?();
      pBVar5 = TypeInfo__System__Byte;
      pBVar3 = (Byte__Array *)0x0;
      if ((lVar4 != 0) &&
         (pBVar3 = (Byte__Array *)FUN_?(lVar4,TypeInfo__System__Byte),
         pBVar3 == (Byte__Array *)0x0)) {
        FUN_?(lVar4,pBVar5);
        pcVar2 = (code *)swi(3);
        pBVar3 = (Byte__Array *)(*pcVar2)();
        return pBVar3;
      }
      return pBVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar2)();
  return pBVar3;
}


/* RemoveCubes+RemoveCubesWithinRadius+CornerCubes() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
     RemoveCubes_RemoveCubesWithinRadius_CornerCubes__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    LOCK();
    UNLOCK();
    FUN_?(&_910B8605B36FADCEA4E73E93069C6CF3C267517EB35F1F1EDCBCAA766B91ABC1_Field);
    LOCK();
    UNLOCK();
    FUN_?(&CA66B4132C71AA567724432EE944896F3FB783BD66199A48BD185469C486F6F6_Field);
    LOCK();
    UNLOCK();
    FUN_?(&DA31D4A621FF6B9CEF190E1E3120AC4475BEED9AE301BCA7D911603382372ABB_Field);
    LOCK();
    UNLOCK();
    FUN_?(&F3251C4424AE7E75C326B098E00FF103D1693D5A68F69A1CC5077575B51FCCD6_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array__Array *)FUN_?(TypeInfo__System__Byte,4);
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            (pAVar2,__910B8605B36FADCEA4E73E93069C6CF3C267517EB35F1F1EDCBCAA766B91ABC1_Field,
             (MethodInfo *)0x0);
  if (pBVar1 == (Byte__Array__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pBVar1,0);
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            (pAVar2,_DA31D4A621FF6B9CEF190E1E3120AC4475BEED9AE301BCA7D911603382372ABB_Field,
             (MethodInfo *)0x0);
  FUN_?(pBVar1,1);
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            (pAVar2,_F3251C4424AE7E75C326B098E00FF103D1693D5A68F69A1CC5077575B51FCCD6_Field,
             (MethodInfo *)0x0);
  FUN_?(pBVar1,2);
  pAVar2 = (Array *)FUN_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            (pAVar2,_CA66B4132C71AA567724432EE944896F3FB783BD66199A48BD185469C486F6F6_Field,
             (MethodInfo *)0x0);
  FUN_?(pBVar1,3,pAVar2);
  bVar4 = iRam_? != 0;
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields->cornerCubes = pBVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)
                   TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->static_fields >> 0xc)
    ;
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}

