
/* Boolean IsExpired(Single) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[System::Object]::
     KgmCacheItem_1_System_Object__IsExpired
               (KgmCacheItem_1_System_Object_ *this,float time,MethodInfo *method)

{
  return (float)(this->fields).expiration + (this->fields).timer <= time;
}


/* KgmCacheItem`1[System.Object] Update(Object, Int32) */

KgmCacheItem_1_System_Object_ *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[System::Object]::
KgmCacheItem_1_System_Object__Update
          (KgmCacheItem_1_System_Object_ *this,Object *value,int32_t expirationSeconds,
          MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields)._Item_k__BackingField = value;
  if (bVar1) {
    (this->fields).expiration = expirationSeconds;
    return this;
  }
  uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).expiration = expirationSeconds;
  return this;
}


/* KgmCacheItem`1[System.Object] Update(Object, Int32, Single) */

KgmCacheItem_1_System_Object_ *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[System::Object]::
KgmCacheItem_1_System_Object__Update_1
          (KgmCacheItem_1_System_Object_ *this,Object *value,int32_t expirationSeconds,float t,
          MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._Item_k__BackingField = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).timer = t;
  (this->fields).expiration = expirationSeconds;
  return this;
}


/* KgmCacheItem`1[System.Object](Object, Int32, Single) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[System::Object]::
     KgmCacheItem_1_System_Object___ctor
               (KgmCacheItem_1_System_Object_ *this,Object *i,int32_t e,float t,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields)._Item_k__BackingField = i;
  if (bVar1) {
    (this->fields).timer = t;
    (this->fields).expiration = e;
    return;
  }
  uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
  do {
    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
    LOCK();
    bVar1 = uVar4 == *puVar5;
    if (bVar1) {
      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (!bVar1);
  (this->fields).timer = t;
  (this->fields).expiration = e;
  return;
}

