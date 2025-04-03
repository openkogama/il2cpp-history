
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Bullet+<MakeVisibleOverTime>d__48::
     Bullet_MakeVisibleOverTime_d_48_MoveNext
               (Bullet_MakeVisibleOverTime_d_48 *this,MethodInfo *method)

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
    fVar3 = 0.0;
    fStack_4 = (pBVar2->fields).currentAirTime / _UNK_?;
    if ((fStack_4 < 0.0) || (fVar3 = (pBVar2->fields).storedBulletColor.a, fVar3 < fStack_4)) {
      fStack_4 = fVar3;
    }
    pCVar5 = &(pBVar2->fields).storedBulletColor;
    uVar6 = 0;
    pMVar7 = (pBVar2->fields).meshRenderers;
    uVar8 = pCVar5->r;
    uVar9 = pCVar5->g;
    uVar10 = pCVar5->b;
    value_00.z = (float)uVar10;
    value_00.y = (float)uVar9;
    value_00.x = (float)uVar8;
    uVar11 = pCVar5->r;
    uVar12 = pCVar5->g;
    uVar13 = pCVar5->b;
    value.z = (float)uVar13;
    value.y = (float)uVar12;
    value.x = (float)uVar11;
    if (pMVar7 != (MeshRenderer__Array *)0x0) {
      ppMVar14 = pMVar7->vector;
      for (; (int)uVar6 < (int)pMVar7->max_length; uVar6 = uVar6 + 1) {
        if (pMVar7->max_length <= uVar6) goto code_?;
        if ((*ppMVar14 == (MeshRenderer *)0x0) ||
           (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)*ppMVar14,(MethodInfo *)0x0),
           pMVar15 == (Material *)0x0)) goto code_?;
        value.w = fStack_4;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (pMVar15,StringLiteral__TintColor,value,(MethodInfo *)0x0);
        ppMVar14 = ppMVar14 + 1;
      }
      pSVar16 = (pBVar2->fields).spriteRenderers;
      uVar6 = 0;
      if (pSVar16 != (SpriteRenderer__Array *)0x0) {
        ppSVar17 = pSVar16->vector;
        while( true ) {
          if ((int)pSVar16->max_length <= (int)uVar6) {
            if (_UNK_? <= fStack_4) {
              return 0;
            }
            ppOVar18 = &(this->fields).__2__current;
            *ppOVar18 = (Object *)0x0;
            func_?(ppOVar18,0);
            (this->fields).__1__state = 1;
            return 1;
          }
          if (pSVar16->max_length <= uVar6) break;
          if ((*ppSVar17 == (SpriteRenderer *)0x0) ||
             (pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)*ppSVar17,(MethodInfo *)0x0),
             pMVar15 == (Material *)0x0)) goto code_?;
          value_00.w = fStack_4;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar15,StringLiteral__TintColor,value_00,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          ppSVar17 = ppSVar17 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Bullet+<MakeVisibleOverTime>d__48::
     Bullet_MakeVisibleOverTime_d_48_System_Collections_IEnumerator_Reset
               (Bullet_MakeVisibleOverTime_d_48 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Bullet___MakeVisibleOverTime_d__48__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

