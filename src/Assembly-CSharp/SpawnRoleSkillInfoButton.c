
/* Void Initialize(String, Object, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
               (SpawnRoleSkillInfoButton *this,String *skillType,Object *skillValue,
               int32_t skillCost,SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  (this->fields).skillType = skillType;
  (this->fields).skillValue = skillValue;
  (this->fields).skillDataManager = skillDataManager;
  (this->fields).skillCost = skillCost;
  return;
}


/* Void ShowInfo() */

void Assembly-CSharp.dll::SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_ShowInfo
               (SpawnRoleSkillInfoButton *this,MethodInfo *method)

{
  this_00 = (this->fields).skillDataManager;
  this_01 = (this->fields).infoTextBubble;
  if (this_00 != (SpawnRolesSkillDataManager *)0x0) {
    textBubbleText =
         SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                   (this_00,(this->fields).skillType,(this->fields).skillValue,
                    (this->fields).skillCost,(MethodInfo *)0x0);
    if (this_01 != (GamePassesTextBubble *)0x0) {
      GamePassesTextBubble::GamePassesTextBubble_Activate(this_01,textBubbleText,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

