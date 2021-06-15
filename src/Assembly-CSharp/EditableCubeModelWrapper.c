
/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)e,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_02 != (MainCameraManager *)0x0) {
    pMVar1 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).FocusOnObject.method)
                (pMVar1,(this->fields).cubeModelBase,0x40000000,0,0,0);
      this_00 = (this->fields).cubeModelBase;
      if (this_00 != (MVCubeModelInstance *)0x0) {
        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if ((e != (EditorStateMachine *)0x0) &&
           (this_01 = (e->fields).selectionController, this_01 != (SelectionController *)0x0)) {
          SelectionController::SelectionController_SelectWO
                    (this_01,(int32_t)id,0,1,(MethodInfo *)0x0);
          value = (Object *)func_?();
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnExitObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = e;
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
    e = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void SetConstraints(IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
               (EditableCubeModelWrapper *this,IntVector min,IntVector max,int32_t minCubeCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EditableCubeModelWrapper___SetConstraints_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)min._0_4_;
    *(int16_t *)&(this_01->fields).state = min.z;
    *(undefined4 *)((int)&(this_01->fields).state + 2) = max._0_4_;
    *(int16_t *)((int)&(this_01->fields).originalScale.x + 2) = max.z;
    (this_01->fields).originalScale.y = (float)minCubeCount;
    (this_01->fields).originalScale.z = (float)this;
    this_00 = (this->fields).cubeModelBase;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<IModelingConstraint>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__EditableCubeModelWrapper___SetConstraints_c__AnonStorey0____m__0__,
               MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__);
    if (this_00 != (MVCubeModelInstance *)0x0) {
      MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                ((MVPreviewAvatar *)this_00,(int32_t)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,MethodInfo *method
               )

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).cubeModelBase = cubeModelBase;
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    IVar1 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)cubeModelBase,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)cubeModelBase,
               IVar1 | InteractionFlags__Enum_SelectionRequiresEditGroup,method_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance, IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,IntVector min,
               IntVector max,int32_t minCubeCount,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).cubeModelBase = cubeModelBase;
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    IVar1 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)cubeModelBase,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(IVar1 | InteractionFlags__Enum_SelectionRequiresEditGroup);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)cubeModelBase,(InteractionFlags__Enum)method_00,method_01);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = (void *)min._0_4_;
      *(int16_t *)&(this_01->fields).state = min.z;
      *(undefined4 *)((int)&(this_01->fields).state + 2) = max._0_4_;
      *(int16_t *)((int)&(this_01->fields).originalScale.x + 2) = max.z;
      (this_01->fields).originalScale.y = (float)minCubeCount;
      (this_01->fields).originalScale.z = (float)this;
      this_00 = (this->fields).cubeModelBase;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<IModelingConstraint>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__EditableCubeModelWrapper___SetConstraints_c__AnonStorey0____m__0__,
                 MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__);
      if (this_00 != (MVCubeModelInstance *)0x0) {
        MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                  ((MVPreviewAvatar *)this_00,(int32_t)this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

