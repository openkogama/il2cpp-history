
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext
               (SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = _UNK_?;
  bVar4 = (this->fields)._t_5__2 <= _UNK_?;
  (this->fields).__1__state = -1;
  if (bVar4) {
    if (this_00 == (SkyboxManager *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                       ((Behaviour *)this_00,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      fVar7 = (this->fields)._t_5__2;
      fVar8 = (this_00->fields).currentColor.r;
      fVar9 = (this_00->fields).currentColor.g;
      fVar10 = (this_00->fields).currentColor.b;
      fVar11 = (this_00->fields).currentColor.a;
      fVar12 = (this_00->fields).targetColor.r;
      fVar13 = (this_00->fields).targetColor.g;
      fVar14 = (this_00->fields).targetColor.b;
      fVar15 = (this_00->fields).targetColor.a;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (fVar3 < fVar7) {
        fVar7 = fVar3;
      }
      fVar16 = (this->fields)._t_5__2;
      fVar17 = (this_00->fields).currentSunAngle;
      fVar18 = (this_00->fields).targetSunAngle;
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      else if (fVar3 < fVar16) {
        fVar16 = fVar3;
      }
      fVar19 = (this->fields)._t_5__2;
      fVar20 = (this_00->fields).currentFogDensity;
      fVar21 = (this_00->fields).targetFogDensity;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (fVar3 < fVar19) {
        fVar19 = fVar3;
      }
      fVar3 = (this->fields)._t_5__2;
      fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._t_5__2 = fVar22 * _UNK_? + fVar3;
      aCStack_23[0].r = (fVar12 - fVar8) * fVar7 + fVar8;
      aCStack_23[0].g = (fVar13 - fVar9) * fVar7 + fVar9;
      aCStack_23[0].b = (fVar14 - fVar10) * fVar7 + fVar10;
      aCStack_23[0].a = (fVar15 - fVar11) * fVar7 + fVar11;
      SkyboxManager::SkyboxManager_SetColor
                (this_00,aCStack_23,(fVar18 - fVar17) * fVar16 + fVar17,
                 (fVar21 - fVar20) * fVar19 + fVar20,(MethodInfo *)0x0);
      lVar24 = lRam_?;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar24 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar25 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
            do {
              uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
              puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar27 == *puVar28;
              if (bVar4) {
                *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar4 = iRam_? != 0;
      (this->fields).__2__current = pOVar2;
      if (bVar4) {
        uVar25 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
        do {
          uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
          puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar27 == *puVar28;
          if (bVar4) {
            *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::
     SkyboxManager_DoAnimate_d_23_System_Collections_IEnumerator_Reset
               (SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__SkyboxManager___DoAnimate_d__23__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

