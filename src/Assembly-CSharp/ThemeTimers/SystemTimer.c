
/* Void Update() */

void Assembly-CSharp.dll::ThemeTimers::SystemTimer::SystemTimer_Update
               (SystemTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)&stack0xffffffd8,(MethodInfo *)0x0);
  uStack_2 = (undefined4)(pDVar1->ticks)._ticks;
  uStack_3 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iStack_4 = pDVar1->kind;
  uStack_5 = *(undefined4 *)&pDVar1->field_0xc;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    fStack_6 = MVNetworkGame::MVNetworkGame_get_TimeZone(this_00,(MethodInfo *)0x0);
    puVar7 = (undefined4 *)func_?(&stack0xffffffd8);
    uStack_2 = *puVar7;
    uStack_3 = puVar7[1];
    iStack_4 = puVar7[2];
    uStack_5 = puVar7[3];
    iVar8 = func_?(&uStack_2,0);
    iVar9 = func_?(&uStack_2,0);
    fStack_6 = (float)(iVar9 * 60000) + (float)(iVar8 * 3600000);
    iVar8 = func_?(&uStack_2,0);
    fStack_6 = (float)(iVar8 * 1000) + fStack_6;
    iVar8 = func_?(&uStack_2,0);
    (this->fields)._Time_k__BackingField =
         (((float)iVar8 + fStack_6) / _UNK_?) * _UNK_?;
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_Time(Single) */

void Assembly-CSharp.dll::ThemeTimers::SystemTimer::SystemTimer_set_Time
               (SystemTimer *this,float value,MethodInfo *method)

{
  (this->fields)._Time_k__BackingField = value;
  return;
}

