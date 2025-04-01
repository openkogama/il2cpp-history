
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext(SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  fStack_2 = 1.0;
  if ((this->fields)._t_5__2 <= 1.0) {
    if (this_00 == (SkyboxManager *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled((Behaviour *)this_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      fVar5 = (this_00->fields).currentColor.g;
      fVar6 = (this_00->fields).currentColor.b;
      fVar7 = (this_00->fields).currentColor.a;
      fVar8 = (this->fields)._t_5__2;
      fVar9 = (this_00->fields).targetColor.g;
      fVar10 = (this_00->fields).targetColor.b;
      fVar11 = (this_00->fields).targetColor.a;
      if (fVar8 < 0.0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar8;
        if (1.0 < fVar8) {
          fVar12 = 1.0;
        }
      }
      fStack_13 = (this_00->fields).currentSunAngle;
      if (fVar8 < 0.0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = fVar8;
        if (1.0 < fVar8) {
          fVar14 = 1.0;
        }
      }
      fStack_13 = ((this_00->fields).targetSunAngle - fStack_13) * fVar14 + fStack_13;
      fStack_15 = (this_00->fields).currentFogDensity;
      fStack_16 = (this_00->fields).targetFogDensity;
      if (fVar8 < 0.0) {
        fStack_2 = 0.0;
      }
      else if (fVar8 <= 1.0) {
        fStack_2 = fVar8;
      }
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (this->fields)._t_5__2 = fVar14 * 0.01 + fVar8;
      auVar17._4_4_ = (fVar10 - fVar6) * fVar12 + fVar6;
      auVar17._0_4_ = (fVar9 - fVar5) * fVar12 + fVar5;
      auVar17._8_4_ = (fVar11 - fVar7) * fVar12 + fVar7;
      auVar17._12_4_ = 0;
      SkyboxManager::SkyboxManager_SetColor(this_00,(Color)(auVar17 << 0x20),fStack_13,(fStack_16 - fStack_15) * fStack_2 + fStack_15,(MethodInfo *)0x0);
      uStack_18 = 0;
      pOVar19 = (Object *)func_?(TypeInfo__System__Int32,&uStack_18);
      ppOVar20 = &(this->fields).__2__current;
      *ppOVar20 = pOVar19;
      func_?(ppOVar20,pOVar19);
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
  func_?(&MethodInfo__SkyboxManager___DoAnimate_d__23__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

