
/* CollisionDetectionGlobalBuffers() */

void Assembly-CSharp.dll::CollisionDetectionGlobalBuffers::CollisionDetectionGlobalBuffers__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Collider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RaycastHit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RaycastHit__Array *)FUN_?(TypeInfo__UnityEngine__RaycastHit,0x80);
  TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer = pRVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CollisionDetectionGlobalBuffers->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pCVar7 = (Collider__Array *)FUN_?(TypeInfo__UnityEngine__Collider,0x80);
  TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer = pCVar7;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer >> 0xc)
    ;
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

