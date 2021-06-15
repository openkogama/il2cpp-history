
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimedParentToGameobject::
     FirstTimeActivatablePopupTimedParentToGameobject_OnShow
               (FirstTimeActivatablePopupTimedParentToGameobject *this,MethodInfo *method)

{
  if ((this->fields)._.isShown != 0) {
    return;
  }
  (this->fields)._.isShown = 1;
  FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_CreatePopup
            ((FirstTimeActivatablePopupTimed *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.createdPopup;
  if (this_00 != (CanvasGroup *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      (this->fields)._.destroyCreatedPopup = 1;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatablePopupTimedParentToGameobject() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimedParentToGameobject::
     FirstTimeActivatablePopupTimedParentToGameobject__ctor
               (FirstTimeActivatablePopupTimedParentToGameobject *this,MethodInfo *method)

{
  (this->fields)._.visibleDuration = 2.0;
  (this->fields)._.fadeTime = 0.3;
  (this->fields)._.inputRequired = 1;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

