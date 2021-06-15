
/* Void UpdateProjectEarningReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GamePassesProjectEarningsManager::
     GamePassesProjectEarningsManager_UpdateProjectEarningReport
               (ProjectEarningsReport *newProjectEarningReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport =
       newProjectEarningReport;
  this = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
         TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  if (this != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
  {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this,(Dictionary_2_System_String_System_Object_ *)
                    TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport,
               MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Invoke_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
              );
  }
  return;
}


/* ProjectEarningsReport get_ProjectEarningReport() */

ProjectEarningsReport *
Assembly-CSharp.dll::GamePassesProjectEarningsManager::
GamePassesProjectEarningsManager_get_ProjectEarningReport(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
}

