
/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostObject::AdvancedGhostObject_Reset
               (AdvancedGhostObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AdvancedGhostTintObject_MethodInfo__UnityEngine__Component__GetComponent<AdvancedGhostTintObject>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AdvancedGhostTintObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      AdvancedGhostTintObject_MethodInfo__UnityEngine__Component__GetComponent<AdvancedGhostTintObject>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).tintObject = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tintObject >> 0xc);
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
  return;
}

