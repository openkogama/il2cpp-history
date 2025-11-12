
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ShieldedModifier+<MakeVisible>d__14::
     ShieldedModifier_MakeVisible_d_14_MoveNext
               (ShieldedModifier_MakeVisible_d_14 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_m_Color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Rim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  pSVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((pSVar3 == (ShieldedModifier *)0x0) ||
       (pMVar4 = (pSVar3->fields).shieldMat, pMVar4 == (Material *)0x0)) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__Rim,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloatImpl
                       (pMVar4,iVar5,(MethodInfo *)0x0);
    (this->fields)._currRim_5__2 = fVar6;
    pMVar4 = (pSVar3->fields).shieldMat;
    if (pMVar4 == (Material *)0x0) goto code_?;
    pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                        (aCStack_8,pMVar4,StringLiteral_m_Color,(MethodInfo *)0x0);
    fVar6 = 0.0;
    fVar9 = pCVar7->g;
    fVar10 = pCVar7->b;
    fVar11 = pCVar7->a;
    (this->fields)._currColor_5__3.r = pCVar7->r;
    (this->fields)._currColor_5__3.g = fVar9;
    (this->fields)._currColor_5__3.b = fVar10;
    (this->fields)._currColor_5__3.a = fVar11;
code_?:
    (this->fields)._i_5__4 = fVar6;
    fVar9 = _UNK_?;
    if ((this->fields).fadeInTime <= fVar6) {
      fVar6 = 0.0;
code_?:
      (this->fields)._i_5__4 = fVar6;
      fVar9 = _UNK_?;
      if ((this->fields).fadeOutTime <= fVar6) {
        (this->fields)._currColor_5__3.a = 0.0;
        if ((pSVar3 == (ShieldedModifier *)0x0) ||
           (pMVar4 = (pSVar3->fields).shieldMat, pMVar4 == (Material *)0x0))
        goto code_?;
        aCStack_8[0].r = (this->fields)._currColor_5__3.r;
        aCStack_8[0].g = (this->fields)._currColor_5__3.g;
        aCStack_8[0].b = (this->fields)._currColor_5__3.b;
        aCStack_8[0].a = (this->fields)._currColor_5__3.a;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar4,StringLiteral_m_Color,aCStack_8,(MethodInfo *)0x0);
        pMVar4 = (pSVar3->fields).shieldMat;
        if (pMVar4 == (Material *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                           (StringLiteral__Rim,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar4,iVar5,_UNK_?,(MethodInfo *)0x0);
        (pSVar3->fields).readyToPlayEffect = 1;
        goto code_?;
      }
      if (pSVar3 == (ShieldedModifier *)0x0) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar12 = (*pcVar1)();
        return bVar12;
      }
      pMVar4 = (pSVar3->fields).shieldMat;
      fVar10 = (pSVar3->fields).targetRimVisibility;
      fVar11 = (this->fields)._currRim_5__2;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      if (pMVar4 == (Material *)0x0) goto code_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         (StringLiteral__Rim,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar4,iVar5,(fVar11 - fVar10) * fVar6 + fVar10,(MethodInfo *)0x0);
      fVar6 = (this->fields)._i_5__4;
      fVar10 = (pSVar3->fields).targetAlpha;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (fVar9 < fVar6) {
        fVar6 = fVar9;
      }
      (this->fields)._currColor_5__3.a = (0.0 - fVar10) * fVar6 + fVar10;
      pMVar4 = (pSVar3->fields).shieldMat;
      if (pMVar4 == (Material *)0x0) goto code_?;
      aCStack_8[0].r = (this->fields)._currColor_5__3.r;
      aCStack_8[0].g = (this->fields)._currColor_5__3.g;
      aCStack_8[0].b = (this->fields)._currColor_5__3.b;
      aCStack_8[0].a = (this->fields)._currColor_5__3.a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar4,StringLiteral_m_Color,aCStack_8,(MethodInfo *)0x0);
      bVar13 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar13) {
        uVar14 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar16 == *puVar17;
          if (bVar13) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      (this->fields).__1__state = 2;
    }
    else {
      if (pSVar3 == (ShieldedModifier *)0x0) goto code_?;
      pMVar4 = (pSVar3->fields).shieldMat;
      fVar10 = (this->fields)._currRim_5__2;
      fVar11 = (pSVar3->fields).targetRimVisibility;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      if (pMVar4 == (Material *)0x0) goto code_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         (StringLiteral__Rim,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar4,iVar5,(fVar11 - fVar10) * fVar6 + fVar10,(MethodInfo *)0x0);
      fVar6 = (this->fields)._i_5__4;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (fVar9 < fVar6) {
        fVar6 = fVar9;
      }
      (this->fields)._currColor_5__3.a = ((pSVar3->fields).targetAlpha - 0.0) * fVar6 + 0.0;
      pMVar4 = (pSVar3->fields).shieldMat;
      if (pMVar4 == (Material *)0x0) goto code_?;
      aCStack_8[0].r = (this->fields)._currColor_5__3.r;
      aCStack_8[0].g = (this->fields)._currColor_5__3.g;
      aCStack_8[0].b = (this->fields)._currColor_5__3.b;
      aCStack_8[0].a = (this->fields)._currColor_5__3.a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar4,StringLiteral_m_Color,aCStack_8,(MethodInfo *)0x0);
      bVar13 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar13) {
        uVar14 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar16 == *puVar17;
          if (bVar13) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      (this->fields).__1__state = 1;
    }
    bVar12 = 1;
  }
  else {
    if (iVar2 == 1) {
      fVar6 = (this->fields)._i_5__4;
      (this->fields).__1__state = -1;
      pcVar18 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar18 = pcVar1, pcVar1 == (code *)0x0)
         ) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar1 = (code *)swi(3);
        bVar12 = (*pcVar1)();
        return bVar12;
      }
      pcRam_? = pcVar18;
      fVar9 = (float)(*pcVar1)();
      fVar6 = fVar9 / (this->fields).fadeInTime + fVar6;
      goto code_?;
    }
    if (iVar2 == 2) {
      fVar6 = (this->fields)._i_5__4;
      (this->fields).__1__state = -1;
      pcVar18 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar18 = pcVar1, pcVar1 == (code *)0x0)
         ) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar1 = (code *)swi(3);
        bVar12 = (*pcVar1)();
        return bVar12;
      }
      pcRam_? = pcVar18;
      fVar9 = (float)(*pcVar1)();
      fVar6 = fVar9 / (this->fields).fadeOutTime + fVar6;
      goto code_?;
    }
code_?:
    bVar12 = 0;
  }
  return bVar12;
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
  uVar1 = func_?(&
                              MethodInfo__ShieldedModifier___MakeVisible_d__14__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

