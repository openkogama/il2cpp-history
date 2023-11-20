
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_OnDestroy
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&MethodInfo__GameSetupButton__OnProgressionUpdate__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GameSetupButton__OnProgressionUpdate__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
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
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
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


/* Void OnProgressionUpdate() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_OnProgressionUpdate
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Game_Tiers_Activated);
    cRam_? = '\x01';
  }
  bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                    ((MethodInfo *)0x0);
  if ((bVar1 != 0) && ((this->fields).isTiersActivated == 0)) {
    this_00 = (this->fields).OnActivatedToolTip;
    if (this_00 == (GamePassesTextBubble *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GamePassesTextBubble::GamePassesTextBubble_Activate
              (this_00,StringLiteral_Game_Tiers_Activated,(MethodInfo *)0x0);
  }
  (this->fields).isTiersActivated = bVar1;
  return;
}


/* Void ShowGameSetupMenu() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_ShowGameSetupMenu
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    GameSetupMenu_MethodInfo__UnityEngine__Object__Instantiate<GameSetupMenu>_GameSetupMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameSetupButton____c__DisplayClass3_0___ShowGameSetupMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameSetupButton____c__DisplayClass3_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameSetupButton____c__DisplayClass3_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).gameSetupMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GameSetupMenu_MethodInfo__UnityEngine__Object__Instantiate<GameSetupMenu>_GameSetupMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GameSetupButton____c__DisplayClass3_0___ShowGameSetupMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_Start
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&MethodInfo__GameSetupButton__OnProgressionUpdate__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GameSetupButton__OnProgressionUpdate__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
code_?:
    func_?();
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    (this->fields).isTiersActivated = bVar2;
    return;
  }
  pAVar3 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar3 = pAVar1;
  }
  if (pAVar3 == (Action *)0x0) {
    func_?();
  }
  else {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

