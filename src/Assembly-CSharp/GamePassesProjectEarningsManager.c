
/* Void UpdateProjectEarningReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GamePassesProjectEarningsManager::
     GamePassesProjectEarningsManager_UpdateProjectEarningReport
               (ProjectEarningsReport *newProjectEarningReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport =
       newProjectEarningReport;
  func_?(&TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport,
                  newProjectEarningReport);
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,
               TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* ProjectEarningsReport get_ProjectEarningReport() */

ProjectEarningsReport *
Assembly-CSharp.dll::GamePassesProjectEarningsManager::
GamePassesProjectEarningsManager_get_ProjectEarningReport(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
}

