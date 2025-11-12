
/* Void Awake() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_Awake(MuzzleEditController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields
      ->InMuzzleEdit == 0) {
    return;
  }
  pGVar1 = (this->fields).resetPositionButton;
  if (pGVar1 != (GameObject *)0x0) {
    uVar2 = (undefined7)
            ((ulonglong)
             TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->
             static_fields >> 8);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).resetRotationButton;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71(uVar2,1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
     MuzzleEditController_EnterMuzzleEdit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController);
    LOCK();
    UNLOCK();
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
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

