
/* Void <HandleEvent>b__10_0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+<>c::
     MVNetworkGame_EventHandling_c__HandleEvent_b__10_0
               (MVNetworkGame_EventHandling_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (wo != (MVWorldObjectClient *)0x0) {
    (wo->fields).interactionFlags = 0;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVNetworkGame+EventHandling+<>c() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+<>c::MVNetworkGame_EventHandling_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame_EventHandling_c *)
           FUN_?(TypeInfo__MVNetworkGame_EventHandling____c);
  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVNetworkGame_EventHandling____c->static_fields >> 0xc);
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

