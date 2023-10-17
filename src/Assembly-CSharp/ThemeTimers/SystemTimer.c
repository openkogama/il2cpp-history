
/* Void Update() */

void Assembly-CSharp.dll::ThemeTimers::SystemTimer::SystemTimer_Update
               (SystemTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    fVar1 = MVNetworkGame::MVNetworkGame_get_TimeZone(this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::DateTime::DateTime_AddHours
              ((DateTime *)&stack0xfffffff0,(double)((ulonglong)(double)fVar1 >> 0x20),unaff_EBP);
    iVar2 = mscorlib.dll::System::DateTime::DateTime_get_Hour
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Minute
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    iVar2 = mscorlib.dll::System::DateTime::DateTime_get_Second
                      ((DateTime *)((float)(iVar3 * 60000) + (float)(iVar2 * 3600000)),
                       (MethodInfo *)0x0);
    this_01 = (DateTime *)((float)(iVar2 * 1000) + (float)&stack0xfffffff0);
    iVar2 = mscorlib.dll::System::DateTime::DateTime_get_Millisecond(this_01,(MethodInfo *)0x0);
    (this->fields)._Time_k__BackingField =
         (((float)iVar2 + (float)this_01) / _UNK_?) * _UNK_?;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

