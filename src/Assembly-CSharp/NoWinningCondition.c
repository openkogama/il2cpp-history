
/* Void Clear() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_Clear
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar1 = (this->fields).roundTimer;
    if (pRVar1 == (RoundTimer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pRVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).roundTimer = (RoundTimer *)0x0;
  }
  return;
}


/* Void CreateRoundTimer(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_CreateRoundTimer
               (NoWinningCondition *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).roundTimerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer_
                     );
  (this->fields).roundTimer = (RoundTimer *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,pTVar3,0,(MethodInfo *)0x0);
        this_00 = (this->fields).roundTimer;
        if (this_00 != (RoundTimer *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      (pTVar2,(MethodInfo *)0x0);
            if ((this->fields).roundTimer != (RoundTimer *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              (in_stack_4->fields).roundCube = in_stack_5;
              pLStack6 = TypeInfo__System__Collections__Generic__List<int>;
              this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
              List_1_UnityEngine_Vector4___ctor
                        (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
              (in_stack_4->fields).timeNotifications = (List_1_System_Int32_ *)this_01;
              RoundTimer::RoundTimer_ResetTimeNotifications(in_stack_4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_RoundEndReset
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).roundTimer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((this->fields).roundTimer == (RoundTimer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18) ==
      (List_1_UnityEngine_Color32_ *)0x0) {
    return;
  }
  item_02._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
  item_02.rgba = 10;
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__Contains
                    (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18),item_02,
                     (MethodInfo *)this);
  if (bVar1 == 0) {
    if (*(List_1_UIPushOption_ **)(in_stack_3 + 0x18) == (List_1_UIPushOption_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (*(List_1_UIPushOption_ **)(in_stack_3 + 0x18),
               UIPushOption__Enum_HideAllExceptStackBottom|UIPushOption__Enum_HideAll,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  if (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18) !=
      (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
    item.rgba = 0x1e;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains
                      (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18),item,
                       in_stack_4);
    if (bVar1 == 0) {
      in_stack_4 = *(MethodInfo **)(in_stack_3 + 0x18);
      if (in_stack_4 == (MethodInfo *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)in_stack_4,
                 UIPushOption__Enum_SuppressInput|UIPushOption__Enum_HideAllExceptStackBottom|
                 UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    if (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18) !=
        (List_1_UnityEngine_Color32_ *)0x0) {
      item_00._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
      item_00.rgba = 0x3c;
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains
                        (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18),item_00,
                         in_stack_4);
      if (bVar1 == 0) {
        in_stack_4 = *(MethodInfo **)(in_stack_3 + 0x18);
        if (in_stack_4 == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)in_stack_4,0x3c,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        item_01._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
        item_01.rgba = 300;
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains
                          (*(List_1_UnityEngine_Color32_ **)(in_stack_3 + 0x18),item_01,
                           in_stack_4);
        if (bVar1 == 0) {
          if (*(List_1_UIPushOption_ **)(in_stack_3 + 0x18) == (List_1_UIPushOption_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (*(List_1_UIPushOption_ **)(in_stack_3 + 0x18),300,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    roundCube = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
                          (this_00,
                           WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                          );
    if (roundCube == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields).roundTimerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer_
                       );
    (this->fields).roundTimer = (RoundTimer *)pXVar1;
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((pTVar3 != (Transform *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar3,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,pTVar3,0,(MethodInfo *)0x0);
        pRVar4 = (this->fields).roundTimer;
        if ((pRVar4 != (RoundTimer *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pRVar4,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar2,(MethodInfo *)0x0);
          pRVar4 = (this->fields).roundTimer;
          if (pRVar4 != (RoundTimer *)0x0) {
            RoundTimer::RoundTimer_Initialize(pRVar4,roundCube,(MethodInfo *)0x0);
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

