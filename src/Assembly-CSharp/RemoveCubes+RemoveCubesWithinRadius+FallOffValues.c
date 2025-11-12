
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState GetDestructionState(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
RemoveCubes_RemoveCubesWithinRadius_FallOffValues_GetDestructionState
          (float squaredDistance,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  uVar2 = uVar1 - 1;
  if (-1 < (int)uVar2) {
    lVar3 = (longlong)(int)uVar2 * 8;
    pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
    do {
      if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
        FUN_?();
        pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      }
      pRVar5 = pRVar4->static_fields->fallOffValues;
      if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        RVar7 = (*pcVar6)();
        return RVar7;
      }
      if ((uint)pRVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        RVar7 = (*pcVar6)();
        return RVar7;
      }
      if (squaredDistance < *(float *)((longlong)&pRVar5->vector[0].squaredDistance + lVar3)) {
        if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
          FUN_?();
          pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        }
        pRVar5 = pRVar4->static_fields->fallOffValues;
        if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
        goto code_?;
        if ((uint)pRVar5->max_length <= uVar2) goto code_?;
        fVar8 = *(float *)((longlong)&pRVar5->vector[0].damage + lVar3);
        fVar9 = 0.0;
        if ((int)uVar2 < pRVar4->static_fields->numFallOffValues + -1) {
          if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
            FUN_?();
            pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
          }
          pRVar5 = pRVar4->static_fields->fallOffValues;
          if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0
             ) goto code_?;
          if ((uint)pRVar5->max_length <= uVar1) goto code_?;
          fVar9 = *(float *)((longlong)&pRVar5->vector[1].damage + lVar3);
        }
        if (toughness < fVar9) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
        }
        if (toughness < fVar8) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
        }
      }
      uVar1 = uVar1 - 1;
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
}


/* Void SetFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
               (float localRadius,float centerDamage,MethodInfo *method)

{
  auVar1._4_4_ = in_register_00001204._0_4_;
  auVar1._8_4_ = in_register_00001204._4_4_;
  auVar1._12_4_ = in_register_00001204._8_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = localRadius + _UNK_?;
  auVar1._0_4_ = fVar3;
  auVar4._4_12_ = auVar1._4_12_;
  auVar4._0_4_ = fVar3 / _UNK_?;
  iVar5 = FUN_?(auVar4._0_8_);
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues =
       iVar5;
  uVar6 = 0;
  lVar7 = 0;
  iVar8 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  do {
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)uVar6) {
      return;
    }
    fVar9 = (float)(int)(uVar6 + 1) * fVar2;
    if (fVar3 < fVar9) {
      fVar9 = (float)(int)uVar6 * fVar2;
      fVar9 = (fVar3 - fVar9) + fVar9;
    }
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pRVar10 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
             fallOffValues;
    if (pRVar10 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((uint)pRVar10->max_length <= uVar6) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(float *)((longlong)&pRVar10->vector[0].squaredDistance + lVar7) = fVar9 * fVar9;
    pRVar10 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
             fallOffValues;
    if (pRVar10 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
    goto code_?;
    if ((uint)pRVar10->max_length <= uVar6) goto code_?;
    *(float *)((longlong)&pRVar10->vector[0].damage + lVar7) =
         centerDamage - (float)(int)uVar6 * (centerDamage / (float)iVar8);
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
  } while( true );
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues_TestFallOffValues
               (float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
            (radius,centerDamage,(MethodInfo *)0x0);
  uVar1 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)uVar1) {
      return;
    }
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pRVar2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
             fallOffValues;
    if (pRVar2 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
    break;
    if ((uint)pRVar2->max_length <= uVar1) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    message = (Object *)
              FUN_?(
                           TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                           );
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RemoveCubes+RemoveCubesWithinRadius+FallOffValues() */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
     RemoveCubes_RemoveCubesWithinRadius_FallOffValues__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->numFallOffValues =
       0x14;
  pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)
           FUN_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue,
                         0x14);
  TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues =
       pRVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                    fallOffValues >> 0xc);
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

