
/* Void Update() */

void Assembly-CSharp.dll::IdleModeUpdate::IdleModeUpdate_Update
               (IdleModeUpdate *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  if (0 < iVar3) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AwayMonitor);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar4 = TypeInfo__AwayMonitor->static_fields->instance;
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    if (pAVar4 == (AwayMonitor *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (pAVar4->fields).latestMouseMoveTime._dateData = DVar5._dateData;
  }
  return;
}

