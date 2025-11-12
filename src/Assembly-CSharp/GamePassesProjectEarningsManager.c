
/* Void UpdateProjectEarningReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GamePassesProjectEarningsManager::
     GamePassesProjectEarningsManager_UpdateProjectEarningReport
               (ProjectEarningsReport *newProjectEarningReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport =
       newProjectEarningReport;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport
                  >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pGVar5 = TypeInfo__GamePassesProjectEarningsManager->static_fields;
  if (pGVar5->OnEarningsDataUpdated ==
      (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
    return;
  }
  pAVar6 = pGVar5->OnEarningsDataUpdated;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,pGVar5->projectEarningReport,
             (pAVar6->fields)._._.method);
  return;
}


/* ProjectEarningsReport get_ProjectEarningReport() */

ProjectEarningsReport *
Assembly-CSharp.dll::GamePassesProjectEarningsManager::
GamePassesProjectEarningsManager_get_ProjectEarningReport(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
}

