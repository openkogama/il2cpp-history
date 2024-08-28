
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>d__23::SkyboxManager_DoAnimate_d_23_MoveNext
               (SkyboxManager_DoAnimate_d_23 *this,MethodInfo *method)

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
  fStack_2 = _UNK_?;
  bVar3 = (this->fields)._t_5__2 <= _UNK_?;
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
      fVar9 = (this->fields)._t_5__2;
      fVar10 = (this_00->fields).targetColor.g;
      fVar11 = (this_00->fields).targetColor.b;
      fVar12 = (this_00->fields).targetColor.a;
      if (fVar9 < 0.0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = _UNK_?;
        if (fVar9 <= _UNK_?) {
          fVar13 = fVar9;
        }
      }
      fStack_14 = (this_00->fields).currentSunAngle;
      if (fVar9 < 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = _UNK_?;
        if (fVar9 <= _UNK_?) {
          fVar15 = fVar9;
        }
      }
      fStack_14 = ((this_00->fields).targetSunAngle - fStack_14) * fVar15 + fStack_14;
      fStack_16 = (this_00->fields).currentFogDensity;
      fStack_17 = (this_00->fields).targetFogDensity;
      if (fVar9 < 0.0) {
        fStack_2 = 0.0;
      }
      else if (fVar9 <= _UNK_?) {
        fStack_2 = fVar9;
      }
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._t_5__2 = fVar15 * _UNK_? + fVar9;
      auVar18._4_4_ = (fVar11 - fVar7) * fVar13 + fVar7;
      auVar18._0_4_ = (fVar10 - fVar6) * fVar13 + fVar6;
      auVar18._8_4_ = (fVar12 - fVar8) * fVar13 + fVar8;
      auVar18._12_4_ = 0;
      SkyboxManager::SkyboxManager_SetColor
                (this_00,(Color)(auVar18 << 0x20),fStack_14,
                 (fStack_17 - fStack_16) * fStack_2 + fStack_16,(MethodInfo *)0x0);
      uStack_19 = 0;
      pOVar20 = (Object *)func_?(TypeInfo__System__Int32,&uStack_19);
      ppOVar21 = &(this->fields).__2__current;
      *ppOVar21 = pOVar20;
      func_?(ppOVar21,pOVar20);
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
  func_?(&
                  MethodInfo__SkyboxManager___DoAnimate_d__23__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

