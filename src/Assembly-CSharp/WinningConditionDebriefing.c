
/* Void Clear() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Clear
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).captureCamera;
    if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pCVar4 = (this->fields).group;
  if (pCVar4 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar4,0.0,(MethodInfo *)0x0);
    pCVar4 = (this->fields).group;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar4,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      pDVar5 = (this->fields).debriefing;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pDVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pDVar5 = (this->fields).debriefing;
        if (pDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pDVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String FormatCount(GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_FormatCount
                   (GameStatCounterType__Enum statType,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar2 = (String *)func_?(&count,0);
    return pSVar2;
  default:
    func_?(&uStack_1,0,0,0,0,count,0);
    statType = func_?(&uStack_1,0);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&statType);
    uStack_3 = func_?(&uStack_1,0);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0_00___1_00_,arg0,arg1,(MethodInfo *)0x0);
  return pSVar2;
}


/* Void GenerateDebriefing(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_GenerateDebriefing
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(winningCondition,TypeInfo__IWinningConditionBriefing);
  pIVar2 = TypeInfo__IWinningConditionBriefing;
  if (iVar1 == 0) {
    return;
  }
  if (winningCondition == (IWinningCondition *)0x0) {
    func_?(0);
  }
  else {
    iVar1 = func_?(winningCondition,TypeInfo__IWinningConditionBriefing);
    pIVar3 = TypeInfo__IWinningConditionBriefing;
    if ((iVar1 != 0) &&
       (piVar4 = (int *)func_?(winningCondition,TypeInfo__IWinningConditionBriefing),
       pIVar2 = pIVar3, piVar4 != (int *)0x0)) {
      uVar5 = 0;
      uVar6 = *(ushort *)(*piVar4 + 0xb6);
      if (uVar6 != 0) {
        iVar1 = *(int *)(*piVar4 + 0x58);
        do {
          if (*(IWinningConditionBriefing__Class **)(iVar1 + (uint)uVar5 * 8) ==
              TypeInfo__IWinningConditionBriefing) {
            iVar1 = *(int *)(iVar1 + 4 + (uint)uVar5 * 8) + 0x19;
            (**(code **)(*piVar4 + iVar1 * 8))(piVar4,this,*(undefined4 *)(*piVar4 + 4 + iVar1 * 8))
            ;
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar7 = (undefined4 *)func_?(piVar4,TypeInfo__IWinningConditionBriefing,1);
      (*(code *)*puVar7)(piVar4,this,puVar7[1]);
      return;
    }
  }
  func_?(winningCondition,pIVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* List`1[ScoreActorEntry] GetWinningActorsFromScoreActorEntries(List`1[ScoreActorEntry],
   GameStatCounterType) */

List_1_ScoreActorEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
          (WinningConditionDebriefing *this,List_1_ScoreActorEntry_ *scoreActorEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  index = 0;
  if (scoreActorEntries == (List_1_ScoreActorEntry_ *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_ScoreActorEntry_ *)(*pcVar1)();
    return pLVar2;
  }
code_?:
  do {
    iVar3 = index;
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                        scoreActorEntries,
                        MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__
                       );
    if ((int)pOVar4 <= iVar3) {
      return (List_1_ScoreActorEntry_ *)this_00;
    }
    if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__
                       );
    if ((int)pOVar4 < 1) {
code_?:
      in_stack_5 =
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreActorEntries,
                      (int32_t)in_stack_5,in_stack_6);
      in_stack_6 =
           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)in_stack_5,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                );
    }
    else {
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreActorEntries,
                          index,
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                         );
      statType = MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_;
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      pMVar8 = pIVar7[1].monitor;
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                          (int32_t)pMVar8,
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      bVar9 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                        ((int32_t)pMVar8,(int32_t)pIVar7[1].monitor,
                         (GameStatCounterType__Enum)statType,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Clear__)
        ;
        pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                            scoreActorEntries,index,
                            MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                           );
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIVar7,
                   MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                  );
        index = index + 1;
        goto code_?;
      }
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      pMVar8 = pIVar7[1].monitor;
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreActorEntries,
                          index,
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      if (pMVar8 == pIVar7[1].monitor) goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* List`1[ScoreTeamEntry] GetWinningTeamsFromScoreTeamEntries(List`1[ScoreTeamEntry],
   GameStatCounterType) */

List_1_ScoreTeamEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
          (WinningConditionDebriefing *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  index = 0;
  if (scoreTeamEntries == (List_1_ScoreTeamEntry_ *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_ScoreTeamEntry_ *)(*pcVar1)();
    return pLVar2;
  }
code_?:
  do {
    iVar3 = index;
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)scoreTeamEntries
                        ,MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                       );
    if ((int)pOVar4 <= iVar3) {
      return (List_1_ScoreTeamEntry_ *)this_00;
    }
    if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__)
    ;
    if ((int)pOVar4 < 1) {
code_?:
      in_stack_5 =
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreTeamEntries,
                      (int32_t)in_stack_5,in_stack_6);
      in_stack_6 =
           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)in_stack_5,
                 MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                );
    }
    else {
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreTeamEntries,
                          index,
                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                         );
      statType = MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_;
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      pMVar8 = pIVar7[1].monitor;
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                          (int32_t)pMVar8,
                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      bVar9 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                        ((int32_t)pMVar8,(int32_t)pIVar7[1].monitor,
                         (GameStatCounterType__Enum)statType,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Clear__);
        pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreTeamEntries
                            ,index,
                            MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                           );
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIVar7,
                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                  );
        index = index + 1;
        goto code_?;
      }
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      pMVar8 = pIVar7[1].monitor;
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)scoreTeamEntries,
                          index,
                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
      if (pMVar8 == pIVar7[1].monitor) goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_OnDisable
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).captureCamera;
    if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pCVar4 = (this->fields).group;
  if (pCVar4 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar4,0.0,(MethodInfo *)0x0);
    pCVar4 = (this->fields).group;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar4,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      pDVar5 = (this->fields).debriefing;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pDVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pDVar5 = (this->fields).debriefing;
        if (pDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pDVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnWinningConditionReceived(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_OnWinningConditionReceived
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnWinningConditionReceived,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar2 != MVGameMode__Enum_Play) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Edit) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 != (IEditModeUI *)0x0) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        return;
      }
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
              MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((this_00 ==
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0) ||
        (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_00,(MethodInfo *)0x0),
        this_01 ==
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) ||
       (this_02 = (ReviveState *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                            (this_01,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                            ), this_02 == (ReviveState *)0x0)) goto code_?;
    ReviveState::ReviveState_ResetSafePostions(this_02,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar6 = func_?();
  if (iVar6 != 0) {
    iVar6 = func_?();
    if ((iVar6 == 0) || (piVar7 = (int *)func_?(), piVar7 == (int *)0x0))
    goto code_?;
    uVar8 = 0;
    uVar9 = *(ushort *)(*piVar7 + 0xb6);
    if (uVar9 != 0) {
      iVar6 = *(int *)(*piVar7 + 0x58);
      do {
        if (*(IWinningConditionBriefing__Class **)(iVar6 + (uint)uVar8 * 8) ==
            TypeInfo__IWinningConditionBriefing) {
          (**(code **)(*piVar7 + (*(int *)(iVar6 + 4 + (uint)uVar8 * 8) + 0x19) * 8))();
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    puVar10 = (undefined4 *)func_?();
    (*(code *)*puVar10)();
  }
  return;
}


/* Void RenderPlayerToRenderTexture(List`1[System.Int32]) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_RenderPlayerToRenderTexture
               (WinningConditionDebriefing *this,List_1_System_Int32_ *actorNrs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  this_02 = (WinningConditionDebriefing *)0x0;
  if (actorNrs != (List_1_System_Int32_ *)0x0) {
    for (; pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)actorNrs,
                               MethodInfo__System__Collections__Generic__List<int>__get_Count__),
        (int)this_02 < (int)pOVar1;
        this_02 = (WinningConditionDebriefing *)((int)&this_02->klass + 1)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVAvatar *)0x0) goto code_?;
      pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0);
      iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__get_Item
                        (actorNrs,(int32_t)this_02,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      if (pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      bVar5 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        ((MVPlayerContainer *)pMVar3,iVar4,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVAvatar *)0x0) goto code_?;
        pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0);
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__get_Item
                          ((List_1_System_Int32_ *)this_02,(int32_t)this_02,
                           MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        if ((pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) ||
           (item = MVPlayerContainer::MVPlayerContainer_get_Item
                             ((MVPlayerContainer *)pMVar3,iVar4,(MethodInfo *)0x0),
           this_00 == (List_1_UnityEngine_Vector4_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
        this = this_02;
        actorNrs = (List_1_System_Int32_ *)this_02;
      }
    }
    iVar6 = 0;
    if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
      for (; pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00
                                 ,
                                 MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__
                                ), iVar6 < (int)pOVar1; iVar6 = iVar6 + 1) {
        pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar6,
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_)
        ;
        if (pIVar7 == (IEventSystemHandler *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    ((List_1_MVPlayer_ *)this_00,iVar6,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
          iVar6 = iVar6 + -1;
        }
      }
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
      if ((int)pOVar1 < 1) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Winning_player_can_t_be_found__P,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar8 = TypeInfo__System__String->static_fields->Empty;
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
      if (pOVar1 == (Object *)0x1) {
        pGVar9 = (GamePointGainEffect *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                            );
        if ((pGVar9 == (GamePointGainEffect *)0x0) ||
           (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID(pGVar9,(MethodInfo *)0x0),
           iVar4 == 0)) goto code_?;
        pSVar8 = *(String **)(iVar4 + 0xc);
      }
      else {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar8,StringLiteral_It_s_a_tie,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        if ((int)pOVar1 < 3) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar8 = mscorlib.dll::System::String::String_Concat_2
                             (pSVar8,StringLiteral__between_,(MethodInfo *)0x0);
          for (iVar6 = 0;
              pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_00,
                                  MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__
                                 ), iVar6 < (int)pOVar1; iVar6 = iVar6 + 1) {
            pGVar9 = (GamePointGainEffect *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                 iVar6,
                                 MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                                );
            if ((pGVar9 == (GamePointGainEffect *)0x0) ||
               (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID(pGVar9,(MethodInfo *)0x0),
               iVar4 == 0)) goto code_?;
            str1 = *(String **)(iVar4 + 0xc);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar8 = mscorlib.dll::System::String::String_Concat_2(pSVar8,str1,(MethodInfo *)0x0);
            pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                                MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__
                               );
            if (iVar6 < (int)((int)&pOVar1[-1].monitor + 3)) {
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar8 = mscorlib.dll::System::String::String_Concat_2
                                 (pSVar8,StringLiteral__and_,(MethodInfo *)0x0);
            }
          }
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar8,::StringLiteral__,(MethodInfo *)0x0);
      }
      pDVar10 = (this->fields).debriefing;
      if (pDVar10 != (DebriefingWinnerGUI *)0x0) {
        DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText(pDVar10,pSVar8,(MethodInfo *)0x0);
        pAVar11 = (this->fields).captureCamera;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pAVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pAVar11 = (this->fields).captureCamera;
          if (pAVar11 == (AvatarCapture *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pAVar11,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        pAVar11 = (this->fields).captureCameraPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pAVar11 = (AvatarCapture *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pAVar11,
                             AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                            );
        (this->fields).captureCamera = pAVar11;
        if (pAVar11 != (AvatarCapture *)0x0) {
          AvatarCapture::AvatarCapture_CapturePlayer
                    (pAVar11,(List_1_MVPlayer_ *)this_00,(MethodInfo *)0x0);
          pDVar10 = (this->fields).debriefing;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?(TypeInfo__Styles);
          }
          pCVar12 = Styles::Styles_GetTeamColor
                              ((Color *)&stack0xffffffec,MVTeam__Enum_Blue,0,(MethodInfo *)0x0);
          fVar13 = pCVar12->r;
          fVar14 = pCVar12->g;
          fVar15 = pCVar12->b;
          fVar16 = pCVar12->a;
          pAVar11 = (this->fields).captureCamera;
          if (((pAVar11 != (AvatarCapture *)0x0) &&
              (this_01 = (Camera *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pAVar11,(MethodInfo *)0x0), this_01 != (Camera *)0x0)) &&
             (image = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                (this_01,(MethodInfo *)0x0), pDVar10 != (DebriefingWinnerGUI *)0x0))
          {
            startColor.g = fVar14;
            startColor.r = fVar13;
            startColor.b = fVar15;
            startColor.a = fVar16;
            DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
                      (pDVar10,startColor,image,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ResetScoreWhenDone() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ResetScoreWhenDone
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (WinningConditionManager *)0x0) {
      MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
                (this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupDebriefing(WinningConditionType, HighScores, Boolean) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefing
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               HighScores *highScores,bool teamMode,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) goto code_?;
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    (this_01,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (highScores == (HighScores *)0x0) goto code_?;
    if (teamMode == 0) {
      scoreActorEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateActorScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingPlayer
                (this,winType,scoreActorEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    else {
      scoreTeamEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingTeam
                (this,winType,scoreTeamEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    this_00 = (this->fields).group;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
              (this_00,1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    this_03 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_02,(MethodInfo *)0x0);
    if (this_03 != (WinningConditionManager *)0x0) {
      MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
                (this_03,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupDebriefingNoWinner() */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingNoWinner
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).captureCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).captureCamera;
    if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).captureCameraPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = (AvatarCapture *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pAVar1,
                      AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                     );
  (this->fields).captureCamera = pAVar1;
  if (pAVar1 != (AvatarCapture *)0x0) {
    AvatarCapture::AvatarCapture_CaptureAllPlayersInGame(pAVar1,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)(this->fields).noWinnerPrefab,
                         DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI_
                        );
    (this->fields).debriefing = (DebriefingWinnerGUI *)this_01;
    if (this_01 != (XpBoostParticlePreviewer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      this_00 = (this->fields).group;
      if (this_00 != (CanvasGroup *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_02,parent,0,(MethodInfo *)0x0);
            pDVar4 = (this->fields).debriefing;
            winner = TM::TM__(StringLiteral_Time_s_Up_,(MethodInfo *)0x0);
            if (pDVar4 != (DebriefingWinnerGUI *)0x0) {
              DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText
                        (pDVar4,winner,(MethodInfo *)0x0);
              pDVar4 = (this->fields).debriefing;
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?();
              }
              pCVar5 = Styles::Styles_GetColor
                                 ((Color *)&puStack_6,ColorStyle__Enum_DarkNavyBlue,
                                  (MethodInfo *)0x0);
              puStack_6 = (undefined *)pCVar5->r;
              fVar7 = pCVar5->g;
              fVar8 = pCVar5->b;
              fVar9 = pCVar5->a;
              pAVar1 = (this->fields).captureCamera;
              if (pAVar1 != (AvatarCapture *)0x0) {
                this_03 = (Camera *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pAVar1,(MethodInfo *)0x0);
                if (this_03 != (Camera *)0x0) {
                  image = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                    (this_03,(MethodInfo *)0x0);
                  if (pDVar4 != (DebriefingWinnerGUI *)0x0) {
                    startColor.g = fVar7;
                    startColor.r = (float)puStack_6;
                    startColor.b = fVar8;
                    startColor.a = fVar9;
                    DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
                              (pDVar4,startColor,image,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)(this->fields).debriefing;
                    if (method_00 != (MethodInfo *)0x0) {
                      DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                                ((DebriefingWinnerGUI *)method_00,WinningConditionType__Enum_None,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_04 = (ScaleAnimationBase *)func_?();
                      ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,method_00);
                      if (this_04 != (ScaleAnimationBase *)0x0) {
                        (this_04->fields)._._._._.m_CachedPtr = this;
                        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_Auto
                                  ((MonoBehaviour *)this,(IEnumerator *)this_04,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetupDebriefingPlayer(WinningConditionType, List`1[ScoreActorEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingPlayer
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreActorEntry_ *scoreActorEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (scoreActorEntries != (List_1_ScoreActorEntry_ *)0x0) {
    pMVar4 = (MethodInfo *)&UNK_?;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                        scoreActorEntries,
                        MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__
                       );
    if (pOVar5 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_No_winner,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    method_01 = (MethodInfo *)0x0;
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pXVar6 = (XpBoostParticlePreviewer *)(this->fields).playerWinPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar6,
                        DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI_
                       );
    (this->fields).debriefing = (DebriefingWinnerGUI *)pXVar6;
    if (pXVar6 != (XpBoostParticlePreviewer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar6,in_stack_7);
      this_00 = (this->fields).group;
      if (((this_00 != (CanvasGroup *)0x0) &&
          (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,in_stack_8),
          this_02 != (GameObject *)0x0)) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_02,pMVar4), this_01 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        method_00 = (IEventSystemHandler__Class *)&UNK_?;
        this_03 = WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
                            (this,scoreActorEntries,counterType,(MethodInfo *)0x0);
        scoreActorEntries =
             (List_1_ScoreActorEntry_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  ((List_1_UnityEngine_Vector4_ *)scoreActorEntries,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        iStack_9 = 0;
        if (this_03 != (List_1_ScoreActorEntry_ *)0x0) {
          for (; pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_03,
                                     MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__
                                    ), iStack_9 < (int)pOVar5; iStack_9 = iStack_9 + 1) {
            pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                iStack_9,
                                MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                               );
            if ((pIVar10 == (IEventSystemHandler *)0x0) ||
               ((MVPlayer *)scoreActorEntries == (MVPlayer *)0x0)) goto code_?;
            method_00 = pIVar10[1].klass;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)scoreActorEntries,(UIPushOption__Enum)method_00,
                       MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
          WinningConditionDebriefing_RenderPlayerToRenderTexture
                    (this,(List_1_System_Int32_ *)scoreActorEntries,(MethodInfo *)0x0);
          pMVar4 = (MethodInfo *)0x0;
          pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,0,
                              MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                             );
          scoreActorEntries = (List_1_ScoreActorEntry_ *)this;
          if (pIVar10 != (IEventSystemHandler *)0x0) {
            count = pIVar10[1].monitor;
            if (count == (MonitorData *)0x0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_04 = (MVAvatar *)
                        MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((this_04 == (MVAvatar *)0x0) ||
                  (this_05 = MVAvatar::MVAvatar_get_Shield(this_04,(MethodInfo *)0x0),
                  this_05 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
                 (this_06 = MVPlayerContainer::MVPlayerContainer_get_Values
                                      ((MVPlayerContainer *)this_05,method_01),
                 this_06 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                          *)&stack0xffffffb4,
                         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                          *)this_06,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                        );
              uStack_1 = 0;
              while (cVar11 = func_?(), cVar11 != '\0') {
                scoreActorEntries = (List_1_ScoreActorEntry_ *)func_?();
                if ((MVPlayer *)scoreActorEntries == (MVPlayer *)0x0) goto code_?;
                pIVar12 = (IEventSystemHandler__Class *)
                         ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                         NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                   ((NamedThemeAttribute_1_UnityEngine_Color_ *)scoreActorEntries,
                                    (MethodInfo *)0x0);
                pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                    0,
                                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                                   );
                if (pIVar10 == (IEventSystemHandler *)0x0) goto code_?;
                if ((pIVar12 == pIVar10[1].klass) &&
                   (pMVar13 = (MonitorData *)
                             MVPlayer::MVPlayer_GetGameStat
                                       ((MVPlayer *)scoreActorEntries,counterType,(MethodInfo *)0x0)
                   , (int)count < (int)pMVar13)) {
                  count = pMVar13;
                }
              }
              uStack_1 = 0xffffffff;
              func_?();
            }
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            text = TypeInfo__System__String->static_fields->Empty;
            winVal = WinningConditionDebriefing_FormatCount
                               (counterType,(int32_t)count,(MethodInfo *)0x0);
            pDVar14 = (this->fields).debriefing;
            scoreActorEntries = (List_1_ScoreActorEntry_ *)this;
            if (pDVar14 != (DebriefingWinnerGUI *)0x0) {
              DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinValue(pDVar14,winVal,pMVar4);
              pDVar14 = (this->fields).debriefing;
              if (pDVar14 != (DebriefingWinnerGUI *)0x0) {
                DebriefingWinnerGUI::DebriefingWinnerGUI_SetAdditionalInformation
                          (pDVar14,text,winType,(MethodInfo *)method_00);
                pMVar4 = (MethodInfo *)(this->fields).debriefing;
                if (pMVar4 != (MethodInfo *)0x0) {
                  DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                            ((DebriefingWinnerGUI *)pMVar4,winType,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  this_07 = (ScaleAnimationBase *)func_?();
                  ScaleAnimationBase::ScaleAnimationBase_Play(this_07,0.0,pMVar4);
                  if (this_07 != (ScaleAnimationBase *)0x0) {
                    (this_07->fields)._._._._.m_CachedPtr = this;
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this,(IEnumerator *)this_07,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(scoreActorEntries,0,0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetupDebriefingTeam(WinningConditionType, List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefingTeam
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreTeamEntry_ *scoreTeamEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  this_01 = unaff_EDI;
  puStack_6 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
    puStack_6 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)scoreTeamEntries
                        ,MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                       );
    if (pOVar7 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_No_winner,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pMVar8 = (MethodInfo *)0x0;
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    this_01 = (MVPlayer *)(this->fields).teamWinPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      unaff_EBX = (MethodInfo *)&UNK_?;
      func_?();
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)this_01,
                         DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI_
                        );
    (this->fields).debriefing = (DebriefingWinnerGUI *)this_00;
    if (this_00 != (XpBoostParticlePreviewer *)0x0) {
      this_01 = (MVPlayer *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,in_stack_9);
      method_00 = (MethodInfo *)(this->fields).group;
      if (((method_00 != (MethodInfo *)0x0) &&
          (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)method_00,in_stack_11),
          pGVar10 != (GameObject *)0x0)) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar10,in_stack_12), this_01 != (MVPlayer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  ((Transform *)this_01,parent,0,in_stack_13);
        scoreTeamEntries_00 =
             (MVPlayer *)
             WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
                       (this,scoreTeamEntries,counterType,(MethodInfo *)0x0);
        this_01 = scoreTeamEntries_00;
        if (scoreTeamEntries_00 != (MVPlayer *)0x0) {
          pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              scoreTeamEntries_00,
                              MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                             );
          pSVar14 = StringLiteral_It_s_a_tie;
          if (pOVar7 == (Object *)0x1) {
            pIStack_15 = (IEventSystemHandler__Class *)(this->fields).debriefing;
            pSStack_16 = TM::TM__(StringLiteral_Winner__,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar17 != (MVNetworkGame *)0x0) &&
               (pSVar18 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                   ((DayNightCycle *)pMVar17,(MethodInfo *)0x0),
               pSVar18 != (SkyParam *)0x0)) {
              pDVar19 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pSVar18,pMVar8);
              pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                   scoreTeamEntries_00,0,
                                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                  );
              if ((pIVar20 != (IEventSystemHandler *)0x0) &&
                 (pDVar19 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0)) {
                pMVar8 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                          MVTeam,System::Object]::
                          Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                    (pDVar19,(MVTeam__Enum)pIVar20[1].klass,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  CStack_21.g = (float)TypeInfo__System__String;
                  CStack_21.r = (float)&UNK_?;
                  func_?();
                }
                pSVar14 = mscorlib.dll::System::String::String_Concat_2
                                    (pSStack_16,(String *)pMVar8,(MethodInfo *)0x0);
                method_01 = pIStack_15;
                if (pIStack_15 != (IEventSystemHandler__Class *)0x0) goto code_?;
              }
            }
          }
          else {
            pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                scoreTeamEntries_00,
                                MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                               );
            if ((int)pOVar7 < 3) {
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSStack_16 = mscorlib.dll::System::String::String_Concat_2
                                     (pSVar14,StringLiteral__between_,(MethodInfo *)0x0);
              for (this_01 = (MVPlayer *)0x0;
                  pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                      scoreTeamEntries_00,
                                      MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                                     ), pSVar14 = pSStack_16, (int)this_01 < (int)pOVar7;
                  this_01 = (MVPlayer *)((int)&this_01->klass + 1)) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar17 == (MVNetworkGame *)0x0) ||
                   (pSVar18 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                       ((DayNightCycle *)pMVar17,(MethodInfo *)0x0),
                   pSVar18 == (SkyParam *)0x0)) goto code_?;
                pDVar19 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pSVar18,pMVar8);
                pMVar8 = 
                MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_;
                pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                     scoreTeamEntries_00,0,
                                     MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                    );
                if ((pIVar20 == (IEventSystemHandler *)0x0) ||
                   (pDVar19 == (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0))
                goto code_?;
                pSVar14 = (String *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                          MVTeam,System::Object]::
                          Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                    (pDVar19,(MVTeam__Enum)pIVar20[1].klass,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  CStack_21.g = (float)TypeInfo__System__String;
                  CStack_21.r = (float)&UNK_?;
                  func_?();
                }
                pSVar14 = mscorlib.dll::System::String::String_Concat_2
                                    (pSStack_16,pSVar14,(MethodInfo *)0x0);
                pSStack_16 = pSVar14;
                pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    scoreTeamEntries_00,
                                    MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                                   );
                if ((int)this_01 < (int)((int)&pOVar7[-1].monitor + 3)) {
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__String);
                  }
                  pSStack_16 = mscorlib.dll::System::String::String_Concat_2
                                         (pSVar14,StringLiteral__and_,(MethodInfo *)0x0);
                }
              }
            }
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pMVar8 = (MethodInfo *)::StringLiteral__;
            pSVar14 = mscorlib.dll::System::String::String_Concat_2
                                (pSVar14,::StringLiteral__,(MethodInfo *)0x0);
            method_01 = (IEventSystemHandler__Class *)(this->fields).debriefing;
            uVar22 = 0;
            if (method_01 == (IEventSystemHandler__Class *)0x0) goto code_?;
code_?:
            DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText
                      ((DebriefingWinnerGUI *)method_01,pSVar14,(MethodInfo *)0x0);
            pDVar23 = (this->fields).debriefing;
            this_01 = scoreTeamEntries_00;
            if (pDVar23 != (DebriefingWinnerGUI *)0x0) {
              DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage(pDVar23,winType,unaff_EBX);
              method_02 = (MethodInfo *)0x0;
              pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                   scoreTeamEntries_00,0,
                                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                  );
              if (pIVar20 != (IEventSystemHandler *)0x0) {
                pSVar14 = (String *)pIVar20[1].monitor;
                pSStack_16 = pSVar14;
                if (pSVar14 == (String *)0x0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    CStack_21.r = (float)TypeInfo__MVGameControllerBase;
                    func_?();
                  }
                  this_02 = (MVAvatar *)
                            MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (this_02 != (MVAvatar *)0x0) {
                    method_01 = (IEventSystemHandler__Class *)&UNK_?;
                    this_03 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0);
                    if ((this_03 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
                       (this_04 = MVPlayerContainer::MVPlayerContainer_get_Values
                                            ((MVPlayerContainer *)this_03,method_02),
                       this_04 !=
                       (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
                      mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]
                      ::
                      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                                (&DStack_24,
                                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                  *)this_04,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                );
                      uStack_1 = 0;
                      while (cVar25 = func_?(), cVar25 != '\0') {
                        this_01 = (MVPlayer *)func_?();
                        if (this_01 == (MVPlayer *)0x0) goto code_?;
                        method_01 = (IEventSystemHandler__Class *)&UNK_?;
                        pIStack_15 = (IEventSystemHandler__Class *)
                                     MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                     KogamaSettingsCore::KogamaSettingTypes::
                                     KogamaSettingNumericBase`1[System::Single]::
                                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                               ((KogamaSettingNumericBase_1_System_Single_ *)this_01
                                                ,(MethodInfo *)0x0);
                        pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  EventSystems::IEventSystemHandler]::
                                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *
                                             )scoreTeamEntries_00,0,
                                             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                            );
                        if (pIVar20 == (IEventSystemHandler *)0x0) goto code_?;
                        if ((pIStack_15 == pIVar20[1].klass) &&
                           (pSVar26 = (String *)
                                      MVPlayer::MVPlayer_GetGameStat
                                                (this_01,counterType,(MethodInfo *)0x0),
                           (int)pSVar14 < (int)pSVar26)) {
                          pSVar14 = pSVar26;
                          pSStack_16 = pSVar26;
                        }
                      }
                      *puStack_6 = 0x1c3;
                      uStack_1 = 0xffffffff;
                      func_?();
                      goto code_?;
                    }
                  }
                }
                else {
code_?:
                  pSVar14 = WinningConditionDebriefing_FormatCount
                                      (counterType,(int32_t)pSVar14,(MethodInfo *)0x0);
                  pDVar23 = (this->fields).debriefing;
                  this_01 = scoreTeamEntries_00;
                  if (pDVar23 != (DebriefingWinnerGUI *)0x0) {
                    DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinValue
                              (pDVar23,pSVar14,in_stack_27);
                    pAVar28 = (this->fields).captureCamera;
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    bVar29 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                      ((Object_1 *)pAVar28,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar29 != 0) {
                      pAVar28 = (this->fields).captureCamera;
                      if (pAVar28 == (AvatarCapture *)0x0) goto code_?;
                      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)pAVar28,method_00);
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                                ((Object_1 *)pGVar10,(MethodInfo *)0x0);
                    }
                    pAVar28 = (this->fields).captureCameraPrefab;
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    pAVar28 = (AvatarCapture *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_251
                                        ((XpBoostParticlePreviewer *)pAVar28,
                                         AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                                        );
                    (this->fields).captureCamera = pAVar28;
                    if ((pAVar28 != (AvatarCapture *)0x0) &&
                       (AvatarCapture::AvatarCapture_CapturePlayersInTeam
                                  (pAVar28,(List_1_ScoreTeamEntry_ *)scoreTeamEntries_00,counterType
                                   ,in_stack_30), scoreTeamEntries_00 != (MVPlayer *)0x0)) {
                      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                           *)scoreTeamEntries_00,
                                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                                         );
                      if (pOVar7 == (Object *)0x1) {
                        pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  EventSystems::IEventSystemHandler]::
                                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *
                                             )scoreTeamEntries_00,0,
                                             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                            );
                        if (pIVar20 == (IEventSystemHandler *)0x0) goto code_?;
                        team = pIVar20[1].klass;
                      }
                      else {
                        team = (IEventSystemHandler__Class *)0x5;
                      }
                      pDVar23 = (this->fields).debriefing;
                      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__Styles->_1).cctor_started == 0)) {
                        func_?(TypeInfo__Styles);
                      }
                      pCVar31 = Styles::Styles_GetTeamColor
                                          (&CStack_21,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
                      DStack_24.host_enumerator.next = (int32_t)pCVar31->r;
                      DStack_24.host_enumerator.stamp = (int32_t)pCVar31->g;
                      DStack_24.host_enumerator.current.key = (int32_t)pCVar31->b;
                      DStack_24.host_enumerator.current.value = (Object *)pCVar31->a;
                      pAVar28 = (this->fields).captureCamera;
                      this_01 = (MVPlayer *)this;
                      if (((pAVar28 != (AvatarCapture *)0x0) &&
                          (this_05 = (Camera *)
                                     mscorlib.dll::System::Collections::ObjectModel::
                                     Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                 *)pAVar28,pMVar8), this_05 != (Camera *)0x0)) &&
                         (image = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_get_targetTexture(this_05,(MethodInfo *)method_01),
                         pDVar23 != (DebriefingWinnerGUI *)0x0)) {
                        startColor.g = (float)DStack_24.host_enumerator.stamp;
                        startColor.r = (float)DStack_24.host_enumerator.next;
                        startColor.b = (float)DStack_24.host_enumerator.current.key;
                        startColor.a = (float)DStack_24.host_enumerator.current.value;
                        pMVar8 = (MethodInfo *)DStack_24.host_enumerator.current.value;
                        DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
                                  (pDVar23,startColor,image,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        this_06 = (ScaleAnimationBase *)func_?();
                        ScaleAnimationBase::ScaleAnimationBase_Play(this_06,0.0,pMVar8);
                        if (this_06 != (ScaleAnimationBase *)0x0) {
                          (this_06->fields)._._._._.m_CachedPtr = this;
                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_Auto
                                    ((MonoBehaviour *)this,(IEnumerator *)this_06,(MethodInfo *)0x0)
                          ;
                          *unaff_FS_OFFSET = uStack_3;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar22 = 0;
  func_?(0);
  scoreTeamEntries_00 = this_01;
code_?:
  func_?(uVar22);
  func_?(scoreTeamEntries_00,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* IEnumerator ShowDebriefingCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ShowDebriefingCoroutine
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Start
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_
               ,MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAStack3 =
         (Action_1_IWinningCondition_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_1_IWinningCondition_ *)0x0;
    if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Update
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).debriefing;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
    MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator WaitForFadeOut() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_WaitForFadeOut
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionDebriefing___WaitForFadeOut_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* WinningConditionDebriefing() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing__ctor
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  (this->fields).fadeTime = 0.3;
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

