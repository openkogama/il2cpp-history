
/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_OnDestroy
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesUIEnabler__OnGamePassProgression__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesUIEnabler__OnGamePassProgression__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAStack2 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  pAStack3 = (Action__Class *)func_?();
  pAStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGamePassProgression() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_OnGamePassProgression
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    MVGamePassProgressionDataObject::MVGamePassProgressionDataObject_get_EnableProgression
              (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject,
               (MethodInfo *)0x0);
  }
  if (this_00 == (GameObject *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,0,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesUIEnabler::GamePassesUIEnabler_Start
               (GamePassesUIEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&MethodInfo__GamePassesUIEnabler__OnGamePassProgression__);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject ==
      (MVGamePassProgressionDataObject *)0x0) {
    value = 0;
  }
  else {
    value = MVGamePassProgressionDataObject::MVGamePassProgressionDataObject_get_EnableProgression
                      (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject
                       ,(MethodInfo *)0x0);
  }
  if (this_00 == (GameObject *)0x0) {
code_?:
    func_?();
    pAStack1 = extraout_ECX;
    pAStack2 = extraout_EDX;
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesUIEnabler__OnGamePassProgression__,
               (MethodInfo *)0x0);
    pAStack1 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAStack1 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
      pAVar3 = (Action *)0x0;
code_?:
      pAStack1 =
           (Action *)
           &TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
      pAStack2 = (Action__Class *)pAVar3;
      func_?();
      return;
    }
    pAVar3 = (Action *)0x0;
    if (pAStack1->klass == TypeInfo__System__Action) {
      pAVar3 = pAStack1;
    }
    pAStack2 = TypeInfo__System__Action;
    if (pAVar3 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAStack1->klass == TypeInfo__System__Action) {
      pAVar3 = pAStack1;
    }
    pAStack2 = TypeInfo__System__Action;
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  pAStack2 = (Action__Class *)func_?();
  pAStack1 = extraout_ECX_00;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

