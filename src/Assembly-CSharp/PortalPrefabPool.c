
/* Void Awake() */

void Assembly-CSharp.dll::PortalPrefabPool::PortalPrefabPool_Awake
               (PortalPrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalPrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PortalPrefabPool->static_fields->_Instance_k__BackingField = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PortalPrefabPool->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* PortalPrefabPool get_Instance() */

PortalPrefabPool *
Assembly-CSharp.dll::PortalPrefabPool::PortalPrefabPool_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalPrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PortalPrefabPool->static_fields->_Instance_k__BackingField;
}


/* Void set_Instance(PortalPrefabPool) */

void Assembly-CSharp.dll::PortalPrefabPool::PortalPrefabPool_set_Instance
               (PortalPrefabPool *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalPrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PortalPrefabPool->static_fields->_Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PortalPrefabPool->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

