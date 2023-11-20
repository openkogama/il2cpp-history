
/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePointHighScoreTracker::GamePointHighScoreTracker_OnDestroy
               (GamePointHighScoreTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePointHighScoreTracker__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GamePointHighScoreTracker__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
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
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePointHighScoreTracker::
     GamePointHighScoreTracker_OnPlayerPlanetDataUpdated
               (GamePointHighScoreTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pTVar1 = (this->fields).gamePointHighScoreAmountText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar2 != (PlayerPlanetData *)0x0) &&
     (pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&pPVar2->fields,(MethodInfo *)0x0), pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePointHighScoreTracker::GamePointHighScoreTracker_Start
               (GamePointHighScoreTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePointHighScoreTracker__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  GamePointHighScoreTracker_UpdateHighScoreText(this,(MethodInfo *)0x0);
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GamePointHighScoreTracker__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Combine
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
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHighScoreText() */

void Assembly-CSharp.dll::GamePointHighScoreTracker::GamePointHighScoreTracker_UpdateHighScoreText
               (GamePointHighScoreTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pTVar1 = (this->fields).gamePointHighScoreAmountText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar2 != (PlayerPlanetData *)0x0) &&
     (pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&pPVar2->fields,(MethodInfo *)0x0), pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

