
/* Void DoShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_DoShow
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  FirstTimeActivatablePopup::FirstTimeActivatablePopup_CreatePopup
            ((FirstTimeActivatablePopup *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields)._.popup;
  if (pFVar1 != (FirstTimeEventPopup *)0x0) {
    x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                  ((Component_1 *)pFVar1,
                   FirstTimeChildDestroyedCallback_MethodInfo__UnityEngine__Component__GetComponent<FirstTimeChildDestroyedCallback>__
                  );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__FirstTimeActivatablePopupParentToGameobject__OnGameObjectDestroyed__,
                 (MethodInfo *)0x0);
      if (x == (MVInteractableBase *)0x0) goto code_?;
      *(UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ **)
       &(x->fields)._.findWorldObjectParent = this_00;
    }
    pFVar1 = (this->fields)._.popup;
    if (pFVar1 != (FirstTimeEventPopup *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pFVar1,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    firstTimeEvent = (this->fields)._._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
  }
  pFVar1 = (this->fields)._.popup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar1 = (this->fields)._.popup;
    if (pFVar1 == (FirstTimeEventPopup *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pFVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnGameObjectDestroyed() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_OnGameObjectDestroyed
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    firstTimeEvent = (this->fields)._._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  (this->fields)._.pushOptions = (List_1_UIPushOption_ *)this_00;
  (this->fields)._.skipAllowed = 1;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

