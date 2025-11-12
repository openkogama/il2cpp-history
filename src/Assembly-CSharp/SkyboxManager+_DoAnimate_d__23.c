
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext(SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

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
  (this->fields).__1__state = -1;
  if ((this->fields)._t_5__2 <= 1.0) {
    if (this_00 == (SkyboxManager *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled((Behaviour *)this_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      fVar5 = (this->fields)._t_5__2;
      fVar6 = (this_00->fields).currentColor.r;
      fVar7 = (this_00->fields).currentColor.g;
      fVar8 = (this_00->fields).currentColor.b;
      fVar9 = (this_00->fields).currentColor.a;
      fVar10 = (this_00->fields).targetColor.r;
      fVar11 = (this_00->fields).targetColor.g;
      fVar12 = (this_00->fields).targetColor.b;
      fVar13 = (this_00->fields).targetColor.a;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      fVar14 = (this->fields)._t_5__2;
      fVar15 = (this_00->fields).currentSunAngle;
      fVar16 = (this_00->fields).targetSunAngle;
      if (fVar14 < 0.0) {
        fVar14 = 0.0;
      }
      else if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      fVar17 = (this->fields)._t_5__2;
      fVar18 = (this_00->fields).currentFogDensity;
      fVar19 = (this_00->fields).targetFogDensity;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      else if (1.0 < fVar17) {
        fVar17 = 1.0;
      }
      fVar20 = (this->fields)._t_5__2;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (this->fields)._t_5__2 = fVar21 * 0.01 + fVar20;
      aCStack_22[0].r = (fVar10 - fVar6) * fVar5 + fVar6;
      aCStack_22[0].g = (fVar11 - fVar7) * fVar5 + fVar7;
      aCStack_22[0].b = (fVar12 - fVar8) * fVar5 + fVar8;
      aCStack_22[0].a = (fVar13 - fVar9) * fVar5 + fVar9;
      SkyboxManager::SkyboxManager_SetColor(this_00,aCStack_22,(fVar16 - fVar15) * fVar14 + fVar15,(fVar19 - fVar18) * fVar17 + fVar18,(MethodInfo *)0x0);
      lVar23 = lRam_?;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) || ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar23 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar24 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
            do {
              uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
              puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
              LOCK();
              bVar28 = uVar26 == *puVar27;
              if (bVar28) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar28);
          }
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar28 = iRam_? != 0;
      (this->fields).__2__current = pOVar2;
      if (bVar28) {
        uVar24 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
        do {
          uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
          puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
          LOCK();
          bVar28 = uVar26 == *puVar27;
          if (bVar28) {
            *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
          }
          UNLOCK();
        } while (!bVar28);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_System_Collections_IEnumerator_Reset(SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__SkyboxManager___DoAnimate_d__23__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

