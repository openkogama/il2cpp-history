
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ShieldedModifier+<MakeVisible>d__14::
     ShieldedModifier_MakeVisible_d_14_MoveNext
               (ShieldedModifier_MakeVisible_d_14 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_m_Color);
    func_?(&StringLiteral__Rim);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pSVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((pSVar2 == (ShieldedModifier *)0x0) ||
       (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 == (Material *)0x0)) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                       (pMVar3,StringLiteral__Rim,(MethodInfo *)0x0);
    (this->fields)._currRim_5__2 = fVar4;
    pMVar3 = (pSVar2->fields).shieldMat;
    if (pMVar3 == (Material *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                       ((Vector4 *)&stack0xffffffe8,pMVar3,StringLiteral_m_Color,(MethodInfo *)0x0);
    fVar4 = pVVar5->x;
    fVar6 = pVVar5->y;
    fVar7 = pVVar5->z;
    fVar8 = pVVar5->w;
    (this->fields)._i_5__4 = 0.0;
    (this->fields)._currColor_5__3.r = fVar4;
    (this->fields)._currColor_5__3.g = fVar6;
    (this->fields)._currColor_5__3.b = fVar7;
    (this->fields)._currColor_5__3.a = fVar8;
code_?:
    fVar4 = (this->fields).fadeInTime;
    pfVar9 = &(this->fields)._i_5__4;
    if (*pfVar9 <= fVar4 && fVar4 != *pfVar9) {
      if (pSVar2 != (ShieldedModifier *)0x0) {
        fVar4 = (this->fields)._i_5__4;
        pMVar3 = (pSVar2->fields).shieldMat;
        fVar6 = (this->fields)._currRim_5__2;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (_UNK_? < fVar4) {
          fVar4 = _UNK_?;
        }
        if (pMVar3 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                    (pMVar3,StringLiteral__Rim,
                     ((pSVar2->fields).targetRimVisibility - fVar6) * fVar4 + fVar6,
                     (MethodInfo *)0x0);
          fVar4 = (this->fields)._i_5__4;
          if (fVar4 < 0.0) {
            fVar4 = 0.0;
          }
          else if (_UNK_? < fVar4) {
            fVar4 = _UNK_?;
          }
          (this->fields)._currColor_5__3.a = ((pSVar2->fields).targetAlpha - 0.0) * fVar4 + 0.0;
          pMVar3 = (pSVar2->fields).shieldMat;
          if (pMVar3 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor_5__3,
                       (MethodInfo *)0x0);
            (this->fields).__2__current = (Object *)0x0;
            func_?();
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
      goto code_?;
    }
    (this->fields)._i_5__4 = 0.0;
  }
  else {
    if (iVar1 == 1) {
      fVar4 = (this->fields)._i_5__4;
      (this->fields).__1__state = -1;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._i_5__4 = fVar6 / (this->fields).fadeInTime + fVar4;
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    fVar4 = (this->fields)._i_5__4;
    (this->fields).__1__state = -1;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__4 = fVar6 / (this->fields).fadeOutTime + fVar4;
  }
  fVar4 = (this->fields).fadeOutTime;
  pfVar9 = &(this->fields)._i_5__4;
  if (fVar4 < *pfVar9 || fVar4 == *pfVar9) {
    (this->fields)._currColor_5__3.a = 0.0;
    if ((pSVar2 != (ShieldedModifier *)0x0) &&
       (pMVar3 = (pSVar2->fields).shieldMat, pMVar3 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor_5__3,
                 (MethodInfo *)0x0);
      pMVar3 = (pSVar2->fields).shieldMat;
      if (pMVar3 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                  (pMVar3,StringLiteral__Rim,5.0,(MethodInfo *)0x0);
        (pSVar2->fields).readyToPlayEffect = 1;
        return 0;
      }
    }
  }
  else if (pSVar2 != (ShieldedModifier *)0x0) {
    fVar4 = (this->fields)._i_5__4;
    pMVar3 = (pSVar2->fields).shieldMat;
    fVar6 = (pSVar2->fields).targetRimVisibility;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pMVar3 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (pMVar3,StringLiteral__Rim,((this->fields)._currRim_5__2 - fVar6) * fVar4 + fVar6
                 ,(MethodInfo *)0x0);
      fVar4 = (this->fields)._i_5__4;
      fVar6 = (pSVar2->fields).targetAlpha;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      (this->fields)._currColor_5__3.a = (0.0 - fVar6) * fVar4 + fVar6;
      pMVar3 = (pSVar2->fields).shieldMat;
      if (pMVar3 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (pMVar3,StringLiteral_m_Color,(Vector4)(this->fields)._currColor_5__3,
                   (MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 2;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ShieldedModifier+<MakeVisible>d__14::
     ShieldedModifier_MakeVisible_d_14_System_Collections_IEnumerator_Reset
               (ShieldedModifier_MakeVisible_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__ShieldedModifier___MakeVisible_d__14__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

