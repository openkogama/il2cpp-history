
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState GetDestructionState(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
RemoveCubes_RemoveCubesWithinRadius_FallOffValues_GetDestructionState
          (float squaredDistance,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  iVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  while( true ) {
    iVar2 = iVar1;
    iVar1 = iVar2 + -1;
    if (iVar1 < 0) {
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
    }
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    pfVar3 = (float *)func_?(iVar1);
    if (squaredDistance < *pfVar3) {
      if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
        func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
      }
      if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
          == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
      iVar4 = func_?(iVar1);
      fVar5 = 0.0;
      fVar6 = *(float *)(iVar4 + 4);
      if (iVar1 < TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                  numFallOffValues + -1) {
        if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0))
        {
          func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
        }
        if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
            fallOffValues ==
            (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
        iVar2 = func_?(iVar2);
        fVar5 = *(float *)(iVar2 + 4);
      }
      if (toughness < fVar5) {
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
      }
      if (toughness < fVar6) {
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  RVar8 = (*pcVar7)();
  return RVar8;
}


/* Void SetFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
               (float localRadius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = localRadius + _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                    (fVar1 / _UNK_?,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues =
       iVar2;
  iVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  iVar4 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= iVar4) {
      return;
    }
    fStack_5 = (float)(iVar4 + 1) * _UNK_?;
    if (fVar1 < fStack_5) {
      fStack_5 = (float)iVar4 * _UNK_?;
      fStack_5 = (fVar1 - fStack_5) + fStack_5;
    }
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    pfVar6 = (float *)func_?(iVar4);
    *pfVar6 = fStack_5 * fStack_5;
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    iVar7 = func_?(iVar4);
    *(float *)(iVar7 + 4) = centerDamage - (float)iVar4 * (centerDamage / (float)iVar3);
    iVar4 = iVar4 + 1;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues_TestFallOffValues
               (float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
            (radius,centerDamage,(MethodInfo *)0x0);
  pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)0x0;
  while( true ) {
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      pRStack_2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)pRVar1) {
      return;
    }
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      pRStack_2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    pRStack_2 = pRVar1;
    puVar3 = (undefined4 *)func_?();
    pRStack_2 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)*puVar3;
    uStack_4 = puVar3[1];
    message = (Object *)
              func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                              ,&pRStack_2);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
    pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)
             ((int)&(pRVar1->_0).image + 1);
  }
  pRStack_2 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RemoveCubes+RemoveCubesWithinRadius+FallOffValues() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues =
       0x14;
  pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)
           func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                           ,0x14);
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues =
       pRVar1;
  return;
}

