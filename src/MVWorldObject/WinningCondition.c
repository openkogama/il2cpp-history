
/* Void GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly(Object,
   OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::
     WinningCondition_GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly
               (WinningCondition *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method
               )

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if ((e->fields).counterType == (this->fields).gameStatCounterType) {
      pIStack_1 = this->klass[1]._0.image;
      pOStack_2 = e;
      pOStack_3 = sender;
      (*(code *)(this->klass->vtable).GameCountersQuery_OnCounterTypeChanged.method)(this);
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
  ppOVar1 = &(this->fields).instigatorCounterTypeChangedEvent;
  *ppOVar1 = (OnCounterTypeChangedArgs *)0x0;
  func_?(ppOVar1);
  return;
}


/* Void SendWinningConditionChangedEvent(EventArgs, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SendWinningConditionChangedEvent
               (WinningCondition *this,EventArgs *eventArgs,
               OnCounterTypeChangedArgs *instigatorCounterTypeChangedEvent,MethodInfo *method)

{
  ppOVar1 = &(this->fields).instigatorCounterTypeChangedEvent;
  *ppOVar1 = instigatorCounterTypeChangedEvent;
  (this->fields).forfilled = 1;
  func_?(ppOVar1,instigatorCounterTypeChangedEvent);
  pEVar2 = (this->fields).OnWinningConditionChanged;
  if (pEVar2 != (EventHandler_1_EventArgs_ *)0x0) {
    (*(pEVar2->fields)._._.invoke_impl)
              ((pEVar2->fields)._._.method_code,this,eventArgs,(pEVar2->fields)._._.method);
  }
  return;
}


/* Void SetLimit(Int32) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
               (WinningCondition *this,int32_t limit,MethodInfo *method)

{
  (this->fields).limit = limit;
  pEVar1 = (this->fields).OnWinningConditionChanged;
  if (pEVar1 != (EventHandler_1_EventArgs_ *)0x0) {
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppGVar1 = &(this->fields).gameCounterManager;
  *ppGVar1 = gameCounterManager;
  func_?(ppGVar1,gameCounterManager);
  ppIVar2 = &(this->fields)._Parent_k__BackingField;
  (this->fields).id = id;
  *ppIVar2 = (IWinningCondition *)parent;
  func_?(ppIVar2,parent);
  pGVar3 = *ppGVar1;
  (this->fields).limit = limit;
  (this->fields)._IsBriefingNode_k__BackingField = isBriefingNode;
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  this_00 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
             ,(MethodInfo *)0x0);
  if (pGVar3 != (GameStatCounterManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    a = (pGVar3->fields).OnCounterTypeChanged;
    while ((pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0),
           pDVar4 == (Delegate *)0x0 || (iVar5 = func_?(), iVar5 != 0))) {
      pEVar6 = (EventHandler_1_OnCounterTypeChangedArgs_ *)func_?();
      bVar7 = pEVar6 == a;
      a = pEVar6;
      if (bVar7) {
        return;
      }
    }
    func_?();
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                     );
      func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
      cRam_? = '\x01';
    }
    collection = (this_00->fields).activeTeams;
    this_01 = (HashSet_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor_1
              (this_01,(IEnumerable_1_System_Int32Enum_ *)collection,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
              );
    if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
      pHVar1 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (this_00,(GameStatCounterType__Enum)this,1 < (this_01->fields)._count,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HighScores *)(*pcVar2)();
  return pHVar1;
}


/* Boolean get_IsTeamMode() */

bool MVWorldObject.dll::WinningCondition::WinningCondition_get_IsTeamMode
               (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameCounterManager;
  if (pGVar1 != (GameStatCounterManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                     );
      func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
      cRam_? = '\x01';
    }
    collection = (pGVar1->fields).activeTeams;
    this_00 = (HashSet_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor_1
              (this_00,(IEnumerable_1_System_Int32Enum_ *)collection,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
              );
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      return 1 < (this_00->fields)._count;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void remove_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_remove_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

