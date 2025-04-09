
/* Void Destroy() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_Destroy
               (SpawnStateWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                    ,in_ECX,unaff_EBP);
    func_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass6_0;
  value = (Object *)func_?();
  object = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    iVar1 = 0x10;
    uVar2 = 0;
    while( true ) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        object = (Object *)&UNK_?;
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar3->max_length <= (int)uVar2) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if (pLVar3->max_length <= uVar2) break;
      this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)value[1].monitor;
      this_00 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                 ((int)pLVar3->vector + iVar1 + -0x10);
      value = object;
      if (this_01 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_01,object,
                   MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   ,(MethodInfo *)0x0);
        object[1].monitor = (MonitorData *)this_01;
        func_?(&object[1].monitor,this_01);
        value = object;
      }
      if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      object = value;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateConfiguration(SpawnStateWrapper+SpawnStateConfiguration) */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateConfiguration
               (SpawnStateWrapper *this,
               SpawnStateWrapper_SpawnStateConfiguration spawnStateConfiguration,MethodInfo *method)

{
  (this->fields).respawnInterval = spawnStateConfiguration.respawnInterval;
  (this->fields).respawnCount = spawnStateConfiguration.respawnCount;
  (this->fields).takenCounter = 0;
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerFixedUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__SpawnStateWrapper__UpdateControllerFixedUpdate__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  diff = WaitForTicks::WaitForTicks_Diff((this->fields).takenTime,(MethodInfo *)0x0);
  bVar1 = MVWorldObject.dll::MV::WorldObject::WorldObjects::Spawner::CanSpawnChecker::
          CanSpawnChecker_Check
                    (diff,(this->fields).respawnInterval,(this->fields).takenCounter,
                     (this->fields).respawnCount,(MethodInfo *)0x0);
  iVar2 = 2 - (uint)(bVar1 != 0);
  (this->fields)._SpawnState_k__BackingField = iVar2;
  if ((this->fields).prevSpawnState != iVar2) {
    if (iVar2 == 2) {
      piVar3 = &(this->fields).takenCounter;
      *piVar3 = *piVar3 + 1;
    }
    pAVar4 = (this->fields).stateChangeCallback;
    if (pAVar4 == (Action_1_SpawnState_ *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puStack6 = (pAVar4->fields)._._.method;
    iStack7 = (this->fields)._SpawnState_k__BackingField;
    (*(pAVar4->fields)._._.invoke_impl)();
  }
  (this->fields).prevSpawnState = (this->fields)._SpawnState_k__BackingField;
  return;
}


/* SpawnStateWrapper(Int32, Int32, Int32, Action`1[SpawnState]) */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper__ctor
               (SpawnStateWrapper *this,int32_t respawnInterval,int32_t respawnCount,
               int32_t takenTime,Action_1_SpawnState_ *stateChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).stateChangeCallback;
  (this->fields).respawnInterval = respawnInterval;
  (this->fields).respawnCount = respawnCount;
  *ppAVar1 = stateChangeCallback;
  func_?(ppAVar1,stateChangeCallback);
  (this->fields).takenTime = takenTime;
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

