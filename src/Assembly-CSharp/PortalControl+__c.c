
/* Void <HandlePlayGame>b__34_0(String) */

void Assembly-CSharp.dll::PortalControl+<>c::PortalControl_c__HandlePlayGame_b__34_0
               (PortalControl_c *this,String *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_get_session_from_sessi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Could_not_get_session_from_sessi,error,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PortalControl+<>c() */

void Assembly-CSharp.dll::PortalControl+<>c::PortalControl_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PortalControl_c *)FUN_?(TypeInfo__PortalControl____c);
  TypeInfo__PortalControl____c->static_fields->__9 = pPVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__PortalControl____c->static_fields >> 0xc);
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

