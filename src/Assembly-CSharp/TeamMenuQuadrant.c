
/* Void Initialize(TeamData) */

void Assembly-CSharp.dll::TeamMenuQuadrant::TeamMenuQuadrant_Initialize
               (TeamMenuQuadrant *this,TeamData *teamData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  (this->fields).teamData = teamData;
  func_?(&(this->fields).teamData,teamData);
  pTVar1 = (this->fields).players;
  if (teamData != (TeamData *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(teamData->fields).playersCount,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).score;
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(teamData->fields).score,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        team = (teamData->fields).team;
        pIVar3 = (this->fields).header;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        Styles::Styles_SetStyle_3((Graphic *)pIVar3,team,(MethodInfo *)0x0);
        Styles::Styles_SetStyle_3
                  ((Graphic *)(this->fields).buttonImage,(teamData->fields).team,(MethodInfo *)0x0);
        pIVar3 = (this->fields).teamImage;
        key = (teamData->fields).team;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                         );
          func_?(&TypeInfo__Styles);
          cRam_? = '\x01';
        }
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        this_00 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
        if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                             );
          if ((pOVar4 != (Object *)0x0) && (pIVar3 != (Image *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar3,(Sprite *)pOVar4[1].monitor,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TeamSelected() */

void Assembly-CSharp.dll::TeamMenuQuadrant::TeamMenuQuadrant_TeamSelected
               (TeamMenuQuadrant *this,MethodInfo *method)

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
                    MethodInfo__TeamMenuQuadrant____c___TeamSelected_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TeamMenuQuadrant____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pTVar1 = (this->fields).teamData;
  if ((pTVar1 != (TeamData *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
              (this_00,(pTVar1->fields).team,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TeamMenuQuadrant____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TeamMenuQuadrant____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__TeamMenuQuadrant____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__TeamMenuQuadrant____c___TeamSelected_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0 = callbackFunction;
      func_?(&TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

