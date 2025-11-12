
/* Void Update() */

void Assembly-CSharp.dll::ThemeTimers::SystemTimer::SystemTimer_Update
               (SystemTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  aDStackX_18[0] = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    fVar2 = MVNetworkGame::MVNetworkGame_get_TimeZone(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar3 = mscorlib.dll::System::DateTime::DateTime_Add_1
                      (aDStackX_18,(double)fVar2,3600000,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar4 = (DVar3._dateData & 0x3fffffffffffffff) / 36000000000;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar5 = (DVar3._dateData & 0x3fffffffffffffff) / 600000000;
    lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)uVar5),8) + uVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar7 = (DVar3._dateData & 0x3fffffffffffffff) / 10000000;
    lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)uVar7),8) + uVar7;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar9 = (DVar3._dateData & 0x3fffffffffffffff) / 10000;
    (this->fields)._Time_k__BackingField =
         (((float)((int)uVar9 + (int)(uVar9 / 1000) * -1000) +
          (float)(((int)uVar7 + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c) * 1000) +
          (float)(((int)uVar5 + ((int)(lVar6 >> 5) - (int)(lVar6 >> 0x3f)) * -0x3c) * 60000) +
          (float)(((int)uVar4 + (int)(uVar4 / 0x18) * -0x18) * 3600000)) / _UNK_?) *
         _UNK_?;
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

