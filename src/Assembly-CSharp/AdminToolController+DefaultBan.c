
/* AdminToolController+DefaultBan(String, String, String) */

void Assembly-CSharp.dll::AdminToolController+DefaultBan::AdminToolController_DefaultBan__ctor
               (AdminToolController_DefaultBan *this,String *reason,String *duration,String *format,
               MethodInfo *method)

{
  this->BanDurationFormat = reason;
  this[1].BanReason = duration;
  this[1].BanDuration = format;
  return;
}

