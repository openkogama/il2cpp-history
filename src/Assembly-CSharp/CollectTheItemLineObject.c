
/* Void OnValidate() */

void Assembly-CSharp.dll::CollectTheItemLineObject::CollectTheItemLineObject_OnValidate
               (CollectTheItemLineObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::LineRenderer>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (LineRenderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                     ((Component *)this,
                      UnityEngine__LineRenderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::LineRenderer>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).lineRenderer = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).lineRenderer >> 0xc);
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

