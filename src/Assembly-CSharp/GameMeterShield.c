
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Initialize
               (GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterShield__OnProgressUpdate_float_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).shield;
    uVar3 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                         );
    FUN_?(uVar3,this);
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0) {
      FUN_?(pSVar2,uVar3);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,1,(MethodInfo *)0x0);
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
          (pSVar2 = (pSVar1->fields).shield,
          pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)) &&
         (pSVar4 = (pSVar2->fields)._.subscribableVariable,
         pSVar4 != (SubscribableVariable_1_System_Single_ *)0x0)) {
        fVar5 = (pSVar4->fields)._.value / _UNK_?;
        (this->fields).elapsedInterpolationTime = 0.0;
        (this->fields).interpolateTowardsShieldProgress = fVar5;
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

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_OnProgressUpdate
               (GameMeterShield *this,float newValue,MethodInfo *method)

{
  fVar1 = newValue / _UNK_?;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).interpolateTowardsShieldProgress = fVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Update
               (GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = _UNK_?;
  fVar6 = (this->fields).previousShieldProgress;
  fVar4 = fVar4 + fVar1;
  (this->fields).elapsedInterpolationTime = fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (fVar5 < fVar4) {
    fVar4 = fVar5;
  }
  pPVar7 = (this->fields).progressBar;
  fVar6 = ((this->fields).interpolateTowardsShieldProgress - fVar6) * fVar4 + fVar6;
  (this->fields).previousShieldProgress = fVar6;
  if (pPVar7 != (ProgressBar *)0x0) {
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (fVar5 < fVar6) {
      fVar6 = fVar5;
    }
    (pPVar7->fields).progress = fVar6;
    this_00 = (pPVar7->fields).progressBar;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,fVar6,(MethodInfo *)0x0);
      pLVar8 = (this->fields)._.gameMeterVisualEffects;
      uVar9 = 0;
      if (pLVar8 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
        lVar10 = 0x20;
        do {
          if ((pLVar8->fields)._size <= (int)uVar9) {
            return;
          }
          pLVar8 = (this->fields)._.gameMeterVisualEffects;
          if (pLVar8 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
          if ((uint)(pLVar8->fields)._size <= uVar9) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pGVar11 = (pLVar8->fields)._items;
          if (pGVar11 == (GameMeterVisualEffect__Array *)0x0) break;
          if ((uint)pGVar11->max_length <= uVar9) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar12 = *(longlong **)((longlong)pGVar11->vector + lVar10 + -0x20);
          if (plVar12 == (longlong *)0x0) break;
          (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
          pLVar8 = (this->fields)._.gameMeterVisualEffects;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (pLVar8 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

