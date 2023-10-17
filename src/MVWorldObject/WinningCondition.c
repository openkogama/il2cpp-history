
/* Void GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly(Object,
   OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::
     WinningCondition_GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly
               (WinningCondition *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method
               )

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if ((e->fields).counterType == (this->fields).gameStatCounterType) {
      pMStack_1 = (this->klass->vtable).GameCountersQuery_OnCounterTypeChanged.method;
      pOStack_2 = e;
      pOStack_3 = sender;
      (*(this->klass->vtable).GameCountersQuery_OnCounterTypeChanged.methodPtr)(this);
    }
    return;
  }
  uVar4 = func_?(&pOStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningCondition::WinningCondition_Reset
               (WinningCondition *this,MethodInfo *method)

{
  (this->fields).forfilled = 0;
  (this->fields).instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  func_?(&(this->fields).instigatorCounterTypeChangedEvent);
  return;
}


/* Void SendWinningConditionChangedEvent(EventArgs, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SendWinningConditionChangedEvent
               (WinningCondition *this,EventArgs *eventArgs,
               OnCounterTypeChangedArgs *instigatorCounterTypeChangedEvent,MethodInfo *method)

{
  (this->fields).instigatorCounterTypeChangedEvent = instigatorCounterTypeChangedEvent;
  (this->fields).forfilled = 1;
  func_?(&(this->fields).instigatorCounterTypeChangedEvent,
                  instigatorCounterTypeChangedEvent);
  if ((this->fields).OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionChanged;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,eventArgs,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void SetLimit(Int32) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
               (WinningCondition *this,int32_t limit,MethodInfo *method)

{
  (this->fields).limit = limit;
  if ((this->fields).OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionChanged;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,0,(pEVar1->fields)._._.method);
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningCondition::WinningCondition_ToString
                   (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_WinningConditionType___0___Forfi);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pTVar1 != (Type *)0x0) {
      iVar3 = func_?(pTVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pTVar1;
    func_?(args->vector,pTVar1);
    bStack_4 = (this->fields).forfilled;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    iStack_6 = (this->fields).limit;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    pOVar7 = (this->fields).instigatorCounterTypeChangedEvent;
    if (pOVar7 != (OnCounterTypeChangedArgs *)0x0) {
      iVar3 = func_?(pOVar7,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (3 < args->max_length) {
      args->vector[3] = (Object *)pOVar7;
      func_?(args->vector + 3,pOVar7);
      pSVar8 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_WinningConditionType___0___Forfi,args,(MethodInfo *)0x0);
      return pSVar8;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningCondition::WinningCondition_Traverse
               (WinningCondition *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
    puStack_1 = (callBack->fields)._._.method;
    pWStack_2 = this;
    pvStack_3 = (callBack->fields)._._.method_code;
    bVar4 = (*(callBack->fields)._._.invoke_impl)();
    return bVar4;
  }
  uVar5 = func_?(&pvStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
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
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    func_?(&
                    MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).gameCounterManager = gameCounterManager;
  func_?(&(this->fields).gameCounterManager,gameCounterManager);
  (this->fields).id = id;
  (this->fields)._Parent_k__BackingField = (IWinningCondition *)parent;
  func_?(&(this->fields)._Parent_k__BackingField,parent);
  this_00 = (this->fields).gameCounterManager;
  (this->fields).limit = limit;
  (this->fields)._IsBriefingNode_k__BackingField = isBriefingNode;
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (GameStatCounterManager *)0x0) {
      GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                (this_00,(EventHandler_1_OnCounterTypeChangedArgs_ *)this_01,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::WinningCondition::WinningCondition_get_HighScores
          (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  this = (WinningCondition *)CONCAT31(this._1_3_,(this->fields).gameStatCounterType);
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                       (this_00,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (this_00,(GameStatCounterType__Enum)this,1 < (pHVar1->fields)._count,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar3)();
  return pHVar2;
}


/* OnCounterTypeChangedArgs get_InstigatorCounterTypeChangedEvent() */

OnCounterTypeChangedArgs *
MVWorldObject.dll::WinningCondition::WinningCondition_get_InstigatorCounterTypeChangedEvent
          (WinningCondition *this,MethodInfo *method)

{
  if ((this->fields).forfilled != 0) {
    return (this->fields).instigatorCounterTypeChangedEvent;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_WinningCondition_not_forfilled_s);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__WinningCondition__get_InstigatorCounterTypeChangedEvent__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  pOVar3 = (OnCounterTypeChangedArgs *)(*pcVar2)();
  return pOVar3;
}


/* Boolean get_IsTeamMode() */

bool MVWorldObject.dll::WinningCondition::WinningCondition_get_IsTeamMode
               (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                       (this_00,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      return 1 < (pHVar1->fields)._count;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* WinningConditionPresentStyle get_WinningConditionPresentStyle() */

WinningConditionPresentStyle__Enum
MVWorldObject.dll::WinningCondition::WinningCondition_get_WinningConditionPresentStyle
          (WinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields).winningConditionPresentStyle);
}


/* Void remove_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_remove_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

