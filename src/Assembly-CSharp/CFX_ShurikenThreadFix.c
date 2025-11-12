
/* Void Awake() */

void Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_Awake
               (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WaitFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pPStackX_18 = (ParticleSystem *)0x0;
  pPVar2 = (ParticleSystem__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__ParticleSystem__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                     );
  bVar3 = iRam_? != 0;
  (this->fields).systems = pPVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).systems >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pPVar2 = (this->fields).systems;
  if (pPVar2 != (ParticleSystem__Array *)0x0) {
    ppPVar8 = pPVar2->vector;
    while( true ) {
      if ((int)pPVar2->max_length <= (int)uVar1) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                  ((MonoBehaviour *)this,StringLiteral_WaitFrame,(MethodInfo *)0x0);
        return;
      }
      if ((uint)pPVar2->max_length <= uVar1) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pPVar10 = *ppPVar8;
      if (pPVar10 == (ParticleSystem *)0x0) break;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pcVar9 = pcRam_?;
      pPStackX_8 = pPVar10;
      pPStackX_18 = pPVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18);
      uVar1 = uVar1 + 1;
      ppPVar8 = ppPVar8 + 1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IEnumerator WaitFrame() */

IEnumerator *
Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_WaitFrame
          (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_ShurikenThreadFix___WaitFrame_d__2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__CFX_ShurikenThreadFix___WaitFrame_d__2);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}

