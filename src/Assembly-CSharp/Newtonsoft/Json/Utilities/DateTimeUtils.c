
/* String GetLocalOffset(DateTime) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DateTimeUtils::
         DateTimeUtils_GetLocalOffset(DateTime d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__TimeZoneInfo);
    func_?(&StringLiteral__00__00);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__00_00);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeZoneInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeZoneInfo);
  }
  this = mscorlib.dll::System::TimeZoneInfo::TimeZoneInfo_get_Local((MethodInfo *)0x0);
  if (this != (TimeZoneInfo *)0x0) {
    TVar1 = mscorlib.dll::System::TimeZoneInfo::TimeZoneInfo_GetUtcOffset
                      (this,(DateTime)(d._dateData >> 0x20),in_stack_2);
    IStack_3.m_value =
         mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                   ((TimeSpan *)&stack0xfffffff0,(MethodInfo *)((ulonglong)TVar1._ticks >> 0x20));
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    IStack_3.m_value = (int32_t)&UNK_?;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString_3
                       (&IStack_3,StringLiteral__00__00,(IFormatProvider *)pCVar4,(MethodInfo *)0x0)
    ;
    IStack_3.m_value =
         mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes
                   ((TimeSpan *)&stack0xfffffff0,(MethodInfo *)0x0);
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    IStack_3.m_value = (int32_t)&UNK_?;
    str2 = mscorlib.dll::System::Int32::Int32_ToString_3
                     (&IStack_3,StringLiteral__00_00,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
    IStack_3.m_value = (int32_t)&UNK_?;
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar5,::StringLiteral__,str2,(MethodInfo *)0x0);
    return pSVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}

