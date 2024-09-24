
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Bullet+<MakeVisibleOverTime>d__46::Bullet_MakeVisibleOverTime_d_46_MoveNext(Bullet_MakeVisibleOverTime_d_46 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pBVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pBVar2 != (Bullet *)0x0) {
    fVar3 = (pBVar2->fields).currentAirTime / 0.01;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    pCVar4 = &(pBVar2->fields).storedColor;
    uVar5 = 0;
    pMVar6 = (pBVar2->fields).meshRenderers;
    uVar7 = pCVar4->r;
    uVar8 = pCVar4->g;
    uVar9 = pCVar4->b;
    value_00.z = (float)uVar9;
    value_00.y = (float)uVar8;
    value_00.x = (float)uVar7;
    uVar10 = pCVar4->r;
    uVar11 = pCVar4->g;
    uVar12 = pCVar4->b;
    value.z = (float)uVar12;
    value.y = (float)uVar11;
    value.x = (float)uVar10;
    if (pMVar6 != (MeshRenderer__Array *)0x0) {
      ppMVar13 = pMVar6->vector;
      for (; (int)uVar5 < (int)pMVar6->max_length; uVar5 = uVar5 + 1) {
        if (pMVar6->max_length <= uVar5) goto code_?;
        if ((*ppMVar13 == (MeshRenderer *)0x0) || (pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material((Renderer *)*ppMVar13,(MethodInfo *)0x0), pMVar14 == (Material *)0x0)) goto code_?;
        value.w = fVar3;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar14,StringLiteral__TintColor,value,(MethodInfo *)0x0);
        ppMVar13 = ppMVar13 + 1;
      }
      uVar5 = 0;
      pSVar15 = (pBVar2->fields).spriteRenderers;
      if (pSVar15 != (SpriteRenderer__Array *)0x0) {
        ppSVar16 = pSVar15->vector;
        while( true ) {
          if ((int)pSVar15->max_length <= (int)uVar5) {
            if (1.0 <= fVar3) {
              return 0;
            }
            (this->fields).__2__current = (Object *)0x0;
            func_?(&(this->fields).__2__current,0);
            (this->fields).__1__state = 1;
            return 1;
          }
          if (pSVar15->max_length <= uVar5) break;
          if ((*ppSVar16 == (SpriteRenderer *)0x0) || (pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material((Renderer *)*ppSVar16,(MethodInfo *)0x0), pMVar14 == (Material *)0x0)) goto code_?;
          value_00.w = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar14,StringLiteral__TintColor,value_00,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          ppSVar16 = ppSVar16 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Bullet+<MakeVisibleOverTime>d__46::Bullet_MakeVisibleOverTime_d_46_System_Collections_IEnumerator_Reset(Bullet_MakeVisibleOverTime_d_46 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__Bullet___MakeVisibleOverTime_d__46__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

