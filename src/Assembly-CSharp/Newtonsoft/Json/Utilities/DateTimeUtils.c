
/* String GetLocalOffset(DateTime) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DateTimeUtils::
         DateTimeUtils_1_GetLocalOffset(DateTime d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pSStack_2 = (String *)0x0;
  ppSStack_3 = (String **)0x0;
  if ((((uint)(TypeInfo__System__TimeZoneInfo->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeZoneInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeZoneInfo);
  }
  this = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_get_Local((MethodInfo *)0x0);
  if (this != (TimeZoneInfo *)0x0) {
    dateTime._12_4_ = 0;
    dateTime.ticks._ticks = SUB128(d._4_12_,0);
    dateTime.kind = SUB124(d._4_12_,8);
    uStack_1 = System.Core.dll::System::TimeZoneInfo::TimeZoneInfo_GetUtcOffset
                          (this,dateTime,unaff_ESI);
    pSStack_2 = (String *)func_?(&uStack_1,0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
              ((MethodInfo *)0x0);
    pSStack_2 = StringLiteral__00__00;
    ppSStack_3 = &pSStack_2;
    uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
    pSVar4 = (String *)func_?();
    uStack_1 = ZEXT48(&uStack_1);
    ppSStack_3 = (String **)func_?();
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    str2 = (String *)func_?(&ppSStack_3,StringLiteral__00_00,pCVar5,0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar4,::StringLiteral__,str2,(MethodInfo *)0x0);
    return pSVar4;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}

