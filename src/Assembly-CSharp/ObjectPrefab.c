
/* Void OnValidate() */

void Assembly-CSharp.dll::ObjectPrefab::ObjectPrefab_OnValidate
               (ObjectPrefab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (Renderer__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
  bVar2 = iRam_? != 0;
  (this->fields).meshRenderers = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).meshRenderers >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar7 = (Collider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).mainCollider = pCVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCollider >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

