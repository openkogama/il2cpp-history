
/* Void Destroy() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Destroy(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_);
    func_?(&
                    TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pEVar2 = (pMVar1->fields).OnResetWorldDone;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if (this_00 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnResetWorldDone = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar2 = (EventHandler_1_EventArgs_ *)func_?();
      if (pEVar2 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
      (pMVar1->fields).OnResetWorldDone = pEVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pWVar6 = (pMVar5->fields)._WinningConditionManager_k__BackingField,
       pWVar6 == (WinningConditionManager *)0x0)) goto code_?;
    pOVar7 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar6,
                        TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                       );
    if (pOVar7 != (Object *)0x0) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pWVar6 = (pMVar5->fields)._WinningConditionManager_k__BackingField,
         pWVar6 != (WinningConditionManager *)0x0)) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar6,(int32_t)pOVar7[1].monitor,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar8);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Couldn_t_find_TimeLimit_winning_);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(&MethodInfo__MVRoundCube__Destroy__);
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Int32 GetTimeLeft() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_GetTimeLeft
                  (MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_interval);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int *)func_?(pOVar1);
      iVar3 = *piVar2;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar4,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
           pMVar6 != (MVNetworkGameStateListener *)0x0)) {
          iVar3 = ((pMVar6->fields).startTime - iVar5) + iVar3 * 1000;
          iVar5 = 0;
          if (-1 < iVar3) {
            iVar5 = iVar3;
          }
          return iVar5;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  iVar5 = (*pcVar7)();
  return iVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Initialize(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_);
    func_?(&
                    TimeLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeLimitClient>_System__Object____
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pEVar2 = (pMVar1->fields).OnResetWorldDone;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pEVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).OnResetWorldDone = (EventHandler_1_EventArgs_ *)0x0;
      }
      else {
        pEVar2 = (EventHandler_1_EventArgs_ *)func_?();
        if (pEVar2 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
        (pMVar1->fields).OnResetWorldDone = pEVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar6 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar5->fields)._WinningConditionManager_k__BackingField;
        iVar4 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                        field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar4 + 0xba) & 1) == 0) {
          iVar4 = func_?(iVar4);
        }
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_?(iVar4);
        }
        iVar4 = *(int *)(pMVar6->field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar4 + 0xba) & 1) == 0) {
          iVar4 = func_?(iVar4);
        }
        if (this_00 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                    (this_00,(Object__Array *)**(undefined4 **)(iVar4 + 0x5c),
                     TimeLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeLimitClient>_System__Object____
                    );
          (this->fields).initializedInWorld = 1;
          MVLogicObject::MVLogicObject_SetupCulling
                    ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String MakeTimeIntoText(Int32) */

String * Assembly-CSharp.dll::MVRoundCube::MVRoundCube_MakeTimeIntoText
                   (MVRoundCube *this,int32_t time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  fVar2 = (float)(int)((float)time / _UNK_?) / _UNK_?;
  IVar3.m_value = (int)((float)time / _UNK_?) % 0x3c;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  cVar4 = cRam_?;
  dStack_5 = (double)fVar2;
  fVar6 = (float10)func_?(dStack_5);
  IStack_7.m_value = (int32_t)fVar6;
  if (0x3b < IStack_7.m_value) {
    fVar2 = (float)IStack_7.m_value / _UNK_?;
    if (cVar4 == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar8.m_value = IStack_7.m_value;
    func_?((double)fVar2);
    iVar9 = (int)((ulonglong)((longlong)IVar8.m_value * 0x77777777) >> 0x20) - IVar8.m_value;
    IStack_7.m_value = IVar8.m_value + ((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0x3c;
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,pSVar10,::StringLiteral__,(MethodInfo *)0x0);
  }
  pSVar10 = ::StringLiteral__;
  if (IVar3.m_value < 10) {
    pSVar10 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar11 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
  pSVar11 = mscorlib.dll::System::String::String_Concat_3(pSVar10,pSVar11,(MethodInfo *)0x0);
  pSVar10 = ::StringLiteral__;
  if (IStack_7.m_value < 10) {
    pSVar10 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar10,str1,(MethodInfo *)0x0);
  dStack_5 = (double)((ulonglong)(uint)IStack_7.m_value << 0x20);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar1,pSVar10,::StringLiteral__,pSVar11,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void OnResetWorldDone(Object, EventArgs) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_OnResetWorldDone
               (MVRoundCube *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar2 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                       );
    if (pOVar2 != (Object *)0x0) {
      return;
    }
    func_?();
    this_01 = (Exception *)func_?();
    func_?(this_01);
    message = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVRoundCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube__ctor
               (MVRoundCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvRoundCubePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xffffdfff;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRoundCube::MVRoundCube_get_DocumentationType
          (MVRoundCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_RoundCube;
}


/* Int32 get_DurationInMilliseconds() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                  (MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int *)func_?();
        return *piVar2 * 1000;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

