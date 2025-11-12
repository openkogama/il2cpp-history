
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Bullet+<MakeVisibleOverTime>d__48::
     Bullet_MakeVisibleOverTime_d_48_MoveNext
               (Bullet_MakeVisibleOverTime_d_48 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pBVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pBVar2 != (Bullet *)0x0) {
    fVar3 = (pBVar2->fields).currentAirTime / _UNK_?;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar4 = (pBVar2->fields).storedBulletColor.a;
      if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
    }
    pMVar5 = (pBVar2->fields).meshRenderers;
    uVar6 = 0;
    pCVar7 = &(pBVar2->fields).storedBulletColor;
    uVar8._0_4_ = pCVar7->r;
    uVar8._4_4_ = pCVar7->g;
    uVar9._0_4_ = pCVar7->r;
    uVar9._4_4_ = pCVar7->g;
    fVar4 = (pBVar2->fields).storedBulletColor.b;
    if (pMVar5 != (MeshRenderer__Array *)0x0) {
      ppMVar10 = pMVar5->vector;
      for (; (int)uVar6 < (int)pMVar5->max_length; uVar6 = uVar6 + 1) {
        if ((uint)pMVar5->max_length <= uVar6) goto code_?;
        if ((*ppMVar10 == (MeshRenderer *)0x0) ||
           (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)*ppMVar10,(MethodInfo *)0x0),
           pMVar11 == (Material *)0x0)) goto code_?;
        aCStack_12[0].a = fVar3;
        aCStack_12[0].b = fVar4;
        aCStack_12[0]._0_8_ = uVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar11,StringLiteral__TintColor,aCStack_12,(MethodInfo *)0x0);
        ppMVar10 = ppMVar10 + 1;
      }
      pSVar13 = (pBVar2->fields).spriteRenderers;
      uVar6 = 0;
      if (pSVar13 != (SpriteRenderer__Array *)0x0) {
        ppSVar14 = pSVar13->vector;
        do {
          if ((int)pSVar13->max_length <= (int)uVar6) {
            if (_UNK_? <= fVar3) {
              return 0;
            }
            (this->fields).__2__current = (Object *)0x0;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 1;
            return 1;
          }
          if ((uint)pSVar13->max_length <= uVar6) {
code_?:
            FUN_?();
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          if ((*ppSVar14 == (SpriteRenderer *)0x0) ||
             (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)*ppSVar14,(MethodInfo *)0x0),
             pMVar11 == (Material *)0x0)) break;
          aCStack_12[0].a = fVar3;
          aCStack_12[0].b = fVar4;
          aCStack_12[0]._0_8_ = uVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar11,StringLiteral__TintColor,aCStack_12,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          ppSVar14 = ppSVar14 + 1;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
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
  uVar1 = func_?(&
                              MethodInfo__Bullet___MakeVisibleOverTime_d__48__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

