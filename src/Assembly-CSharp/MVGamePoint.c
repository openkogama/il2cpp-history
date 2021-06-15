
/* Void Create() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Create(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVGamePointObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVGamePointObject *)0x0) {
    pMVar2 = (MVGamePointObject *)0x0;
  }
  else {
    bVar3 = (TypeInfo__MVGamePointObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar2 = (MVGamePointObject *)0x0;
    if (bVar4) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGamePointObject *)0x0) {
      func_?(pMVar1,TypeInfo__MVGamePointObject);
      goto code_?;
    }
  }
  (this->fields).gamePointObject = pMVar2;
  if (pMVar2 != (MVGamePointObject *)0x0) {
    pTVar5 = (pMVar2->fields).triggerBoxEvents;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
code_?:
      MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
      MVGamePoint_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
      newData = (Dictionary_2_System_Object_System_Object_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      MVGamePoint_UpdateCanRespawn(this,newData,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).gamePointObject;
    if (pMVar1 != (MVGamePointObject *)0x0) {
      pTVar5 = (pMVar1->fields).triggerBoxEvents;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar5 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Destroy(MVGamePoint *this,MethodInfo *method)

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
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) {
      func_?(0);
      pAVar2 = extraout_ECX;
      pAVar3 = extraout_EDX;
code_?:
      func_?(pAVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAVar2 = (Action_1_IWinningCondition_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar5 = (Action_1_IWinningCondition_ *)0x0;
    if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar5 = pAVar2;
      }
      pAVar3 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar5;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)0x0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData((int32_t)woid,0,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)in_stack_6,(MethodInfo *)0x0);
  this_00 = in_stack_6[1].fields._.outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((CullingSubscriberBase *)this_00,(MethodInfo *)0x0);
    in_stack_6[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy(in_stack_6,(MethodInfo *)0x0);
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Disable(MVGamePoint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).gamePointObject;
  (this->fields).state = 1;
  (this->fields).isVisible = 0;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (this_00 = (pMVar1->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
    (this->fields).canRespawn = 0;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Enter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Enter
               (MVGamePoint *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).state == 0) {
    pMVar1 = (this->fields).gamePointObject;
    (this->fields).state = 1;
    (this->fields).isVisible = 0;
    if ((pMVar1 != (MVGamePointObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).gamePointObject;
      if ((pMVar1 != (MVGamePointObject *)0x0) &&
         ((pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0 &&
          (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pGVar2,(MethodInfo *)0x0),
          this_00 != (GameObject *)0x0)))) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,(this->fields).canRespawn,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_HandleStandaloneDisabling
               (MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      pMVar2 = (this->fields).gamePointObject;
      (this->fields).state = 1;
      (this->fields).isVisible = 0;
      if ((pMVar2 == (MVGamePointObject *)0x0) ||
         (this_00 = (pMVar2->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      (this->fields).canRespawn = 0;
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Initialize(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gamePointObject;
  if (pMVar1 != (MVGamePointObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      a = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pDStack3 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDStack3 == (Delegate *)0x0) {
        pDRam000000b8 = (Delegate *)0x0;
        return;
      }
      pDVar4 = (Delegate *)0x0;
      if ((Action_1_IWinningCondition___Class *)pDStack3->klass ==
          TypeInfo__System__Action<IWinningCondition>) {
        pDVar4 = pDStack3;
      }
      pAStack5 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar4 != (Delegate *)0x0) {
        pDRam000000b8 = pDVar4;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pDStack3 = extraout_ECX;
  pAStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnDataUpdate
               (MVGamePoint *this,MethodInfo *method)

{
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  newData = (Dictionary_2_System_Object_System_Object_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  MVGamePoint_UpdateCanRespawn(this,newData,(MethodInfo *)0x0);
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnUpdate(MVGamePoint *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (((this->fields).canRespawn != 0) && ((this->fields).state == 1)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar1) {
      (*(code *)(this->klass->vtable).Reset.method)(this);
    }
  }
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_PartialUpdateWOData
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            ((MVWorldObjectClient *)this,woData,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (in_stack_1 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (in_stack_1,StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    *(bool *)(in_stack_3 + 0xf5) = bVar2;
    if (bVar2 == 0) {
      return;
    }
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)in_stack_1,
                        (Type *)StringLiteral_respawnTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 != (Pool *)0x0) {
      if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar5 = (undefined4 *)func_?();
        *(undefined4 *)(in_stack_3 + 0xf8) = *puVar5;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Reset(MVGamePoint *this,MethodInfo *method)

{
  MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      *(undefined4 *)(in_stack_2 + 0xf0) = 1;
      *(undefined1 *)(in_stack_2 + 0xf4) = 0;
      if ((*(int *)(in_stack_2 + 0x100) == 0) ||
         (this_00 = *(GreyOutObjectScript **)(*(int *)(in_stack_2 + 0x100) + 0x1c),
         this_00 == (GreyOutObjectScript *)0x0)) goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      *(undefined1 *)(in_stack_2 + 0xf5) = 0;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_SetVisible(MVGamePoint *this,MethodInfo *method)

{
  if ((this->fields).isVisible != 0) {
code_?:
    (this->fields).state = 0;
    return;
  }
  pMVar1 = (this->fields).gamePointObject;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).gamePointObject;
    if ((pMVar1 != (MVGamePointObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pGVar2,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        (this->fields).isVisible = 1;
        goto code_?;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCanRespawn(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_UpdateCanRespawn
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *newData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newData,StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).canRespawn = bVar1;
    if (bVar1 == 0) {
      return;
    }
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)newData,(Type *)StringLiteral_respawnTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        (this->fields).respawnTime = *piVar3;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVGamePoint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint__ctor
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isVisible = 1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pMVar1 = PrefabPool::PrefabPool_get_GamePointPrefab(this_00,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(ObjectPrefab *)pMVar1,worldObjects,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = (MVGamePointObject *)(this->fields)._._._.component;
    if (pMVar1 == (MVGamePointObject *)0x0) {
      pMVar2 = (MVGamePointObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__MVGamePointObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVGamePointObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar2 = (MVGamePointObject *)0x0;
      if (bVar4) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVGamePointObject *)0x0) goto code_?;
    }
    (this->fields).gamePointObject = pMVar2;
    if (pMVar2 != (MVGamePointObject *)0x0) {
      pTVar5 = (pMVar2->fields).triggerBoxEvents;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
code_?:
        MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
        MVGamePoint_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        MVGamePoint_UpdateCanRespawn(this,pDVar7,(MethodInfo *)0x0);
        iVar8 = (this->fields)._._._.interactionFlags;
        puVar9 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
        *puVar9 = *puVar9 | 1;
        *(int *)&(this->fields)._._._.interactionFlags = (int)iVar8;
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        MVGamePoint_UpdateCanRespawn(this,pDVar7,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).gamePointObject;
      if (pMVar1 != (MVGamePointObject *)0x0) {
        pTVar5 = (pMVar1->fields).triggerBoxEvents;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar5 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGamePoint::MVGamePoint_get_DocumentationType
          (MVGamePoint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GamePoint;
}

