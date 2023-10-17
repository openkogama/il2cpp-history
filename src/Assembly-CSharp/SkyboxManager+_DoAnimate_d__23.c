
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext
               (SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

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
  bVar3 = (this->fields)._t_5__2 <= (float)_UNK_?;
  (this->fields).__1__state = -1;
  if (bVar3) {
    if (this_00 == (SkyboxManager *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                       ((Behaviour *)this_00,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      fVar6 = (this_00->fields).currentColor.g;
      fVar7 = (this_00->fields).currentColor.b;
      fVar8 = (this_00->fields).currentColor.a;
      pSVar9 = (SkyboxManager_DoAnimate_d_23 *)(this->fields)._t_5__2;
      fVar10 = (this_00->fields).targetColor.g;
      fVar11 = (this_00->fields).targetColor.b;
      fVar12 = (this_00->fields).targetColor.a;
      if ((float)pSVar9 < 0.0) {
        pSVar9 = (SkyboxManager_DoAnimate_d_23 *)0x0;
      }
      else if ((float)_UNK_? < (float)pSVar9) {
        pSVar9 = _UNK_?;
      }
      pSVar13 = (SkyboxManager_DoAnimate_d_23 *)(this->fields)._t_5__2;
      fStack_14 = (this_00->fields).currentSunAngle;
      if ((float)pSVar13 < 0.0) {
        pSVar13 = (SkyboxManager_DoAnimate_d_23 *)0x0;
      }
      else if ((float)_UNK_? < (float)pSVar13) {
        pSVar13 = _UNK_?;
      }
      fStack_14 = ((this_00->fields).targetSunAngle - fStack_14) * (float)pSVar13 + fStack_14;
      fStack_15 = (this_00->fields).currentFogDensity;
      fStack_16 = (this_00->fields).targetFogDensity;
      pSStack_17 = (SkyboxManager_DoAnimate_d_23 *)(this->fields)._t_5__2;
      if ((float)pSStack_17 < 0.0) {
        this = (SkyboxManager_DoAnimate_d_23 *)0x0;
      }
      else {
        this = pSStack_17;
        if ((float)_UNK_? < (float)pSStack_17) {
          this = _UNK_?;
        }
      }
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (pSVar1->fields)._t_5__2 = fVar18 * _UNK_? + (float)pSStack_17;
      auVar19._4_4_ = (fVar11 - fVar7) * (float)pSVar9 + fVar7;
      auVar19._0_4_ = (fVar10 - fVar6) * (float)pSVar9 + fVar6;
      auVar19._8_4_ = (fVar12 - fVar8) * (float)pSVar9 + fVar8;
      auVar19._12_4_ = 0;
      SkyboxManager::SkyboxManager_SetColor
                (this_00,(Color)(auVar19 << 0x20),fStack_14,
                 (fStack_16 - fStack_15) * (float)this + fStack_15,(MethodInfo *)0x0);
      uStack_20 = 0;
      pOVar21 = (Object *)func_?(TypeInfo__System__Int32,&uStack_20);
      (pSVar1->fields).__2__current = pOVar21;
      func_?(&(pSVar1->fields).__2__current,pOVar21);
      (pSVar1->fields).__1__state = 1;
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
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__SkyboxManager___DoAnimate_d__23__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

