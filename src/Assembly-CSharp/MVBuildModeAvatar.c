
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_AddChild
               (MVBuildModeAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  if (child == (MVWorldObjectClient *)0x0) {
    this_00 = (MVBody *)0x0;
  }
  else {
    bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((child->klass->_1).naturalAligment < bVar1) ||
       ((MVBody__Class *)(child->klass->_1).typeHierarchy[bVar1 - 1] != TypeInfo__MVBody)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_00 = (MVBody *)0x0;
    if (bVar2) {
      this_00 = (MVBody *)child;
    }
  }
  (this->fields).body = this_00;
  if ((this_00 != (MVBody *)0x0) &&
     (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this_00,(MethodInfo *)0x0),
     pCVar3 != (CelestialParam *)0x0)) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)func_?(), pcVar4 == (code *)0x0)) {
      func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Destroy
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = *(Object_1 **)(in_stack_2 + 0x88);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pOVar1 = *(Object_1 **)(in_stack_2 + 0x88);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar1,(MethodInfo *)0x0);
  }
  if (*(char *)(in_stack_2 + 0xcc) != '\0') {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pRVar5 = (RuntimeVariableNetworkManager *)
               ShootableButton::ShootableButton_get_InputSignalReceiver
                         ((ShootableButton *)pMVar4,(MethodInfo *)0x0),
     pRVar5 != (RuntimeVariableNetworkManager *)0x0)) {
    bVar3 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                      (pRVar5,*(int32_t *)(in_stack_2 + 8),(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pRVar5 = (RuntimeVariableNetworkManager *)
                 ShootableButton::ShootableButton_get_InputSignalReceiver
                           ((ShootableButton *)pMVar4,(MethodInfo *)0x0),
       pRVar5 != (RuntimeVariableNetworkManager *)0x0)) {
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                (pRVar5,*(int32_t *)(in_stack_2 + 8),(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* LaserPointer InitLaser(Boolean) */

LaserPointer *
Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
          (MVBuildModeAvatar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = PickupItem::PickupItem_InstantiateAvatarItemType
                      (AvatarItemType__Enum_LaserPointer,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pLVar1 = (LaserPointer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this_00,
                        LaserPointer_MethodInfo__UnityEngine__GameObject__GetComponent<LaserPointer>__
                       );
    currentItem = (this->fields).CurrentItem;
    parent = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pLVar1 != (LaserPointer *)0x0) {
      LaserPointer::LaserPointer_Initialize
                (pLVar1,0,currentItem,(Transform *)parent,(MethodInfo *)0x0);
      LaserPointer::LaserPointer_OnEquip(pLVar1,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (LaserPointer *)(*pcVar2)();
  return pLVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Initialize
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_UpdateControllerLateUpdate
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  puVar2 = (undefined8 *)(*(code *)(this->klass->vtable).__unknown.method)();
  if (pAVar1 != (AvatarLimbManager *)0x0) {
    (*(code *)(pAVar1->klass->vtable).UpdateLimbRotations.method)
              (pAVar1,*puVar2,*(undefined4 *)(puVar2 + 1),
               (pAVar1->klass->vtable).__unknown.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVBuildModeAvatar(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar__ctor
               (MVBuildModeAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (LimbRotationRuntimeData *)func_?(TypeInfo__LimbRotationRuntimeData);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)pLVar1,(MethodInfo *)0x0);
  (this->fields).limbRotationRuntimeData = pLVar1;
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pOVar2 != (ObjectPrefab *)0x0) {
    pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       ((MVRuntimeDataVariables *)pOVar2,StringLiteral_currentItem,0.0,1,
                        (MethodInfo *)0x0);
    pLVar1 = (this->fields).limbRotationRuntimeData;
    (this->fields).CurrentItem = pMVar3;
    pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar2 != (ObjectPrefab *)0x0) {
      pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                         ((MVRuntimeDataVariables *)pOVar2,StringLiteral_headRotationYaw,0.8,0,
                          (MethodInfo *)0x0);
      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
        (pLVar1->fields).HeadRotationYaw = pMVar3;
        pLVar1 = (this->fields).limbRotationRuntimeData;
        pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                           ((PrefabPool *)this,(MethodInfo *)0x0);
        if (pOVar2 != (ObjectPrefab *)0x0) {
          pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                             ((MVRuntimeDataVariables *)pOVar2,StringLiteral_headRotationPitch,0.8,0
                              ,(MethodInfo *)0x0);
          if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
            (pLVar1->fields).HeadRotationPitch = pMVar3;
            pLVar1 = (this->fields).limbRotationRuntimeData;
            pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
            if (pOVar2 != (ObjectPrefab *)0x0) {
              pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                 ((MVRuntimeDataVariables *)pOVar2,StringLiteral_pointRotationYaw,
                                  0.8,0,(MethodInfo *)0x0);
              if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                (pLVar1->fields).PointRotationYaw = pMVar3;
                pLVar1 = (this->fields).limbRotationRuntimeData;
                pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                   ((PrefabPool *)this,(MethodInfo *)0x0);
                if (pOVar2 != (ObjectPrefab *)0x0) {
                  pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                     ((MVRuntimeDataVariables *)pOVar2,
                                      StringLiteral_pointRotationPitch,0.8,0,(MethodInfo *)0x0);
                  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                    (pLVar1->fields).PointRotationPitch = pMVar3;
                    pLVar1 = (this->fields).limbRotationRuntimeData;
                    pOVar2 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                       ((PrefabPool *)this,(MethodInfo *)0x0);
                    if (pOVar2 != (ObjectPrefab *)0x0) {
                      pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                         ((MVRuntimeDataVariables *)pOVar2,StringLiteral_emote,0.5,0
                                          ,(MethodInfo *)0x0);
                      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                        (pLVar1->fields).Emote = pMVar3;
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
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarLimbManager get_LimbManager() */

AvatarLimbManager *
Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_get_LimbManager
          (MVBuildModeAvatar *this,MethodInfo *method)

{
  return (this->fields).limbManager;
}

