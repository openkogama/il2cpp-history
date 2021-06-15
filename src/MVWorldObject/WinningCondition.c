
/* Void GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly(Object,
   OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::
     WinningCondition_GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly
               (WinningCondition *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method
               )

{
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if ((e->fields).counterType == (this->fields).gameStatCounterType) {
      (*(code *)(this->klass->vtable).GameCountersQuery_OnCounterTypeChanged.method)
                (this,sender,e,this->klass[1]._0.image);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningCondition::WinningCondition_Reset
               (WinningCondition *this,MethodInfo *method)

{
  (this->fields).forfilled = 0;
  (this->fields).instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  return;
}


/* Void SendWinningConditionChangedEvent(EventArgs, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SendWinningConditionChangedEvent
               (WinningCondition *this,EventArgs *eventArgs,
               OnCounterTypeChangedArgs *instigatorCounterTypeChangedEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).instigatorCounterTypeChangedEvent = instigatorCounterTypeChangedEvent;
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).OnWinningConditionChanged;
  (this->fields).forfilled = 1;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)eventArgs,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void SetLimit(Int32) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
               (WinningCondition *this,int32_t limit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).limit = limit;
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).OnWinningConditionChanged;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)0x0,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningCondition::WinningCondition_ToString
                   (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pTVar1 != (Type *)0x0) {
      iVar3 = func_?(pTVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pTVar1;
    bStack_4 = (this->fields).forfilled;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    iStack_6 = (this->fields).limit;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    pOVar7 = (this->fields).instigatorCounterTypeChangedEvent;
    if (pOVar7 == (OnCounterTypeChangedArgs *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pOVar7;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_WinningConditionType___0___Forfi,args,(MethodInfo *)0x0);
        return pSVar8;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar7,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningCondition::WinningCondition_Traverse
               (WinningCondition *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
    bVar1 = System.Core.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean__Invoke
                      ((Func_2_Object_Boolean_ *)callBack,(Object *)this,
                       MethodInfo__System__Func<IWinningCondition,_bool>__Invoke_IWinningCondition_)
    ;
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* WinningCondition(WinningCondition, Int32, GameStatCounterManager, Int32, Boolean,
   GameStatCounterType, WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningCondition::WinningCondition__ctor
               (WinningCondition *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t limit,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).id = id;
  (this->fields)._Parent_k__BackingField = (IWinningCondition *)parent;
  (this->fields).limit = limit;
  (this->fields)._IsBriefingNode_k__BackingField = isBriefingNode;
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  (this->fields).gameCounterManager = gameCounterManager;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
             ,
             MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
            );
  if (gameCounterManager != (GameStatCounterManager *)0x0) {
    GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
              (gameCounterManager,(EventHandler_1_OnCounterTypeChangedArgs_ *)this_00,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_add_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::WinningCondition::WinningCondition_get_HighScores
          (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  if (this_00 != (GameStatCounterManager *)0x0) {
    this_01 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      JVar1 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_01,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                        );
      if (this_00 != (GameStatCounterManager *)0x0) {
        pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                           (this_00,GameStatCounterType__Enum_None,1 < (int)JVar1,
                            WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
        return pHVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar3)();
  return pHVar2;
}


/* Boolean get_IsTeamMode() */

bool MVWorldObject.dll::WinningCondition::WinningCondition_get_IsTeamMode
               (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  if (this_00 != (GameStatCounterManager *)0x0) {
    this_01 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      JVar1 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_01,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                        );
      return 1 < (int)JVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void remove_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_remove_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

