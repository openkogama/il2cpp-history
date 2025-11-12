
/* Void <SetDefaultImage>b__4_1(String) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile+<>c::GameTile_c__SetDefaultImage_b__4_1
               (GameTile_c *this,String *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,2,error);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameTile+<>c() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile+<>c::GameTile_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__GameTile____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameTile_c *)FUN_?(TypeInfo__UGUI__Portal__Scripts__GameTile____c);
  TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields >> 0xc);
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

