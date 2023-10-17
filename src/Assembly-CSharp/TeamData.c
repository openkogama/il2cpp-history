
/* TeamData(MVTeam, Int32, Int32, String) */

void Assembly-CSharp.dll::TeamData::TeamData__ctor
               (TeamData *this,MVTeam__Enum team,int32_t playersCount,int32_t score,
               String *representedName,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).team = team;
  (this->fields).playersCount = playersCount;
  (this->fields).score = score;
  (this->fields).representedName = representedName;
  func_?(&(this->fields).representedName,representedName);
  return;
}

