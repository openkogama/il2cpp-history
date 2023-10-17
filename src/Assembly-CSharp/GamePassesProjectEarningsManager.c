
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
  pGVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields;
  if (pGVar1->OnEarningsDataUpdated !=
      (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
    pAVar2 = pGVar1->OnEarningsDataUpdated;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pGVar1->projectEarningReport,
               (pAVar2->fields)._._.method);
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

