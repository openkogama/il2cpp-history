
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
    DVar2 = mscorlib.dll::System::DateTime::DateTime_AddHours
                      ((DateTime *)&stack0xfffffff0,(double)((ulonglong)(double)fVar1 >> 0x20),
                       unaff_EBX);
    iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Hour
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)(DVar2._dateData >> 0x20));
    iVar4 = mscorlib.dll::System::DateTime::DateTime_get_Minute
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    iVar5 = mscorlib.dll::System::DateTime::DateTime_get_Second
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    iVar6 = mscorlib.dll::System::DateTime::DateTime_get_Millisecond
                      ((DateTime *)&stack0xfffffff0,(MethodInfo *)0x0);
    (this->fields)._Time_k__BackingField =
         (((float)iVar6 + (float)(iVar4 * 60000) + (float)(iVar3 * 3600000) + (float)(iVar5 * 1000))
         / _UNK_?) * _UNK_?;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

