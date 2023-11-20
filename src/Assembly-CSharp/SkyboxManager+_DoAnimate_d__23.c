
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext(SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar2 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
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
        fVar8 = 0.0;
      }
      else if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      fVar12 = (this->fields)._t_5__2;
      fStack_13 = (this_00->fields).currentSunAngle;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (1.0 < fVar12) {
        fVar12 = 1.0;
      }
      fStack_13 = ((this_00->fields).targetSunAngle - fStack_13) * fVar12 + fStack_13;
      fStack_14 = (this_00->fields).currentFogDensity;
      fStack_15 = (this_00->fields).targetFogDensity;
      pSStack_16 = (SkyboxManager_DoAnimate_d_23 *)(this->fields)._t_5__2;
      if ((float)pSStack_16 < 0.0) {
        this = (SkyboxManager_DoAnimate_d_23 *)0x0;
      }
      else {
        this = pSStack_16;
        if (1.0 < (float)pSStack_16) {
          this = (SkyboxManager_DoAnimate_d_23 *)0x3f800000;
        }
      }
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (pSVar1->fields)._t_5__2 = fVar12 * 0.01 + (float)pSStack_16;
      auVar17._4_4_ = (fVar10 - fVar6) * fVar8 + fVar6;
      auVar17._0_4_ = (fVar9 - fVar5) * fVar8 + fVar5;
      auVar17._8_4_ = (fVar11 - fVar7) * fVar8 + fVar7;
      auVar17._12_4_ = 0;
      SkyboxManager::SkyboxManager_SetColor(this_00,(Color)(auVar17 << 0x20),fStack_13,(fStack_15 - fStack_14) * (float)this + fStack_14,(MethodInfo *)0x0);
      uStack_18 = 0;
      pOVar19 = (Object *)func_?(TypeInfo__System__Int32,&uStack_18);
      (pSVar1->fields).__2__current = pOVar19;
      func_?(&(pSVar1->fields).__2__current,pOVar19);
      (pSVar1->fields).__1__state = 1;
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

