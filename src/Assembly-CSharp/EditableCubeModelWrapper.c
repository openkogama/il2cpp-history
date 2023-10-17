
/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)e,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pMVar1 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(pMVar1->klass->vtable).FocusOnObject.methodPtr)
                (pMVar1,(this->fields).cubeModelBase,0x40000000,0,0,0);
      pMVar2 = (this->fields).cubeModelBase;
      if ((pMVar2 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (e,(pMVar2->fields)._._._.id,0,1,(MethodInfo *)0x0);
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnExitObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
    e = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
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
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&
                    MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)min._0_4_;
    *(int16_t *)&value[2].klass = min.z;
    *(undefined4 *)((int)&value[2].klass + 2) = max._0_4_;
    *(int16_t *)((int)&value[2].monitor + 2) = max.z;
    value[3].klass = (Object__Class *)minCubeCount;
    pMVar1 = (this->fields).cubeModelBase;
    this_00 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
              func_?(TypeInfo__System__Func<IModelingConstraint>);
    if (this_00 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                (this_00,value,
                 MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__,
                 (MethodInfo *)0x0);
      if (pMVar1 != (MVCubeModelInstance *)0x0) {
        (pMVar1->fields)._._ModelingConstraintBuilder_k__BackingField =
             (Func_1_IModelingConstraint_ *)this_00;
        func_?(&(pMVar1->fields)._._ModelingConstraintBuilder_k__BackingField,this_00);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,MethodInfo *method
               )

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).cubeModelBase = cubeModelBase;
  func_?(&this->fields,cubeModelBase);
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    uVar1 = *(undefined4 *)((int)&(cubeModelBase->fields)._._.interactionFlags + 4);
    piVar2 = &(cubeModelBase->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10;
    *(undefined4 *)((int)&(cubeModelBase->fields)._._.interactionFlags + 4) = uVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance, IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,IntVector min,
               IntVector max,int32_t minCubeCount,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).cubeModelBase = cubeModelBase;
  func_?(&this->fields,cubeModelBase);
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    piVar1 = &(cubeModelBase->fields)._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0x10;
    bVar2 = cRam_? == '\0';
    *(undefined4 *)((int)&(cubeModelBase->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(cubeModelBase->fields)._._.interactionFlags + 4);
    if (bVar2) {
      func_?(&TypeInfo__System__Func<IModelingConstraint>);
      func_?(&
                      MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                     );
      func_?(&TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      value[1].klass = (Object__Class *)this;
      func_?(value + 1,this);
      value[1].monitor = (MonitorData *)min._0_4_;
      *(int16_t *)&value[2].klass = min.z;
      *(undefined4 *)((int)&value[2].klass + 2) = max._0_4_;
      *(int16_t *)((int)&value[2].monitor + 2) = max.z;
      value[3].klass = (Object__Class *)minCubeCount;
      pMVar3 = (this->fields).cubeModelBase;
      this_00 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                func_?(TypeInfo__System__Func<IModelingConstraint>);
      if (this_00 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
        RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                  (this_00,value,
                   MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                   ,(MethodInfo *)0x0);
        if (pMVar3 != (MVCubeModelInstance *)0x0) {
          (pMVar3->fields)._._ModelingConstraintBuilder_k__BackingField =
               (Func_1_IModelingConstraint_ *)this_00;
          func_?(&(pMVar3->fields)._._ModelingConstraintBuilder_k__BackingField,this_00);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

