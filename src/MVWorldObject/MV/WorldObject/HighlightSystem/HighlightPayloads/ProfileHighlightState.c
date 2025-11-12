
/* ProfileHighlightState() */

void MVWorldObject.dll::MV::WorldObject::HighlightSystem::HighlightPayloads::ProfileHighlightState::
     ProfileHighlightState__ctor(ProfileHighlightState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).slotSeenIdMap = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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

