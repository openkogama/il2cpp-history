
/* Void DoShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_DoShow
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    FirstTimeChildDestroyedCallback_MethodInfo__UnityEngine__Component__GetComponent<FirstTimeChildDestroyedCallback>__
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatablePopupParentToGameobject__OnGameObjectDestroyed__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  FirstTimeActivatablePopup::FirstTimeActivatablePopup_CreatePopup
            ((FirstTimeActivatablePopup *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields)._.popup;
  if (pFVar1 == (FirstTimeEventPopup *)0x0) goto code_?;
  x = (Object_1 *)
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                ((Component *)pFVar1,
                 FirstTimeChildDestroyedCallback_MethodInfo__UnityEngine__Component__GetComponent<FirstTimeChildDestroyedCallback>__
                );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = (Object_1__Class *)func_?(TypeInfo__System__Action);
    if (this_00 == (Object_1__Class *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)this,
               MethodInfo__FirstTimeActivatablePopupParentToGameobject__OnGameObjectDestroyed__,
               (MethodInfo *)0x0);
    if (x == (Object_1 *)0x0) goto code_?;
    x[1].klass = this_00;
    func_?(x + 1,this_00);
  }
  pFVar1 = (this->fields)._.popup;
  if (pFVar1 != (FirstTimeEventPopup *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pFVar1,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_OnDestroy
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
  }
  pFVar1 = (this->fields)._.popup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar1 = (this->fields)._.popup;
    if (pFVar1 == (FirstTimeEventPopup *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pFVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (Action_2_Object_Int32Enum_ *)func_?();
  if (this_00 != (Action_2_Object_Int32Enum_ *)0x0) {
    mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
              (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,
               (MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_00,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGameObjectDestroyed() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_OnGameObjectDestroyed
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void ParentToTransform() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_ParentToTransform
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  this_00 = (this->fields)._.popup;
  if (this_00 != (FirstTimeEventPopup *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatablePopupParentToGameobject() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject__ctor
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UIPushOption>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  if (this_00 != (List_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    (this->fields)._.pushOptions = this_00;
    func_?(&(this->fields)._.pushOptions,this_00);
    (this->fields)._.skipAllowed = 1;
    (this->fields)._._.onShowSound = 3;
    (this->fields)._._.prerequisiteEvent = -1;
    (this->fields)._._.checkForStackBlocking = 1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

