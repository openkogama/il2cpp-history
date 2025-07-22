
/* Void OnValidate() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_OnValidate
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)0x0;
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
  }
  else {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields).bottomPaddingWithGamePasses;
      goto code_?;
    }
  }
  fVar3 = (this->fields).bottomPaddingWithoutGamePasses;
code_?:
  if (this_00 != (Transform *)0x0) {
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_offsetMin
                      ((RectTransform *)this_00,(MethodInfo *)0x0);
    value.y = fVar3;
    value.x = VVar4.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMin
              ((RectTransform *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRectTransformBottom() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_SetRectTransformBottom
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)0x0;
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
  }
  else {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields).bottomPaddingWithGamePasses;
      goto code_?;
    }
  }
  fVar3 = (this->fields).bottomPaddingWithoutGamePasses;
code_?:
  if (this_00 != (Transform *)0x0) {
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_offsetMin
                      ((RectTransform *)this_00,(MethodInfo *)0x0);
    value.y = fVar3;
    value.x = VVar4.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMin
              ((RectTransform *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MainMenuGridAdjuster() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster__ctor
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  (this->fields).bottomPaddingWithoutGamePasses = 40.0;
  (this->fields).bottomPaddingWithGamePasses = 350.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

