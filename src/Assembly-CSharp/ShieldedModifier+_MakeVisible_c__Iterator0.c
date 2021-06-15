
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ShieldedModifier+<MakeVisible>c__Iterator0::
     ShieldedModifier_MakeVisible_c_Iterator0_MoveNext
               (ShieldedModifier_MakeVisible_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pSVar2 = (this->fields)._this;
    if ((pSVar2 == (ShieldedModifier *)0x0) ||
       (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 == (Material *)0x0)) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                       (pMVar3,StringLiteral__Rim,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._this;
    (this->fields)._currRim___0 = fVar4;
    if ((pSVar2 == (ShieldedModifier *)0x0) ||
       (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 == (Material *)0x0)) goto code_?;
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                       ((Color *)&stack0xffffffe4,pMVar3,StringLiteral_m_Color,(MethodInfo *)0x0);
    fVar4 = 0.0;
    fVar6 = pCVar5->g;
    fVar7 = pCVar5->b;
    fVar8 = pCVar5->a;
    (this->fields)._currColor___0.r = pCVar5->r;
    (this->fields)._currColor___0.g = fVar6;
    (this->fields)._currColor___0.b = fVar7;
    (this->fields)._currColor___0.a = fVar8;
code_?:
    fVar6 = 0.0;
    (this->fields)._i___1 = fVar4;
    if (fVar4 < (this->fields).fadeInTime) {
      pSVar2 = (this->fields)._this;
      if (pSVar2 != (ShieldedModifier *)0x0) {
        fVar4 = (pSVar2->fields).targetRimVisibility;
        pMVar3 = (pSVar2->fields).shieldMat;
        fVar6 = (this->fields)._currRim___0;
        fVar7 = (this->fields)._i___1;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           (fVar6,fVar4,fVar7,(MethodInfo *)0x0);
        if (pMVar3 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (pMVar3,StringLiteral__Rim,fVar4,(MethodInfo *)0x0);
          pSVar2 = (this->fields)._this;
          if (pSVar2 != (ShieldedModifier *)0x0) {
            fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                               (0.0,(pSVar2->fields).targetAlpha,(this->fields)._i___1,
                                (MethodInfo *)0x0);
            (this->fields)._currColor___0.a = fVar4;
            pSVar2 = (this->fields)._this;
            if ((pSVar2 != (ShieldedModifier *)0x0) &&
               (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 != (Material *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor___0,
                         (MethodInfo *)0x0);
              (this->fields)._current = (Object *)0x0;
              if ((this->fields)._disposing != 0) {
                return 1;
              }
              (this->fields)._PC = 1;
              return 1;
            }
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar1 == 1) {
      fVar4 = (this->fields)._i___1;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar4 = fVar6 / (this->fields).fadeInTime + fVar4;
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    fVar6 = (this->fields)._i___2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar4 / (this->fields).fadeOutTime + fVar6;
  }
  (this->fields)._i___2 = fVar6;
  if ((this->fields).fadeOutTime <= fVar6) {
    (this->fields)._currColor___0.a = 0.0;
    pSVar2 = (this->fields)._this;
    if ((pSVar2 != (ShieldedModifier *)0x0) &&
       (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor___0,
                 (MethodInfo *)0x0);
      pSVar2 = (this->fields)._this;
      if ((pSVar2 != (ShieldedModifier *)0x0) &&
         (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                  (pMVar3,StringLiteral__Rim,5.0,(MethodInfo *)0x0);
        pSVar2 = (this->fields)._this;
        if (pSVar2 != (ShieldedModifier *)0x0) {
          (pSVar2->fields).readyToPlayEffect = 1;
          (this->fields)._PC = -1;
          return 0;
        }
      }
    }
  }
  else {
    pSVar2 = (this->fields)._this;
    if (pSVar2 != (ShieldedModifier *)0x0) {
      fVar4 = (pSVar2->fields).targetRimVisibility;
      pMVar3 = (pSVar2->fields).shieldMat;
      fVar6 = (this->fields)._currRim___0;
      fVar7 = (this->fields)._i___2;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         (fVar4,fVar6,fVar7,(MethodInfo *)0x0);
      if (pMVar3 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                  (pMVar3,StringLiteral__Rim,fVar4,(MethodInfo *)0x0);
        pSVar2 = (this->fields)._this;
        if (pSVar2 != (ShieldedModifier *)0x0) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                             ((pSVar2->fields).targetAlpha,0.0,(this->fields)._i___2,
                              (MethodInfo *)0x0);
          (this->fields)._currColor___0.a = fVar4;
          pSVar2 = (this->fields)._this;
          if ((pSVar2 != (ShieldedModifier *)0x0) &&
             (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 != (Material *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor___0,
                       (MethodInfo *)0x0);
            (this->fields)._current = (Object *)0x0;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 2;
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void Reset() */

void Assembly-CSharp.dll::ShieldedModifier+<MakeVisible>c__Iterator0::
     ShieldedModifier_MakeVisible_c_Iterator0_Reset
               (ShieldedModifier_MakeVisible_c_Iterator0 *this,MethodInfo *method)

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

