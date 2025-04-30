
/* Void Clear() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_Clear
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).roundTimer;
  x = *ppRVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppRVar1 == (RoundTimer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)*ppRVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    *ppRVar1 = (RoundTimer *)0x0;
    func_?();
  }
  return;
}


/* Void CreateRoundTimer(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_CreateRoundTimer
               (NoWinningCondition *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimerPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pRVar1 = (RoundTimer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pRVar1,pTVar2,0,
                        RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                       );
    ppRVar3 = &(this->fields).roundTimer;
    *ppRVar3 = pRVar1;
    func_?(ppRVar3,pRVar1);
    if (*ppRVar3 != (RoundTimer *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)*ppRVar3,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar2,(MethodInfo *)0x0);
        pRVar1 = *ppRVar3;
        if (pRVar1 != (RoundTimer *)0x0) {
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
            func_?(&TypeInfo__System__Collections__Generic__List<int>);
            cRam_? = '\x01';
          }
          ppWVar4 = &(pRVar1->fields).roundCube;
          *ppWVar4 = roundCube;
          func_?(ppWVar4,roundCube);
          this_00 = (List_1_System_Int32_ *)
                    func_?(TypeInfo__System__Collections__Generic__List<int>);
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          ppLVar5 = &(pRVar1->fields).timeNotifications;
          *ppLVar5 = this_00;
          func_?(ppLVar5,this_00);
          RoundTimer::RoundTimer_ResetTimeNotifications(pRVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_RoundEndReset
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).roundTimer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((this->fields).roundTimer == (RoundTimer *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c) == (List_1_System_Int32_ *)0x0) {
    return;
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Contains
                    (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c),10,
                     MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar1 == 0) {
    if (*(int *)(in_stack_3 + 0x1c) == 0) goto code_?;
    func_?();
  }
  if (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c) != (List_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c),0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar1 == 0) {
      if (*(int *)(in_stack_3 + 0x1c) == 0) goto code_?;
      func_?();
    }
    if (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c) != (List_1_System_Int32_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Contains
                        (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c),0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar1 == 0) {
        if (*(int *)(in_stack_3 + 0x1c) == 0) goto code_?;
        func_?();
      }
      if (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c) != (List_1_System_Int32_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__Contains
                          (*(List_1_System_Int32_ **)(in_stack_3 + 0x1c),300,
                           MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        if (bVar1 == 0) {
          if (*(int *)(in_stack_3 + 0x1c) == 0) goto code_?;
          func_?();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryInitializeRoundCube() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_TryInitializeRoundCube
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                       (this_00,
                        WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                       );
    if (pWVar1 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pRVar2 = (this->fields).roundTimerPrefab;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar2 = (RoundTimer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pRVar2,pTVar3,0,
                          RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                         );
      ppRVar4 = &(this->fields).roundTimer;
      *ppRVar4 = pRVar2;
      func_?();
      if ((*ppRVar4 != (RoundTimer *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)*ppRVar4,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar3,(MethodInfo *)0x0);
        pRVar2 = *ppRVar4;
        if (pRVar2 != (RoundTimer *)0x0) {
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
            func_?(&TypeInfo__System__Collections__Generic__List<int>);
            cRam_? = '\x01';
          }
          ppWVar5 = &(pRVar2->fields).roundCube;
          *ppWVar5 = (WorldObjectClientRef_1_MVRoundCube_ *)pWVar1;
          func_?(ppWVar5,pWVar1);
          this_01 = (List_1_System_Int32_ *)
                    func_?(TypeInfo__System__Collections__Generic__List<int>);
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          ppLVar6 = &(pRVar2->fields).timeNotifications;
          *ppLVar6 = this_01;
          func_?(ppLVar6,this_01);
          RoundTimer::RoundTimer_ResetTimeNotifications(pRVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

