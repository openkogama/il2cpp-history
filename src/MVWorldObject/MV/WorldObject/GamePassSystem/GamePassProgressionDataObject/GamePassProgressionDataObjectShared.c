
/* GamePassProgressionDataObjectShared() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor
               (GamePassProgressionDataObjectShared *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                         );
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).xpTierRewards = this_00;
  if (bVar1) {
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
  }
  return;
}


/* GamePassProgressionDataObjectShared(GamePassProgressionDataObjectShared+XPTierRewards) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor_1
               (GamePassProgressionDataObjectShared *this,
               GamePassProgressionDataObjectShared_XPTierRewards *xpTierRewards,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                         );
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).xpTierRewards = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).xpTierRewards = xpTierRewards;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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

