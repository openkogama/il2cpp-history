
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_Awake(MuzzleEditController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController
                   );
    cRam_? = '\x01';
  }
  if (TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields
      ->InMuzzleEdit == 0) {
    return;
  }
  pGVar1 = (this->fields).resetPositionButton;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).resetRotationButton;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_EnterMuzzleEdit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController
                   );
    cRam_? = '\x01';
  }
  TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields->
  InMuzzleEdit = 1;
  return;
}


/* Void ExitMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_ExitMuzzleEdit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController
                   );
    cRam_? = '\x01';
  }
  TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields->
  InMuzzleEdit = 0;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_OnDisable(MuzzleEditController *this,MethodInfo *method)

{
  pGVar1 = (this->fields).resetPositionButton;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).resetRotationButton;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

