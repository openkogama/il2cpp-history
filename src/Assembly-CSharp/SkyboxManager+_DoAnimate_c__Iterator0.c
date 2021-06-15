
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SkyboxManager+<DoAnimate>c__Iterator0::
     SkyboxManager_DoAnimate_c_Iterator0_MoveNext
               (SkyboxManager_DoAnimate_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._t___0 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    if (_UNK_? < (this->fields)._t___0) goto code_?;
  }
  pSVar2 = (this->fields)._this;
  if (pSVar2 != (SkyboxManager *)0x0) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pSVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
code_?:
      (this->fields)._PC = -1;
      return 0;
    }
    pSVar2 = (this->fields)._this;
    if (pSVar2 != (SkyboxManager *)0x0) {
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                         ((Color *)&stack0xffffffe0,(pSVar2->fields).currentColor,
                          (pSVar2->fields).targetColor,(this->fields)._t___0,(MethodInfo *)0x0);
      fVar5 = pCVar4->g;
      fVar6 = pCVar4->b;
      fVar7 = pCVar4->a;
      pSVar2 = (this->fields)._this;
      (this->fields)._c___1.r = pCVar4->r;
      (this->fields)._c___1.g = fVar5;
      (this->fields)._c___1.b = fVar6;
      (this->fields)._c___1.a = fVar7;
      if (pSVar2 != (SkyboxManager *)0x0) {
        fVar5 = (pSVar2->fields).currentSunAngle;
        fVar6 = (pSVar2->fields).targetSunAngle;
        fVar7 = (this->fields)._t___0;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (fVar5,fVar6,fVar7,(MethodInfo *)0x0);
        pSVar2 = (this->fields)._this;
        (this->fields)._s___1 = fVar5;
        if (pSVar2 != (SkyboxManager *)0x0) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                            ((pSVar2->fields).currentFogDensity,(pSVar2->fields).targetFogDensity,
                             (this->fields)._t___0,(MethodInfo *)0x0);
          fVar5 = (this->fields)._t___0;
          (this->fields)._d___1 = fVar6;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
          pSVar2 = (this->fields)._this;
          (this->fields)._t___0 = fVar6 * _UNK_? + fVar5;
          if (pSVar2 != (SkyboxManager *)0x0) {
            SkyboxManager::SkyboxManager_SetColor
                      (pSVar2,(this->fields)._c___1,(this->fields)._s___1,(this->fields)._d___1,
                       (MethodInfo *)0x0);
            pOVar8 = (Object *)func_?();
            (this->fields)._current = pOVar8;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::SkyboxManager+<DoAnimate>c__Iterator0::
     SkyboxManager_DoAnimate_c_Iterator0_Reset
               (SkyboxManager_DoAnimate_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

