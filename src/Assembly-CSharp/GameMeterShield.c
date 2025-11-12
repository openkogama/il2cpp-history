
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Initialize(GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterShield__OnProgressUpdate_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).shield;
    uVar3 = FUN_?(TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>);
    FUN_?(uVar3,this);
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0) {
      FUN_?(pSVar2,uVar3);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this,1,(MethodInfo *)0x0);
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
      if (((pSVar1 != (SpawnRoleDataMediator *)0x0) && (pSVar2 = (pSVar1->fields).shield, pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)) && (pSVar4 = (pSVar2->fields)._.subscribableVariable, pSVar4 != (SubscribableVariable_1_System_Single_ *)0x0)) {
        fVar5 = (pSVar4->fields)._.value;
        (this->fields).elapsedInterpolationTime = 0.0;
        (this->fields).interpolateTowardsShieldProgress = fVar5 / 100.0;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnProgressUpdate(Single) */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_OnProgressUpdate(GameMeterShield *this,float newValue,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).interpolateTowardsShieldProgress = newValue / 100.0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Update(GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = (this->fields).previousShieldProgress;
  fVar4 = fVar4 + fVar1;
  (this->fields).elapsedInterpolationTime = fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  pPVar6 = (this->fields).progressBar;
  fVar5 = ((this->fields).interpolateTowardsShieldProgress - fVar5) * fVar4 + fVar5;
  (this->fields).previousShieldProgress = fVar5;
  if (pPVar6 != (ProgressBar *)0x0) {
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    (pPVar6->fields).progress = fVar5;
    this_00 = (pPVar6->fields).progressBar;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(this_00,fVar5,(MethodInfo *)0x0);
      pLVar7 = (this->fields)._.gameMeterVisualEffects;
      uVar8 = 0;
      if (pLVar7 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
        lVar9 = 0x20;
        do {
          if ((pLVar7->fields)._size <= (int)uVar8) {
            return;
          }
          pLVar7 = (this->fields)._.gameMeterVisualEffects;
          if (pLVar7 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
          if ((uint)(pLVar7->fields)._size <= uVar8) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pGVar10 = (pLVar7->fields)._items;
          if (pGVar10 == (GameMeterVisualEffect__Array *)0x0) break;
          if ((uint)pGVar10->max_length <= uVar8) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar11 = *(longlong **)((longlong)pGVar10->vector + lVar9 + -0x20);
          if (plVar11 == (longlong *)0x0) break;
          (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
          pLVar7 = (this->fields)._.gameMeterVisualEffects;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (pLVar7 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

