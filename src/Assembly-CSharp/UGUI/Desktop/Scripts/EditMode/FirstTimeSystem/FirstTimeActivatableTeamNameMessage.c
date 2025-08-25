
/* Void Register() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNameMessage::FirstTimeActivatableTeamNameMessage_Register
               (FirstTimeActivatableTeamNameMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNameMessage___Register_b__4_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNameMessage___Register_b__4_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  (this->fields)._._.isRegistered = 1;
  return;
}


/* Void <Register>b__4_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNameMessage::FirstTimeActivatableTeamNameMessage__Register_b__4_0
               (FirstTimeActivatableTeamNameMessage *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pFStack_1 = (FirstTimeActivatableTeamNameMessage *)
                &TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    pFStack_1 = this;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?(0);
    return;
  }
  pFStack_1 = (FirstTimeActivatableTeamNameMessage *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableTeamNameMessage() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNameMessage::FirstTimeActivatableTeamNameMessage__ctor
               (FirstTimeActivatableTeamNameMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker;
  value = (WorldObjectTypeInShopChecker *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).inShopChecker = value;
  func_?(&(this->fields).inShopChecker,value);
  FirstTimeActivatableGotItPointer::FirstTimeActivatableGotItPointer__ctor
            ((FirstTimeActivatableGotItPointer *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNameMessage::FirstTimeActivatableTeamNameMessage_get_CanShow
               (FirstTimeActivatableTeamNameMessage *this,MethodInfo *method)

{
  pFVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inShopChecker;
  if (this_00 != (WorldObjectTypeInShopChecker *)0x0) {
    bVar2 = WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
                      (this_00,WorldObjectType__Enum_TeamEditor,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNameMessage___Register_b__4_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                       );
        cRam_? = '\x01';
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNameMessage___Register_b__4_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields)._._.isRegistered = 1;
    }
    bVar4 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                      ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar3,(MethodInfo *)0x0);
      this = (FirstTimeActivatableTeamNameMessage *)((uint)bVar5 << 0x18);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)this);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar6->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
        pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0);
        if (pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          iVar8 = (pLVar7->fields)._size;
          bVar9 = MVGameControllerBase::MVGameControllerBase_IsInCorrectInventory
                            ((pFVar1->fields).inventoryButton,(MethodInfo *)0x0);
          bVar10 = 0;
          if (1 < iVar8) {
            bVar10 = bVar5;
          }
          return bVar9 & bVar10 & (bVar4 ^ 1) & bVar2;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar2 = (*pcVar11)();
  return bVar2;
}

