
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState GetDestructionState(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::RemoveCubes_RemoveCubesWithinRadius_FallOffValues_GetDestructionState(float squaredDistance,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  uVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues - 1;
  if (-1 < (int)uVar1) {
    iVar2 = uVar1 * 8 + 0x10;
    pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
    do {
      if ((pRVar3->_1).cctor_finished_or_no_cctor == 0) {
        func_?(pRVar3);
        pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      }
      pRVar4 = pRVar3->static_fields->fallOffValues;
      if (pRVar4 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) goto code_?;
      if (pRVar4->max_length <= uVar1) goto code_?;
      if (squaredDistance < *(float *)((int)&((RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)(pRVar4->vector + -2))->klass + iVar2)) {
        if ((pRVar3->_1).cctor_finished_or_no_cctor == 0) {
          func_?(pRVar3);
          pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        }
        if (pRVar3->static_fields->fallOffValues == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
code_?:
          func_?();
code_?:
          func_?();
          pcVar5 = (code *)swi(3);
          RVar6 = (*pcVar5)();
          return RVar6;
        }
        iVar7 = func_?(uVar1);
        fVar8 = 0.0;
        fVar9 = *(float *)(iVar7 + 4);
        if ((int)uVar1 < TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues + -1) {
          if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
          }
          if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) goto code_?;
          iVar7 = func_?(uVar1 + 1);
          fVar8 = *(float *)(iVar7 + 4);
        }
        if (toughness < fVar8) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
        }
        pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        if (toughness < fVar9) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
        }
      }
      iVar2 = iVar2 + -8;
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
  }
  return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
}


/* Void SetFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues(float localRadius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  fVar1 = localRadius + 1.7320508;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar2 = (float10)func_?((double)(fVar1 / 1.7320508));
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues = (int)fVar2;
  iVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues;
  iVar4 = 0;
  while( true ) {
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues <= iVar4) {
      return;
    }
    fStack_5 = (float)(iVar4 + 1) * 1.7320508;
    if (fVar1 < fStack_5) {
      fStack_5 = (fVar1 - (float)iVar4 * 1.7320508) + (float)iVar4 * 1.7320508;
    }
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    pfVar6 = (float *)func_?();
    *pfVar6 = fStack_5 * fStack_5;
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    iVar7 = func_?();
    *(float *)(iVar7 + 4) = centerDamage - (float)iVar4 * (centerDamage / (float)iVar3);
    iVar4 = iVar4 + 1;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::RemoveCubes_RemoveCubesWithinRadius_FallOffValues_TestFallOffValues(float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues(radius,centerDamage,(MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues <= (int)uVar1) {
      return;
    }
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues;
    if (pRVar3 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) goto code_?;
    if (pRVar3->max_length <= uVar1) break;
    uStack_4 = *(undefined4 *)((int)&((RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)(pRVar3->vector + -2))->klass + iVar2);
    uStack_5 = *(undefined4 *)((int)pRVar3->vector + iVar2 + -0xc);
    message = (Object *)func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue,&uStack_4);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 8;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* RemoveCubes+RemoveCubesWithinRadius+FallOffValues() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::RemoveCubes_RemoveCubesWithinRadius_FallOffValues__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues = 0x14;
  pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue,0x14);
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues = pRVar1;
  func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues,pRVar1);
  return;
}

