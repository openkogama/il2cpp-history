
/* Void Destroy() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_Destroy
               (SpawnStateWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  object = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this_00->fields)._._._._.m_CachedPtr = this;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar2 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)object,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerFixedUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = WaitForTicks::WaitForTicks_Diff((this->fields).takenTime,(MethodInfo *)0x0);
  obj = (iVar1 <= (this->fields).respawnInterval) + UIPushOption__Enum_Blocking;
  (this->fields).spawnState = obj;
  if ((this->fields).prevSpawnState != obj) {
    this_00 = (Action_1_UIPushOption_ *)(this->fields).stateChangeCallback;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,obj,MethodInfo__System__Action<SpawnState>__Invoke_SpawnState_);
  }
  (this->fields).prevSpawnState = (this->fields).spawnState;
  return;
}


/* SpawnStateWrapper(Int32, Int32, Action`1[SpawnState]) */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper__ctor
               (SpawnStateWrapper *this,int32_t respawnInterval,int32_t takenTime,
               Action_1_SpawnState_ *stateChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).respawnInterval = respawnInterval;
  (this->fields).stateChangeCallback = stateChangeCallback;
  (this->fields).takenTime = takenTime;
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

